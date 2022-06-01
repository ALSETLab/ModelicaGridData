## Example on Data Extraction from `*.hdf5` file

The following is an example illustrating how to extract data from an `*.hdf5` file produced after running the module `extract`. For the sake of reproducibility, the [`*.hdf5` file](docs/IEEE14_generators_20220526190314_4eaa02.hdf5) accompanying the following example is made available under `./docs`. A [Jupyter Notebook](docs/example_extract_data.ipynb) is also provided with the outputs of the run.

#### Prerequisites

Besides a Python installation, you need to install `numpy`, `matplotlib`, and `hdf5` to reproduce the results of this example. All of these libraries can be set up via `pip` by the following command:

```python
pip install numpy && pip install matplotlib && pip install h5py
```

#### Example of Data Extraction

In this example, we work with the `IEEE14_generators_20220526190314_4eaa02.hdf5` [file](docs/IEEE14_generators_20220526190314_4eaa02.hdf5) saved under `./docs`. The first step is to import the required dependencies:

```python
import os
import matplotlib.pyplot as plt
import h5py
```

Then, we open the `*.hdf5` file and print a list of the available scenarios, the components extracted, and the available internal measurements (because in this case we worked with signals from a generator):

```python
filepath = os.path.join(os.getcwd(), 'IEEE14_generators_20220526190314_4eaa02.hdf5')

with h5py.File(filepath, "r") as f:

    # Listing the available scenarios
    print("Available Scenarios: %s\n" % f.keys())

    # Getting the list of scenarios (and labels for all of them)
    a_group_key = list(f.keys())[0]

    # Get the data
    print("Available Signals: %s\n" % f[a_group_key].keys())
    b_group_key = list(f[a_group_key].keys())[1]

    # Get an internal measurement from the generator
    print("Available Internal Measurements: %s\n" % f[a_group_key][b_group_key].keys())
  ```

  The next step is to extract the data from the `*.hdf5` file. Here, we first get the time vector and convert it to a NumPy array (see the comment in the code extract below). Likewise, we get the traces of the generator's PSS output and the eigenvalues at scenarios 1 and 16 for the initial and final conditions, respectively. Note that the hierarchy in the `*.hdf5` file is kept while reading the data. This eases the manual data extraction after the tool is run.

  ```python
      # ------------------------------
      # Time vector
      # ------------------------------
      # Scenario 1
      t1 = f['1/time']
      t1 = t1[:] # extracting data from DataSet class

      # Scenario 16
      t16 = f['16/time']
      t16 = t16[:] # extracting data from DataSet class

      # ------------------------------
      # Eigenvalues
      # ------------------------------
      eigs1initial = f['1']['eigs/initial']
      eigs1initial = eigs1initial[:]
      eigs16final = f['16/eigs/final']
      eigs16final = eigs16final[:]

      # ------------------------------
      # PSS Output
      # ------------------------------
      PSSoutput1 = f['1/gen_Bus_1_1/VOTHSG']
      PSSoutput1 = PSSoutput1[:]

      PSSoutput16 = f['16/gen_Bus_1_1/VOTHSG']
      PSSoutput16 = PSSoutput16[:]
  ```

  Finally, the results are plotted using Matplotlib.

  ```python
  # ------------------------------
  # Plotting results
  # ------------------------------

  fig, ax = plt.subplots(nrows = 2, ncols = 1)
  fig.canvas.draw()

  ax[0].plot(t1, PSSoutput1, label = 'Scenario 1', color = 'darkblue')
  ax[0].plot(t16, PSSoutput16, label = 'Scenario 16', color = 'orange')
  ax[0].set_title('PSS Output (VOTHSG)', pad = 20)
  ax[0].set_xlabel('Time (s)')
  ax[0].legend(loc = 'upper left')

  ax[1].scatter(np.real(eigs1initial), np.imag(eigs1initial), color = 'darkblue', marker = 'x', label = 'Scenario 1')
  ax[1].scatter(np.real(eigs16final), np.imag(eigs16final), color = 'darkorange', marker = 'x', label = 'Scenario 16')
  # ax[1].set_title("Eigenvalues", pad = 20)
  # ax[1].legend(loc = 'upper left')
  ax[1].set_xlabel("Real Part ($\sigma$)")
  ax[1].set_ylabel("$j$-Imaginary Part ($j\omega$)")

   # Getting labels for first plot
  _lines, _labels = ax[0].get_legend_handles_labels()

  # Other experiments
  ax[0].legend(_lines, _labels, bbox_to_anchor = (0, 0.975, 1, 0.2),
              loc = 'lower left', mode = 'expand', ncol = 2, handletextpad = 0.52)

  fig.tight_layout()
  ```
