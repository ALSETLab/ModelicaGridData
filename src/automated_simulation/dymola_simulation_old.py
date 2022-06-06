from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException

import numpy as np
import sdf
import os

import re
import shutil
import platform

from .open_line import *
from IPython.display import clear_output

def simulate_system(model, path_wd, dymola_object, scenarios, verbose = True):
    '''
    Description:

    This function performs a linearization around a given equilibrium point of a nonlinear Dymola model. It employs an external
    Dymola object (that is, this does not instantiate a Dymola object but requires an existing one). The output of the
    linearization is written in an external working directory whose path has to be specified as an argument.

    This function is intented to linearize automatically a large number of scenarios that are specified in the list
    called "scenarios".

    Arguments:

    - model: name of the model we want to linearize
    - path_wd: path of the working directory where the simulation results are going to be exported
    - dymola_object: externally instantiated Dymola object
    - scenarios: list of scenarios on which a linearization will be performed
    - verbose: print information while running the process. It defaults to True.

    '''

    # Retrieving model name
    model_name = model
    # Retrieving dymola object
    dymola = dymola_object
    # Print information
    print_info = verbose

    # Variable for the number of successful simulations
    a = 1

    dymola.ExecuteCommand("Advanced.TranslationInCommandLog = true")
    dymola.ExecuteCommand("Advanced.Define.DAEsolver = true")

    # Container for eigenvalues
    eigs_model = []

    for scenario in scenarios:
        try:
            if verbose:
                clear_output()
                print("{t:-^120}".format(t= '-'))
                print("Simulation {}: {}".upper().format(a, ", ".join(scenario)))
            result = dymola.simulateModel(open_line(model_name, scenario),
                                 startTime = 0.0,
                                 stopTime = 120,
                                 numberOfIntervals = 0,
                                 outputInterval = 0.001,
                                 method = "Dassl",
                                 tolerance = 1e-06,
                                 resultFile = path_wd + "{}".format(a))
            if result:
                A_dim = dymola.readMatrixSize(path_wd + "{}.mat".format(a), "ABCD")
                A = dymola.readMatrix(path_wd + "{}.mat".format(a), "ABCD", A_dim[0], A_dim[1])
                eigs_model.append(sl.eig(A)[0])
                a += 1
                if print_info:
                    print("Linearization successful")
        except:
            if (print_info):
                print("{t:-^120}".format(t= '-'))
                print("Linearization failed for the following contingency: \n{}".format(", ".join(test_10[4])))

    # Exporting eigenvalues as a numpy array
    np.save(path_wd + "_all_eigs.npy", np.array(eigs_model))

    return result

def dymola_simulation(model_info, scenarios, path, path_wd, process_num = 1, verbose = False):
    '''
    Description:

    This function instantiates a Dymola object and runs a linearization of a model specified by the user. The code was adapted
    from the example provided together with the Dymola documentation to be suitable for a parallel computing environment.

    An execution of this function produces the results of the linearize_system() function. However, it can be employed as a
    template for other Dymola functionalities.

    Arguments:

    - model_info: dictionary whose entries are the root path (i.e., the root of the folder containing the OpenIPSL library and
    the models to linearize), the path of the model, of the library and the name of the model
    - path: path of the dymola executable to instantiate an object
    - path_wd: path of the working directory. Each Dymola instance must have a different working directory!
    - process_num: number of the thread. It defaults to 1.
    - verbose: defaults to `False`.

    '''

    # Retrieving model information
    root_path = model_info['root_path']
    library_path = model_info['library_path']
    model_path = model_info['model_path']
    model_name = model_info['model_name']
    output_path = model_info['output_path']

    dymola = None

    try:
        if verbose:
            print(f"{process_num}: Creating and starting Dymola instance")

        # Creating dymola instance
        dymola = DymolaInterface(dymolapath = path)

        if verbose:
            print(f"{process_num}: Using Dymola port:" + str(dymola._portnumber))
            print(f"{process_num}: Changing working directory to: {path_wd}")
        try:
            if not os.path.exists(output_path):
                os.makedirs(output_path)
                print("Output directory created")
        except OSError as ex:
            print(f"{process_num}: Failed to create an output directory")
        try:
            os.makedirs(path_wd)
        except OSError as ex:
            print(f"{process_num}: Failed to create folder for working directory")

        # CHANGING THE PATH TO OPENING THE LIBRARY AND THE MODEL
        result = dymola.cd(root_path)

        if not result:
            print("1: Failed to change working directory")

        # Opening OpenIPSL library
        dymola.openModel(library_path)
        if result and verbose:
            print("Library opened")

        # Opening Ricardo's model
        dymola.openModel(model_path)
        if result and verbose:
            print("Model opened")

        # CHANGING THE PATH FOR THE WORKING DIRECTORY
        # Note that the model is already opened

        result = dymola.cd(path_wd)
        if not result:
            print(f"{process_num}: Failed to change working directory")

        result = simulate_system(model_name,
                                 path_wd,
                                 dymola,
                                 scenarios,
                                 verbose)

        if not result:
            print(f"{process_num}: Simulation failed")
            log = dymola.getLastErrorLog()
            print(log)

        print(f"{process_num}: OK")

    except DymolaException as ex:
        if verbose:
            print(f"{process_num}: Error:" + str(ex))
        else:
            pass
    finally:
        if dymola is not None:
            dymola.close()
            dymola = None
