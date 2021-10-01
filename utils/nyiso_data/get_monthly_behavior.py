import datetime
import calendar
import os
from .get_start_end_day import *
from .get_weekly_behavior import *

import matplotlib.pyplot as plt
from matplotlib.gridspec import GridSpec
from cycler import cycler

def format_ticks(axis, font_plot, size_x = 0, rotate_x_labels = False):

    if rotate_x_labels:
        for tick in axis.get_xmajorticklabels():
            tick.set_rotation(90)
    for tick in axis.xaxis.get_major_ticks():
        tick.label.set_fontsize(size_x)
        tick.label.set_fontname(font_plot)

    for tick in axis.yaxis.get_major_ticks():
        tick.label.set_fontsize(14)
        tick.label.set_fontname(font_plot)

def get_monthly_behavior(date, zone, data_path = os.path.join(os.getcwd(), "data"), show_plot = False):
    '''
    GET_MONTHLY_BEHAVIOR

    This function returns the monthly information about load and load forecast for all weeks in a given month. A month is assumed to start the week at which the first day of the month takes place (i.e., if the first day
    of a month is a Tuesday, then that week is counted as the first week of that month). It returns a dictionary having the information of the month in a concatenated array and the weekly information.

    INPUTS:
    - date: string in format `month:year` (e.g., March 2020 is passed as `03/2020`)
    - zone: string with the ID of a zone of the NY state power grid. See the repository documentation for more information.
    - data_path: relative path to the NYISO data folder
    - show_plot: boolean to show plot of monthly behavior of load and load forecast

    OUTPUTS:
    - output_dict: nested dictionary containing both the weekly and the monthly information of the requested region. It consists
    of two dictionary layers.

    output_dict
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

    # Converting the given date to 'datetime' format
    given_date = datetime.datetime.strptime(date, '%m/%Y')

    # Extracting year and month
    year = given_date.date().year
    month = given_date.date().month

    # Getting the number of days in the given month
    num_days = calendar.monthrange(year, month)[1]

    # Getting the days of the given month
    month_days = [datetime.date(year, month, day) for day in range(1, num_days + 1)]

    # Getting the mondays of the given month
    monday_month = [f"{day.month:02d}/{day.day:02d}/{day.year}" for day in month_days if day.weekday() == 0]

    time_stamp_month = []
    load_month = []
    forecast_month = []
    worst_forecast_month = []

    time_stamp_weekly_info = dict.fromkeys(range(1, len(monday_month) + 1))
    load_weekly_info = dict.fromkeys(range(1, len(monday_month) + 1))
    forecast_weekly_info = dict.fromkeys(range(1, len(monday_month) + 1))
    worst_forecast_weekly_info = dict.fromkeys(range(1, len(monday_month) + 1))

    label_week = []

    for n_week, monday_week in enumerate(monday_month):

        time_stamp_week, load_week, forecast_week, worst_forecast_week = get_weekly_behavior(monday_week, zone, data_path, show_plot = False)

        start_day, end_day, _ = get_start_end_day(monday_week)

        label = f"{start_day.month:02d}/{start_day.day:02d}-{end_day.month:02d}/{end_day.day:02d}"
        label_week.append(label)

        time_stamp_month.extend(time_stamp_week)
        load_month.extend(load_week)
        forecast_month.extend(forecast_week)
        worst_forecast_month.extend(worst_forecast_week)

        time_stamp_weekly_info[n_week + 1] = time_stamp_week
        load_weekly_info[n_week + 1] = load_week
        forecast_weekly_info[n_week + 1] = forecast_week
        worst_forecast_weekly_info[n_week + 1] = worst_forecast_week
        worst_forecast_weekly_info[n_week + 1] = worst_forecast_week

    if show_plot:

        color_load = 'indigo'
        color_forecast = 'lightsteelblue'
        color_worst_forecast = 'lightpink'
        color_error = 'darkblue'
        color_worst_error = 'lightskyblue'

        # Changing default colors for plotting
        color_cycle_load = ['dodgerblue', 'yellowgreen', 'darkcyan', 'olivedrab', 'orangered']
        new_prop_cycle = cycler('color', color_cycle_load)
        plt.rc('axes', prop_cycle = new_prop_cycle)

        #######################################
        ###### PLOTTING MONTHLY BEHAVIOR ######
        #######################################

        # Creating figure to plot data
        fig = plt.figure(figsize = (16, 20), constrained_layout = True)

        # Creating multi-column/multi-row arrangement for plotting
        gs = GridSpec(4, 2, figure = fig)
        ax1 = fig.add_subplot(gs[0, :])
        ax2 = fig.add_subplot(gs[1, :])
        ax3 = fig.add_subplot(gs[2, :])
        ax4 = fig.add_subplot(gs[3, 0])
        ax5 = fig.add_subplot(gs[3, 1])

        # Selecting font for plots
        if platform.system() == 'Windows':
            font_plot = "Times New Roman"
        else:
            font_plot = "liberation sans"

        ax1.plot(load_month, label = "Actual Load", color = color_load)
        ax1.plot(forecast_month, label = "Best Forecast", color = color_forecast, linestyle = '--')
        ax1.plot(worst_forecast_month, label = "Worst Forecast", color = color_worst_forecast, linestyle = '--')
        ax1.legend(loc = 'upper right', prop = {'size' : 14, 'family' : font_plot})
        ax1.set_ylabel("MW", fontname = font_plot, fontsize = 18)
        ax1.set_title("Actual Load, Best and Worst Load Forecast", fontname = font_plot, fontsize = 20)

        ax2.plot(np.abs(np.array(load_month) - np.array(forecast_month)), label = "Best Forecast Error", color = color_error)
        ax2.plot(np.abs(np.array(load_month) - np.array(worst_forecast_month)), label = "Worst Forecast Error", color = color_worst_error)
        ax2.legend(loc = 'upper right', prop = {'size' : 14, 'family' : font_plot})
        ax2.set_ylabel("MW", fontname = font_plot, fontsize = 18)
        ax2.set_title("Absolute Forecast Error", fontname = font_plot, fontsize = 20)

        # Formatting axes
        ax1.set_xticks(np.arange(0, len(load_month) - 1, int(len(load_month)/len(label_week))))
        try:
            ax1.set_xticklabels(label_week)
            format_ticks(ax1, font_plot, 14, True)

            ax2.set_xticks(np.arange(0, len(load_month) - 1, int(len(load_month)/len(label_week))))
            ax2.set_xticklabels(label_week)
            format_ticks(ax2, font_plot, 14, True)
        except:
            pass

        #######################################
        ####### PLOTTING WEEKLY BEHAVIOR ######
        #######################################

        line_style = 'dotted'

        for week in load_weekly_info:
            ax3.plot(load_weekly_info[week], label = label_week[week - 1],
                linestyle = line_style)
            ax4.plot(np.abs(np.array(load_weekly_info[week]) - np.array(forecast_weekly_info[week])), label = label_week[week-1],
                linestyle = line_style)
            ax5.plot(np.abs(np.array(load_weekly_info[week]) - np.array(worst_forecast_weekly_info[week])), label = label_week[week-1],
                linestyle = line_style)

        ax3.set_ylabel("MW", fontname = font_plot, fontsize = 18)
        ax3.legend(loc = 'upper right', prop = {'size' : 14, 'family' : font_plot})
        format_ticks(ax3, font_plot)
        ax3.set_title(f"Weekly Load Behavior in {date} ({zone})", fontname = font_plot, fontsize = 20)

        ax4.set_ylabel("MW", fontname = font_plot, fontsize = 16)
        ax4.legend(loc = 'upper right', prop = {'size' : 14, 'family' : font_plot})
        ax4.set_title(f"Best Forecast Error Behavior in {date} ({zone})", fontname = font_plot, fontsize = 20)
        format_ticks(ax4, font_plot)

        ax5.set_ylabel("MW", fontname = font_plot, fontsize = 16)
        ax5.legend(loc = 'upper right', prop = {'size' : 14, 'family' : font_plot})
        ax5.set_title(f"Worst Forecast Error Behavior in {date} ({zone})", fontname = font_plot, fontsize = 20)
        format_ticks(ax5, font_plot)

        # Title of the figure
        fig.suptitle(f"Monthly Behavior {date} ({zone})", fontname = font_plot, fontsize = 22)

        # Saving figure
        save_path = os.path.join(data_path, "Figs")
        export_name = f"{zone}_{month}_{year}_monthly.png"
        fig.savefig(os.path.join(save_path, export_name), dpi = 300)

        # Clearing figure
        fig = None

    output_dict = {'monthly': {'Time_Stamp': time_stamp_month,
                            'Actual_Load' : load_month,
                            'Best_Forecast' : forecast_month,
                            'Worst_Forecast' : worst_forecast_month},
        'weekly' : {'Time_Stamp' : time_stamp_weekly_info,
                    'Actual_Load' : load_weekly_info,
                    'Best_Forecast' : forecast_weekly_info,
                    'Worst_Forecast' : worst_forecast_weekly_info}}

    return output_dict
