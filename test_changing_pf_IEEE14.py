from dymola.dymola_interface import DymolaInterface

import numpy as np
import matplotlib.pyplot as plt
import sdf
import os
import scipy.linalg as sl

dymolaInstance = DymolaInterface()

# Loading library
library_path = os.path.abspath("Z:\Documents\Dymola\Library\OpenIPSL_1.5\OpenIPSL\package.mo")
result = dymolaInstance.openModel(library_path)
if result:
    print("Library opened")

# Opening model
model_path = os.path.abspath(os.path.join(os.getcwd(), 'models/_old/IEEE14/package.mo'))
print(model_path)
result = dymolaInstance.openModel(model_path)
if result:
    print("Model opened successfully")

working_directory = os.path.abspath("C:/temp/Dymola")
if not os.path.exists(working_directory):
    os.makedirs(working_directory)

# Changing working directory
result = dymolaInstance.cd(working_directory)
if result:
    print("Directory changed successfully")

power_flows = ["PF_best_00002", "PF_best_00006", "PF_load_00007"]

dymolaInstance.ExecuteCommand("Advanced.NumberOfCores = 2")
dymolaInstance.ExecuteCommand("Advanced.TranslationInCommandLog = true")

eigs_scenario = dict.fromkeys(power_flows)

for pf_name in power_flows:

    pf_path = f"IEEE14.PF_Data.{pf_name}"
    pf_modifier = f"pf(redeclare record PowerFlow = {pf_path})"

    # Modifying the model using the class constructor
    # result = dymolaInstance.simulateModel(f"IEEE14.IEEE14_Base_Case({pf_modifier})",
    #     stopTime = 5,
    #     resultFile = f"IEEE14_{pf_name}",
    #     numberOfIntervals = 1000)

    result = dymolaInstance.translateModel(f"IEEE14.IEEE14_Base_Case({pf_modifier})")
    dymolaInstance.ExecuteCommand("Advanced.Define.DAEsolver = true")
    result = dymolaInstance.simulateModel(f"IEEE14.IEEE14_Base_Case({pf_modifier})",
        stopTime = 5,
        resultFile = f"IEEE14_{pf_name}",
        numberOfIntervals = 1000)


    # Using simulateExtendedModel
    # result = dymolaInstance.simulateExtendedModel(f"IEEE14.IEEE14_Base_Case",
    #     resultFile = f"IEEE14_{pf_name}",
    #     numberOfIntervals = 1000,
    #     initialNames = ["IEEE14.IEEE14_Base_Case.pf"],
    #     initialValues = pf_path)
    if result:
        print("Simulation successful")
        # print(values)
        result_path = os.path.join(working_directory, f"IEEE14_{pf_name}.mat")
        sdfData = sdf.load(result_path)

        tData = sdfData["Time"]
        v_mag2 = sdfData["Bus_02"]["V"]
        v_mag4 = sdfData["Bus_04"]["V"]

        t = np.asarray(tData.data)
        v_mag2np = np.asarray(v_mag2.data)
        v_mag4np = np.asarray(v_mag4.data)

        print(f"v_mag2 ({pf_name}): {v_mag2np[-1]:.6f}")
        print(f"v_mag2 ({pf_name}): {v_mag4np[-1]:.6f}")
    else:
        print("Simulation fails")

    # Linearization
    dymolaInstance.ExecuteCommand("Advanced.Define.DAEsolver = false")
    _linout = f"IEEE14_dslin_final"
    reslin = dymolaInstance.linearizeModel(f"IEEE14.IEEE14_Base_Case({pf_modifier})",
        stopTime = 5,
        numberOfIntervals = 1000,
        resultFile = _linout)

    if reslin:
        print(f"Linearization successful")
        # Reading ABCD matrices
        A_dim = dymolaInstance.readMatrixSize(os.path.join(working_directory, _linout) + '.mat', "ABCD")
        A = dymolaInstance.readMatrix(os.path.join(working_directory, _linout) + '.mat', "ABCD", A_dim[0], A_dim[1])
        A = np.array(A)

        # Getting system eigenvalues at final state
        eigs_scenario[pf_name] = sl.eig(A)[0]

for eig in eigs_scenario:
    if eigs_scenario[eig] is not None:
        plt.scatter(np.real(eigs_scenario[eig]), np.imag(eigs_scenario[eig]))

plt.show()

#
# dymolaInstance.simulateModel("Modelica.Mechanics.MultiBody.Examples.Elementary.DoublePendulum",
#     resultFile = "DoublePendulum_1")
#
# result_path = os.path.join(working_directory, "DoublePendulum_1.mat")
# sdfData = sdf.load(result_path)
#
# tData = sdfData["Time"]
# revolute1Data = sdfData["revolute1"]["w"]
# revolute2Data = sdfData["revolute2"]["w"]
#
# t = np.asarray(tData.data)
# revolute1np = np.asarray(revolute1Data.data)
# revolute2np = np.asarray(revolute2Data.data)
#
# plt.plot(t, revolute1np, t, revolute2np)
# plt.show()
#
# dymolaInstance.close()
# dymolaInstance = None
