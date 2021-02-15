from OMPython import OMCSessionZMQ
from OMPython import ModelicaSystem

import os
import platform
import argparse
import yaml

parser = argparse.ArgumentParser()

parser.add_argument("version", help = "OpenIPSL version to run the test (either '1.5.0' or '2.0.0')")

args = parser.parse_args()

_version = args.version

if __name__ == "__main__":

    if _version not in ['1.5.0', '2.0.0']:
        raise ValueError('Version not supported')

    # Loading validation parameters
    with open(r'val_parameters.yaml') as f:
        val_params = yaml.load(f, Loader = yaml.FullLoader)

    print("Test OpenModelica")
    print("========")

    # Creating OMC session
    omc = OMCSessionZMQ()

    _OMversion = omc.sendExpression("getVersion()")
    print(f"(Test): Working with: {_OMversion:<30}")

    # Creating working directory
    if platform.system() == 'Windows':

        _working_directory = os.path.join(os.path.abspath(val_params['om_working_directory_windows']), '_test')

        if _version == '1.5.0':
            _library_path = os.path.abspath(val_params['openipsl_path_windows_old'])
            _model_path = os.path.join(os.getcwd(), os.path.abspath(val_params['model_path_old']))
        elif _version == '2.0.0':
            _library_path = os.path.abspath(val_params['openipsl_path_windows_new'])
            _model_path = os.path.join(os.getcwd(), os.path.abspath(val_params['model_path_new']))

    elif platform.system() == 'Linux':

        _working_directory = os.path.join(os.path.abspath(val_params['om_working_directory_linux']), '_test')

        if _version == '1.5.0':
            _library_path = os.path.abspath(val_params['openipsl_path_linux_old'])
            _model_path = os.path.join(os.getcwd(), os.path.abspath(val_params['model_path_old']))
        else:
            _library_path = os.path.abspath(val_params['openipsl_path_linux_new'])
            _model_path = os.path.join(os.getcwd(), os.path.abspath(val_params['model_path_old']))

    if not os.path.exists(_working_directory):
        os.makedirs(_working_directory)
        print(f"Working directory created: {_working_directory}")

    # Extracting parameters from '.yaml' file
    _model_package = val_params['model_package']
    _model_name = val_params['model_name']
    _startTime = val_params['startTime']
    _stopTime = val_params['stopTime']
    _method = val_params['method']
    _numberOfIntervals = val_params['numberOfIntervals']
    _tolerance = val_params['tolerance']

    _simSettings = f"startTime={_startTime},stopTime={_stopTime}" \
        + f",tolerance={_tolerance},method=\"{_method}\",numberOfIntervals={_numberOfIntervals}"

    # Opening library
    print(f"(Test): Opening library at {_library_path}")
    omc.sendExpression(f"parseFile(\"{_library_path}\", \"UTF-8\")")
    res = omc.sendExpression(f"loadFile(\"{_library_path}\", \"UTF-8\")")
    if res:
        print(f"(Test): OpenIPSL library (version {_version}) loaded successfully\n")
    else:
        raise ValueError(f"(Test): OpenIPSL library (version {_version}) could not be loaded. Verify your path")

    # Opening model
    omc.sendExpression(f"parseFile(\"{_model_path}\", \"UTF-8\")")
    res = omc.sendExpression(f"loadFile(\"{_model_path}\", \"UTF-8\")")
    if res:
        print(f"(Test): Model in {_model_path} loaded successfully\n")

    # Checking model (for debugging purposes)
    print(f"(Test): Checking model {_model_package}.{_model_name}\n")
    omc.sendExpression(f"instantiateModel({_model_package}.{_model_name})")
    res = omc.sendExpression(f"checkModel({_model_package}.{_model_name})")
    print(res)

    # Changing working directory
    res = omc.sendExpression(f"cd(\"{_working_directory}\")")
    print(res)
    if res:
        print(f"(Test): Working directory changed to {res}\n")
    else:
        raise ValueError(f"(Test): Working directory could not be changed to {_working_directory}")

    # Simulating model
    res = omc.sendExpression(f"simulate({_model_package}.{_model_name},{_simSettings})")
    print(res)
    # Pretty print the simulation results with OM

    # Remove all files but the '.mat' files
