from GridCal.Engine import ReactivePowerControlMode
from GridCal.Engine.IO.file_handler import FileOpen

#from GridCal.Engine.Devices import *
from GridCal.Engine.Core.multi_circuit import MultiCircuit

from GridCal.Engine.Simulations.PowerFlow.power_flow_worker import PowerFlowOptions, SolverType
from GridCal.Engine.Simulations.PowerFlow.time_series_driver import TimeSeries
from GridCal.Engine.Simulations.PowerFlow.power_flow_driver import PowerFlowDriver

import random
import os
from tqdm import tqdm

from .gridcal2rec import *

def ts_powerflow(_date, _window = "day", _model = "_old", _version = "1.5.0"):
    '''

    '''

    grid = None

    # Grid model in GridCal
    data_path = os.path.abspath(os.path.join(os.getcwd(), "IEEE14", _model, "IEEE14"))

    file_handler = FileOpen(os.path.abspath(os.path.join(data_path,
                                                         "PSSE_Files",
                                                         "IEEE14_Base_Case.raw")))

    # Creating grid object
    grid = file_handler.open()

    ################################################################
    #
    ################################################################

    # Generating base case power flow
    options = PowerFlowOptions(SolverType.NR,
                               verbose = True,
                               initialize_with_existing_solution = True,
                               multi_core = False,
                               tolerance = 1e-9,
                              max_iter = 99,
                              control_q = ReactivePowerControlMode.Direct)

    pf = PowerFlowDriver(grid, options)

    pf.run()

    gridcal2rec(grid = grid, pf = pf, model_name = 'IEEE14',
        data_path = data_path,
        pf_num = 0, export_pf_results = False,
        is_time_series = False, openipsl_version = '1.5.0')

    ################################################################
    #
    ################################################################

    # Running time-series

    # Getting names of grids and generators
    load_names = [load.name for load in grid.get_loads()]
    #print(f"load names: {load_names}")
    gen_names = [gen.name for gen in grid.get_generators()]
    #print(f"gen_names: {gen_names}")

    # Formatting profiles (this maintains the info of the base case)
    grid.format_profiles(range(len(_time_stamps)))

    seed_value = 0
    os.environ['PYTHONHASHSEED'] = str(seed_value)
    random.seed(seed_value)

    n_matches = min(len(load_names), len(nyiso_zones)) # change this line so that the user inputs the number of loads to vary

    # The `zip` is instantiated as a `list` since it vanishes after one iteration
    # Ref: https://stackoverflow.com/questions/28390354/python-zip-object-disappears-after-iterating-through
    match_load_area = list(zip(random.sample(load_names, n_matches), random.sample(nyiso_zones, n_matches)))

    p_initial = []
    q_initial = []
    for _load, _ in match_load_area:
        for load in grid.get_loads():
            if load.name == _load:
                p_initial.append(load.P)
                q_initial.append(load.Q)

    # Power flow options
    options = PowerFlowOptions(SolverType.NR,
                               verbose=True,
                               initialize_with_existing_solution = False,
                               multi_core = False,
                               tolerance = 1e-9,
                              max_iter = 99,
                              control_q = ReactivePowerControlMode.Direct)

    pf = PowerFlowDriver(grid, options)

    # Absolute path to the model
    #data_path = os.path.abspath(os.path.join(os.getcwd(), "IEEE14"))

    for _scenario in ['best', 'worst', 'load']:
        # Setting power flow profiles
        for n, (_load, _zone) in enumerate(match_load_area):
            for load in grid.get_loads():
                if load.name == _load:
                    load.P_prof = p_initial[n] * (load_profiles[_zone][_scenario]/np.max(load_profiles[_zone][_scenario]))
                    load.Q_prof = q_initial[n] * (load_profiles[_zone][_scenario]/np.max(load_profiles[_zone][_scenario]))

        # Running a power flow
        # The driver needs the power flow options and the grid object as arguments
        for n_ts, ts in tqdm(enumerate(grid.time_profile)):

            for load in grid.get_loads():
                load.P = load.P_prof[n_ts]
                load.Q = load.Q_prof[n_ts]

            for gen in grid.get_generators():
                gen.P = gen.P_prof[n_ts]
                gen.V = gen.Vset_prof[n_ts]

            pf.run()

            gridcal2rec(grid = grid, pf = pf, model_name = 'IEEE14',
                data_path = data_path,
                pf_num = n_ts + 1, export_pf_results = False,
                is_time_series = True, ts_name = _scenario)
