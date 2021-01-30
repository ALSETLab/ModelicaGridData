from utils import *

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import datetime
import random

from GridCal.Engine import *
from GridCal.Engine.IO.file_handler import FileOpen
from GridCal.Engine.Devices.shunt import Shunt
from GridCal.Engine.Simulations.PowerFlow.time_series_driver import TimeSeries
from GridCal.Engine.Simulations.PowerFlow.power_flow_driver import PowerFlowDriver

import os

# Absolute path to the `.mo` file of the model
data_path = os.path.abspath(os.path.join(os.getcwd(), "IEEE14", "_old", "IEEE14"))

path_mo_file = os.path.abspath(os.path.join(data_path, "IEEE14_Base_Case.mo"))

create_pf_records("IEEE14", 
                  path_mo_file, 
                  data_path,
                 openipsl_version = '1.5.0')

grid = None

# Grid model in GridCal
file_handler = FileOpen(os.path.abspath(os.path.join(data_path, 
                                                     "PSSE_Files", 
                                                     "IEEE14_Base_Case.raw")))

# Creating grid object
grid = file_handler.open()

# Power flow options
options = PowerFlowOptions(SolverType.NR,
                           verbose = True,
                           initialize_with_existing_solution = True,
                           multi_core = False,
                           tolerance = 1e-9,
                          max_iter = 99,
                          control_q = ReactivePowerControlMode.Direct)

pf = PowerFlowDriver(grid, options)

pf.run()
    
gridcal2rec(grid = grid, pf = pf, model_name = 'IEEE14', 
    data_path = data_path,
    pf_num = 0, export_pf_results = False, 
    is_time_series = False, openipsl_version = '1.5.0')