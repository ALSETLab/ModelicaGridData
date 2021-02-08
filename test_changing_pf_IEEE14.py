from dymola.dymola_interface import DymolaInterface

import numpy as np
import matplotlib.pyplot as plt
import sdf
import os

dymolaInstance = DymolaInterface()

# Loading library
library_path = os.path.abspath("Z:\Documents\Dymola\Library\OpenIPSL_1.5\OpenIPSL\package.mo")
result = dymolaInstance.openModel(library_path)
if result:
    print("Library opened")

# Opening model
model_path = os.path.abspath("Z:\Documents\GitHub_Repositories\_maintained\Papers\Trajectory_Generation_Tool\IEEE14\_old\IEEE14\package.mo")
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

pf_name = "PF_best_00002"
pf_path = f"IEEE14.PF_Data.{pf_name}"
pf_modifier = f"pf(redeclare record PowerFlow = {pf_path})"

dymolaInstance.ExecuteCommand("Advanced.NumberOfCores = 2")
dymolaInstance.ExecuteCommand("Advanced.TranslationInCommandLog = true")
dymolaInstance.ExecuteCommand("Advanced.Define.DAEsolver = true")

result = dymolaInstance.simulateModel(f"IEEE14.IEEE14_Base_Case({pf_modifier})",
    stopTime = 5,
    resultFile = f"IEEE14_{pf_name}",
    numberOfIntervals = 1000)

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

    plt.plot(t, v_mag2np, t, v_mag4np)
    plt.show()
else:
    print("Simulation fails")

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
