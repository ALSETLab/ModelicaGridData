import datetime

PREV_NOW = datetime.datetime.now() + datetime.timedelta(days = -1)
CURRENT_DATE = f"{PREV_NOW.month:02d}/{PREV_NOW.day:02d}/{PREV_NOW.year}"
CURRENT_YEAR = datetime.datetime.now().year

NYISO_ZONES = ['CAPITL', 'CENTRL', 'DUNWOD', 'GENESE', 'HUD VL', 'LONGIL', 'MHK VL', 'MILLWD', 'N.Y.C.', 'NORTH', 'WEST', 'NYISO']
# HELP TO FILES IN 'val_pf' FUNCTION

HELP_FUNCTION = "Function to perform: `nyiso` for downloading NYISO data, `run_pf` to download time-series power flow with NYISO data, `val_pf` to validate power flow results, `run_sim` to run time-domain simulations using different power flows, `extract` to post-process the experiment results."

# HELP TO FILES IN 'nyiso' FUNCTION
HELP_YEAR = "(`nyiso`) Year from which the NYISO data download begins (defaults to current year)"
HELP_PATH = "(`nyiso`) Path for the files downloaded from NYISO. Defaults to './data'"

# HELP TO FILES IN 'run_pf' FUNCTION
HELP_VERSION = "(`run_pf`, `val_pf`, and `extract`) OpenIPSL version to generate the time-series power flows. Also required for power flow validation and dynamic simulation. Defaults to `1.5.0`"
HELP_WINDOW = "(`run_pf`) Length of the time window to run the power flow computation (`day`, `week`, `month`). Defaults to `day`"
HELP_DATE = "(`run_pf`) Date to run the power flow. Must be passed in `mm/dd/YYYY` format for `day` and `week` (it can be any day of the week), and `mm/YYYY` for month. Defaults to `current day - 1`"
HELP_LOADS = "(`run_pf`) Number of loads to change according to the time series data. Defaults to `12` (maximum 12 loads will be varied simultaneously)"
HELP_DELETE = "(`run_pf`) Delete previous power flow results. Defaults to `True`"
HELP_SEED = "(`run_pf`) Seed value for load randomization. Defaults to `0`"
HELP_MODEL = "(`run_pf`, `val_pf`, `run_sim`, and `extract`) Model that will be used for the routine. Defaults to `IEEE14`. Note that it corresponds to the name of the package of the OpenIPSL model"

# HELP TO FILES IN 'val_pf' and 'run_sim' FUNCTION
HELP_TOOL = "(`val_pf`, `run_sim`, and `extract`) Tool to run time-domain simulations. `OM` for OpenModelica and `dymola` for Dymola. Defaults to `dymola`"
HELP_PROC = "(`val_pf` and `run_sim`) Number of processes (i.e., parallel serial instances) executed simultaneously"
HELP_CORES = "(`val_pf` and `run_sim`) Number of cores to be used inside a process (i.e., serial parallel simulation)"
HELP_PC = "(`val_pf` and `run_sim`) Type of PC to execute the program. Input `vm` for virtual machine and `pc` for physical machine. Defaults to `pc`"

# HELP TO FILES IN 'run_sim' FUNCTION
HELP_POWER_FLOWS = "(`run_sim`) Number of power flows to run dynamic simulations. Defaults to all available"
HELP_SCENARIOS = "(`run_sim`) Number of contingency scenarios to run the dynamic simulations. Defaults to all available or `50`, for large systems"
HELP_NSIM = "(`run_sim`) Maximum number of scenarios. Defaults to 1000."

# HELP TO FILES IN `extract` FUNCTION
HELP_MU = "(`extract`) Mean of additive Gaussian noise added to the measurements. Defaults to 0.0."
HELP_SIGMA = "(`extract`) Standard deviation of additive Gaussian noise added to the measurements. Defaults to 0.01."
