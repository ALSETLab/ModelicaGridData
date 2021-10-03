import os
import warnings
import argparse
import datetime
import sys
import multiprocessing as mp
import psutil
import time
from uuid import uuid4

# Importing global constants and variables useful for the execution of the code
from utils import *

LIST_OF_MODELS = ['AVRI', 'IEEE9', 'IEEE14', 'SMIB', 'TwoAreas']

parser = argparse.ArgumentParser()
parser.add_argument("function", help = HELP_FUNCTION)

# Arguments to `nyiso` (download NYISO data)
parser.add_argument("--year", help = HELP_YEAR, type = int)
parser.add_argument("--path", help = HELP_PATH)

# Arguments to `run_pf`
parser.add_argument("--version", help = HELP_VERSION) # also needed for `val_pf`
parser.add_argument("--window", help = HELP_WINDOW)
parser.add_argument("--date", help = HELP_DATE)
parser.add_argument("--loads", help = HELP_LOADS, type = int)
parser.add_argument("--delete", help = HELP_DELETE, type = bool)
parser.add_argument("--seed", help = HELP_SEED, type = int)
parser.add_argument("--model", help = HELP_MODEL) # also needed for `val_pf`, `run_sim`, and `extract`

# Arguments to `val_pf` and `run_sim`
parser.add_argument("--tool", help = HELP_TOOL) # also needed for extract
parser.add_argument("--proc", help = HELP_PROC, type = int)
parser.add_argument("--cores", help = HELP_CORES, type = int)

# Arguments to `run_sim`
parser.add_argument("--n_pf", help = HELP_POWER_FLOWS, type = int)
parser.add_argument("--n_sc", help = HELP_SCENARIOS, type = int)

args = parser.parse_args()

_function = args.function

