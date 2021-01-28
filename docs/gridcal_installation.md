## GridCal Installation with Miniconda

This installation provides a step-by-step guideline for the installation of the [GridCal](http://sanpen.github.io/GridCal/) backend compatible with the power flow generation module of the trajectory generation toolbox. Since our examples are tested with Jupyter Notebooks, we do not recommend installing GridCal directly via pip (i.e., by `pip install GridCal`).

**Note:** the hash of the GridCal version compatible with this repository is `564ffd`

1. Install [Miniconda](https://docs.conda.io/en/latest/miniconda.html)

2. Create a Miniconda environment to handle the GridCal Installation

```
  conda create -n <<env_name>> python=3.7
```

3. Activate the environment.

```
  conda activate <<env_name>>
```

4. Upgrade pip (optional)

On Windows:
```
  python -m pip install -U pip
```
On Linux/macOS:
```
  python install -U pip
```

5. Clean cache

```
pip cache purge
```

6. Download the GridCal release linked to the hash `564ffd`. This can be done via git by

```
git clone https://github.com/SanPen/GridCal my_gridcal
cd my_gridcal
git reset --hard 564ffd
```

7. Navigate to the `src` directory with a terminal (i.e., do `cd src` inside `my_gridcal`)

8. **(Important)** Make sure your conda environment is activated. Execute the following command

```python
  python -m pip install .
```

(Not recommended) To install GridCal in all environments, use the `--user` flag.

9. Test your installation running

```python
from GridCal.Engine import *
```

No errors should arise.

10. (Optional) Install JupyterLab

```
  pip install jupyterlab
```
