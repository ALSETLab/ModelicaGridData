from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException

import os
import platform
import shutil
import re

import scipy.linalg as sl
import numpy as np
import pandas as pd
from .trip_line import *
from .open_line import *
from .label_scenario import *

def dymola_simulation(pf_list, scenarios, data_path, sim_params, n_proc):
    '''

    '''

    # Getting version information
    _version = sim_params['version']

    # Extracting simulation parameters
    _n_cores = sim_params['n_cores']
    _startTime = sim_params['startTime']
    _stopTime = sim_params['stopTime']
    _numberOfIntervals = sim_params['numberOfIntervals']
    _method = sim_params['method']
    _tolerance = sim_params['tolerance']
    _fixedstepsize = sim_params['fixedstepsize']

    _model_path = os.path.abspath(sim_params['model_path'])
    _model_package = sim_params['model_package']
    _model_name = sim_params['model_name']

    # Getting path to the '.mo' file of the model
    _mo_model_folder = os.path.dirname(_model_path)
    _mo_model_path = os.path.join(_mo_model_folder, _model_name + ".mo")

    # Instantiating dymola object (according to operating system)
    if platform.system() == 'Windows':
        # Extracting and formatting paths
        if _version == '1.5.0':
            _openipsl_path = os.path.abspath(sim_params['openipsl_path_windows_old'])
        elif _version == '2.0.0':
            _openipsl_path = os.path.abspath(sim_params['openipsl_path_windows_new'])

        # Making sure each process has its own working directory
        _working_directory = os.path.join(os.path.abspath(sim_params['working_directory_windows']), _model_package, f"proc_{n_proc}")

        # Instantiating dymola object
        dymolaInstance = DymolaInterface()
    elif platform.system() == 'Linux':

        # Extracting and formatting paths
        if _version == '1.5.0':
            _openipsl_path = os.path.abspath(sim_params['openipsl_path_linux_old'])
        elif _version == '2.0.0':
            _openipsl_path = os.path.abspath(sim_params['openipsl_path_linux_new'])

        # Making sure each process has an independent working directory
        _working_directory = os.path.join(os.path.abspath(sim_params['working_directory_linux']), _model_package, f"proc_{n_proc}")
        _dymola_path = os.path.abspath(sim_params['dymola_path_linux'])

        # Instantiating dymola object
        dymolaInstance = DymolaInterface(_dymola_path)

    if dymolaInstance is not None:
        print(f"({n_proc}): dymola using port: {dymolaInstance._portnumber}\n")
    else:
        print(f"({n_proc}): Failed to instantiate dymola instance")

    print(f"({n_proc}): {'Working directory:':<30} {_working_directory}")
    print(f"({n_proc}): {'OpenIPSL path:':<30} {_openipsl_path}")
    print(f"({n_proc}): {'Model path:':<30} {_model_path}\n")

    # Opening library
    result = dymolaInstance.openModel(_openipsl_path)
    if result: print(f"({n_proc}): Library opened")

    # Opening model
    result = dymolaInstance.openModel(_model_path)
    if result: print(f"({n_proc}): Model opened successfully")

    # Changing working directory (removing content or creating it)
    if os.path.exists(_working_directory):
        # Removing existing working directory
        shutil.rmtree(_working_directory, ignore_errors = True)
        # Creating it again if it has been removed
        if not os.path.exists(_working_directory):
            os.makedirs(_working_directory)
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

    n_pf = len(pf_list)
    n_sc = len(scenarios)
    total = n_pf * n_sc

    # Regex for getting power flow name
    pf_name_regex = re.compile(r'(\w+)*(?:.mo)')
    pf_identifier_regex = re.compile(r'(?:PF_)([\w+_]*\d{5})')

    # Containers for the labels (at initial and final simulation time, respectively)
    sc_labels_init = dict.fromkeys(range(1, 4))
    sc_labels_final = dict.fromkeys(range(1, 4))

    counter = 1;

    for pf in pf_list:

        # Getting power flow name and identifier via regex
        pf_name = pf_name_regex.findall(pf)[0]
        # Creating path and modifier
        pf_path = f"{_model_package}.PF_Data.{pf_name}"
        pf_modifier = f"pf(redeclare record PowerFlow = {pf_path})"

        for scenario in scenarios:
            # Initial linearization
            try:
                _init_lin_out = f"{_model_package}_dslin_init_{counter}"
                res_init_lin = dymolaInstance.linearizeModel(f"{_model_package}.{trip_line(_model_name, scenario, pf_modifier)}",
                    startTime = 0.0,
                    stopTime = 0.0,
                    fixedstepsize = _fixedstepsize,
                    resultFile = _init_lin_out)
                if res_init_lin:

                    # Reading ABCD matrices
                    A_dim = dymolaInstance.readMatrixSize(os.path.join(_working_directory, _init_lin_out) + '.mat', "ABCD")
                    A = dymolaInstance.readMatrix(os.path.join(_working_directory, _init_lin_out) + '.mat', "ABCD", A_dim[0], A_dim[1])

                    # Getting system eigenvalues at initialization
                    eigs_scenario = sl.eig(A)[0]
                    print(eigs_scenario)
                    np.save(os.path.join(_working_directory, f"{_model_package}_eigs_init_sc_{counter}.npy"), eigs_scenario)

                    #
                    sc_labels_init[counter] = label_scenario(A)
                    print(sc_labels_init[counter])
                    print(f"({n_proc}): {'Saved eigenvalues and labels at initial condition':<60} ({counter}/{total})")
                else:
                    print(f"({n_proc}): Initial linearization failed. It might be due to unstable behavior\nAssigning '0' as label")
                    sc_labels_init[counter] = 0
            except DymolaException as ex:
                print(f"({n_proc}): Error -" + str(ex))

            # Dynamic simulation
            try:
                _dyn_sim_out = f"{_model_package}_dsres_{counter}"
                res_dyn_sim = dymolaInstance.simulateModel(f"{_model_package}.{open_line(_model_name, scenario, _stopTime, 1000, pf_modifier)}",
                    startTime = _startTime,
                    stopTime = _stopTime,
                    numberOfIntervals = _numberOfIntervals,
                    method = _method,
                    tolerance = _tolerance,
                    resultFile = _dyn_sim_out)
                if res_dyn_sim:
                    print(f"({n_proc}): {'Simulation completed':<60} ({counter}/{total})")
                    res_imp_cond = dymolaInstance.importInitial(os.path.join(_working_directory, 'dsfinal.txt'))
                else:
                    res_imp_cond = False

            except DymolaException as ex:
                print(f"({n_proc}): Error -" + str(ex))

            # Final linearization
            try:
                if res_dyn_sim and res_imp_cond:

                    _final_lin_out = f"{_model_package}_dslin_final_{counter}"

                    res_fin_lin = dymolaInstance.linearizeModel(f"{_model_package}.{trip_line(_model_name, scenario, pf_modifier)}",
                        startTime = _startTime,
                        stopTime = _stopTime,
                        numberOfIntervals = _numberOfIntervals,
                        method = _method,
                        tolerance = _tolerance,
                        resultFile = _final_lin_out)

                    if res_fin_lin:
                        print(f"({n_proc}): {'Linearization at final simulation conditions successful':<60} ({counter}/{total})")
                        # Reading ABCD matrices
                        A_dim = dymolaInstance.readMatrixSize(os.path.join(_working_directory, _final_lin_out) + '.mat', "ABCD")
                        A = dymolaInstance.readMatrix(os.path.join(_working_directory, _final_lin_out) + '.mat', "ABCD", A_dim[0], A_dim[1])

                        # Getting system eigenvalues at initialization
                        eigs_scenario = sl.eig(A)[0]
                        np.save(os.path.join(_working_directory, f"{_model_package}_eigs_final_sc_{counter}.npy"), eigs_scenario)

                        sc_labels_final[counter] = label_scenario(A)
                        print(sc_labels_final[counter])
                        print(f"({n_proc}): {'Saved eigenvalues and labels at final state':<60} ({counter}/{total})")
            except DymolaException as ex:
                print(f"({n_proc}): Error - " + str(ex))

            if counter == 10:
                break
            counter += 1
        break

    sc_keys = sc_labels_final.keys()

    sc_label_df_init = pd.DataFrame(index = sc_keys, columns = ["Label"])
    sc_label_df_init["Label"] = [sc_labels_init[x] for x in sc_keys]
    sc_label_df_init.to_csv(os.path.join(_working_directory, f"{_model_package}_labels_sc.csv"))

    sc_label_df_final = pd.DataFrame(index = sc_keys, columns = ["Label"])
    sc_label_df_final["Label"] = [sc_labels_final[x] for x in sc_keys]
    sc_label_df_final.to_csv(os.path.join(_working_directory, f"{_model_package}_labels_final.csv"))

    if dymolaInstance is not None:
        dymolaInstance.close()
        dymolaInstance = None