if __name__ == "__main__":

    # Validating function and arguments
    if args.function:
        _function = args.function
        if _function not in ['nyiso', 'run_pf', 'val_pf', 'run_sim', 'extract']:
            raise ValueError('Function not available')
        else:

            ################################################
            ## DOWNLOADING NYISO DATA
            ################################################

            if _function == 'nyiso':

                # Importing dependencies (just those required to speed up code execution)
                with warnings.catch_warnings():
                    warnings.simplefilter("ignore")
                    from utils.nyiso_data import *

                print(f"\n{'':=^45}")
                print(f"{'DOWNLOADING NYISO DATA':^45}")
                print(f"{'':=^45}\n")

                if args.year:
                    _year = args.year
                else:
                    _year = CURRENT_YEAR
                    print(f"NYISO data download starts by default from {_year}\n")

                if args.path:
                    _path = args.path
                else:
                    _path = os.path.join(os.getcwd(), "data")
                    print(f"Download path for NYISO data not specified. Defaulting to: \n{_path}\n")

                download_nyiso_data(start_year = _year, destination_folder = _path, verbose = False)

                print(f"\nDownload NYISO data from {_year} to {CURRENT_YEAR} complete")

            ################################################
            ## RUNNING TIME-SERIES POWER FLOW
            ################################################

            if _function == 'run_pf':

                # Importing dependencies (just those required to speed up code execution)
                with warnings.catch_warnings():
                    warnings.simplefilter("ignore")
                    from utils.pf2rec import *
                    from utils.nyiso_data import *

                print(f"\n{'':=^45}")
                print(f"RUNNING TIME-SERIES POWER FLOW WITH NYISO DATA")
                print(f"{'':=^45}\n")

                if args.version:
                    _version = args.version
                    if _version not in ['1.5.0', '2.0.0']:
                        raise ValueError("Not compatible OpenIPSL version")
                else:
                    _version = '1.5.0'
                    print(f"OpenIPSL version defaults to {_version}\n")

                if args.model:
                    _model = args.model
                    if _model not in LIST_OF_MODELS:
                        raise ValueError("Model not available")
                else:
                    _model = 'IEEE14'
                    print(f"Model not specified. Defaulting to {_model}")

                _model_name = f"{_model}_Base_Case"

                if _version == '2.0.0':
                    print("Warning: All quantities in OpenIPSL > 2.0.0 are in SI units. I will do my best to parse them correctly. Proceed with caution.\n")
                    _model_lib = '_new'
                elif _version == '1.5.0':
                    _model_lib = '_old'

                if args.window:
                    _window = args.window
                    if _window not in ['day', 'week', 'month']:
                        raise ValueError("Time window for power flow computation not valid")
                else:
                    _window = 'day'
                    print(f"Time window defaults to {_window}\n")

                if args.loads:
                    _loads = args.loads
                    if _loads > 11:
                        # Making sure the number of loads does not exceed the maximum number of zones in NYISO
                        print(f"Warning: Specified loads to vary ({_loads}) exceeds the number of NYISO zones. Defaulting to 11.")
                        _loads = 11
                else:
                    _loads = 5
                    print(f"Number of loads to vary defaults to {_loads}")

                if args.delete:
                    _delete = args.delete
                else:
                    print(f"Deleting previous power flow results (entire 'PF_Data' subfolder). Change --delete to 'False' to keep them")
                    _delete = True

                if args.date:
                    _date = args.date
                    # Function to validate date
                    if validate_date(_date, _window):
                        pass
                    else:
                        raise ValueError("Invalid date. Date might be in the future")
                    pass
                else:
                    # Date defaults to the day before today
                    _date = f"{PREV_NOW.month:02d}/{PREV_NOW.day:02d}/{PREV_NOW.year}"
                    print(f"Date defaults to {_date}\n")

                if args.seed:
                    _seed = args.seed
                else:
                    _seed = 0
                    print(f"No seed value specified. Defaults to {_seed}")

                # Getting NYISO data
                load_profiles = dict.fromkeys(NYISO_ZONES)

                print("Loading power flow data from NYISO:")
                for lp in tqdm(load_profiles):
                    data = dict.fromkeys(['load', 'best', 'worst'])

                    if _window == 'day':
                        time_stamps, load, best, worst = visualize_load_forecast(_date, lp, "data", False)
                    elif _window == 'week':
                        time_stamps, load, best, worst = get_weekly_behavior(_date, lp, "data", False)
                    elif _window == 'month':
                        _output_dict = get_monthly_behavior(_date, lp, "data", False)
                        _monthly_data = _output_dict['monthly']
                        time_stamps, load, best, worst = _monthly_data['Time_Stamp'], _monthly_data['Actual_Load'], _monthly_data['Best_Forecast'], _monthly_data['Worst_Forecast']

                    # Saving as numpy arrays (for memory)
                    data['load'] = np.asarray(load, dtype = np.float32)
                    data['best'] = np.asarray(best, dtype = np.float32)
                    data['worst'] = np.asarray(worst, dtype = np.float32)

                    load_profiles[lp] = data
                    data = None

                print(f"\n{'':-^45}")
                print('Summary of power flow computation')
                print(f"{'':-^45}")
                print(f"{'Model':<30} {_model} ({_model_name})")
                print(f"{'OpenIPSL':<30} {_version:<20}")
                print(f"{'Window':<30} {_window:<20}")
                print(f"{'Given date':<30} {_date:<20}")
                print(f"{'Varying loads':<30} {_loads:<20}")
                print(f"{'Number of power flows':<30} {len(time_stamps)*3}")
                print(f"{'':-^45}\n")

                # Pack arguments in a dictionary
                args_ts = dict()

                args_ts['_model'] = _model
                args_ts['_model_name'] = _model_name
                args_ts['_loads'] = _loads
                args_ts['_window'] = _window
                args_ts['_model_lib'] = _model_lib
                args_ts['_version'] = _version
                args_ts['_verbose'] = False
                args_ts['_delete'] = _delete
                args_ts['_seed'] = _seed

                # Running time-series power flow
                ts_powerflow(args_ts, _date, _load_profiles = load_profiles,
                    _time_stamps = time_stamps)

            ################################################
            ## VALIDATING POWER FLOW RESULTS
            ################################################

            if _function == "val_pf":

                # Importing dependencies (just those required to speed up code execution)
                with warnings.catch_warnings():
                    warnings.simplefilter("ignore")
                    from utils.validate_pf import *

                print(f"\n{'':=^45}")
                print(f"VALIDATING POWER FLOWS FOR DYNAMIC SIMULATIONS")
                print(f"{'':=^45}\n")

                if args.tool:
                    _tool = args.tool
                    if _tool not in ['dymola', 'om']:
                        raise ValueError("Invalid tool. Only 'dymola' and 'om' (OpenModelica) are supported")
                else:
                    print("No tool specified. Using 'dymola' by default")
                    _tool = 'dymola'

                if args.version:
                    _version = args.version
                    if _version not in ['1.5.0', '2.0.0']:
                        raise ValueError('Invalid version. Only OpenIPSL 1.5.0 and 2.0.0 are supported')
                else:
                    print("No OpenIPSL version specified. Defaulting to '1.5.0'") # TBD
                    _version = '1.5.0'

                if args.model:
                    _model = args.model
                    if _model not in LIST_OF_MODELS:
                        raise ValueError("Model not available")
                else:
                    _model = 'IEEE14'
                    print(f"Model not specified. Defaulting to {_model}")

                _model_name = f"{_model}_Base_Case"
                _model_package = _model

                # Loading validation parameters
                with open(r'val_parameters.yaml') as f:
                    val_params = yaml.load(f, Loader = yaml.FullLoader)

                # Converting relative path to absolute paths
                if _version == '1.5.0':
                    _data_path_old = f"models/_old/{_model}/PF_Data"
                    _model_path_old = f"models/_old/{_model}/package.mo"
                    _data_path = os.path.abspath(os.path.join(os.getcwd(), _data_path_old))
                    _model_path = os.path.abspath(os.path.join(os.getcwd(), _model_path_old))
                elif _version == '2.0.0':
                    _data_path_new = f"models/_new/{_model}/PF_Data"
                    _model_path_new = f"models/_new/{_model}/package.mo"
                    _data_path = os.path.abspath(os.path.join(os.getcwd(), _data_path_new))
                    _model_path = os.path.abspath(os.path.join(os.getcwd(), _model_path_new))

                if args.proc:
                    _n_proc = args.proc
                else:
                    _n_proc = 1
                    print(f"Multiprocessing not specified. Defaulting to serial processing (n_proc = {_n_proc})")

                if args.cores:
                    _n_cores = args.cores
                else:
                    _n_cores = psutil.cpu_count(logical = False) - 1
                    print("Cores to use for simulation not specified")
                    print(f"Setting number of cores to {_n_cores}")

                if _n_proc*_n_cores > (psutil.cpu_count(logical = False) - 1):
                    print(f"Too many processes/cores. I can handle maximum {psutil.cpu_count(logical = False) - 1} processes/cores")
                    print(f"Setting number of processes to {psutil.cpu_count(logical = False) - 1}")
                    print(f"Setting number of cores to {1}")
                    _n_proc = psutil.cpu_count(logical = False) - 1
                    _n_cores = 1

                val_params['version'] = _version
                val_params['n_cores'] = _n_cores
                val_params['n_proc'] = _n_proc
                val_params['model_path'] = _model_path
                val_params['model_package'] = _model_package
                val_params['model_name'] = _model_name

                # Getting power flow list from `PF_Data` directory
                pf_list = get_pf_files(_data_path)

                # Distributing scenarios among specified number of processes
                pf_dist = distribute_scenarios(pf_list, _n_proc)

                print(f"\n{'':-^45}")
                print('Summary of power flow validation')
                print(f"{'':-^45}")
                print(f"{'Model name':<30} {_model_name} in package {_model_package}")
                print(f"{'OpenIPSL version:':<30} {_version}")
                print(f"{'Tool':<30} {_tool:<20}")
                print(f"{'Process(es)':<30} {_n_proc:<20}")
                print(f"{'Core(s) per process':<30} {_n_cores:<20}")
                print(f"{'Power flow validations':<30} {len(pf_list):<20}\n")

                # Commanding parallel simulations using multiprocessing
                p = mp.Pool()
                # List of running processes
                process = []
                for np in range(_n_proc):
                    if _tool == 'dymola':
                        if _n_proc == 1:
                            dymola_validation(pf_list, _data_path, val_params, np + 1)
                            # apfun = p.apply_async(dymola_validation,
                            #     args = (pf_dist, _data_path, val_params, np + 1, ))
                            # process.append(apfun)
                        else:
                            # dymola_validation(pf_dist, _data_path, val_params, np + 1)
                            apfun = p.apply_async(dymola_validation,
                                args = (pf_dist[np], _data_path, val_params, np + 1, ))
                            process.append(apfun)
                    elif _tool == 'om':
                        if _n_proc == 1:
                            om_validation(pf_list, _data_path, val_params, np + 1)
                            # apfun = p.apply_async(om_validation,
                            #     args = (pf_dist, _data_path, val_params, np + 1, ))
                            # process.append(apfun)
                        else:
                            # om_validation(pf_dist, _data_path, val_params, np + 1)
                            apfun = p.apply_async(om_validation,
                                args = (pf_dist[np], _data_path, val_params, np + 1, ))
                            process.append(apfun)
                p.close()
                p.join()

            if _function == "run_sim":

                # Importing dependencies (just those required to speed up code execution)
                with warnings.catch_warnings():
                    warnings.simplefilter("ignore")
                    from utils.automated_simulation import *

                print(f"\n{'':=^45}")
                print(f"RUNNING DYNAMIC SIMULATIONS")
                print(f"{'':=^45}\n")

                if args.tool:
                    _tool = args.tool
                    if _tool not in ['dymola', 'om']:
                        raise ValueError("Invalid tool. Only 'dymola' and 'om' (OpenModelica) are supported")
                else:
                    print("No tool specified. Using 'dymola' by default")
                    _tool = 'dymola'

                if args.version:
                    _version = args.version
                    if _version not in ['1.5.0', '2.0.0']:
                        raise ValueError('Invalid version. Only OpenIPSL 1.5.0 and 2.0.0 are supported')
                else:
                    print("No OpenIPSL version specified. Defaulting to '1.5.0'")
                    _version = '1.5.0'

                if args.model:
                    _model = args.model
                    if _model not in LIST_OF_MODELS:
                        raise ValueError("Model not available")
                else:
                    _model = 'IEEE14'
                    print(f"Model not specified. Defaulting to {_model}")

                _model_name = f"{_model}_Base_Case"
                _model_package = _model

                # Loading simulation parameters
                with open(r'sim_parameters.yaml') as f:
                    sim_params = yaml.load(f, Loader = yaml.FullLoader)

                # Converting relative path to absolute paths
                if _version == '1.5.0':
                    _data_path_old = f"models/_old/{_model}/PF_Data"
                    _model_path_old = f"models/_old/{_model}/package.mo"
                    _data_path = os.path.abspath(os.path.join(os.getcwd(), _data_path_old))
                    _model_path = os.path.abspath(os.path.join(os.getcwd(), _model_path_old))
                elif _version == '2.0.0':
                    _data_path_new = f"models/_new/{_model}/PF_Data"
                    _model_path_new = f"models/_new/{_model}/package.mo"
                    _data_path = os.path.abspath(os.path.join(os.getcwd(), _data_path_new))
                    _model_path = os.path.abspath(os.path.join(os.getcwd(), _model_path_new))

                if args.proc:
                    _n_proc = args.proc
                else:
                    _n_proc = 1
                    print(f"Multiprocessing not specified. Defaulting to serial processing (n_proc = {_n_proc})")

                if args.cores:
                    _n_cores = args.cores
                else:
                    _n_cores = psutil.cpu_count(logical = False) - 1
                    print("Cores to use for simulation not specified")
                    print(f"Setting number of cores to {_n_cores}")

                # Validating number of processes and cores
                if _n_proc*_n_cores > (psutil.cpu_count(logical = False) - 1):
                    print(f"Too many processes/cores. I can handle maximum {psutil.cpu_count(logical = False) - 1} processes/cores")
                    print(f"Setting number of processes to {psutil.cpu_count(logical = False) - 1}")
                    print(f"Setting number of cores to {1}")
                    _n_proc = psutil.cpu_count(logical = False) - 1
                    _n_cores = 1

                sim_params['version'] = _version
                sim_params['n_cores'] = _n_cores
                sim_params['n_proc'] = _n_proc
                sim_params['model_path'] = _model_path
                sim_params['model_package'] = _model_package
                sim_params['model_name'] = _model_name

                ##################################################
                ### SELECTING POWER FLOWS
                ##################################################

                # Getting power flow list from `PF_Data` directory
                pf_list = get_pf_files(_data_path)

                # Number of power flows (user input)
                if args.n_pf:
                    _n_pf = args.n_pf
                else:
                    _n_pf = len(pf_list)
                    print(f"No power flow number specified. Working with {len(pf_list)} power flows")

                if _n_pf > len(pf_list):
                    _n_pf = len(pf_list)
                    print(f"Number of power flows exceeds available records. Defaults to {_n_pf}")

                # Extracting power flows from the given list
                pf_list = np.random.choice(pf_list, _n_pf, replace = False)
                # Distributing scenarios among specified number of processes
                # pf_dist = distribute_scenarios(pf_list, _n_proc)

                ##################################################
                ### SELECTING CONTINGENCY SCENARIOS
                ##################################################

                _mo_model_folder = os.path.dirname(_model_path)
                _mo_model_path = os.path.join(_mo_model_folder, _model_name + ".mo")

                _components = generate_component_list(_mo_model_path)

                # Extracting lines
                _lines = _components['lines']
                # Creating line contingency strings
                _line_contingencies = generate_contingencies(_lines)
                if args.n_sc:
                    _n_sc = args.n_sc
                else:
                    print("Number of contingencies not specified")
                    _n_sc = 50

                if _n_sc > len(_line_contingencies['scenarios']):
                    _n_sc = len(_line_contingencies)

                print(f"Working with {_n_sc} contingency scenarios")

                scenarios = randomize_scenarios(_line_contingencies, _n_sc)
                _n_scenarios = len(scenarios)

                sc_dist = distribute_scenarios(scenarios, _n_proc)

                # Creating a temporary directory to allow multiple power flow
                # simulations in parallel
                _temp_dir_models = os.path.join(os.getcwd(), '_temp')
                if os.path.exists(_temp_dir_models):
                    # Removing temporary directory if it exists
                    shutil.rmtree(_temp_dir_models)
                else:
                    os.mkdir(_temp_dir_models) # could be removed but test it

                ##################################################
                ### DISPATCHING SIMULATIONS
                ##################################################

                print(f"\n{'':-^45}")
                print('Summary of time-domain simulation')
                print(f"{'':-^45}")
                print(f"{'Model name':<30} {_model_name} in package {_model_package}")
                print(f"{'OpenIPSL version:':<30} {_version}")
                print(f"{'Tool':<30} {_tool:<20}")
                print(f"{'Process(es)':<30} {_n_proc:<20}")
                print(f"{'Core(s) per process':<30} {_n_cores:<20}")
                print(f"{'Power flows':<30} {_n_pf:<20}")
                print(f"{'Simulation scenarios':<30} {_n_scenarios:<20}")
                print(f"{'Total simulations:':<30} {_n_pf*_n_scenarios:<20}\n")

                # Commanding parallel simulations using multiprocessing
                p = mp.Pool()
                # List of running processes
                process = []
                for np in range(_n_proc):
                    if _tool == 'dymola':
                        if _n_proc == 1:
                            dymola_simulation(pf_list, scenarios, _data_path, sim_params, np + 1)
                            # apfun = p.apply_async(dymola_simulation,
                            #     args = (pf_dist, _data_path, sim_params, np + 1, ))
                            # process.append(apfun)
                        else:
                            # dymola_simulation(pf_dist, scenarios, _data_path, sim_params, np + 1)
                            apfun = p.apply_async(dymola_simulation,
                                args = (pf_list, sc_dist[np], _data_path, sim_params, np + 1, ))
                            process.append(apfun)
                    elif _tool == 'om':
                        if _n_proc == 1:
                            om_simulation(pf_list, scenarios, _data_path, sim_params, np + 1)
                            # apfun = p.apply_async(om_simulation,
                            #     args = (pf_dist, _data_path, sim_params, np + 1, ))
                            # process.append(apfun)
                        else:
                            # om_simulation(pf_dist, scenarios, _data_path, sim_params, np + 1)
                            apfun = p.apply_async(om_simulation,
                                args = (pf_list, sc_dist[np], _data_path, sim_params, np + 1, ))
                            process.append(apfun)
                p.close()
                p.join()

                # Deleting temporary directory
                if os.path.exists(_temp_dir_models):
                    shutil.rmtree(_temp_dir_models)

            if _function == 'extract':

                # Importing dependencies (just those required to speed up code execution)
                with warnings.catch_warnings():
                    warnings.simplefilter("ignore")
                    from utils.extract_data import *

                print(f"\n{'':=^45}")
                print(f"EXTRACTING DATA FROM DYNAMIC SIMULATION RESULTS")
                print(f"{'':=^45}\n")

                # Validating user inputs
                if args.tool:
                    _tool = args.tool
                    if _tool not in ['dymola', 'om']:
                        raise ValueError("Invalid tool. Only 'dymola' and 'om' (OpenModelica) are supported")
                    else:
                        # Raising warning. Directory may not exist. Continuing with caution
                        warnings.warn("No tool specified. Using 'dymola' by default. Output directory may not exist");

                if args.model:
                    _model = args.model
                    if _model not in LIST_OF_MODELS:
                        raise ValueError("Model not available")
                else:
                    _model = 'IEEE14'
                    warnings.warn(f"Model not specified. Defaulting to {_model}. Output directory may not exist");

                # Loading simulation parameters
                with open(r'sim_parameters.yaml') as f:
                    sim_params = yaml.load(f, Loader = yaml.FullLoader)

                # Instantiating dymola object (according to operating system)
                if platform.system() == 'Windows':
                    # Making sure each process has its own working directory
                    _working_directory = os.path.join(os.path.abspath(sim_params['working_directory_windows']), _model)
                    if not os.path.exists(_working_directory):
                        raise ValueError('Working directory does not exist. Dynamic simulations may not have been dispatched (or results might have been removed)')
                elif platform.system() == 'Linux':
                    # Making sure each process has an independent working directory
                    _working_directory = os.path.join(os.path.abspath(sim_params['working_directory_linux']), _model)
                    if not os.path.exists(_working_directory):
                        raise ValueError('Working directory does not exist. Dynamic simulations may not have been dispatched (or results might have been removed)')

                # Creating unique ID for the experiment data
                expid = datetime.datetime.now().strftime('%Y%m-%d%H-%M%S-') + str(uuid4())

                # Creating path for experiment ID
                _path = os.path.join(os.getcwd(), "data", "sim_res", _model, expid)
                print(f"\nExperiment result path: \n{_path}\n")

                # Extracting data
                extract_data(_model, _path, _working_directory)

            if _function == 'label':
                # Driver for labeling code
                pass
