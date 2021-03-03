import os

from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException
import scipy.linalg as sl

from .open_line import *
from .label_scenario import *
from .trip_line import *

import pandas as pd
import platform

def time_domain_simulation(model_info, scenarios, dymola_path = None, n_proc = 1,
                            verbose = True, simulation_setup = None):
    '''

    '''




    # Assignating an empty object to the variable dymola
    dymola = None

    if simulation_setup is None:
        # Default simulation settings
        simulation_setup = {'startTime' : 0.0,
                            'stopTime' : 20.0,
                            'numberOfIntervals' : 1000,
                            'method' : 'dassl',
                            'tolerance' : 1e-6,
                            'fixedstepsize': 0.01,
                            'n_cores' : 1,
                            'resultFile_TD' : 'dsres',
                            'resultFile_Lin' : 'dslin',
                            'clearing_time' : 0.1}

    model_name = model_info['model_name']
    path_wd = os.path.abspath(model_info['path_wd'])
    library_path = os.path.abspath(model_info['library_path'])
    model_path = os.path.abspath(model_info['model_path'])

    # Creating a dictionary for the number of scenarios
    sc_labels_init = dict.fromkeys(range(1, len(scenarios)))
    sc_labels_final = dict.fromkeys(range(1, len(scenarios)))
    try:
        # Creating a Dymola instance. Notice that we have to pass the path of the Dymola executable since we're working
        # on Linux
        print(f"{n_proc}: Creating and Starting Dymola instance")

        # Validation to instantiate the Dymola Interface based on the operating system
        if platform.system() == 'Windows':
            dymola = DymolaInterface()
        elif platform.system() == 'Linux':
            if dymola_path is None:
                raise f"{n_proc}: No path to the dymola executable was specified"
            else:
                dymola = DymolaInterface(dymola_path)

        res = dymola.openModel(library_path)
        if res and verbose: print(f"{n_proc}: Library Opened")

        # Opening model
        res = dymola.openModel(model_path)
        if res and verbose: print(f"{n_proc}: Model Opened")

        # Showing the port using by the dymola instance
        if verbose: print(f"{n_proc}: Using Dymola port" + str(dymola._portnumber))
        if verbose: print(f"{n_proc}: Changing working directory to " + path_wd)

        # In case the specified directory does not exist, we create it. If the directory exists, it will return an error
        # However, this error is not important
        try:
            if not os.path.exists(path_wd):
                os.makedirs(path_wd)
        except OSError as ex:
            print(f"{n_proc}: " + str(ex))

        result = dymola.cd(path_wd)
        if not result:
            if verbose: print(f"{n_proc}: Failed to change working directory")

        # Use more cores per process
        dymola.ExecuteCommand("Advanced.TranslationInCommandLog = true")
        dymola.ExecuteCommand(f"Advanced.NumberOfCores = {simulation_setup['n_cores']}")

        # Add a command

        for n_scenario, scenario in enumerate(scenarios):

            # Initial linearization
            res_init_lin = dymola.linearizeModel(trip_line(model_name, scenario),
                                        startTime = 0.0,
                                        stopTime = 0.0,
                                        fixedstepsize = simulation_setup["fixedstepsize"],
                                        method = simulation_setup["method"],
                                        tolerance = 0.0001,
                                        resultFile = f"{simulation_setup['resultFile_Lin']}_Init_{n_scenario + 1}")

            if res_init_lin:
                if verbose: print(f"{n_proc}: Initial linearization (sc {n_scenario + 1}) successful")
                A_dim = dymola.readMatrixSize(os.path.join(path_wd, f"{simulation_setup['resultFile_Lin']}_Init_{n_scenario + 1}.mat"),
                                                "ABCD")
                if verbose: print(f"{n_proc}: A = {A_dim}")
                A = dymola.readMatrix(os.path.join(path_wd, f"{simulation_setup['resultFile_Lin']}_Init_{n_scenario + 1}.mat"),
                                                "ABCD", A_dim[0], A_dim[1])

                # Saving eigenvalues of the scenario at initialization
                eigs_scenario = sl.eig(A)[0]
                np.save(os.path.join(path_wd, f"eigs_sc_{n_scenario + 1}.npy"), eigs_scenario)

                # Labels for the eigenvalues at initialization
                sc_labels_init[n_scenario + 1] = label_scenario(A)
                if verbose: print(f"{n_proc}: Eigenvalues and labels at init saved (sc {n_scenario + 1})")
            else:
                if verbose: print(f"{n_proc}: Initial linearization failed. It might be due to unstable behavior\nAssigning '0' as label")
                sc_labels_init[n_scenario + 1] = 0

            # Dynamical simulation
            res_dyn_sim = dymola.simulateModel(open_line(model_name, scenario, simulation_setup['stopTime'], simulation_setup['clearing_time']),
                                          startTime = simulation_setup['startTime'],
                                          stopTime = simulation_setup['stopTime'],
                                          numberOfIntervals = simulation_setup['numberOfIntervals'],
                                          method = simulation_setup['method'],
                                          tolerance = simulation_setup['tolerance'],
                                          fixedstepsize = simulation_setup['fixedstepsize'],
                                          resultFile = f"{simulation_setup['resultFile_TD']}_{n_scenario + 1}")

            if res_dyn_sim and verbose: print(f"{n_proc}: Simulation (sc {n_scenario + 1}) Completed")

            res_imp_cond = dymola.importInitial(os.path.join(path_wd, 'dsfinal.txt'))

            if res_imp_cond and res_dyn_sim:
                if verbose: print(f"{n_proc}: Final simulation conditions (sc {n_scenario + 1}) imported")

                res_fin_lin = dymola.linearizeModel(trip_line(model_name, scenario),
                                           startTime = 0.0,
                                           stopTime = 0.0,
                                           fixedstepsize = simulation_setup['fixedstepsize'],
                                           method = simulation_setup['method'],
                                           tolerance = 0.0001,
                                           resultFile = f"{simulation_setup['resultFile_Lin']}_Final_{n_scenario + 1}")
                if res_fin_lin:
                    if verbose: print(f"{n_proc}: Linearization (sc {n_scenario + 1}) successful")
                    A_dim = dymola.readMatrixSize(os.path.join(path_wd, f"{simulation_setup['resultFile_Lin']}_Final_{n_scenario + 1}.mat"), "ABCD")
                    if verbose: print(f"{n_proc}: A = {A_dim}")
                    A = dymola.readMatrix(os.path.join(path_wd, f"{simulation_setup['resultFile_Lin']}_Final_{n_scenario + 1}.mat"), "ABCD", A_dim[0], A_dim[1])
                    sc_labels_final[n_scenario + 1] = label_scenario(A)
            else:
                if verbose: print(f"{n_proc}: Simulation failed. It might be due to unstable behavior\nAssigning '0' as label")
                sc_labels_final[n_scenario + 1] = 0

    except DymolaException as ex:
        print(f"{n_proc}: Error:" + str(ex))
    finally:
        if dymola is not None:
            dymola.close()
            dymola = None

        # Saving labels
        sc_keys = sc_labels_final.keys()

        sc_label_df_init = pd.DataFrame(index = sc_keys, columns = ["Label"])
        sc_label_df_init["Label"] = [sc_labels_init[x] for x in sc_keys]
        sc_label_df_init.to_csv(os.path.join(path_wd, "labels_sc_initial.csv"))

        sc_label_df_final = pd.DataFrame(index = sc_keys, columns = ["Label"])
        sc_label_df_final["Label"] = [sc_labels_final[x] for x in sc_keys]
        sc_label_df_final.to_csv(os.path.join(path_wd, "labels_sc_final.csv"))
