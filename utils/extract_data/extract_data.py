import os

import sdf
import pandas as pd

def extract_data(tool, model, path, working_directory):
    '''
    EXTRACT_DATA

    INPUTS:
    - `tool`: tool that was used for data generation (i.e., either `dymola` or `om`)
    - `model`: model for which the simulation data will be extracted
    and processed. Default: `IEEE14`.
    - `path`: path where the output `*.csv` files will be saved
    -  `working_directory`: directory where the simulation outputs (i.e.,
    `*.mat` files`) are located for the given model

    OUTPUTS:
    Writes `*.csv` files with the specified variables by the user in
    `./data/<path>`

    LAST MODIFICATION DATE:
    10/01/2021 BY SADR
    '''

    # Model name in simulations
    _model = model
    _model_name = f"{model}_Base_Case"
    # Employed tool in simulations
    _tool = tool

    # Asking the user what data to extract from the simulations
    choice = input(f"\nPlease enter a component type: \n {'1. Bus':>5}\n {'2. Line':>5}\n {'3. Generator':>5}\n\nComponent type: ")
    choice = int(choice)

    if choice == 1:
        # Extracting bus signals
        print("\nExtracting bus signals\n")
        value1 = input(f"Indicate if you want to extract the bus voltage signals as:\n{'1. Real and imaginary parts':>10}\n{'2. Polar (magnitude and angle)':>10}\n\nFormat: ")
        # Validating user input
        value1 = int(value1) # parsing to integer
        if value1 == 1:
            print("Extracting bus voltage as real and imaginary parts")
        elif value1 == 2:
            print("Extracting bus voltage signal as magnitude and phase")
        else:
            print("Invalid choice. Terminating routine")
            return

    elif choice == 2:
        # Extracting line signals
        print(f'\nExtracting line signals\n')
        value1 = input(f"Indicate if you want to extract:\n{'1. Power signals (P, Q)':>10}\n{'2. Current signals':>10}\n\nSignal: ")
        value1 = int(value1) # parsing to integer
        # Validating user input
        if value1 == 1:
            print("Extracting power signals across lines")
            extract = 'power'
            format = 'P, Q'
        elif value1 == 2:
            print("Extracting current signals across lines")
        else:
            print("Invalid choice. Terminating routine")
            return
    elif choice == 3:
        # Extracting generator signals
        print(f'\nExtracting generator signals')
    else:
        print("Wrong Choice, terminating the program.")
        return

    # Prefix for the `*.mat` simulation files
    if _tool == 'dymola':
        _sim_prefix = 'dsres'
    elif _tool == 'om':
        _sim_prefix = 'dyn'

    # Getting the list of files in the working directory
    with os.scandir(working_directory) as entry_list:
        for entry in entry_list:
            # print(entry.name)

            _res_directory = os.path.join(working_directory, entry.name)

            # Getting list of files in result directory
            with os.scandir(_res_directory) as entry_res:
                # List of files
                _list_files = [x.name for x in entry_res]

            for file in _list_files:
                # File is a dynamic simulation result
                if file.endswith('.mat') and 'dsres' in file:



            # print(_list_files)
