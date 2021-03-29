from utils.pf2rec import *

import argparse
import os

LIST_OF_MODELS = ['AVRI', 'IEEE9', 'IEEE14', 'SMIB', 'TwoAreas']

parser = argparse.ArgumentParser()

parser.add_argument("model", help = "Model for which the power flow structure will be created")
parser.add_argument("--version", help = "OpenIPSL version for which the model has been created. Defaults to '1.5.0'")

args = parser.parse_args()

if __name__ == '__main__':

    _model = args.model
    if _model not in LIST_OF_MODELS:
        raise ValueError('Model not available')

    if args.version:
        _version = args.version
        if _version not in ['1.5.0', '2.0.0']:
            raise ValueError("OpenIPSL version could not be identified")
    else:
        _version = '1.5.0'

    if _version == '1.5.0':
        _model_lib = '_old'
    elif _version == '2.0.0':
        _model_lib = '_new'

    # Absolute path to the `.mo` file of the model
    data_path = os.path.abspath(os.path.join(os.getcwd(), "models", _model_lib, _model))
    path_mo_file = os.path.abspath(os.path.join(data_path, f"{_model}_Base_Case.mo"))

    # Creating records for the model
    create_pf_records(_model,
                      path_mo_file,
                      data_path,
                     openipsl_version = _version)
