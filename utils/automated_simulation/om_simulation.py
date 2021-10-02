from OMPython import OMCSessionZMQ
from OMPython import ModelicaSystem

from ast import literal_eval

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import sdf
import os

import re
import shutil

import platform

from .generate_component_list import *
from .trip_line_om import *
from .open_line_om import *
from .label_scenario import *

def copytree(src, dst, symlinks=False, ignore=None):
    for item in os.listdir(src):
        s = os.path.join(src, item)
        d = os.path.join(dst, item)
        if os.path.isdir(s):
            shutil.copytree(s, d, symlinks, ignore)
        else:
            shutil.copy2(s, d)

def om_simulation(pf_list, scenarios, data_path, sim_params, n_proc):
    '''

    '''
    _version = sim_params['version']
    _model_path = os.path.abspath(sim_params['model_path'])

    # Extracting parameters from '.yaml' file
    _model_package = sim_params['model_package']
    _model_name = sim_params['model_name']

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
        _working_directory = os.path.join(os.path.abspath(sim_params['om_working_directory_windows']), _model_package, f"proc_{n_proc}")
        _openipsl_path = os.path.abspath(sim_params['openipsl_path_windows_old'])
    elif platform.system() == 'Linux':
        _working_directory = os.path.join(os.path.abspath(sim_params['om_working_directory_linux']), _model_package, f"proc_{n_proc}")
        _openipsl_path = os.path.abspath(sim_params['openipsl_path_linux_old'])

    # Extracting simulation parameters
    _n_cores = sim_params['n_cores']
    _startTime = sim_params['startTime']
    _stopTime = sim_params['stopTime']
    _numberOfIntervals = sim_params['numberOfIntervals']
    _method = sim_params['method']
    _tolerance = sim_params['tolerance']
    _fixedstepsize = sim_params['fixedstepsize']

    # Getting path to the '.mo' file of the model
    _mo_model_folder = os.path.dirname(_model_path)
    _mo_model_path = os.path.join(_mo_model_folder, _model_name + ".mo")

    # ==============================================
    # CREATING A TEMPORARY COPY OF THE MODEL
    # ==============================================
    # Rationale: each process needs its own model since when changing the power
    # flow, the file containing the model is modified. If the model is shared,
    # then the simulation does not run in multiprocessing mode

    # Creating temporary directory
    _temp_dir = os.path.join(os.getcwd(), "_temp", f"{n_proc}", _model_package)
    if not os.path.exists(_temp_dir):
        os.makedirs(_temp_dir)
    # Copying model
    copytree(_mo_model_folder, os.path.join(_temp_dir))

    # Updating path to the model
    _mo_model_folder = _temp_dir
    # Updating path to the `package.mo` file of the model
    _model_path = os.path.join(_mo_model_folder, "package.mo")
    # Updating to the `*.mo` file of the model
    _mo_model_path = os.path.join(_mo_model_folder, _model_name + ".mo")

    print(f"({n_proc}): {'Working directory:':<30} {_working_directory}")
    print(f"({n_proc}): {'OpenIPSL path:':<30} {_openipsl_path}")
    print(f"({n_proc}): {'Model path:':<30} {_model_path}\n")

    # Performance enhancing statements
    omc.sendExpression(f"setCommandLineOptions(\"-n={_n_cores}\")") # number of cores

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
        # Creating it again if it has been deleted
        if not os.path.exists(_working_directory):
            os.makedirs(_working_directory)
    else:
        os.makedirs(_working_directory)

    # Regex for getting power flow name
    pf_name_regex = re.compile(r'(\w+)*(?:.mo)')
    pf_identifier_regex = re.compile(r'(?:PF_)([\w+_]*\d{5})')

    ##########################################################################
    ######################### SIMULATING MODEL ###############################
    ##########################################################################

    n_pf = len(pf_list)
    n_sc = len(scenarios)
    total = n_pf * n_sc

    # Containers for the labels (at initial and final simulation time, respectively)
    sc_labels_init = dict.fromkeys(range(1, total + 1))
    sc_labels_final = dict.fromkeys(range(1, total + 1))

    counter = 1
    counter_pf = 1

    for pf in pf_list:
        # Getting power flow name and identifier via regex
        pf_name = pf_name_regex.findall(pf)[0]

        # Constructing `pf_path` and `pf_modifier`
        pf_path = f"{_model_package}.PF_Data.{pf_name}"
        pf_modifier = f"pf(redeclare record PowerFlow =\n" + " "*8 + f"{pf_path})"

        print(f"({n_proc}): Simulating power flow {pf_name:<20} ({counter_pf}/{n_pf})")

        # Opening raw text file of the '.mo' file
        model_mo = open(_mo_model_path, "r")
        model_mo_data = model_mo.read()

        # Finding the power flow record declaration via regex
        _pf_regex = re.compile(r'pf\(redeclare record PowerFlow =(?:\n*\s*)\w*[.]*PF_Data.PF(?:_\w+)*_\d{5}\)')
        _match = re.findall(_pf_regex, model_mo_data)

        # Replacing the declaration with the corresponding power flow
        model_mo_data = model_mo_data.replace(_match[0], pf_modifier)
        model_mo = open(_mo_model_path, "w+")
        model_mo.write(model_mo_data)
        model_mo.close()

        # Changing working directory
        res = omc.sendExpression(f"cd(\"{_working_directory}\")")
        if os.path.abspath(res) == _working_directory:
            print(f"({n_proc}): Starting simulation for {pf_name} (in {res})")
        else:
            raise ValueError(f"({n_proc}): Working directory could not be changed to {_working_directory}")

        # Opening model
        omc.sendExpression(f"parseFile(\"{_model_path}\", \"UTF-8\")")
        res = omc.sendExpression(f"loadFile(\"{_model_path}\", \"UTF-8\")")
        omc.sendExpression(f"instantiateModel({_model_package}.{_model_name})")

        for scenario in scenarios:
            ##################################################################
            # Initial linearization
            ##################################################################

            trip_line_om(scenario, _working_directory)

            # Changing the name of the result according to the scenario number
            _simSettings = f"startTime={_startTime},stopTime=0" \
                + f",tolerance={_tolerance},method=\"{_method}\",numberOfIntervals={_numberOfIntervals}"
            _simOptions = _simSettings + f",fileNamePrefix=\"{_model_package}_lin0_{counter}\""

            res = omc.sendExpression(f"linearize({_model_package}.{_model_name},simflags=\"-overrideFile=trip_line.txt\")")
            print(res,_model_package,_model_name)
            return

            # res = omc.sendExpression(f"linearize({_model_package}.{_model_name},{_simOptions},simflags=\"-overrideFile=trip_line.txt\")")

            # Path of the model containing the linearization result
            lin_res_path = os.path.join(_working_directory, f"linearized_model.mo")
            # Loading and instantiating the model
            omc.sendExpression(f"loadFile(\"{lin_res_path}\", \"UTF-8\")")
            omc.sendExpression("instantiateModel(linearized_model)")

            _n_str = omc.sendExpression(f"getParameterValue(linearized_model, \"n\")")
            n = int(_n_str) # dimensions of the system matrix

            # Extracting 'A' matrix
            _A_str_raw = omc.sendExpression(f"getParameterValue(linearized_model, \"A\")") # output is a string
            _A_str = _A_str_raw.replace(';', ',')
            _A = literal_eval(_A_str)
            A = np.array(_A) # converting the string to a numpy array
            A = np.reshape(A, [n, n]) # reshaping into an 'n x n' matrix

            # Computing eigenvalues from `A` matrix
            eigs_scenario = sl.eig(A)[0]
            # Saving eigenvalues
            np.save(os.path.join(_working_directory, f"{_model_package}_eigs_init_sc_{counter}.npy"), eigs_scenario)

            # Evaluating system small-signal stability using eigenvalues
            sc_labels_init[counter] = label_scenario(A)

            ##################################################################
            # Dynamic simulation
            ##################################################################

            # Changing the name of the result according to the scenario number
            _simSettings = f"startTime={_startTime},stopTime={_stopTime}" \
                + f",tolerance={_tolerance},method=\"{_method}\",numberOfIntervals={_numberOfIntervals}"
            _simOptions = _simSettings + f",fileNamePrefix=\"{_model_package}_dyn_{counter}\""

            # Creating ``.txt` file with scenario information
            open_line_om(scenario, _stopTime, 1000, _working_directory)

            # Running simulation
            res = omc.sendExpression(f"simulate({_model_package}.{_model_name},{_simOptions},simflags=\"-overrideFile=open_line.txt\")")
            if res['timeSimulation'] == 0.0:
                print(res['messages'])
                print(f"({n_proc}): Simulation fails for {pf_name} and scenario {scenario}")
            else:
                print(f"({n_proc}): Simulation successful for power flow {pf_name} and scenario {scenario}")

            ##################################################################
            # Final linearization
            ##################################################################

            # _simSettings = f"startTime={_startTime},stopTime={_stopTime}" \
            #     + f",tolerance={_tolerance},method=\"{_method}\",numberOfIntervals={_numberOfIntervals}"
            # _simOptions = _simSettings + f",fileNamePrefix=\"{_model_package}_linf_{counter}\""
            #
            # res = omc.sendExpression(f"linearize({_model_package}.{_model_name},{_simOptions},simflags=\"-overrideFile=open_line.txt\")")
            #
            # # Path of the model containing the linearization result
            # lin_res_path = os.path.join(_working_directory, f"linearized_model.mo")
            # # Loading and instantiating the model
            # omc.sendExpression(f"loadFile(\"{lin_res_path}\", \"UTF-8\")")
            # omc.sendExpression("instantiateModel(linearized_model)")
            #
            # _n_str = omc.sendExpression(f"getParameterValue(linearized_model, \"n\")")
            # n = int(_n_str) # dimensions of the system matrix
            #
            # # Extracting 'A' matrix
            # _A_str_raw = omc.sendExpression(f"getParameterValue(linearized_model, \"A\")") # output is a string
            # _A_str = _A_str_raw.replace(';', ',')
            # _A = literal_eval(_A_str)
            # A = np.array(_A) # converting the string to a numpy array
            # A = np.reshape(A, [n, n]) # reshaping into an 'n x n' matrix
            #
            # # Computing eigenvalues from `A` matrix
            # eigs_scenario = sl.eig(A)[0]
            # # Saving eigenvalues
            # np.save(os.path.join(_working_directory, f"{_model_package}_eigs_final_sc_{counter}.npy"), eigs_scenario)
            #
            # # Evaluating system small-signal stability using eigenvalues
            # sc_labels_final[counter] = label_scenario(A)
            counter += 1
        counter_pf +=1

    # Closing OM process
    omc.sendExpression("quit()")

    print(f"\n({n_proc}): Removing simulation files from current working directory")

    for file_object in os.listdir(_working_directory):
        file_object_path = os.path.join(_working_directory, file_object)
        if file_object_path.endswith(".mat") or file_object_path.endswith(".npy") or file_object_path.endswith(".mo"):
            continue
        else:
            if os.path.isfile(file_object_path) or os.path.islink(file_object_path):
                os.unlink(file_object_path)
            else:
                shutil.rmtree(file_object_path)

    # Saving labels of each scenario
    sc_keys = sc_labels_final.keys()

    sc_label_df_init = pd.DataFrame(index = sc_keys, columns = ["Label"])
    sc_label_df_init["Label"] = [sc_labels_init[x] for x in sc_keys]
    sc_label_df_init.to_csv(os.path.join(_working_directory, f"{_model_package}_labels_sc.csv"))

    sc_label_df_final = pd.DataFrame(index = sc_keys, columns = ["Label"])
    sc_label_df_final["Label"] = [sc_labels_final[x] for x in sc_keys]
    sc_label_df_final.to_csv(os.path.join(_working_directory, f"{_model_package}_labels_final.csv"))
