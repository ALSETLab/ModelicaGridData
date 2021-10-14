import os

import sdf
import numpy as np
import pandas as pd
import re
import h5py

from .generate_component_list import *

# List of machines in OpenIPSL 1.5.0
LIST_OF_MACHINES_150 = {'GENSAL' : [('Epq', 'q-axis voltage behind transient reactance (pu)'),
                    ('PSIkd',   'd-axis rotor flux linkage (pu)'),
                    ('PSIppd',  'd-axis subtransient flux linkage (pu)'),
                    ('PSIppq',  'q-axis subtransient flux linkage (pu)'),
                    ('PSId',    'd-axis flux linkage (pu)'),
                    ('PSIq',    'q-axis flux linkage (pu)'),
                    ('XadIfd',  'machine field current (pu)')],
    'GENROU' : [('Epd' , 'd-axis voltage behind transient reactance (pu)'),
                    ('Epq',     'q-axis voltage behind transient reactance (pu)'),
                    ('PSIkd',   'd-axis rotor flux linkage (pu)'),
                    ('PSIkq',   'q-axis rotor flux linkage (pu)'),
                    ('PSId',    'd-axis flux linkage (pu)'),
                    ('PSIq',    'q-axis flux linkage (pu)'),
                    ('PSIppd',  'd-axis subtransient flux linkage (pu)'),
                    ('PSIppq',  'q-axis subtransient flux linkage (pu)'),
                    ('XadIfd',  'd-axis machine field current (pu)'),
                    ('XadIfq',  'q-axis machine field current (pu)')],
    'GENROE' : [('Epd', 'd-axis voltage behind transient reactance (pu)'),
                    ('Epq',     'q-axis voltage behind transient reactance (pu)'),
                    ('PSIkd',   'd-axis rotor flux linkage (pu)'),
                    ('PSIkq',   'q-axis rotor flux linkage (pu)'),
                    ('PSId',    'd-axis flux linkage (pu)'),
                    ('PSIq',    'q-axis flux linkage (pu)'),
                    ('PSIppd',  'd-axis subtransient flux linkage (pu)'),
                    ('PSIppq',  'q-axis subtransient flux linkage (pu)'),
                    ('XadIfd',  'd-axis machine field current (pu)'),
                    ('XadIfq',  'q-axis machine field current (pu)')],
    'GENSAE' : [('Epq', 'q-axis voltage behind transient reactance (pu)'),
                    ('PSIkd',   'd-axis rotor flux linkage (pu)'),
                    ('PSId',   'd-axis flux linkage (pu)'),
                    ('PSIq',   'q-axis flux linkage (pu)'),
                    ('PSIppd', 'd-axis subtransient flux linkage (pu)'),
                    ('PSIppq', 'q-axis subtransient flux linkage (pu)'),
                    ('XadIfd', 'd-axis machine field current (pu)')],
    'GENCLS' : [('delta', 'rotor angle (ang)'),
                    ('omega', 'rotor speed (pu)]'),
                    ('V' , 'bus voltage magnitude (pu)'),
                    ('anglev', 'bus voltage angle (rad)')]}
