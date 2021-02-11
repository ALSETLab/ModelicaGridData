from OMPython import OMCSessionZMQ
from OMPython import ModelicaSystem

import os
import platform
import argparse
import yaml

parser = argparse.ArgumentParser()

parser.add_argument("version", help = "OpenIPSL version to run the test (either '1.5.0' or '2.0.0')")

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
        _working_directory = os.path.abspath(val_params['om_working_directory_windows'])

        if _version == '1.5.0':
            _library_path = os.path.abspath(val_params[''])
        elif _version == '2.0.0':
            _library_path = os.path.abspath(val_params[''])

    elif platform.system() == 'Linux':
        _working_directory = os.path.abspath("some directory")
        if _version == '1.5.0':
            pass
        else:
            pass


    if not os.path.exists(_working_directory):
        os.makedirs(_working_directory)

    print(f"(Test): Changing working directory to {_working_directory}")
    omc.sendExpression(f"cd(\"{_working_directory}\")")

    # Opening library
    omc.sendExpression(f"")

    # Remove temporary working directory
