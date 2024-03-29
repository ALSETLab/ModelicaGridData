`nyiso` Module Tutorial
========================

<p align="center">
  <img src="figs/gif_nyiso-example.gif">
</p>

#### Example

The following command was given as an example for the execution of the `nyiso` module:

```python
python main.py nyiso --year 2020 --path data
```

An example of the code output after executing this module is shown below. The saving directory is omitted for the sake of conciseness.

```
=============================================
          DOWNLOADING NYISO DATA            
=============================================

Downloading load forecast data from 2020 to 2022
100%|| 3/3 [00:00<00:00,  3.35it/s]
Organizing forecast data
100%|| 3/3 [00:34<00:00, 11.59s/it]

Downloading actual load data from 2020 to 2022
100%|| 3/3 [00:00<00:00,  4.53it/s]

Organizing data
100%|| 3/3 [00:34<00:00, 11.44s/it]

Download NYISO data from 2020 to 2022 complete

Program executed in 71.2743 s (1.1879 min / 0.0198 h)
```

The organization of the data scrapped from the NYISO website is presented in the Figure below. These structure is the result from the data preprocessing that organizes the measurements and forecasts per load area.

<p align="center">
  <img src="figs/fig_NYISO-data-scrapping.png" width=60%>
</p>

Continue with the [next tutorial](tutorial_run_pf.md).