# List of machines in OpenIPSL 2.0.0
LIST_OF_MACHINES_200 = {'GENCLS': [('delta', "Rotor angle"),
                ('omega',   "Rotor speed"),
                ('V',       "Bus voltage magnitude"),
                ('anglev',  "Bus voltage angle"),
                ('eq',      "Constant emf behind transient reactance"),
                ('vd',      "d-axis voltage"),
                ('vq',      "q-axis voltage"),
                ('id',      "d-axis current"),
                ('iq',      "q-axis current"),
                ('P',       "Active power (system base)"),
                ('Q',       "Reactive power (system base)")],
    'GENROE' : [('Epd', "d-axis voltage behind transient reactance"),
                ('Epq',     "q-axis voltage behind transient reactance"),
                ('PSIkd',   "d-axis rotor flux linkage"),
                ('PSIkq',   "q-axis rotor flux linkage"),
                ('PSId',    "d-axis flux linkage"),
                ('PSIq',    "q-axis flux linkage"),
                ('PSIppd',  "d-axis subtransient flux linkage"),
                ('PSIppq',  "q-axis subtransient flux linkage"),
                ('PSIpp',   "Air-gap flux"),
                ('XadIfd',  "d-axis machine field current"),
                ('XaqIlq',  "q-axis Machine field current")],
    'GENROU' : [('Epd', "d-axis voltage behind transient reactance"),
                ('Epq',     "q-axis voltage behind transient reactance"),
                ('PSIkd',   "d-axis rotor flux linkage"),
                ('PSIkq',   "q-axis rotor flux linkage"),
                ('PSId',    "d-axis flux linkage"),
                ('PSIq',    "q-axis flux linkage"),
                ('PSIppd',  "d-axis subtransient flux linkage"),
                ('PSIppq',  "q-axis subtransient flux linkage"),
                ('PSIpp',   "Air-gap flux"),
                ('XadIfd',  "d-axis machine field current"),
                ('XaqIlq',  "q-axis Machine field current")],
    'GENSAE' : [('Epq',     "q-axis voltage behind transient reactance"),
                ('PSIkd',   "d-axis rotor flux linkage"),
                ('PSIppq',  "q-axis subtransient flux linkage"),
                ('PSIppd',  "d-axis subtransient flux linkage"),
                ('PSId',    "d-axis flux linkage"),
                ('PSIq',    "q-axis flux linkage"),
                ('XadIfd',  "Machine field current"),
                ('PSIpp',   "Air-gap flux")],
    'GENSAL' : [('Epq',     "q-axis voltage behind transient reactance"),
                ('PSIkd',   "d-axis rotor flux linkage"),
                ('PSIppq',  "q-axis subtransient flux linkage"),
                ('PSIppd',  "d-axis subtransient flux linkage"),
                ('PSId',    "d-axis flux linkage"),
                ('PSIq',    "q-axis flux linkage"),
                ('XadIfd',  "Machine field current")]}

