Trajectory Generation Tool
=========================================

The **trajectory generation tool** allows to generate data using an OpenIPSL phasor-domain simulation model fed with power flow solutions computed using real load data patterns.

## Installation

- [GridCal](docs/gridcal_installation.md)
- [OMPython](docs/OMPython_installation.md)
- [Dymola](https://www.3ds.com/products-services/catia/products/dymola/) - Proprietary software. A license is needed. Testing has been carried out with Dymola 2021. It is not encouraged to work with newer Dymola releases (to do so, please guarantee that the Modelica Standard Library version is set to 3.2 instead of the 4.0+ release).
- [OpenIPSL](www.OpenIPSL.com) - Compatible with release 1.5.0 and version 2.0.0 beta (with Dymola). **OpenModelica** (tested with release 1.16.2 on both Linux and Windows) is supported for version 1.5.0 only. A safe copy of the OpenIPSL versions used to develop and test this project is found [here](https://www.dropbox.com/s/kj0ivboxq3a7tet/OpenIPSL_.zip?dl=0).

## How to use

This tool implements several functionalities such as data scrapping, massive time series power flow computations, power flow validation, massive phasor-domain dynamic simulation, and small-signal labeling. It represents a full end-to-end tool that can be used to generate big data for power systems. Such big data can be used in applications such as system identification and training for Machine Learning modules. By default, the tool uses the IEEE 14 bus model as a study case, but it can be replaced by any OpenIPSL model. The repository is shipped with the following models:

- SMIB (`SMIB`):
- Kundur TwoAreas (`TwoAreas`):
- AVRI
- IEEE9
- IEEE14

Unfortunately, we have no function that links the power flow records to the models. It has to be done manually (at least, for the time being).

The functionalities to validate power flow results and dispatch massive time domain simulations are widely customizable. For this reason, the arguments are specified using the `.yaml` corresponding files: `val_params.yaml` for power flow validation and `sim_params.yaml` for massive time domain simulation.

## Examples

To run NYISO data from 2015 up to now, we can use the command:

```
python main.py nyiso --year 2015
```

Likewise, to run a time series power flow using the information from yesterday's load and forecast, varying three loads simultaneously, do
```
python main.py run_pf --loads 3
```

Further examples are provided as Jupyter Notebooks containing some functionalities that are not necessarily used in the code but included within the submodules:

- [NYISO Data Scripts](docs/examples_nyiso_data.ipynb)
