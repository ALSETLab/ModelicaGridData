from OMPython import OMCSessionZMQ
from OMPython import ModelicaSystem
import os
import subprocess

def om_simulation(pf_list, sim_params):

	# root_path = model_info['root_path']
	# library_path = model_info['library_path']
	# model_path = model_info['model_path']
	# model_name = model_info['model_name']
	# output_path = model_info['output_path']
    #
	# omc = OMCSessionZMQ()
	# print(omc.sendExpression("getVersion()"))
    #
	# try:
	# 	if not os.path.exists(output_path):
	# 		os.makedirs(output_path)
	# 		print("Working directory created")
	# except OSError as ex:
	# 	print("1: Failed to create folder for working directory")
    #
	# # Changing working directory
	# omc.sendExpression(f"cd(\"{output_path}\")")
    #
	# # Opening library
	# omc.sendExpression(f"parseFile(\"{library_path}\", \"UTF-8\")")
	# omc.sendExpression(f"loadFile(\"{library_path}\", \"UTF-8\", true)")
	# omc.sendExpression("instantiateModel(OpenIPSL)")
    #
	# if solver == "dassl":
	# 	omc.sendExpression("setCommandLineOptions(\"daeMode=true\")")
	# 	print("DAE setting changed for dassl")
    #
    #
	# # Setting the number of cores for computation to 1
	# omc.sendExpression("setCommandLineOptions(\"-n=1\")")
    #
	# if solver in ["euler", "trapezoid", "rungekutta"]:
	# 	print("Running simulation...")
	# 	flag = omc.sendExpression(f"simulate({model_name},stopTime=120,method=\"{solver}\",numberOfIntervals=240000,tolerance=1e-06)")
	# 	print(flag)
	# else:
	# 	print("Running simulation...")
	# 	flag = omc.sendExpression(f"simulate({model_name},stopTime=120,method=\"{solver}\",numberOfIntervals=5000,tolerance=1e-06)")
	# 	print(flag)
    #
	# omc.sendExpression("quit()")
    #
	# if omc is not None:
	# 	omc = None
