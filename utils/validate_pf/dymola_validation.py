from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException

import numpy as np
import matplotlib.pyplot as plt
import sdf
import os
import time
import re
import shutil

import platform

def dymola_validation(pf_list, data_path, val_params, n_proc):
    '''

    '''

    # Getting version information
    _version = val_params['version']

    # Instantiating dymola object (according to operating system)
    if platform.system() == 'Windows':
        # Extracting and formatting paths
        if _version == '1.5.0':
            _openipsl_path = os.path.abspath(val_params['openipsl_path_windows_old'])
        elif _version == '2.0.0':
            _openipsl_path = os.path.abspath(val_params['openipsl_path_windows_new'])

        # Making sure each process has its own working directory
        _working_directory = os.path.join(os.path.abspath(val_params['working_directory_windows']), f"proc_{n_proc}")

        # Instantiating dymola object
        dymolaInstance = DymolaInterface()
    elif platform.system() == 'Linux':

        # Extracting and formatting paths
        if _version == '1.5.0':
            _openipsl_path = os.path.abspath(val_params['openipsl_path_linux_old'])
        elif _version == '2.0.0':
            _openipsl_path = os.path.abspath(val_params['openipsl_path_linux_new'])

        # Making sure each process has an independent working directory
        _working_directory = os.path.join(os.path.abspath(val_params['working_directory_linux']), f"proc_{n_proc}")
        _dymola_path = os.path.abspath(val_params['dymola_path_linux'])

        # Instantiating dymola object
        dymolaInstance = DymolaInterface(_dymola_path)

    if dymolaInstance is not None:
        print(f"({n_proc}): dymola using port: {dymolaInstance._portnumber}\n")
    else:
        print(f"({n_proc}): Failed to instantiate dymola instance")

    _model_path = os.path.abspath(val_params['model_path'])
    _model_package = val_params['model_package']
    _model_name = val_params['model_name']

    print(f"({n_proc}): {'Working directory:':<30} {_working_directory}")
    print(f"({n_proc}): {'OpenIPSL path:':<30} {_openipsl_path}")
    print(f"({n_proc}): {'Model path:':<30} {_model_path}\n")

    # Extracting simulation parameters
    _n_cores = val_params['n_cores']
    _startTime = val_params['startTime']
    _stopTime = val_params['stopTime']
    _numberOfIntervals = val_params['numberOfIntervals']
    _method = val_params['method']
    _tolerance = val_params['tolerance']
    _fixedstepsize = val_params['fixedstepsize']

    # Opening library
    result = dymolaInstance.openModel(_openipsl_path)
    if result: print(f"({n_proc}): Library opened")

    # Opening model
    result = dymolaInstance.openModel(_model_path)
    if result: print(f"({n_proc}): Model opened successfully")

    # Changing working directory (removing content or creating it)
    if os.path.exists(_working_directory):
        # Removing content from the working directory
        shutil.rmtree(_working_directory, ignore_errors = True)
    else:
        os.makedirs(_working_directory)

    result = dymolaInstance.cd(_working_directory)
    if result:
        print(f"({n_proc}): Working directory changed successfully")
    else:
        raise ValueError(f"({n_proc}): I could not change the working directory. Aborting for safety. Try again")

    # Executing special commands to speed up execution time
    dymolaInstance.ExecuteCommand("Advanced.TranslationInCommandLog = true")
    if _method == 'dassl':
        dymolaInstance.ExecuteCommand("Advanced.Define.DAEsolver = true")

    dymolaInstance.ExecuteCommand(f"Advanced.NumberOfCores = {_n_cores}")

    pf_succ = [] # list of power flows for which the simulation converges
    pf_fail = [] # list of power flows for which the simulation fails
    total = len(pf_list)

    # Regex for getting power flow name
    pf_name_regex = re.compile(r'(\w+)*(?:.mo)')

    ##################################################################
    # Evaluating power flows via dynamic simulations
    ##################################################################
    for n, pf in enumerate(pf_list):

        # Getting power flow name and identifier via regex
        pf_name = pf_name_regex.findall(pf)[0]

        # Constructing `pf_path` and `pf_modifier`
        pf_path = f"{_model_package}.PF_Data.{pf_name}"
        pf_modifier = f"pf(redeclare record PowerFlow = {pf_path})"

        print(f"({n_proc}): Simulating power flow {pf_name:<20} ({n + 1}/{total})")

        try:
            # Simulating model with different
            result = dymolaInstance.simulateModel(f"{_model_package}.{_model_name}({pf_modifier})",
                stopTime = _stopTime,
                resultFile = f"IEEE14_{pf_name}",
                numberOfIntervals = _numberOfIntervals,
                method = _method,
                tolerance = _tolerance)
            if result:
                print(f"({n_proc}): Simulation successful for power flow {pf_name}")
                pf_succ.append(pf_name)
            else:
                # Simulation fails for given power flow
                print(f"({n_proc}): Simulation fails for {pf_name}")
                pf_fail.append(pf_name)

        except DymolaException as ex:
            print("Error: " + str(ex))

    # Closing dymola instance
    dymolaInstance.close()
    dymolaInstance = None

    ##################################################################
    # Validating power flows
    ##################################################################
    print(f"({n_proc}): Validating power flows")
    pf_identifier_regex = re.compile(r'(?:PF_)([\w+_]*\d{5})')

    for pf_name in pf_succ:

        pf_identifier = pf_identifier_regex.findall(pf_name)[0]

        result_path = os.path.join(_working_directory, f"IEEE14_{pf_name}.mat")
        sdfData = sdf.load(result_path)

        # Warning: this validation is model-dependent. Please adjust accordingly for other models
        tData = sdfData["Time"]
        if _version == '1.5.0':
            v_mag2 = sdfData["Bus_02"]["V"]
            v_mag4 = sdfData["Bus_04"]["V"]
        elif _version == '2.0.0':
            v_mag2 = sdfData["Bus_02"]["v"]
            v_mag4 = sdfData["Bus_04"]["v"]

        t = np.array(tData.data)
        v_mag2np = np.array(v_mag2.data)
        v_mag4np = np.array(v_mag4.data)

        deltaV2 = np.max(v_mag2np) - np.min(v_mag2np)
        deltaV4 = np.max(v_mag4np) - np.min(v_mag4np)

        if deltaV2 > 0.005 or deltaV4 > 0.005:
            print(f"({n_proc}): Power flow {pf_name} did not initialize the model flat")
            print(f"({n_proc}): Removing {pf_name} result...")

            pf_path = {'main': os.path.join(data_path, f'{pf_name}.mo'),
                'bus': os.path.join(data_path, 'Bus_Data', f'PF_Bus_{pf_identifier}.mo'),
                'loads': os.path.join(data_path, 'Loads_Data', f'PF_Loads_{pf_identifier}.mo'),
                'machines': os.path.join(data_path, 'Machines_Data', f'PF_Machines_{pf_identifier}.mo'),
                'trafos': os.path.join(data_path, 'Trafos_Data', f'PF_Machines_{pf_identifier}.mo')}

            for file in pf_path:
                if os.path.isfile(pf_path[file]):
                    os.unlink(pf_path[file])
        else:
            print(f"({n_proc}): Power flow {pf_name} converged")

    # This is temporary commented out for debugging
    # for pf_name in pf_fail:
    #
    #     pf_identifier = pf_identifier_regex.findall(pf)[0]
    #
    #     pf_path = {'main': os.path.join(data_path, f'{pf_name}.mo'),
    #         'bus': os.path.join(data_path, 'Bus_Data', f'PF_Bus_{pf_identifier}.mo'),
    #         'loads': os.path.join(data_path, 'Loads_Data', f'PF_Loads_{pf_identifier}.mo'),
    #         'machines': os.path.join(data_path, 'Machines_Data', f'PF_Machines_{pf_identifier}.mo'),
    #         'trafos': os.path.join(data_path, 'Trafos_Data', f'PF_Machines_{pf_identifier}.mo')}
    #
    #     for file in pf_path:
    #         if os.path.isfile(pf_path[file]):
    #             os.unlink(pf_path[file])

    ##################################################################
    # Remove all `.mat` files from working directory: they are useless
    ##################################################################
    print(f"({n_proc}): Removing all '.mat' files from current working directory")

    for file_object in os.listdir(_working_directory):
        file_object_path = os.path.join(_working_directory, file_object)
        if os.path.isfile(file_object_path) or os.path.islink(file_object_path):
            os.unlink(file_object_path)
        else:
            shutil.rmtree(file_object_path)
