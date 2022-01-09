ModelicaGridData
=========================================

`ModelicaGridData` allows to generate data using an OpenIPSL phasor-domain simulation model fed with power flow solutions computed using real load data patterns. The simulations are run on a local computer to take advantage of existing computing infrastructure.

## Running ModelicaGridData from a Virtual Machine

For off-the-shelf testing, we prepared two VirtualBox virtual machines with `ModelicaGridData` already set up. Both machines are intended for demonstration only.

- [**Ubuntu:**]()
  - Login: `DeepGrid`
  - Password: `DeepGrid`
- [**Windows:**]()
  - Login: `DeepGrid`
  - Password: `DeepGrid`

To use the virtual machines, first open a terminal and activate the `modgriddata` conda environment.

```
conda activate modgriddata
```

Next, navigate the to the directory where `ModelicaGridData` is located (`Documents/ModelicaGridData`), and run any command. For example, to download the data from the NYISO website, do:

```
python main.py nyiso
```

By default, the working directories are located inside `Documents` in the virtual machines (both located on the main user directory): `Dymola/_working_directory` for Dymola and `OpenModelica/_working_directory`  for OpenModelica. The [OpenIPSL libraries](https://www.dropbox.com/s/kj0ivboxq3a7tet/OpenIPSL_.zip?dl=0) are located inside `Documents/ModelicaLibraries`.

## Installation

We recommend to install the tool dependencies in a new virtual environment with Python 3.7. Once the new environment is set up, install the following dependencies using `pip`:

```
pip install psutil && pip install matplotlib && pip install pandas && pip install tqdm && pip install sdf && pip install pyyaml && pip install h5py && pip install EMD-signal==1.2.0
```

Then, proceed installing the following dependencies in order:

1. [GridCal](docs/gridcal_installation.md): please stick with [release 4.2.0](https://github.com/SanPen/GridCal/releases/tag/4.2.0). We experienced some issues after upgrading to the latest commit.
2. [OMPython](docs/OMPython_installation.md)
3. [Dymola](https://www.3ds.com/products-services/catia/products/dymola/) - Proprietary software. **A license is needed**. Testing has been carried out with Dymola 2021. It is not encouraged to work with newer Dymola releases (to do so, please guarantee that the Modelica Standard Library version is set to 3.2 instead of the 4.0+ release).

The OpenIPSL library has to be downloaded separately.

- [OpenIPSL](www.OpenIPSL.com) - Compatible with release 1.5.0 and version 2.0.0 beta (with Dymola). **OpenModelica** (tested with release 1.16.2 on both Linux and Windows) is supported for version 1.5.0 only. A safe copy of the OpenIPSL versions used to develop and test this project is found [here](https://www.dropbox.com/s/kj0ivboxq3a7tet/OpenIPSL_.zip?dl=0).

The installation is summarized in the step-by-step guideline in the [documentation](docs/stepwise_installation.md).

## Description

This tool implements several functionalities such as data scrapping, massive time series power flow computations, power flow validation, massive phasor-domain dynamic simulation, and small-signal labeling. It represents a full end-to-end tool that can be used to generate big data for power systems. Such big data can be used in applications such as system identification and training for Machine Learning modules. By default, the tool uses the IEEE 14 bus model as a study case, but it can be replaced by any OpenIPSL model. The repository is shipped with the following models:

- SMIB (`SMIB`)
- Kundur Two Area (`TwoAreas`)
- AVRI (`AVRI`)
- IEEE9 (`IEEE9`)
- IEEE14 (`IEEE14`)

Unfortunately, we have no function that links the power flow records to the models. It has to be done manually (at least, for the time being).

## How to Use

The functionalities to validate power flow results and dispatch massive time-domain simulations are widely customizable. For this reason, the arguments are specified using the `.yaml` corresponding files: `val_params.yaml` for power flow validation and `sim_params.yaml` for massive time domain simulation.

## Examples

To run NYISO data from 2015 up to now, we can use the command:

```
python main.py nyiso --year 2015
```

Likewise, to run a time series power flow using the information from yesterday's load and forecast, varying three loads simultaneously, do
```
python main.py run_pf --loads 3
```

Further examples with the `nyiso` module are provided as Jupyter Notebooks. These files illustrate some functionalities that are not necessarily used in the code but included within the submodules:

- [NYISO Data Scripts](docs/examples_nyiso_data.ipynb)

## Troubleshooting

- In Windows, open a Command Prompt as Administrator (**important**). Make sure the working directory is writable (i.e., folders and files and be created and deleted during runtime).

## License

This project is [licensed](./LICENSE.txt) under the [GNU Affero General Public License (GNU AGPL)](https://www.gnu.org/licenses/agpl-3.0.en.html).
