from OMPython import OMCSessionZMQ
from OMPython import ModelicaSystem

import numpy as np
import matplotlib.pyplot as plt
import sdf
import os

import re
import shutil

import platform

def om_validation(pf_list, data_path, val_params, n_proc):
    '''

    '''
    _version = val_params['version']

    if _version == '2.0.0':
        print("OpenIPSL version 2.0.0 not compatible with this toolbox and OM")
        print("Or use OM with OpenIPSL version 1.5.0")
        return

    # Creating OMC session
    omc = OMCSessionZMQ()

    _OMversion = omc.sendExpression("getVersion()")
    print(f"({n_proc}): {'Working with:':<30} {_OMversion:<30}")

    # Creating working directory
    if platform.system() == 'Windows':

        _working_directory = os.path.join(os.path.abspath(val_params['om_working_directory_windows']), f"proc_{n_proc}")

        _openipsl_path = os.path.abspath(val_params['openipsl_path_windows_old'])
        _model_path = os.path.join(os.getcwd(), os.path.abspath(val_params['model_path_old']))

    elif platform.system() == 'Linux':

        _working_directory = os.path.join(os.path.abspath(val_params['om_working_directory_linux']), f"proc_{n_proc}")

        _openipsl_path = os.path.abspath(val_params['openipsl_path_linux_old'])
        _model_path = os.path.join(os.getcwd(), os.path.abspath(val_params['model_path_old']))

    # Extracting parameters from '.yaml' file
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

    # Simulation settings string
    _simSettings = f"startTime={_startTime},stopTime={_stopTime}" \
        + f",tolerance={_tolerance},method=\"{_method}\",numberOfIntervals={_numberOfIntervals}"

    # Getting path to the '.mo' file of the model
    _mo_model_folder = os.path.dirname(_model_path)
    _mo_model_path = os.path.join(_mo_model_folder, _model_name + ".mo")

    # Opening library
    print(f"({n_proc}): {'Opening library at: ':<30} {_openipsl_path}")
    omc.sendExpression(f"parseFile(\"{_openipsl_path}\", \"UTF-8\")")
    res = omc.sendExpression(f"loadFile(\"{_openipsl_path}\", \"UTF-8\")")
    if res:
        print(f"({n_proc}): OpenIPSL library (version {_version}) loaded successfully\n")
    else:
        raise ValueError(f"({n_proc}): OpenIPSL library (version {_version}) could not be loaded. Verify your path")

    # Changing working directory (removing content or creating it)
    if os.path.exists(_working_directory):
        # Removing existing working directory
        shutil.rmtree(_working_directory, ignore_errors = True)
        # Creating it again
        os.makedirs(_working_directory)
    else:
        os.makedirs(_working_directory)

    pf_succ = [] # list of power flows for which the simulation converges
    pf_fail = [] # list of power flows for which the simulation fails
    total = len(pf_list)

    # Regex for getting power flow name
    pf_name_regex = re.compile(r'(\w+)*(?:.mo)')
    pf_identifier_regex = re.compile(r'(?:PF_)([\w+_]*\d{5})')

    ##########################################################################
    ######################### SIMULATING MODEL ###############################
    ##########################################################################

    for n, pf in enumerate(pf_list):

        # Getting power flow name and identifier via regex
        pf_name = pf_name_regex.findall(pf)[0]

        # Constructing `pf_path` and `pf_modifier`
        pf_path = f"{_model_package}.PF_Data.{pf_name}"
        pf_modifier = f"pf(redeclare record PowerFlow =\n" + " "*8 + f"{pf_path})"

        print(f"({n_proc}): Simulating power flow {pf_name:<20} ({n + 1}/{total})")

        # Opening raw text file of the '.mo' file
        model_mo = open(_mo_model_path, "r")
        model_mo_data = model_mo.read()

        # Finding the power flow record declaration via regex
        _pf_regex = re.compile(r'pf\(redeclare record PowerFlow =\n \s*\w*.PF_Data.PF(?:_\w+)*_\d{5}\)')
        _match = re.findall(_pf_regex, model_mo_data)

        # Replacing the declaration with the corresponding power flow
        model_mo_data = model_mo_data.replace(_match[0], pf_modifier)
        model_mo = open(_mo_model_path, "w+")
        model_mo.write(model_mo_data)
        model_mo.close()

        # Opening model
        omc.sendExpression(f"parseFile(\"{_model_path}\", \"UTF-8\")")
        res = omc.sendExpression(f"loadFile(\"{_model_path}\", \"UTF-8\")")

        # Changing the name of the result according to the power flow
        _simOptions = _simSettings + f",fileNamePrefix=\"{_model_package}_{pf_name}\""

        # Changing working directory
        res = omc.sendExpression(f"cd(\"{_working_directory}\")")
        if os.path.abspath(res) == _working_directory:
            print(f"({n_proc}): Starting simulation for {pf_name} (in {res})")
        else:
            raise ValueError(f"({n_proc}): Working directory could not be changed to {_working_directory}")

        # Performance enhancing statements
        omc.sendExpression(f"setCommandLineOptions(\"-n={_n_cores}\")") # using only one core
        if _method == 'dassl':
            omc.sendExpression("setCommandLineOptions(\"--daeMode\")")

        # Checking model (for debugging purposes)
        # print(f"({n_proc}): Checking model {_model_package}.{_model_name}\n")
        # res = omc.sendExpression(f"checkModel({_model_package}.{_model_name})")
        # print(res + "\n")
        omc.sendExpression(f"instantiateModel({_model_package}.{_model_name})")

        # Simulating model
        res = omc.sendExpression(f"simulate({_model_package}.{_model_name},{_simOptions})")
        if res['timeSimulation'] == 0.0:
            print(res['messages'])
            print(f"({n_proc}): Simulation fails for {pf_name}")
            pf_fail.append(pf_name)
        else:
            print(f"({n_proc}): Simulation successful for power flow {pf_name}")
            pf_succ.append(pf_name)

        # Remove all files but the '.mat' files
        for file_object in os.listdir(_working_directory):
            file_object_path = os.path.join(_working_directory, file_object)
            if not file_object_path.endswith(".mat"):
                os.remove(file_object_path)

    ##########################################################################
    ################### VALIDATING POWER FLOWS ###############################
    ##########################################################################

    print(f"\n({n_proc}): Validating power flows")

    for pf_name in pf_succ:
        pf_identifier = pf_identifier_regex.findall(pf_name)[0]

        result_path = os.path.join(_working_directory, f"IEEE14_{pf_name}_res.mat")
        sdfData = sdf.load(result_path)

        # Warning: this validation is model-dependent. Please adjust accordingly for other models
        tData = sdfData["time"]
        v_mag2 = sdfData["Bus_02"]["V"]
        v_mag4 = sdfData["Bus_04"]["V"]

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

    # Closing OM process
    omc.sendExpression("quit()")

    ##################################################################
    # Remove all `.mat` files from working directory: they are useless
    ##################################################################
    # Commented out for debugging
    print(f"\n({n_proc}): Removing all '.mat' files from current working directory")

    for file_object in os.listdir(_working_directory):
        file_object_path = os.path.join(_working_directory, file_object)
        if os.path.isfile(file_object_path) or os.path.islink(file_object_path):
            os.unlink(file_object_path)
        else:
            shutil.rmtree(file_object_path)
