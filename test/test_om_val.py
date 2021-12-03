from OMPython import OMCSessionZMQ

import os
import platform
import yaml
import re

if __name__ == "__main__":

    # Loading validation parameters
    with open(r'val_parameters.yaml') as f:
        val_params = yaml.load(f, Loader = yaml.FullLoader)

    print(f"\n{'':=^45}")
    print("TESTING OPENMODELICA FOR POWER FLOW VALIDATION")
    print(f"{'':=^45}\n")

    print("Only OpenIPSL version 1.5.0 is supported\n")
    _version = '1.5.0'

    # Creating OMC session
    omc = OMCSessionZMQ()

    _OMversion = omc.sendExpression("getVersion()")
    print(f"(Test): {'Working with:':<30} {_OMversion:<30}")

    # Creating working directory
    if platform.system() == 'Windows':

        _working_directory = os.path.join(os.path.abspath(val_params['om_working_directory_windows']), '_test')

        _library_path = os.path.abspath(val_params['openipsl_path_windows_old'])
        _model_path = os.path.join(os.getcwd(), os.path.abspath(val_params['model_path_old']))

    elif platform.system() == 'Linux':

        _working_directory = os.path.join(os.path.abspath(val_params['om_working_directory_linux']), '_test')

        _library_path = os.path.abspath(val_params['openipsl_path_linux_old'])
        _model_path = os.path.join(os.getcwd(), os.path.abspath(val_params['model_path_old']))

    # Creating working directory if it does not exist yet
    if not os.path.exists(_working_directory):
        os.makedirs(_working_directory)
        print(f"(Test): {'Working directory created:':<30} {_working_directory}")

    # Extracting parameters from '.yaml' file
    _model_package = val_params['model_package']
    _model_name = val_params['model_name']
    _startTime = val_params['startTime']
    _stopTime = val_params['stopTime']
    _method = val_params['method']
    _numberOfIntervals = val_params['numberOfIntervals']
    _tolerance = val_params['tolerance']

    # Getting path to the '.mo' file of the model
    _mo_model_folder = os.path.dirname(_model_path)
    _mo_model_path = os.path.join(_mo_model_folder, _model_name + ".mo")

    _simSettings = f"startTime={_startTime},stopTime={_stopTime}" \
        + f",tolerance={_tolerance},method=\"{_method}\",numberOfIntervals={_numberOfIntervals}"

    # Opening library
    print(f"(Test): {'Opening library at: ':<30} {_library_path}")
    omc.sendExpression(f"parseFile(\"{_library_path}\", \"UTF-8\")")
    res = omc.sendExpression(f"loadFile(\"{_library_path}\", \"UTF-8\")")
    if res:
        print(f"(Test): OpenIPSL library (version {_version}) loaded successfully\n")
    else:
        raise ValueError(f"(Test): OpenIPSL library (version {_version}) could not be loaded. Verify your path")

    ##########################################################################
    #################### CHANGING POWER FLOW RECORD ##########################
    ##########################################################################

    # Testing model with base case power flow
    pf_name = "PF_best_00006"
    pf_path = f"{_model_package}.PF_Data.{pf_name}"
    pf_modifier = f"pf(redeclare record PowerFlow =\n" + " "*8 + f"{pf_path})"

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
    if res:
        print(f"(Test): Model in {_model_path} loaded successfully\n")

    # Changing the name of the result according to the power flow
    _simSettings += f",fileNamePrefix=\"{_model_package}_{pf_name}\""

    ##########################################################################
    ################### OPENING AND SIMULATING MODEL #########################
    ##########################################################################

    # Changing working directory
    res = omc.sendExpression(f"cd(\"{_working_directory}\")")
    if os.path.abspath(res) == _working_directory:
        print(f"(Test): Working directory changed to {res}\n")
    else:
        raise ValueError(f"(Test): Working directory could not be changed to {_working_directory}")

    # Performance enhancing statements
    omc.sendExpression("setCommandLineOptions(\"-n=1\")") # using only one core
    if _method == 'dassl':
        omc.sendExpression("setCommandLineOptions(\"--daeMode\")")

    # Checking model (for debugging purposes)
    print(f"(Test): Checking model {_model_package}.{_model_name}\n")
    omc.sendExpression(f"instantiateModel({_model_package}.{_model_name})")
    res = omc.sendExpression(f"checkModel({_model_package}.{_model_name})")
    print(res + "\n")

    # Simulating model
    res = omc.sendExpression(f"simulate({_model_package}.{_model_name},{_simSettings})")
    print(res)

    print(f"{'':-^45}")
    print("Simulation results")
    print(f"{'':-^45}")
    print(f"{'Model name:':<30} {_model_name} in package {_model_package}")
    print(f"{'OpenIPSL version:':<30} {_version}")
    print(f"{'Total time: ':<30} {res['timeTotal']:.5f} s")
    print(f"{'Compilation time:':<30} {res['timeCompile']:.5f} s")
    print(f"{'Simulation time:':<30} {res['timeSimulation']:.5f} s")

    # Closing OM process
    omc.sendExpression("quit()")

    # Remove all files but the '.mat' files
    for file_object in os.listdir(_working_directory):
        file_object_path = os.path.join(_working_directory, file_object)
        if not file_object_path.endswith(".mat"):
            os.remove(file_object_path)
