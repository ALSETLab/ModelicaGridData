import os

import sdf
import numpy as np
import pandas as pd
import re
import h5py
import datetime
import shutil
import platform
from uuid import uuid4

import itertools

from .generate_component_list import *

def get_dataset_keys(f):
    keys = []
    f.visit(lambda key : keys.append(key) if isinstance(f[key], h5py.Dataset) else None)
    return keys

def extract_data(tool, model, version, path, working_directory, mu, sigma):
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
    - `mu`: mean for additive measurement noise (default is 0.0)
    - `sigma`: standard deviation for additive measurement noise (default is 0.01)

    OUTPUTS:
    Writes `*.hdf5` files with the specified variables by the user in
    `./data/<path>`

    LAST MODIFICATION DATE:
    10/15/2021 BY SADR
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
            print("\nExtracting bus voltage as real and imaginary parts\n")
            res_format = 'rectangular' # real and imaginary parts
        elif value1 == 2:
            print("\nExtracting bus voltage signal as magnitude and phase\n")
            res_format = 'polar' # magnitude and phase
        else:
            raise ValueError("Wrong Choice, terminating the program.")

    elif choice == 2:
        extract = 'lines'

        # Getting format from the user
        print(f'\nExtracting line signals\n')
        value1 = input(f"Indicate if you want to extract:\n{'1. Power signals (P, Q)':>10}\n{'2. Current signals':>10}\n\nSignal: ")
        value1 = int(value1) # parsing to integer

        # Validating user input
        if value1 == 1:
            print("\nExtracting power signals across lines\n")
            extract_signal = 'power'
            res_format = 'rectangular' # P and Q
        elif value1 == 2:
            print("\nExtracting current signals across lines\n")
            extract_signal = 'current'
            res_format = 'rectangular' # real and imaginary parts
        else:
            raise ValueError("Wrong Choice, terminating the program.")
    elif choice == 3:
        extract = 'generators'
        # Extracting generator signals
        print(f'\nExtracting generator signals')

        print("\n\nList of available machines: ")
        for n, gen in enumerate(_generators):
            print(f"{n+1}. {gen}")
        choice = input(' Select one generator from the list of available machines: ')
        choice = int(choice) - 1

        if choice > len(_generators):
            raise ValueError("Wrong Choice, terminating the program.")
        else:
            n_gen = choice
            # Boolean to indicate if generator signal needs to be selected
            gen_selection = True

    else:
        raise ValueError("Wrong Choice, terminating the program.")

    ##########################################################
    # Extracting the data for each scenario
    ##########################################################

    # Counter for the number of scenarios
    _n_sc_counter = 0

    # Creating empty `*.sdf` file

    # Creating unique ID for the experiment result data file
    _uuid = str(uuid4())
    _exp_id = datetime.datetime.now().strftime('%Y%m%d%H%M%S_') + _uuid[:6]

    # Name of the output file
    _output_file = os.path.join(path, f'{_model}_{extract}_{_exp_id}.hdf5')
    # Destination directory
    _dst = os.path.join(path, _output_file)
    # Creating output file
    data_output = h5py.File(_dst, "w")

    # Getting the list of files in the working directory
    # (same code as above; repeated to get the number of scenarios alone)
    with os.scandir(working_directory) as proc_folder_list:
        # Going through every folder created by a process
        # during time-domain simulation

        # Containers for labels computed with symbolic linearization
        _labels_init = []
        _labels_final = []

        for folder in proc_folder_list:
            # Current working directory
            _res_directory = os.path.join(working_directory, folder.name)

            # Getting labels for initial and final condition
            _labels_init_sc = pd.read_csv(os.path.join(_res_directory, f"{_model}_labels_init.csv"))
            _labels_final_sc = pd.read_csv(os.path.join(_res_directory, f"{_model}_labels_final.csv"))

            # Appending to list
            _labels_init.append(list(_labels_init_sc["Label"].values))
            _labels_final.append(list(_labels_final_sc["Label"].values))

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

                    # Creating group for the scenario
                    data_output.create_group(f"{_n_sc_counter}")

                    # Getting eigenvalues for scenario
                    if os.path.exists(os.path.join(_res_directory, f"{_model}_eigs_init_{_n_scenario}.npy")):
                        _eigs_init_sc = np.load(os.path.join(_res_directory, f"{_model}_eigs_init_{_n_scenario}.npy"))
                    else:
                        _eigs_init_sc = []

                    # Getting eigenvalues for scenario
                    if os.path.exists(os.path.join(_res_directory, f"{_model}_eigs_final_{_n_scenario}.npy")):
                        _eigs_final_sc = np.load(os.path.join(_res_directory, f"{_model}_eigs_final_{_n_scenario}.npy"))
                    else:
                        _eigs_final_sc = []

                    # Writing eigenvalues for scenario
                    data_output[f"{_n_sc_counter}/eigs/initial"] = _eigs_init_sc
                    data_output[f"{_n_sc_counter}/eigs/final"] = _eigs_final_sc

                    # Getting the file path (current directory is `_res_directory`)
                    _file_path = os.path.join(_res_directory, file)

                    # Opening `*.mat` file
                    resData = sdf.load(_file_path)

                    # Getting time vector
                    if tool == "dymola":
                        time = np.array(resData['Time'].data)
                    elif tool == "om":
                        time = np.array(resData["time"].data)

                    # Writing time in the output file
                    data_output[f'/{_n_sc_counter}/time'] = time

                    # ===============================================
                    # Extracting file depending on user selection
                    # ===============================================

                    # Extracting data from buses
                    if extract == 'buses':
                        if res_format == 'rectangular':
                            for bus in _buses:
                                v_real = resData[bus]['p']['vr']
                                v_imag = resData[bus]['p']['vi']

                                # Converting to numpy arrays
                                v_real = np.array(v_real.data)
                                v_imag = np.array(v_imag.data)

                                # Adding noise
                                v_real += np.random.normal(mu, sigma, v_real.shape)
                                v_imag += np.random.normal(mu, sigma, v_real.shape)

                                # Saving data
                                data_output[f'/{_n_sc_counter}/vr_{bus}'] = v_real
                                data_output[f'/{_n_sc_counter}/vi_{bus}'] = v_imag

                        elif res_format == 'polar':
                            for bus in _buses:
                                # Getting voltage magnitude
                                # (attribute depends on the OpenIPSL version)
                                if _version == '1.5.0':
                                    v_mag = resData[bus]["V"]
                                elif _version == '2.0.0':
                                    v_mag = resData[bus]["v"]
                                # Getting voltage angle
                                v_angle = resData[bus]["angle"]

                                # Converting to numpy arrays
                                v_mag = np.array(v_mag.data)
                                v_angle = np.array(v_angle.data)

                                # Adding noise
                                v_mag += np.random.normal(mu, sigma, v_mag.shape)
                                v_angle += np.random.normal(mu, sigma, v_angle.shape)

                                # Saving data
                                data_output[f'/{_n_sc_counter}/v_mag_{bus}'] = v_mag
                                data_output[f'/{_n_sc_counter}/v_angle_{bus}'] = v_angle

                    elif extract == 'lines':
                        if extract_signal == 'power':
                            for line in _lines:

                                # Getting power from sending to receiving end (12)
                                P12 = resData[line]["P12"]
                                Q12 = resData[line]["Q12"]

                                # Getting power from receiving to sending end (21)
                                P21 = resData[line]["P21"]
                                Q21 = resData[line]["Q21"]

                                # Converting to numpy arrays
                                P12 = np.array(P12.data)
                                P21 = np.array(P21.data)
                                Q12 = np.array(Q12.data)
                                Q21 = np.array(Q21.data)

                                # Adding noise
                                P12 += np.random.normal(mu, sigma, P12.shape)
                                P21 += np.random.normal(mu, sigma, P21.shape)
                                Q12 += np.random.normal(mu, sigma, Q12.shape)
                                Q21 += np.random.normal(mu, sigma, Q21.shape)

                                # Saving data
                                data_output[f'/{_n_sc_counter}/P12_{line}'] = P12
                                data_output[f'/{_n_sc_counter}/P21_{line}'] = P21
                                data_output[f'/{_n_sc_counter}/Q12_{line}'] = Q12
                                data_output[f'/{_n_sc_counter}/Q21_{line}'] = Q21

                        elif extract_signal == 'current':
                            if res_format == 'rectangular':
                                for line in _lines:
                                    # Getting data
                                    i_re_sending = resData[line]["p"]["ir"]
                                    i_im_sending = resData[line]["p"]["ii"]
                                    i_re_receiving = resData[line]["n"]["ir"]
                                    i_im_receiving = resData[line]["n"]["ii"]

                                    # Converting to numpy arrays
                                    i_re_sending = np.array(i_re_sending.data)
                                    i_im_sending = np.array(i_im_sending.data)
                                    i_re_receiving = np.array(i_re_receiving.data)
                                    i_im_receiving = np.array(i_im_receiving.data)

                                    # Adding noise
                                    i_re_sending += np.random.normal(mu, sigma, i_re_sending.shape)
                                    i_im_sending += np.random.normal(mu, sigma, i_im_sending.shape)
                                    i_re_receiving += np.random.normal(mu, sigma, i_re_receiving.shape)
                                    i_im_receiving += np.random.normal(mu, sigma, i_im_receiving.shape)

                                    # Saving data
                                    data_output[f'/{_n_sc_counter}/i_send_re_{line}'] = i_re_sending
                                    data_output[f'/{_n_sc_counter}/i_send_im_{line}'] = i_im_sending
                                    data_output[f'/{_n_sc_counter}/i_receiv_re_{line}'] = i_re_receiving
                                    data_output[f'/{_n_sc_counter}/i_receiv_im_{line}'] = i_im_receiving

                            elif res_format == 'polar':
                                for line in _lines:
                                    # Getting data
                                    i_re_sending = resData[line]["p"]["ir"]
                                    i_im_sending = resData[line]["p"]["ii"]
                                    i_re_receiving = resData[line]["n"]["ir"]
                                    i_im_receiving = resData[line]["n"]["ii"]

                                    # Converting to numpy arrays
                                    i_re_sending = np.array(i_re_sending.data)
                                    i_im_sending = np.array(i_im_sending.data)
                                    i_re_receiving = np.array(i_re_receiving.data)
                                    i_im_receiving = np.array(i_im_receiving.data)

                                    # Computing polar quantities
                                    i_sending_mag = np.sqrt(np.power(i_re_sending, 2) + np.power(i_im_sending, 2))
                                    i_sending_angle = np.arctan2(i_im_sending, i_re_sending)

                                    i_receiving_mag = np.sqrt(np.power(i_re_receiving, 2) + np.power(i_im_receiving, 2))
                                    i_receiving_angle = np.arctan2(i_im_receiving, i_re_receiving)

                                    # Adding noise
                                    i_sending_mag += np.random.normal(mu, sigma, i_sending_mag.shape)
                                    i_sending_angle += np.random.normal(mu, sigma, i_sending_angle.shape)
                                    i_receiving_mag += np.random.normal(mu, sigma, i_receiving_mag.shape)
                                    i_receiving_angle += np.random.normal(mu, sigma, i_receiving_angle.shape)

                                    # Saving data
                                    data_output[f'/{_n_sc_counter}/i_send_mag_{line}'] = i_sending_mag
                                    data_output[f'/{_n_sc_counter}/i_send_angle_{line}'] = i_sending_angle
                                    data_output[f'/{_n_sc_counter}/i_receiv_mag_{line}'] = i_receiving_mag
                                    data_output[f'/{_n_sc_counter}/i_receiv_angle_{line}'] = i_receiving_angle

                    elif extract == 'generators':

                        # Generator to extract data from has been previously selected
                        n_gen = 0 # for developing only
                        # Machine name
                        _gen_name = _generators[n_gen]

                        # Selecting the signal that will be plotted
                        # The signal to extract is indicated in the variable `_signal_to_extract`
                        if gen_selection:

                            # First we prompt the user if they want to get the data from a given signal
                            # or from a component

                            # Available signals in the selected machine
                            available_signals = [d.name for d in resData[_gen_name].__dict__['datasets']]

                            # Getting the shapes for the datasets (datasets combine both parameters and signals)
                            _shapes_datasets = [(s.name, s.data.shape) for s in resData[_gen_name].__dict__['datasets']]

                            # Empty list for signals
                            _signals = []

                            # Loop to filter out parameters from the list of signals
                            for n, _dataset in enumerate(_shapes_datasets):

                                if not _dataset[1] == ():
                                    _signals.append(_dataset[0])

                            # Available groups in the selected machine (i.e., components of the control systems)
                            available_groups = [d.name for d in resData[_gen_name].__dict__['groups']]

                            # Prompting the user to select signal or see the list of components
                            print(f"\nThe following is the list of available signals in generator {_gen_name}")

                            for n, _signal in enumerate(_signals):
                                print(f" {n+1}. {_signal}")

                            print(f" {len(_signals) + 1}. See more components within the machine")

                            choice = input(f'\nSelect a signal (or type {len(_signals) + 1}) if you want to see more components within the machine: ')
                            choice = int(choice) - 1

                            if choice > len(_signals):
                                raise ValueError("Invalid selection. Terminating program.")
                            else:
                                if choice < len(_signals):
                                    _signal_to_extract = _signals[choice]

                                    print(f"\n\nExtracting signal {_signal_to_extract} in generator {_gen_name}\n\n")

                                    # Changing selection status to `False`
                                    gen_selection = False
                                    # Indicating that selection is in the first layer within the generator
                                    gen_depth_signal = 1

                                else:
                                    print(f"\nThe following is the list of available components in generator {_gen_name}:")

                                    for n, grp in enumerate(available_groups):
                                        print(f" {n + 1}. {grp}")

                                    choice = input(f'\nSelect a component to see the corresponding list of available signals: ')
                                    choice = int(choice) - 1

                                    if choice > len(available_groups):
                                        raise ValueError("Invalid selection. Terminating program.")
                                    else:
                                        # Getting the name of the component
                                        _component = available_groups[choice]

                                        # Getting available signals and groups
                                        _comp_available_signals = [s.name for s in resData[_gen_name][_component].__dict__['datasets']]
                                        _comp_available_groups = [g.name for g in resData[_gen_name][_component].__dict__['groups']]

                                        # Getting the shapes for the datasets (datasets combine both parameters and signals)
                                        _shapes_datasets = [(s.name, s.data.shape) for s in resData[_gen_name][_component].__dict__['datasets']]

                                        # Empty list for signals
                                        _signals = []

                                        # Loop to filter out parameters from the list of signals
                                        for n, _dataset in enumerate(_shapes_datasets):

                                            if not _dataset[1] == ():
                                                _signals.append(_dataset[0])

                                        print(f"\nThe following is the list of available signals in component {_component} in generator {_gen_name}:")

                                        for n, _signal in enumerate(_signals):
                                            print(f" {n + 1}. {_signal}")

                                        choice = input(f'Select a signal to extract: ')
                                        choice = int(choice) - 1

                                        if choice > len(_signals):
                                            raise ValueError("Invalid selection. Terminating program.")
                                        else:
                                            # Name of the signal to extract
                                            _signal_to_extract = _signals[choice]

                                            # Changing selection status to `True`
                                            gen_selection = False

                                            # Indicating that selection is in the second layer within the generator
                                            gen_depth_signal = 2
                                            print(f"\nExtracting signal {_signal_to_extract} in component {_component} for machine {_gen_name}\n")

                        ###########################################
                        # EXTRACTING SIGNAL FROM SIMULATION RESULTS
                        ###########################################

                        if gen_depth_signal == 1:
                            # Extracting a signal in the generator main attributes
                            # Getting signal data
                            signal = resData[_gen_name][_signal_to_extract].data

                        elif gen_depth_signal == 2:
                            # Extracting a signal within the generator internal blocks
                            # Getting signal data
                            signal = resData[_gen_name][_component][_signal_to_extract].data

                        # Converting to numpy array
                        signal = np.array(signal)

                        # Adding noise
                        signal += np.random.normal(mu, sigma, signal.shape)

                        data_output[f'/{_n_sc_counter}/{_gen_name}/{_signal_to_extract}'] = signal

    # Flattening list of labels
    _labels_init = list(itertools.chain(*_labels_init))
    _labels_final = list(itertools.chain(*_labels_final))

    # Saving labels at initial and final values
    data_output['/labels/init'] = np.array(_labels_init)
    data_output['/labels/final'] = np.array(_labels_final)

    # Printing working directory and tool
    print(f"\n{'':-^45}")
    print('Summary for data extraction files')
    print(f"{'':-^45}")
    print(f"{'Model name':<30} {_model}")
    print(f"{'System component for signal selection':<30} {extract}")
    if extract == 'generators':
        if gen_depth_signal == 1:
            print(f"{'Signal extracted':<30} {_signal_to_extract}")
        elif gen_depth_signal == 2:
            print(f"{'Signal extracted':<30} {_signal_to_extract} in {_component}")
    print(f"{'Noise Mean':<30} {mu}")
    print(f"{'Noise Standard Deviation':<30} {sigma}")
    print(f"{'File Name':<30} {_output_file}")
    print(f"{'Save directory:':<30} {_dst}")
    print(f"{'':-^45}")
    print(f"Please save this ID file: {_output_file}")
    print(f"Check the documentation on how to extract the data from the `*.hdf5` file\n")

    choice = input("Do you want to print the hierarchy of the output file? (Y/N): ")
    print('')

    if choice.lower() == 'y':
        for n, info in enumerate(get_dataset_keys(data_output)):
            print(f"{f' {n}. {info}':<30} {data_output[info][:].shape}")

    print("\nRoutine completed")

    # Closing file
    data_output.close()
