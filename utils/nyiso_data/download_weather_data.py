# Importing required libraries
import urllib.request
import os
import datetime
import zipfile
import pandas as pd
import numpy as np
import pickle
import shutil

def download_weather_data(start_year = 1999, destination_folder = os.path.join(os.getcwd(), "data"), verbose = False):
    '''
    DOWNLOAD_WEATHER_DATA

    INPUTS:

    OUTPUTS:

    LAST MODIFICATION DATE:
    04/10/2020 by SADR
    '''

    ######################################
    #### CREATING FOLDER STRUCTURE #######
    ######################################

    # Creating destination folder if it does not exist yet
    if not os.path.exists(destination_folder):
        os.makedirs(destination_folder)

    # Creating data organization structure inside destination folder
    weather_forecast_path = os.path.join(destination_folder, "Weather_Forecast")

    if not os.path.exists(weather_forecast_path):
        os.makedirs(weather_forecast_path)

    # Folder for raw data
    raw_weather_forecast_data_path = os.path.join(weather_forecast_path, "00_Raw_Data")

    # Folder for processed data
    processed_weather_forecast_data_path = os.path.join(weather_forecast_path, "01_Processed_Data")

    #########################################
    ### DOWNLOADING WEATHER FORECAST DATA ###
    #########################################

    # Getting actual date
    now = datetime.datetime.now()

    if start_year <= 2008:
        start_year = 2008

    # Download '.zip' files for monthly information
    for year in range(start_year, now.year + 1):

        # Path to the downloads folder
        download_folder = os.path.join(raw_weather_forecast_data_path, f"{year}")

        # Creating folder if it does not exist
        if not os.path.exists(download_folder):
            os.makedirs(download_folder)

        for month in range(1, 13):

            # Guaranteeing that the script downloads data as available from NYISO records
            if year == 2008 and month < 9:
                continue

            # Stop downloading data at current year and month
            if year == now.year and month > now.month:
                break

            filename = f"{year}{month:02d}01lfweather_csv.zip"
            url = f"http://mis.nyiso.com/public/csv/lfweather/{filename}"

            file = os.path.join(download_folder, filename)

            # Skipping already downloaded files and just updating new ones
            if not os.path.exists(file[0:-4]):
                urllib.request.urlretrieve(url, file)
                # Unzipping files
                with zipfile.ZipFile(file, 'r') as zip_ref:
                    zip_ref.extractall(file[0:-4])
                # Removing '.zip' file
                if file.endswith(".zip"):
                    os.remove(file)
            else:
                # Updating files
                if year == now.year and month == now.month:
                    # Removing folder
                    shutil.rmtree(file[0:-4])
                    # Downloading most recent files
                    urllib.request.urlretrieve(url, file)
                    # Unzipping files
                    with zipfile.ZipFile(file, 'r') as zip_ref:
                        zip_ref.extractall(file[0:-4])
                    # Removing '.zip' file
                    if file.endswith(".zip"):
                        os.remove(file)
                else:
                    continue

    if verbose:
        print(f"Weather Forecast '.zip' file download completed up to {now.month}/{now.day-1}/{now.year}")
