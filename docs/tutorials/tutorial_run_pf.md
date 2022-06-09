`run_pf` Module Tutorial
========================

![Example of the `extract` module](docs/tutorials/figs/gif_run_pf-example.gif)

#### Example

While standing on the parent folder of `ModelicaGridData`, after running the `nyiso` module, run the following command to dispatch the power flow genration using GridCal:

```python
python main.py run_pf --model IEEE14 --loads 3
```

By default, the power flows are generated using the "best" and the "worst" forecast, and the actual measurements for a window of a day. So, $24 \times 3 = 72$ power flows are produced by the command above. Below, we can see the output of the program in the command prompt. Since the number of loads has been specified (`--loads 3`), the assignment of the loads to be varied according to the profiles of the corresponding NY grid area is shown to the user.

Continue with the [next tutorial](docs/tutorials/tutorial_val_pf.md).
