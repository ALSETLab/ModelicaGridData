from dymola.dymola_interface import DymolaInterface

import numpy as np
import matplotlib.pyplot as plt
import sdf
import os
import time
import re
import multiprocessing as mp

import platform

def dymola_validation(pf_list, val_params, n_proc):
    '''

    '''
    # Instantiating dymola object (according to operating system)
    if platform.system() == 'Windows':
        # Extracting and formatting paths
        _openipsl_path = os.path.abspath(val_params['openipsl_path_windows'])
        _working_directory = os.path.abspath(val_params['working_directory_windows'])

        # Instantiating dymola object
        dymolaInstance = DymolaInterface()
    elif platform.system() == 'Linux':

        # Extracting and formatting paths
        _openipsl_path = os.path.abspath(val_params['openipsl_path_linux'])
        _working_directory = os.path.abspath(val_params['working_directory_linux'])
        _dymola_path = os.path.abspath(val_params['dymola_path_linux'])

        # Instantiating dymola object
        dymolaInstance = DymolaInterface(_dymola_path)

    if dymolaInstance is not None:
        print(f"{n_proc}: dymola using port: {dymolaInstance._portnumber}\n")
    else:
        print("Failed to instantiate dymola instance")

    _model_path = os.path.abspath(val_params['model_path'])
    _model_package = val_params['model_package']
    _model_name = val_params['model_name']

    print(f"Working directory:\n{_working_directory}")
    print(f"OpenIPSL path:\n{_openipsl_path}")
    print(f"Model path:\n{_model_path}")

    # Extracting simulation parameters
    _n_cores = val_params['n_cores']
    _startTime = val_params['startTime']
    _stopTime = val_params['stopTime']
    _numberOfIntervals = val_params['numberOfIntervals']
    _method = val_params['method']
    _tolerance = val_params['tolerance']
    _fixedstepsize = val_params['fixedstepsize']
    _resultFile = val_params['resultFile']

    # Opening library
    result = dymolaInstance.openModel(_openipsl_path)
    if result: print("Library opened")

    # Opening model
    result = dymolaInstance.openModel(_model_path)
    if result: print("Model opened successfully")

    # Changing working directory
    if not os.path.exists(_working_directory):
        os.makedirs(_working_directory)
    result = dymolaInstance.cd(_working_directory)
    if result: print("Working directory changed successfully")

    # Executing special commands to speed up execution time
    dymolaInstance.ExecuteCommand("Advanced.TranslationInCommandLog = true")
    if _method == 'dassl':
        dymolaInstance.ExecuteCommand("Advanced.Define.DAEsolver = true")

    dymolaInstance.ExecuteCommand(f"Advanced.NumberOfCores = {_n_cores}")

    # # Executing a simulation
    # result = dymolaInstance.simulateModel(f"{_model_package}.{_model_name}",
    #     startTime = _startTime,
    #     stopTime = _stopTime,
    #     resultFile = f"IEEE14_test",
    #     method = _method,
    #     tolerance = _tolerance,
    #     numberOfIntervals = _numberOfIntervals)
    #

    for pf in pf_list:

        # Getting power flow name and identifier via regex
        pf_name_regex = re.compile(r'(\w+)*(?:.mo)')
        pf_name = pf_name_regex.findall(pf)[0]

        pf_identifier_regex = re.compile(r'(\d{5})')
        pf_identifier = pf_identifier_regex.findall(pf)[0]

        # Constructing `pf_path` and `pf_modifier`
        pf_path = f"{_model_package}.PF_Data.{pf_name}"
        pf_modifier = f"pf(redeclare record PowerFlow = {pf_path})"

        # print('here')
        # print(f"{_model_package}.{_model_name}({pf_modifier})")

        result = dymolaInstance.simulateModel(f"{_model_package}.{_model_name}({pf_modifier})",
            stopTime = _stopTime,
            resultFile = f"IEEE14_{pf_name}",
            numberOfIntervals = _numberOfIntervals,
            method = _method,
            tolerance = _tolerance)

        if result:

            result_path = os.path.join(_working_directory, f"IEEE14_{pf_name}.mat")
            sdfData = sdf.load(result_path)

            tData = sdfData["Time"]
            v_mag2 = sdfData["Bus_02"]["V"]
            v_mag4 = sdfData["Bus_04"]["V"]

            t = np.asarray(tData.data)
            v_mag2np = np.asarray(v_mag2.data)
            v_mag4np = np.asarray(v_mag4.data)

            plt.plot(t, v_mag2np, t, v_mag4np)
            plt.show()

        else:
            print("nah, it fails")

        break
