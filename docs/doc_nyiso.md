## Trajectory Generation Tool Documentation

The trajectory generation tool is a fully back-end developed pipeline that operates from the command line directly. Some of the arguments

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

**Note**: since `val_pf` and `run_sim` are both time-domain simulation-based routines, they share some arguments. For clarity's sake, the full list is given here.

- `val_pf`:
  - `--model`: model that will be used for the routine. Note that it corresponds to the name of the package of the OpenIPSL model. **Default:** `IEEE14`.
  - `--version`: OpenIPSL version of the tool. Valid values are `1.5.0` and `2.0.0` (use the exact string values). **Default:** version `1.5.0`.
  - `--tool`: Tool to run time-domain simulations. `OM` for OpenModelica and `dymola` for Dymola. **Default:** `dymola`.
  - `--proc`: Number of processes (i.e., parallel serial instances) executed simultaneously. **Default:** `1`.
  - `--cores`: Number of cores to be used inside a process (i.e., serial parallel simulation). **Default:** `n_cores - 1` where `n_cores` is the number of available physical cores.

- `run_sim`:
  - `--model`: model that will be used for the routine. Note that it corresponds to the name of the package of the OpenIPSL model. **Default:** `IEEE14`.
  - `--version`: OpenIPSL version of the tool. Valid values are `1.5.0` and `2.0.0` (use the exact string values). **Default:** version `1.5.0`.
  - `--tool`: Tool to run time-domain simulations. `OM` for OpenModelica and `dymola` for Dymola. **Default:** `dymola`.
  - `--proc`: Number of processes (i.e., parallel serial instances) executed simultaneously. **Default:** `1`.
  - `--cores`: Number of cores to be used inside a process (i.e., serial parallel simulation). **Default:** `n_cores - 1` where `n_cores` is the number of available physical cores.
  - `--n_pf`: Number of power flows to run dynamic simulations. **Default:** all available power flow results.
  - `--n_sc`: Number of contingency scenarios to run the dynamic simulations. **Default:** to all available or 50, for large systems (i.e., systems with more than 50 scenarios available).
