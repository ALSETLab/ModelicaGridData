import pandas as pd
import matplotlib.pyplot as plt
import os
import pickle
import datetime
import platform
import numpy as np

def visualize_load_forecast(date, zone, data_path = os.path.join(os.getcwd(), "data"), show_plot = True):
    '''
    VISUALIZE_LOAD_FORECAST

    This function plots the actual load, most recent load forecast (labeled as 'best'), oldest load forecast (called 'worst'), and forecast error of the given date using the processed pickle files created by `download_nyiso_data`. As an optional return value, it gives the time stamps, the actual load and the forecast values as lists.

    INPUTS:

    - date: date in month/day/year format (e.g., 03/02/2020 for March 2nd 2020).
    - zone: zone ID for one of NYISO load regions. See repository information for a list of the zone codes.
    - data_path: absolute/relative path to the NYISO data folder. It defaults to the current working directory.
    - show_plot: boolean to indicate whether a plot will be shown or not when the function is called

    OUTPUTS:

    If 'show_plot == True', the function plots the actual load, most recent and oldest load forecast for the specified zone. Additionally, it returns the following information as lists:

    - hour_minute_day: list with the time stamps of each time-series in 'hour:minute' format
    - actual_load: list with the actual measurements of load in the specified area
    - best_forecast_load: list with the values of the most recent load forecast in the specified area
    - worst_forecast_load: list with the values of the oldest load forecast in the specified area

    LAST MODIFICATION DATE:

    04/08/2020 by SADR: changed the labels for the absolute forecast error plots
    '''

    given_date = datetime.datetime.strptime(date, '%m/%d/%Y')

    # Extract year and month from given date
    year = given_date.date().year
    month = given_date.date().month
    day = given_date.date().day

    worst_forecast_date = given_date + datetime.timedelta(days = -5)

    # Getting path to processed data folders
    processed_actual_load_data_path = os.path.join(os.path.join(data_path, "Actual_Load"), "01_Processed_Data")
    processed_forecast_load_data_path = os.path.join(os.path.join(data_path, "Load_Forecast"), "01_Processed_Data")

    # Paths to commanded files
    filename = f"{year}{month:02d}{day:02d}_{zone}.pkl" # Common for the best forecast and the actual load
    filename_worst = f"{worst_forecast_date.year}{worst_forecast_date.month:02d}{worst_forecast_date.day:02d}_{zone}.pkl"


    actual_load_data_file = os.path.join(os.path.join(os.path.join(os.path.join(processed_actual_load_data_path,
        str(year)), zone), "pkl"), filename)
    forecast_load_data_file = os.path.join(os.path.join(os.path.join(os.path.join(processed_forecast_load_data_path,
        str(year)), zone), "pkl"), filename)
    worst_forecast_load_data_file = os.path.join(os.path.join(os.path.join(os.path.join(processed_forecast_load_data_path,
        str(worst_forecast_date.date().year)), zone), "pkl"), filename_worst)

    infile = open(actual_load_data_file, 'rb')
    actual_load = pickle.load(infile)

    infile = open(forecast_load_data_file, 'rb')
    forecast_load = pickle.load(infile)

    infile = open(worst_forecast_load_data_file, 'rb')
    worst_forecast_load = pickle.load(infile)

    # Filtering the oldest forecast to the given date
    worst_forecast_filtered = worst_forecast_load[worst_forecast_load["Time Stamp"] >= given_date]

    # Increasing given date by one day to filter the time stamp of the forecast data
    given_date += datetime.timedelta(days = 1)

    # Filtering the forecasted load up to the given date
    forecast_load_filtered = forecast_load[forecast_load["Time Stamp"] < given_date]

    hour_minute = []
    hour_minute_day = []

    for date in actual_load["Time Stamp"]:
        hour_minute.append(f"{date.hour:02d}:{date.minute:02d}")
        hour_minute_day.append(f"{date.hour:02d}:{date.minute:02d}_{date.month:02d}{date.day:02d}")

    if show_plot:
        fig, axes = plt.subplots(figsize = (16,8), nrows = 1, ncols = 2)

        if platform.system() == 'Windows':
            font_plot = "Times New Roman"
        else:
            font_plot = "liberation sans"

        fig.suptitle(f"{zone} - {month:02d}/{day:02d}/{year}", fontname = font_plot, fontsize = 22)

        axes[0].plot(hour_minute, actual_load["Load"].values,
            label = "Actual Load", color = 'indigo', marker = 'o', linestyle = '--')
        axes[0].legend(prop = {'size' : 16, 'family' : font_plot})
        axes[0].plot(hour_minute, forecast_load_filtered["Load Forecast"].values,
            label = "Best Load Forecast", color = 'lightsteelblue', marker = 'o', linestyle = ':')
        axes[0].plot(hour_minute, worst_forecast_filtered["Load Forecast"].values,
            label = "Worst Load Forecast", color = 'lightpink', marker = 'o', linestyle = ':')
        axes[0].legend(prop = {'size' : 16, 'family' : font_plot})
        axes[0].set_ylabel("MW", fontname = font_plot, fontsize = 18)
        axes[0].set_title("Actual Load and Forecast", fontname = font_plot, fontsize = 20)


        for tick in axes[0].get_xmajorticklabels():
            tick.set_rotation(90)

        for tick in axes[0].xaxis.get_major_ticks():
            tick.label.set_fontsize(14)
            tick.label.set_fontname(font_plot)

        for tick in axes[0].yaxis.get_major_ticks():
            tick.label.set_fontsize(14)
            tick.label.set_fontname(font_plot)

        axes[1].plot(hour_minute, np.abs(actual_load["Load"].values - forecast_load_filtered["Load Forecast"].values),
            label = "Best Forecast Error", color = 'darkblue', marker = 'o', linestyle = '--')
        axes[1].plot(hour_minute, np.abs(actual_load["Load"].values - worst_forecast_filtered["Load Forecast"].values),
            label = "Worst Forecast Error", color = 'lightskyblue', marker = 'o', linestyle = '--')
        axes[1].legend(prop = {'size' : 16, 'family' : font_plot})
        axes[1].set_ylabel("MW", fontname = font_plot, fontsize = 18)
        axes[1].set_title("Forecast Error", fontname = font_plot, fontsize = 20)

        for tick in axes[1].get_xmajorticklabels():
            tick.set_rotation(90)

        for tick in axes[1].xaxis.get_major_ticks():
            tick.label.set_fontsize(14)
            tick.label.set_fontname(font_plot)

        for tick in axes[1].yaxis.get_major_ticks():
            tick.label.set_fontsize(14)
            tick.label.set_fontname(font_plot)

        fig.tight_layout()
        fig.subplots_adjust(top = 0.90)

        # Saving figure
        save_path = os.path.join(data_path, "Figs")

        if not os.path.exists(save_path):
            os.makedirs(save_path)

        export_name = f"{month:02d}{day:02d}{year}_{zone}.png"

        fig.savefig(os.path.join(save_path, export_name), dpi = 300)
        plt.show()

    return hour_minute_day, list(actual_load["Load"].values), list(forecast_load_filtered["Load Forecast"].values), list(worst_forecast_filtered["Load Forecast"].values)
