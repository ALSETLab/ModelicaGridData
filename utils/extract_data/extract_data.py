import os

import sdf
import pandas as pd

def extract_data(model, path, working_directory):
'''


'''

    # Model name in simulations
    _model_name = f"{model}_Base_Case"

    # Getting the list of files in the working directory
    with os.scandir(working_directory) as entry_list:
        print(entry_list)