def extract_data(tool, model, version, path, working_directory):
    '''
    EXTRACT_DATA

    INPUTS:
    - `tool`: tool that was used for data generation (i.e., either `dymola` or `om`)
    - `model`: model for which the simulation data will be extracted
    and processed. Default: `IEEE14`.
    - `path`: path where the output `*.hdf5` files will be saved
    - `openipsl_version`: version of the OpenIPSL library used to run the dynamic simulations
    -  `working_directory`: directory where the simulation outputs (i.e.,
    `*.mat` files`) are located for the given model

    OUTPUTS:
    Writes `*.hdf5` files with the specified variables by the user in
    `./data/<path>`

    LAST MODIFICATION DATE:
    10/01/2021 BY SADR
    '''

    # Model name in simulations
    _model = model
    _model_name = f"{model}_Base_Case"

    # Employed tool in simulations
    _tool = tool
    _version = version

    # Get component list for the model
    if _version == "1.5.0":
        _lib_dir = '_old'
    elif _version == "2.0.0":
        _lib_dir = '_new'

    # Path to the `*.mo` file of the model
    _model_mo_dir = os.path.join(os.getcwd(), 'models', _lib_dir,
        _model, f"{_model}_Base_Case.mo")

    # Getting list of components from the model
    model_components = generate_component_list(_model_mo_dir)

    # Extracting lines, generators and buses
    _lines = model_components['lines']
    _generators = model_components['generators']
    _buses = model_components['buses']

    # Sorting elements in the lists
    _lines.sort()
    _generators.sort()
    _buses.sort()

    # Asking the user what data to extract from the simulations
    choice = input(f"\nPlease enter a component type: \n {'1. Bus':>5}\n {'2. Line':>5}\n {'3. Generator':>5}\n\nComponent type: ")
    choice = int(choice)

    if choice == 1:
        # Extracting bus signals
        extract = 'buses'

        # Getting format from the user
        print("\nExtracting bus signals\n")
        value1 = input(f"Indicate if you want to extract the bus voltage signals as:\n{'1. Real and imaginary parts':>10}\n{'2. Polar (magnitude and angle)':>10}\n\nFormat: ")
        value1 = int(value1) # parsing to integer

        # Validating user input
        if value1 == 1:
            print("Extracting bus voltage as real and imaginary parts")
            res_format = 'rectangular' # real and imaginary parts
        elif value1 == 2:
            print("Extracting bus voltage signal as magnitude and phase")
            res_format = 'polar' # magnitude and phase
        else:
            print("Invalid choice. Terminating routine")
            return

    elif choice == 2:
        extract = 'lines'

        # Getting format from the user
        print(f'\nExtracting line signals\n')
        value1 = input(f"Indicate if you want to extract:\n{'1. Power signals (P, Q)':>10}\n{'2. Current signals':>10}\n\nSignal: ")
        value1 = int(value1) # parsing to integer

        # Validating user input
        if value1 == 1:
            print("Extracting power signals across lines")
            extract_signal = 'power'
            res_format = 'rectangular' # P and Q
        elif value1 == 2:
            print("Extracting current signals across lines")
            extract_signal = 'current'
            res_format = 'rectangular' # real and imaginary parts
        else:
            print("Invalid choice. Terminating routine")
            return
    elif choice == 3:
        extract = 'generators'
        # Extracting generator signals
        print(f'\nExtracting generator signals')

        print("\n\nList of available machines: ")
        for n, gen in enumerate(_generators):
            print(f"{n+1}. {gen}")
        choice = input('Select one generator from the list of available machines: ')
        choice = int(choice) - 1

        if choice > len(_generators):
            raise ValueError("Wrong Choice, terminating the program.")
        else:
            n_gen = choice
            # boolean to indicate if generator signal has already been selected
            gen_selection = False

    else:
        raise ValueError("Wrong Choice, terminating the program.")

    ##########################################################
    # Extracting the data for each scenario
    ##########################################################

    # Counter for the number of scenarios
    _n_sc_counter = 0
    # Counter for the number of signals
    _n_signals = 0

    # Creating empty `*.hdf5` file

    # Getting the list of files in the working directory
    # (same code as above; repeated to get the number of scenarios alone)
    with os.scandir(working_directory) as proc_folder_list:
        # Going through every folder created by a process
        # during time-domain simulation
        for folder in proc_folder_list:
            # Current working directory
            _res_directory = os.path.join(working_directory, folder.name)

            # Getting list of files in result folder
            with os.scandir(_res_directory) as entry_res:
                # List of files
                _list_files = [x.name for x in entry_res]

            # Iterating through the resulting files
            for file in _list_files:
                # File is a dynamic simulation result
                if file.endswith('.mat') and 'dsres' in file:

                    # Getting scenario number
                    _n_scenario_regex = re.compile(rf'{_model}_dsres_(\d+).(?:\w+)')
                    _n_scenario = int(_n_scenario_regex.findall(file)[0])

                    _n_sc_counter += 1

                    # Getting the file path (current directory is `_res_directory`)
                    _file_path = os.path.join(_res_directory, file)

                    # Opening `*.mat` file
                    resData = sdf.load(_file_path)

                    # Getting time vector
                    time = np.array(resData['Time'].data)

                    # ===============================================
                    # Extracting file depending on user selection
                    # ===============================================

                    # Extracting data from buses
                    if extract == 'buses':
                        if res_format == 'rectangular':
                            # Look for p and then vi vr
                            df_real = pd.DataFrame()
                            df_imag = pd.DataFrame()

                            # Assigning time
                            df_real['t'] = time
                            df_imag['t'] = time

                            for bus in _buses:
                                v_real = resData[bus]["p"]["vr"]
                                v_imag = resData[bus]["p"]["vi"]

                                # Converting to numpy array
                                v_real = np.array(v_real.data)
                                v_imag = np.array(v_imag.data)

                                # Assigning to DataFrame
                                df_real[bus] = v_real
                                df_imag[bus] = v_imag

                        elif res_format == 'polar':

                            # Creating dataframes for magnitude and angle
                            df_mag = pd.DataFrame()
                            df_angle = pd.DataFrame()

                            # Assigning time
                            df_mag['t'] = time
                            df_angle['t'] = time

                            for bus in _buses:
                                # Getting voltage magnitude
                                # (attribute depends on the OpenIPSL version)
                                if _version == '1.5.0':
                                    v_mag = resData[bus]["V"]
                                elif _version == '2.0.0':
                                    v_mag = resData[bus]["v"]
                                # Getting voltage angle
                                v_angle = resData[bus]["angle"]

                                # Converting to numpy array
                                v_mag = np.array(v_mag.data)
                                v_angle = np.array(v_angle.data)

                                # Assigning to DataFrame
                                df_mag[bus] = v_mag
                                df_angle[bus] = v_angle

                            # Saving `.csv` file with scenario data
                            df_mag.to_csv()
                            df_angle.to_csv()

                    elif extract == 'lines':
                        if extract_signal == 'power':
                            pass
                        elif extract_signal == 'current':
                            if res_format == 'rectangular':
                                pass
                            elif res_format == 'polar':
                                pass
                    elif extract == 'generators':

                        # Generator to extract data from has been previously selected
                        n_gen = 0 # for developing only
                        # Machine name
                        _gen_name = _generators[n_gen]

                        # Selecting the signal that will be plotted
                        # The signal to extract is indicated in the variable `_signal_to_extract`
                        if not gen_selection:

                            # First we prompt the user if they want to get the data from a given signal
                            # or from a component

                            # Available signals in the selected machine
                            available_signals = [d.name for d in resData[_gen_name].__dict__['datasets']]

                            # Available groups in the selected machine (i.e., components of the control systems)
                            available_groups = [d.name for d in resData[_gen_name].__dict__['groups']]

                            # Prompting the user to select signal or see the list of components
                            print(f"\nThe following is the list of available signals in generator {_gen_name}")

                            for n, av_sig in enumerate(available_signals):
                                print(f"{n+1}. {av_sig}")

                            print(f"{len(available_signals) + 1}. See more components within the machine")

                            choice = input(f'Select a signal (or type {len(available_signals) + 1}) if you want to see more components within the machine\n')
                            choice = int(choice) - 1

                            if choice > len(available_signals):
                                raise ValueError("Invalid selection. Terminating program.")
                            else:
                                if choice < len(available_signals):
                                    _signal_to_extract = available_signals[choice]

                                    print(f"\n\nExtracting signal {_signal_to_extract} in generator {_gen_name}\n\n")

                                    gen_selection = True
                                    gen_depth_signal = 1

                                else:
                                    print(f"\nThe following is the list of available components in generator {_gen_name}:")

                                    for n, grp in enumerate(available_groups):
                                        print(f"{n + 1}. {grp}")

                                    choice = input(f'Select a component to see the corresponding list of available signals\n')
                                    choice = int(choice) - 1

                                    if choice > len(available_groups):
                                        raise ValueError("Invalid selection. Terminating program.")
                                    else:
                                        _component = available_groups[choice]
                                        print("Component: '", _component,"'")
                                        gen_selection = True;

                                        # Getting available signals and groups
                                        _comp_available_signals = [s.name for s in resData[_gen_name][_component].__dict__['datasets']]
                                        _comp_available_groups = [g.name for g in resData[_gen_name][_component].__dict__['groups']]

                                        print(LIST_OF_MACHINES_150.keys())
                                        print(_component)
                                        if _version == '1.5.0':
                                            _comp_name = _component.lower()
                                            if _comp_name.strip() in LIST_OF_MACHINES_150.keys():
                                                # remove all parameters from the display list
                                                print(LIST_OF_MACHINES_150.keys())
                                        elif _version == '2.0.0':
                                            _comp_name = _component.lower()
                                            if _comp_name.strip() in LIST_OF_MACHINES_200.keys():
                                                print(LIST_OF_MACHINES_200.keys())

                                        print(f"\nThe following is the list of available signals in component {_component} in generator {_gen_name}:")

                                        for n, sig in enumerate(_comp_available_signals):
                                            print(f"{n + 1}. {sig}")

                                        choice = input(f'Select a signal to extract\n')
                                        choice = int(choice) - 1

                                        gen_depth_signal = 2

                            # print(resData[_generators[0]].__dict__.keys())

                        if gen_depth_signal == 1:
                            # Extracting a signal in the generator main attributes


                            # Extracting signal
                            signal = resData[_gen_name][_signal_to_extract].data
                            signal = np.array(signal) # converting to numpy array

                            # Extracting time
                            # t =

                            # Saving to `*.hdf5` file
                            print(signal)

                        elif gen_depth_signal == 2:
                            # Extracting a signal
                            pass



                        # print(resData[_generators[0]].__dict__['name'])
                        # print(resData[_generators[0]].__dict__['datasets'])
                        # print(resData[_generators[0]].__dict__['groups'])


    ##########################################################
    # Concatenating all results in an `*.hdf5` file
    ##########################################################
