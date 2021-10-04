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

    # Asking the user what data to extract from the simulations
    value1 = input(f"\nPlease enter a component type: \n {'1. Bus':>5}\n {'2. Line':>5}\n {'3. Generator':>5}\n\nComponent type: ")
    choice = int(value1)

    if choice == 1:
        print('\nExtracting bus signals')
    elif choice == 2:
        print(f'\nExtracting line signals')
    elif choice == 3:
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
            print(entry.name)

            _res_directory = os.path.join(working_directory, entry.name)

            # Getting list of files in result directory
            with os.scandir(_res_directory) as entry_res:
                # List of files
                _list_files = [x.name for x in entry_res]

            if _tool == 'dymola':


            break
