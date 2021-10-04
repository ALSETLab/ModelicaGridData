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
    _model = _model
    _model_name = f"{model}_Base_Case"

    # Asking the user what data to extract from the simulations
    value1 = input("Please enter a component type: \n   1. Bus\n  2. Line\n   3. Generator\n")
    choice = int(value1)


    if choice == 1:
        print('Extracting bus signals')
    elif choice == 2:
        print(f'Extracting line signals')
    elif choice == 3:
        print(f'Extracting generator signals')
    else:
        print("Wrong Choice, terminating the program.")
        return

    return


    # Getting the list of files in the working directory
    with os.scandir(working_directory) as entry_list:
        for entry in entry_list:
            print(entry.name)

            _res_directory = os.path.join(working_directory, entry.name)

            # Getting list of files in result directory
            with os.scandir(_res_directory) as entry_res:
                # List of files
                _list_files = [x.name for x in entry_res]

            print(len(_list_files))
            break
