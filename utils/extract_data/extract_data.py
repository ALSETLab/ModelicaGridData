import os

import sdf
import pandas as pd

def extract_data(model, path):

    # Model name in simulations
    _model_name = f"{model}_Base_Case"

    print("Function to extract data")
