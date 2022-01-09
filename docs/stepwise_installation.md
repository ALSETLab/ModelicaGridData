# Python Installation

## Environment Creation and Library Library Installation

---

1. Open a new terminal. Create a new conda environment with Python < 3.8 (Python 3.7 is recommended)

    ```
    conda create -n modgriddata python=3.7
    ```

2. Activate the environment (i.e., `conda activate modgriddata`) and install the following libraries using `pip`:

    ```
    pip install psutil && pip install matplotlib && pip install pandas && pip install tqdm && pip install sdf && pip install pyyaml && pip install h5py && pip install EMD-signal==1.2.0
    ```

3. Clone the GridCal repository for release 4.2.0 (important)
4. Activate the conda environment where the installation will be hosted
5. Navigate with a terminal to the GridCal repository folder
6. Inside the GridCal main directory, go to `./src` and run the following command

    ```
    python -m pip install .
    ```


## Setting up the Python-Dymola and Python-OM Interfaces

---

### OpenModelica

1. Open a terminal and activate the conda environment where the dependencies and GridCal were set up
2. Run the following command to install `OMPython`

    ```
    pip install -U https://github.com/OpenModelica/OMPython/archive/master.zip
    ```

3. Verify the installation by running the following command in a Python terminal

    ```python
    import OMPython
    ```


### Dymola

1. Navigate to the directory where the Dymola installation is located and copy the path to the `dymola.egg` file located inside `Modelica/Libraries`. Below you find two examples of such paths on both Windows and Linux (Ubuntu):

    ### Windows

    ```
    C:\Program Files\Dymola 2021\Modelica\Library\python_interface\dymola.egg
    ```

    ### Linux

    ```
    /opt/dymola-2021-x86_64/Modelica/Library/python_interface/dymola.egg
    ```

2. Identify the folder where the Python installation of the working environment is located. A straightforward way to do so is by running the command `which python`. Locate the `site_packages` subfolder using this path. Two examples are shown below:

    ### Windows

    ```
    C:\Users\DeepGrid\.conda\envs\modgriddata\Lib\site-packages
    ```

    ### Linux

    ```
    /home/deepgrid/.conda/envs/modgriddata/lib/python3.7/site-packages
    ```

3. Create a new file called `python_interface.pth` inside the `site-packages` directory. The contents of the file should be the absolute path to the `dymola.egg` file located inside the Dymola installation folder
4. Once the file has been created, test the Dymola-Python interface installation by running the following command in a Python terminal

    ```
    from dymola.dymola_interface import *
    ```
