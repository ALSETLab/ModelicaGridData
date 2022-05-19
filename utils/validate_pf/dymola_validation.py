from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException

import numpy as np
import matplotlib.pyplot as plt
import sdf
import os

import re
import shutil

import platform

from .generate_component_list import *

def dymola_validation(pf_list, data_path, val_params, n_proc):
    '''
    DYMOLA_VALIDATION

    DESCRIPTION:
    This function validates whether a mathematically valid solution stemming from
    a power flow computation is also a valid initialization condition for a dynamic simulation.
    If not, the code deletes the corresponding `*.mo` files containing the record files for
    the power flow simulation

    INPUTS:
    - `pf_list`: list of power flows that will be checked with the function
    - `data_path`: path to the directory where the power flow records are located
    - `val_params`: dictionary containing the validation parameters for the dynamic simulation
    - `n_proc`: identifier of the number of process

    OUTPUTS:
    None

    LAST MODIFICATION DATE:
    12/14/2021 by SADR
    '''

    # Getting version information
    _version = val_params['version']

    # Extracting simulation parameters
    _n_cores = val_params['n_cores']
    _startTime = val_params['startTime']
    _stopTime = val_params['stopTime']
    _numberOfIntervals = val_params['numberOfIntervals']
    _method = val_params['method']
    _tolerance = val_params['tolerance']
    _fixedstepsize = val_params['fixedstepsize']

    _model_path = os.path.abspath(val_params['model_path'])
    _model_package = val_params['model_package']
    _model_name = val_params['model_name']

    # Getting path to the '.mo' file of the model
    _mo_model_folder = os.path.dirname(_model_path)
    _mo_model_path = os.path.join(_mo_model_folder, _model_name + ".mo")

    # Instantiating dymola object (according to operating system)
    if platform.system() == 'Windows':
        # Extracting and formatting paths
        if _version == '1.5.0':
            _openipsl_path = os.path.abspath(val_params['openipsl_path_windows_old'])
        elif _version == '2.0.0':
            _openipsl_path = os.path.abspath(val_params['openipsl_path_windows_new'])

        # Making sure each process has its own working directory
        _working_directory = os.path.join(os.path.abspath(val_params['working_directory_windows']), _model_package, f"proc_{n_proc}")

        # Instantiating dymola object
        dymolaInstance = DymolaInterface()
    elif platform.system() == 'Linux':

        # Extracting and formatting paths
        if _version == '1.5.0':
            _openipsl_path = os.path.abspath(val_params['openipsl_path_linux_old'])
        elif _version == '2.0.0':
            _openipsl_path = os.path.abspath(val_params['openipsl_path_linux_new'])

        # Making sure each process has an independent working directory
        _working_directory = os.path.join(os.path.abspath(val_params['working_directory_linux']), _model_package, f"proc_{n_proc}")
        _dymola_path = os.path.abspath(val_params['dymola_path_linux'])

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

    pf_succ = [] # list of power flows for which the simulation converges
    pf_fail = [] # list of power flows for which the simulation fails
    total = len(pf_list)

    # Regex for getting power flow name
    pf_name_regex = re.compile(r'(\w+)*(?:.mo)')
    pf_identifier_regex = re.compile(r'(?:PF_)([\w+_]*\d{5})')

    # Selecting 4 buses (or less) for validation
    model_component_list = generate_component_list(_mo_model_path)
    model_buses = model_component_list['buses']

    n_buses = len(model_buses)
    n_validation_buses = min(4, n_buses)
    ind_validation = np.random.choice(np.arange(n_buses), n_validation_buses, replace = False)
    bus_validation = [model_buses[ind] for ind in ind_validation]

    ##################################################################
    # Evaluating power flows via dynamic simulations
    ##################################################################
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
        _pf_regex = re.compile(r'pf\(redeclare record PowerFlow =(?:\n*\s*)\w*[.]*PF_Data.PF(?:_\w+)*_\d{5}\)')
        _match = re.findall(_pf_regex, model_mo_data)
        # print(_match)

        # Replacing the declaration with the corresponding power flow
        model_mo_data = model_mo_data.replace(_match[0], pf_modifier)
        model_mo = open(_mo_model_path, "w+")
        model_mo.write(model_mo_data)
        model_mo.close()

        # Opening model
        result = dymolaInstance.openModel(path = _model_path, changeDirectory = False)
        if result: print(f"({n_proc}): Model opened successfully")

        try:
            # Simulating model with different power flow
            result = dymolaInstance.simulateModel(f"{_model_package}.{_model_name}",
                stopTime = _stopTime,
                resultFile = f"{_model_package}_{pf_name}",
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

            # Closing active model for simulation
            dymolaInstance.ExecuteCommand("closeModel()")

        except DymolaException as ex:
            print("Error: " + str(ex))

    # Closing dymola instance
    dymolaInstance.close()
    dymolaInstance = None

    # Remove all files but the `*.mat` files
    for file_object in os.listdir(_working_directory):
        file_object_path = os.path.join(_working_directory, file_object)
        if not file_object_path.endswith(".mat"):
            os.remove(file_object_path)

    ##################################################################
    # Validating power flows
    ##################################################################
    print(f"\n({n_proc}): Validating power flows with buses")
    print(bus_validation)

    for pf_name in pf_succ:

        pf_identifier = pf_identifier_regex.findall(pf_name)[0]

        result_path = os.path.join(_working_directory, f"{_model_package}_{pf_name}.mat")
        sdfData = sdf.load(result_path)

        pf_converged = True

        for bus in bus_validation:
            if _version == '1.5.0':
                v_mag = sdfData[bus]["V"]
            elif _version == '2.0.0':
                v_mag = sdfData[bus]["v"]
            v_magnp = np.array(v_mag.data)
            deltaV = np.max(v_magnp) - np.min(v_magnp)

            if deltaV > 0.005:
                pf_converged = False
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
                break

        if pf_converged: print(f"({n_proc}): Power flow {pf_name} converged")

    for pf_name in pf_fail:

        pf_identifier = pf_identifier_regex.findall(pf)[0]

        pf_path = {'main': os.path.join(data_path, f'{pf_name}.mo'),
            'bus': os.path.join(data_path, 'Bus_Data', f'PF_Bus_{pf_identifier}.mo'),
            'loads': os.path.join(data_path, 'Loads_Data', f'PF_Loads_{pf_identifier}.mo'),
            'machines': os.path.join(data_path, 'Machines_Data', f'PF_Machines_{pf_identifier}.mo'),
            'trafos': os.path.join(data_path, 'Trafos_Data', f'PF_Machines_{pf_identifier}.mo')}

        for file in pf_path:
            if os.path.isfile(pf_path[file]):
                os.unlink(pf_path[file])

    ##################################################################
    # Remove all `*.mat` files from working directory: they are useless
    ##################################################################
    print(f"({n_proc}): Removing all `*.mat` files from current working directory")

    for file_object in os.listdir(_working_directory):
        file_object_path = os.path.join(_working_directory, file_object)
        if os.path.isfile(file_object_path) or os.path.islink(file_object_path):
            os.unlink(file_object_path)
        else:
            shutil.rmtree(file_object_path)
