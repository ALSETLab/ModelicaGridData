import os

import sdf
import pandas as pd

def extract_data(model, path, working_directory):
    '''
    EXTRACT_DATA

    INPUTS:
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
    _model_name = f"{model}_Base_Case"

    # Getting the list of files in the working directory
    with os.scandir(working_directory) as entry_list:
        for entry in entry_list:
            print(entry.name)
