from utils.pf2rec import *

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import datetime
import random

from GridCal.Engine import *

LIST_OF_MODELS = ['AVRI', 'IEEE9', 'IEEE14', 'SMIB', 'TwoAreas']

import argparse
import os

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

    # Absolute path to the data directory of the model
    data_path = os.path.abspath(os.path.join(os.getcwd(), "models", _model_lib, _model))

    grid = None

    # Grid model in GridCal
    file_handler = FileOpen(os.path.abspath(os.path.join(data_path,
                                                         "PSSE_Files",
                                                         f"{_model}_Base_Case.raw")))

    # Creating grid object
    grid = file_handler.open()

    # Power flow options
    options = PowerFlowOptions(SolverType.NR,
                               verbose = True,
                               initialize_with_existing_solution = False,
                               multi_core = False,
                               tolerance = 1e-12,
                              max_iter = 99,
                              control_q = ReactivePowerControlMode.NoControl)

    # Power flow driver
    pf = PowerFlowDriver(grid, options)
    pf.run()                # running power flow

    gridcal2rec(grid = grid, pf = pf, model_name = _model,
        data_path = data_path,
        pf_num = 0, export_pf_results = False,
        is_time_series = False, openipsl_version = _version)
