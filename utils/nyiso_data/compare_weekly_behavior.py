import calendar
import datetime
import os
from .get_start_end_day import *
from .get_weekly_behavior import *

import matplotlib.pyplot as plt
from matplotlib.gridspec import GridSpec
from cycler import cycler

def format_ticks(axis, font_plot):
    for tick in axis.xaxis.get_major_ticks():
        tick.label.set_fontsize(0)
        tick.label.set_fontname(font_plot)

    for tick in axis.yaxis.get_major_ticks():
        tick.label.set_fontsize(14)
        tick.label.set_fontname(font_plot)

def compare_weekly_behavior(date, comparison_years, zone, data_path = os.path.join(os.getcwd(), "data")):
    '''
    COMPARE_WEEKLY_BEHAVIOR

    This function compares the weekly behavior of actual load, and best/worst load forecast of equivalent weeks in different years through a plot

    INPUTS:
    - date: some day of a week that wants to be compared with another year
    - comparison_years: list containing the specific years to be compared. To pass only one year, pass it as a one-element list (e.g., [2020]).
    - zone: string with the ID of a zone of the NY state power grid. See the repository documentation for more information.
    - data_path: relative path to the NYISO data folder

    OUTPUTS:
    The function shows automatically a plot showing the actual load, the absolute error for the best and the worst forecast for the specified week in the
    current year and each of the years in the list 'comparison_years'.

    - output_dict: nested dictionary. The first key layer corresponds to the years being compared. The second is a key
    to the 'Actual_Load', 'Best_Forecast' and 'Worst_Forecast'

    output_dict
        'comparison_year'
            'monthly'
                'Time_Stamp'
                'Actual_Load'
                'Best_Forecast'
                'Worst_Forecast'
            'weekly'
                'Time_Stamp'
                'Actual_Load'
                'Best_Forecast'
                'Worst_Forecast'

    LAST MODIFICATION DATE:
    04/06/2020 by SADR
    '''

    ####################################################
    ################ PROCESSING DATES ##################
    ####################################################

    # Sorting 'comparison_years' list (in-place operation)
    comparison_years.sort()

    # Getting start (Monday) and end day (Sunday) of the week with the given date
    start_day, end_day, week_number = get_start_end_day(date)

    time_stamp_or, load_week_or, forecast_week_or, worst_forecast_week_or = \
        get_weekly_behavior(f"{start_day.month:02d}/{start_day.day:02d}/{start_day.year}", zone, data_path, False)

    # Changing default colors for plotting
    color_cycle_load = ['coral', 'yellowgreen', 'darkcyan', 'olivedrab']
    new_prop_cycle = cycler('color', color_cycle_load)
    plt.rc('axes', prop_cycle = new_prop_cycle)

    # User-defined colors for plots of actual data
    color_load = 'darkblue'
    color_error = 'darkblue'
    color_worst_error = 'darkblue'

    # Creating figure to plot data
    fig = plt.figure(figsize = (16, 8), constrained_layout = True)

    # Creating multi-column/multi-row arrangement for plotting
    gs = GridSpec(2, 2, figure = fig)
    ax1 = fig.add_subplot(gs[:, 0])
    ax2 = fig.add_subplot(gs[0, 1])
    ax3 = fig.add_subplot(gs[1, 1])

    # Selecting font for plots
    if platform.system() == 'Windows':
        font_plot = "Times New Roman"
    else:
        font_plot = "liberation sans"

    comparison_years.append(start_day.date().year)

    output_dict = dict.fromkeys(comparison_years)
    data_keys = ['Actual_Load', 'Best_Forecast', 'Worst_Forecast']

    for key in output_dict:
        output_dict[key] = dict.fromkeys(data_keys)

    for comparison_year in comparison_years:

        if comparison_year == start_day.date().year:
            # Breaking the loop to avoid plotting the most recent year
            break

        # Getting start and end day of the comparison year
        d = f"{comparison_year}-W{week_number}" # date of the comparison year given the week number
        r = datetime.datetime.strptime(d + '-1', "%G-W%V-%u") # monday of the corresponding week

        # Getting start and end day of the corresponding week
        start_day_comp, end_day_comp, _ = get_start_end_day(f"{r.month:02d}/{r.day:02d}/{r.year}")

        time_stamp_comp, load_week_comp, forecast_week_comp, worst_forecast_week_comp = \
        get_weekly_behavior(f"{start_day_comp.month:02d}/{start_day_comp.day:02d}/{start_day_comp.year}", zone, data_path, False)

        # Plotting actual load
        ax1.plot(load_week_comp, label = f"{start_day_comp.year}: {start_day_comp.month}/{start_day_comp.day} - {end_day_comp.month}/{end_day_comp.day}",
        linestyle = '--')

        # Plotting most recent forecast
        ax2.plot(np.abs(np.array(load_week_comp) - np.array(forecast_week_comp)),
        label = f"{start_day_comp.year}: {start_day_comp.month}/{start_day_comp.day} - {end_day_comp.month}/{end_day_comp.day}",
        linestyle = '--')

        # Plotting oldest forecast
        ax3.plot(np.abs(np.array(load_week_comp) - np.array(worst_forecast_week_comp)),
        label = f"{start_day_comp.year}: {start_day_comp.month}/{start_day_comp.day} - {end_day_comp.month}/{end_day_comp.day}",
        linestyle = '--')

        # Storing data in output dictionary
        output_dict[comparison_year]['Actual_Load'] = load_week_comp
        output_dict[comparison_year]['Best_Forecast'] = forecast_week_comp
        output_dict[comparison_year]['Worst_Forecast'] = worst_forecast_week_comp

    # Plotting actual load of the given date
    ax1.plot(load_week_or, label = f"{start_day.year}: {start_day.month}/{start_day.day} - {end_day.month}/{end_day.day}", color = color_load)

    ax2.plot(np.abs(np.array(load_week_or) - np.array(forecast_week_or)),
    label = f"{start_day.year}: {start_day.month}/{start_day.day} - {end_day.month}/{end_day.day}", color = color_error)
    ax3.plot(np.abs(np.array(load_week_or) - np.array(worst_forecast_week_or)),
    label = f"{start_day.year}: {start_day.month}/{start_day.day} - {end_day.month}/{end_day.day}", color = color_worst_error)

    # Plotting
    ax1.set_title("Actual Load", fontname = font_plot, fontsize = 20)
    ax2.set_title("Best Forecast Absolute Error", fontname = font_plot, fontsize = 20)
    ax3.set_title("Worst Forecast Absolute Error", fontname = font_plot, fontsize = 20)

    # Label of y-axis
    ax1.set_ylabel("MW", fontname = font_plot, fontsize = 18)
    ax2.set_ylabel("MW", fontname = font_plot, fontsize = 18)
    ax3.set_ylabel("MW", fontname = font_plot, fontsize = 18)

    # Including labels into the plots
    ax1.legend(loc = 'upper right', prop = {'size' : 12, 'family' : font_plot})
    ax2.legend(loc = 'upper right', prop = {'size' : 12, 'family' : font_plot})
    ax3.legend(loc = 'upper right', prop = {'size' : 12, 'family' : font_plot})

    # Formatting axis ticks
    format_ticks(ax1, font_plot)
    format_ticks(ax2, font_plot)
    format_ticks(ax3, font_plot)

    # Title for the figure
    fig.suptitle(f"Comparison of Weekly Behavior (W{week_number}) of Load and Forecast ({zone})", fontname = font_plot, fontsize = 22)

    output_dict[start_day.date().year]['Actual_Load'] = load_week_or
    output_dict[start_day.date().year]['Best_Forecast'] = forecast_week_or
    output_dict[start_day.date().year]['Worst_Forecast'] = worst_forecast_week_or

    # Saving figure
    week_number_label = f"W{week_number}_"
    year_string = ""
    for n_year, year in enumerate(comparison_years):
        if n_year == len(comparison_years)-1:
            year_string += f"{year}"
        else:
            year_string += f"{year}_"

    plot_label_save = week_number_label + year_string

    save_path = os.path.join(data_path, "Figs")
    export_name = f"{zone}_weekly_comparison_{plot_label_save}.png"
    fig.savefig(os.path.join(save_path, export_name), dpi = 300)

    # Clearing figure
    fig = None

    return output_dict
