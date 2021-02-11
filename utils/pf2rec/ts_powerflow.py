from GridCal.Engine import ReactivePowerControlMode
from GridCal.Engine.IO.file_handler import FileOpen

from GridCal.Engine.Core.multi_circuit import MultiCircuit

from GridCal.Engine.Simulations.PowerFlow.power_flow_worker import PowerFlowOptions, SolverType
from GridCal.Engine.Simulations.PowerFlow.time_series_driver import TimeSeries
from GridCal.Engine.Simulations.PowerFlow.power_flow_driver import PowerFlowDriver

import random
import os
from tqdm import tqdm

import shutil

from .gridcal2rec import *
from .create_pf_records import *

NYISO_ZONES = ['CAPITL', 'CENTRL', 'DUNWOD', 'GENESE', 'HUD VL', 'LONGIL', 'MHK VL', 'MILLWD', 'N.Y.C.', 'NORTH', 'WEST']

def ts_powerflow(args_ts, _date, _load_profiles, _time_stamps):
    '''
    ts_powerflow

    DESCRIPTION:
    this function performs a time series power flow of a model using a provided load profiles and time stamps.
    It does the power flow computation using GridCal and exports the results to a Modelica records file using
    gridcal2rec

    INPUTS:
    - args_ts: dictionary with input arguments:
        - '_loads': number of loads to vary in the time series power flow
        - '_window': window to perform the computation ('day', 'week' or 'month')
        - '_model': model to be used ('old' for OpenIPSL 1.5.0 and 'new' for OpenIPSL > 2.0.0 beta)
        - '_version': OpenIPSL version used in the target model
        - '_verbose': verbosity of the power flow solver
        - '_delete': delete previous power flow results
        - '_seed': seed for load randomization

    OUTPUTS:
    Generates power flow data in the 'PF_Data' subfolder of the Modelica file

    LAST MODIFICATION DATE:

    '''

    # Unpack arguments passed in the dictionary
    # Pack arguments in a dictionary
    _loads = args_ts['_loads']
    _window = args_ts['_window']
    _model = args_ts['_model']
    _version = args_ts['_version']
    _verbose = args_ts['_verbose']
    _delete = args_ts['_delete']
    _seed = args_ts['_seed']

    ################################################################
    # OPENING GRID MODEL
    ################################################################

    grid = None

    # Grid model in GridCal
    data_path = os.path.abspath(os.path.join(os.getcwd(), "models", _model, "IEEE14"))

    path_mo_file = os.path.join(data_path, "IEEE14_Base_Case.mo")

    # Deleting previous power flow results
    if _delete:
        pf_data_path = os.path.join(data_path, "PF_Data")
        if os.path.exists(pf_data_path):
            shutil.rmtree(pf_data_path)
            print("Previous power flow results deleted\n")

    # Creating records structure
    create_pf_records("IEEE14",
                      path_mo_file,
                      data_path,
                     openipsl_version = _version)

    file_handler = FileOpen(os.path.abspath(os.path.join(data_path,
                                                         "PSSE_Files",
                                                         "IEEE14_Base_Case.raw")))

    # Creating grid object
    grid = file_handler.open()

    ################################################################
    # RUNNING BASE CASE POWER FLOW
    ################################################################

    # Generating base case power flow
    options = PowerFlowOptions(SolverType.NR,
                               verbose = _verbose,
                               initialize_with_existing_solution = True,
                               multi_core = True,
                               tolerance = 1e-9,
                              max_iter = 99,
                              control_q = ReactivePowerControlMode.Direct)

    pf = PowerFlowDriver(grid, options)

    pf.run()

    gridcal2rec(grid = grid, pf = pf, model_name = 'IEEE14',
        data_path = data_path,
        pf_num = 0, export_pf_results = False,
        is_time_series = False, openipsl_version = _version)

    # ################################################################
    # RUNNING TIME SERIES POWER FLOW
    # ################################################################

    # Running time-series

    # Getting names of grids and generators
    load_names = [load.name for load in grid.get_loads()]
    #print(f"load names: {load_names}")
    gen_names = [gen.name for gen in grid.get_generators()]
    #print(f"gen_names: {gen_names}")

    # Formatting profiles (this maintains the info of the base case)
    grid.format_profiles(range(len(_time_stamps)))

    # Setting seed
    seed_value = _seed
    os.environ['PYTHONHASHSEED'] = str(seed_value)
    random.seed(seed_value)

    # Load randomization
    n_matches = min(_loads, len(NYISO_ZONES))

    # The `zip` is instantiated as a `list` since it vanishes after one iteration
    # Ref: https://stackoverflow.com/questions/28390354/python-zip-object-disappears-after-iterating-through
    match_load_area = list(zip(random.sample(load_names, n_matches), random.sample(NYISO_ZONES, n_matches)))

    # Getting initial load data (`P` and `Q`) for each load
    p_initial = []
    q_initial = []

    print("Varying load with area:")
    for _load, _area in match_load_area:
        print(f"{_load + ' ':-<20}> {_area:<20}")
        for load in grid.get_loads():
            if load.name == _load:
                p_initial.append(load.P)
                q_initial.append(load.Q)

    print("\nRunning time-series power flows:")
    for _scenario in tqdm(['best', 'worst', 'load']):

        # Setting power flow profiles
        for n, (_load, _zone) in enumerate(match_load_area):
            for load in grid.get_loads():
                if load.name == _load:
                    load.P_prof = p_initial[n] * (_load_profiles[_zone][_scenario]/np.max(_load_profiles[_zone][_scenario]))
                    load.Q_prof = q_initial[n] * (_load_profiles[_zone][_scenario]/np.max(_load_profiles[_zone][_scenario]))

        # Running power flows
        for n_ts, _ in enumerate(grid.time_profile):

            # Changing load set points
            for load in grid.get_loads():
                load.P = load.P_prof[n_ts]
                load.Q = load.Q_prof[n_ts]

            # Changing generator set points
            for gen in grid.get_generators():
                gen.P = gen.P_prof[n_ts]
                gen.V = gen.Vset_prof[n_ts]

            pf.run()

            gridcal2rec(grid = grid, pf = pf, model_name = 'IEEE14',
                data_path = data_path,
                pf_num = n_ts + 1, export_pf_results = False,
                is_time_series = True, ts_name = _scenario,
                openipsl_version = _version)
