## Trajectory Generation Tool Documentation

The trajectory generation tool is a fully back-end developed pipeline that operates from the command line directly. Some of the arguments are required while some are optional and have a default value. See below for more information.

### Functions

- `nyiso`: data scrapping from the NYISO website. For standalone use, please check the [source code GitHub repository](https://github.com/ALSETLab/NYISO_Load_Forecast_Data). An example call is given below (i.e., downloading NYISO data from 2020 onwards):

```python
python main.py nyiso --year 2020
```

- `run_pf`: power flow generation with GridCal using the NYISO data downloaded with the `nyiso` function. An example call is given below (running a one-day time-series power flow for the `IEEE14` model varying three loads simultaneously):

```python
python main.py run_pf --model IEEE14 --version 2.0.0 --loads 3
```

- `val_pf`: validation of power flow solution using event-free dynamic simulation. An example call is given below (validating with `dymola` all power flow results for the `IEEE14` model with two parallel processes, each using one core):

```python
python main.py val_pf --tool dymola --model IEEE14 --version 2.0.0 --proc 2 --cores 1
```

- `run_sim`: phasor-time domain simulation with contingencies. For the contingency generation mechanism, please check [this GitHub repository](https://github.com/ALSETLab/Synthetic_Data_Generation_ML_Small_Signal). An example call is given below (running 10 contingency scenarios with two different power flows; n<sub>scenarios</sub> = 10 * 2 = 20):

```python
python main.py run_sim --tool dymola --model IEEE14 --version 2.0.0 --proc 2 --cores 1 --n_pf 2 --n_sc 10
```
**NB:** The number of simulation scenarios is `n_pf * n_sc`. These scenarios are split along `proc` processes, each one using `cores` cores. For efficiency, it is recommended to make `n_pf * n_sc` divisible by `proc` so that each process has the same batch of simulations.

- `small_signal_stability` (not included in the main run of the program):
  - `data_filter`: filters the input signal using a variance threshold, `var_thr`. Data points with under the threshold are removed. It requires a variable step-size time vector `T`. If no oscillation is detected in the input data, the function returns empty matrices.
  - `pronyitesla`: Python implementation of the [Prony](https://en.wikipedia.org/wiki/Prony%27s_method) method.
  - `sssi`: computation of the small-signal stability indices according to the method proposed in this [paper](https://ieeexplore.ieee.org/document/6938842).

- `extract`: organizes the simulation data from the Dymola output `*.mat` files into `*.hdf5` files. The `*.hdf5` files are placed inside `./data/sim_res` using a file name with a unique experiment ID. Here, an 'experiment' is understood as each run of the extract function where the user gets a different set of parameters. Note that it is possible to add measurement noise (assumed Gaussian) to the data. The default values are `mu = 0.0` (mean) and `sigma = 0.01` (standard deviation). However, the user can specify any mean and standard deviation when calling the function.

```python
python main.py extract --tool om --model IEEE14 --mu 0.01 --sigma 0.1
```

This function will be prompting the user for which data is to be extracted. _Only one type of data can be saved for each run of the function_. So, two runs of the function are needed if the user wants to save line power flows and bus voltages (one run for each quantity). Regarding generators, a single quantity must be selected (i.e., a signal of the generator or its associated control system components).

### List of Arguments per Function

- `nyiso`:
  - `--year`: year to _start_ data downloading (e.g., if `--year 2020`, then all data from 2020 up to current data will be downloaded). **Default:** current year.
  - `--path`: path (relative to the tool's root folder) to download and organize the NYISO data (**_not recommended_**). **Default:** if no path is specified, the tool creates a sub-directory called `data` in the tool's root folder and downloads the NYISO data inside of it. This functionality was implemented _to enable the use of_ `nyiso` _as a data scrapping functionality only_. Default values shall be kept in order to use the power flow generation tool.

- `run_pf`:
  - `--model`: model that will be used for the routine. Note that it corresponds to the name of the package of the OpenIPSL model. **Default:** `IEEE14`.
  - `--version`: OpenIPSL version of the tool. Valid values are `1.5.0` and `2.0.0` (use the exact string values). **Default:** version `1.5.0`.
  - `--window`: Length of the time window to run the power flow computation (`day`, `week`, `month`). **Default:** `day`.
  - `--date`: Date to run the power flow. Must be passed in `mm/dd/YYYY` format for `day` and `week` (it can be any day of the week), and `mm/YYYY` for month. **Default:** current day - 1.
  - `--loads`: Number of loads to change according to the time series data. Defaults to `12` (i.e., maximum 12 loads will be varied simultaneously)
  - `--delete`: Delete previous power flow results. **Default:** `True`.
  - `--seed`: Seed value for load randomization. **Default:** `0`.

**NB**: since `val_pf` and `run_sim` are both time-domain simulation-based routines, they share some arguments. For clarity's sake, the full list is given here.

- `val_pf`:
  - `--model`: model that will be used for the routine. Note that it corresponds to the name of the package of the OpenIPSL model. **Default:** `IEEE14`.
  - `--version`: OpenIPSL version of the tool. Valid values are `1.5.0` and `2.0.0` (use the exact string values). **Default:** version `1.5.0`.
  - `--tool`: Tool to run time-domain simulations. `OM` for OpenModelica and `dymola` for Dymola. **Default:** `dymola`.
  - `--proc`: Number of processes (i.e., parallel serial instances) executed simultaneously. **Default:** `1`.
  - `--cores`: Number of cores to be used inside a process (i.e., serial parallel simulation). **Default:** `n_cores - 1` where `n_cores` is the number of available physical cores.
  - `--pc`: machine on which the code is running. Specify `vm` for virtual machine. **Default:** `pc`.

- `run_sim`:
  - `--model`: model that will be used for the routine. Note that it corresponds to the name of the package of the OpenIPSL model. **Default:** `IEEE14`.
  - `--version`: OpenIPSL version of the tool. Valid values are `1.5.0` and `2.0.0` (use the exact string values). **Default:** version `1.5.0`.
  - `--tool`: Tool to run time-domain simulations. `OM` for OpenModelica and `dymola` for Dymola. **Default:** `dymola`.
  - `--proc`: Number of processes (i.e., parallel serial instances) executed simultaneously. **Default:** `1`.
  - `--cores`: Number of cores to be used inside a process (i.e., serial parallel simulation). **Default:** `n_cores - 1` where `n_cores` is the number of available physical cores.
  - `--n_pf`: Number of power flows to run dynamic simulations. **Default:** all available power flow results.
  - `--n_sc`: Number of contingency scenarios to run the dynamic simulations. **Default:** to all available or 50, for large systems (i.e., systems with more than 50 scenarios available).
  - `--pc`: machine on which the code is running. Specify `vm` for virtual machine. **Default:** `pc`.
  - `--n_sim`: maximum number of simulations allowed. **Default:** $min(1000, n_pf\times n_sc)$.

- `extract`:
  - `--model`: model for which the simulation data will be extracted and processed. **Default:** `IEEE14` (it may return an error if the directory for the given model does not exist).
  - `--tool`: tool used for dynamic time-domain simulations. **Default:** `dymola` (it may return an error if the working directory for the given model does not exist).
  - `--version`: version of the OpenIPSL library used to generate the data. **Default:** `1.5.0` (it may return an error if the version does not match the library release used for data generation).
  - `--mu`: mean for the Gaussian noise injected to data measurements. **Default:** `0.0`.
  - `--sigma`: standard deviation for the Gaussian noise injected to data measurements. **Default:** `0.01`.
  - `--pc`: machine on which the code is running. Specify `vm` for virtual machine. **Default:** `pc`.
