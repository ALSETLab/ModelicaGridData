import os
import warnings
import argparse

with warnings.catch_warnings():
    warnings.simplefilter("ignore")
    from utils import *

parser = argparse.ArgumentParser()
parser.add_argument("function", help = HELP_FUNCTION)

# Arguments to `nyiso` (download NYISO data)
parser.add_argument("--year", help = HELP_YEAR)
parser.add_argument("--path", help = HELP_PATH)

# Arguments to `run_pf`
parser.add_argument("--version", help = HELP_VERSION) # also needed for `run_sim`
parser.add_argument("--window", help = HELP_WINDOW)
parser.add_argument("--date", help = HELP_DATE)
parser.add_argument("--loads", help = HELP_LOADS)

# Arguments to `run_sim`
parser.add_argument("--tool", help = HELP_TOOL)

args = parser.parse_args()

_function = args.function

if __name__ == "__main__":

    # Validating function and arguments
    if args.function:
        _function = args.function
        if _function not in ['nyiso', 'run_pf', 'run_sim']:
            raise ValueError('Function not available')
        else:
            # Validating arguments for each function
            if _function == 'nyiso':
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

                print(f"Download NYISO data from {_year} to {CURRENT_YEAR} complete\n")

            if _function == 'run_pf':
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

                if _version == '2.0.0':
                    print("Warning: All quantities in OpenIPSL>2.0.0 are in SI units. I will do my best to parse them correctly. Proceed with caution.\n")
                    _model = '_new'
                elif _version == '1.5.0':
                    _model = '_old'

                if args.window:
                    _window = args.window
                    if _window not in ['day', 'week', 'month']:
                        raise ValueError("Time window for power flow computation not valid")
                else:
                    _window = 'day'
                    print(f"Time window defaults to {_window}\n")

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

                # Getting NYISO data
                load_profiles = dict.fromkeys(NYISO_ZONES)

                print("Loading power flow data from NYISO:")
                for lp in tqdm(load_profiles):
                    data = dict.fromkeys(['load', 'best', 'worst'])

                    if _window == 'day':
                        _time_stamps, _load, _best, _worst = visualize_load_forecast(_date, lp, "data", False)
                    elif _window == 'week':
                        _time_stamps, _load, _best, _worst = get_weekly_behavior(_date, lp, "data", False)
                    elif _window == 'month':
                        _output_dict = get_monthly_behavior(_date, lp, "data", False)
                        _monthly_data = _output_dict['monthly']
                        _time_stamps, _load, _best, _worst = _monthly_data['Time_Stamp'], _monthly_data['Actual_Load'], _monthly_data['Best_Forecast'], _monthly_data['Worst_Forecast']

                    # Saving as numpy arrays (for memory)
                    data['load'] = np.asarray(_load, dtype = np.float32)
                    data['best'] = np.asarray(_best, dtype = np.float32)
                    data['worst'] = np.asarray(_worst, dtype = np.float32)

                    load_profiles[lp] = data
                    data = None

                print(f"\n{'':-^45}")
                print('Summary of power flow computation')
                print(f"{'':-^45}")
                print(f"{'OpenIPSL':<30} {_version:<20}")
                print(f"{'Window':<30} {_window:<20}")
                print(f"{'Given date':<30} {_date:<20}")
                print(f"{'Number of power flows':<30} {len(_time_stamps)*3}\n")

                print(f"Running time-series power flows:")

                # Creating pf_records
                #ts_powerflow(_date, _load_profiles = load_profiles,
                #    _window = _window, _model = _model, _version = _version)
