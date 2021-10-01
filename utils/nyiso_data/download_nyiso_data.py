# Importing required libraries
import urllib.request
import os
import datetime
import zipfile
import pandas as pd
import numpy as np
import pickle
import shutil
from tqdm import tqdm

current_year = datetime.datetime.now().year

def download_nyiso_data(start_year = current_year, destination_folder = os.path.join(os.getcwd(), "data"), verbose = False):

    '''
    DOWNLOAD_NYISO_DATA

    This function downloads all the *.csv files of load forecast and actual load (hourly time-stamp) from the NYISO website from a given start year up to present time.
    It can be used to update existing files (i.e., does not overwrite pre-existing data).

    It also organizes the files in Pandas dataframes stored as pickle files (*.pkl) by region of the New York State grid.

    INPUTS:
    - `start_year`: year from which the data starts being downloaded. It defaults to current year.
    - `destination_folder`: path of the target folder to download the files (relative to the script path). It defaults to "data". If the folder does not exist,
    the script creates it.
    - `verbose`: if `True`, prints verbose statements to show progress of the download and the data organization processes.

    OUTPUTS:
    None

    LAST MODIFICATION DATE:
    09/23/2021 by SADR
    '''

    ######################################
    #### CREATING FOLDER STRUCTURE #######
    ######################################

    # Creating destination folder if it does not exist yet
    if not os.path.exists(destination_folder):
        os.makedirs(destination_folder)

    # Creating data organization structure inside destination folder
    load_forecast_path = os.path.join(destination_folder, "Load_Forecast")
    actual_load_path = os.path.join(destination_folder, "Actual_Load")

    if not os.path.exists(load_forecast_path):
        os.makedirs(load_forecast_path)

    if not os.path.exists(actual_load_path):
        os.makedirs(actual_load_path)

    # Folders for raw data
    raw_lf_data_path = os.path.join(load_forecast_path, "00_Raw_Data")
    raw_actual_load_path = os.path.join(actual_load_path, "00_Raw_Data")

    if not os.path.exists(raw_lf_data_path):
        os.makedirs(raw_lf_data_path)

    if not os.path.exists(raw_actual_load_path):
        os.makedirs(raw_actual_load_path)

    # Folders for processed data
    processed_lf_data_path = os.path.join(load_forecast_path, "01_Processed_Data")
    processed_actual_load_path = os.path.join(actual_load_path, "01_Processed_Data")

    if not os.path.exists(processed_lf_data_path):
        os.makedirs(processed_lf_data_path)

    if not os.path.exists(processed_actual_load_path):
        os.makedirs(processed_actual_load_path)

    ######################################
    ### DOWNLOADING LOAD FORECAST DATA ###
    ######################################

    # Getting actual date
    now = datetime.datetime.now()

    if start_year <= 2001:
        start_year = 2001

    print(f"Downloading load forecast data from {start_year} to {now.year}")
    # Download '.zip' files for monthly information
    for year in tqdm(range(start_year, now.year + 1)):

        download_folder = os.path.join(raw_lf_data_path, f"{year}")

        if not os.path.exists(download_folder):
            os.makedirs(download_folder)

        for month in range(1, 13):

            # Guaranteeing that the script downloads data as available from NYISO records
            if year == 2001 and month < 6:
                continue

            # Stop downloading data at current year and month
            if year == now.year and month > now.month:
                break

            filename = f"{year}{month:02d}01isolf_csv.zip"
            url = f"http://mis.nyiso.com/public/csv/isolf/{filename}"
            file = os.path.join(download_folder, filename)

            # Skipping already downloaded files (just updating the current ones)
            if os.path.exists(file[0:-4]):
                # Updating files of current month only
                if year == now.year and month == now.month:
                    if verbose: print(f"Updating files of {month}/{year}")

                    # Removing folder
                    #os.rmdir(file[0:-4])
                    shutil.rmtree(file[0:-4])
                    # Downloading most recent files
                    urllib.request.urlretrieve(url, file)
                    # Unzipping files
                    with zipfile.ZipFile(file, 'r') as zip_ref:
                        zip_ref.extractall(file[0:-4])
                    # Removing '.zip' file
                    if file.endswith(".zip"):
                        os.remove(file)
                    if verbose: print(f"Files of {month}/{year} updated")
                else:
                    continue
            else:
                # Downloading files
                urllib.request.urlretrieve(url, file)
                # Unzipping files
                with zipfile.ZipFile(file, 'r') as zip_ref:
                    zip_ref.extractall(file[0:-4])
                # Removing '.zip' file
                if file.endswith(".zip"):
                    os.remove(file)

    # Print info statement when all files have been downloaded
    if verbose:
        print(f"Load forecast '.zip' file download completed up to {now.month}/{now.day-1}/{now.year}")

    print("Organizing forecast data")
    organizing_forecast_data_per_zone(raw_lf_data_path, processed_lf_data_path)

    if verbose:
        print(f"Forecast load '.zip' file organization completed up to {now.month}/{now.day-1}/{now.year}")

    ######################################
    ###### DOWNLOADING ACTUAL DATA #######
    ######################################

    print(f"\nDownloading actual load data from {start_year} to {now.year}")
    # Downloading data of actual load (with hourly time-stamp)
    for year in tqdm(range(start_year, now.year + 1)):

        # Download folder
        download_folder = os.path.join(raw_actual_load_path, f"{year}")

        if not os.path.exists(download_folder):
            os.makedirs(download_folder)

        for month in range(1, 13):

            if year == 2001 and month < 6:
                continue

            if year == now.year and month > now.month:
                break

            filename = f"{year}{month:02d}01palIntegrated_csv.zip"
            url = f"http://mis.nyiso.com/public/csv/palIntegrated/{filename}"
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

    # Print info statement when all files have been downloaded
    if verbose:
        print(f"Actual load '.zip' file download completed up to {now.month}/{now.day-1}/{now.year}")

    print(f"\nOrganizing data")
    # ORGANIZING ACTUAL LOAD DATA PER ZONE
    organizing_actual_load_data_per_zone(raw_actual_load_path, processed_actual_load_path)

    if verbose:
        print(f"Actual load '.zip' file organization completed up to {now.month}/{now.day-1}/{now.year}")

def organizing_actual_load_data_per_zone(raw_data_path, write_data_path):

    # Set to gather the info of the New York State power grid load zones
    nys_zones = set()

    # Getting subfolders
    year_subfolders = os.listdir(raw_data_path)

    for year_subfolder in tqdm(year_subfolders):

        year_subfolder_path = os.path.join(raw_data_path, year_subfolder)

        # Path of the subfolder files containing the 'csv' files for each year
        csv_subfolders = [os.path.join(year_subfolder_path, csv_subf) for csv_subf in os.listdir(year_subfolder_path)]

        for csv_subf in csv_subfolders:

            # Getting a list of the '.csv' files in each csv subfolder
            csv_files = [os.path.join(csv_subf, csv_file) for csv_file in os.listdir(csv_subf)]
            csv_files_names = os.listdir(csv_subf)

            # Clearing variables for auxiliary containers
            df_aux = None
            df_temp = None

            for n_csv_file, csv_file in enumerate(csv_files):

                # Loading '.csv' file in a Pandas dataframe
                df_aux = pd.read_csv(csv_file)

                zones_nys_ps = list(df_aux["Name"].unique())

                # Writing information of each of the zones of NY grid
                for zone in zones_nys_ps:
                    # Name of the target file
                    filename = csv_files_names[n_csv_file][:-17] + "_" + zone

                    # Path of the target folder
                    target_path_csv = os.path.join(os.path.join(os.path.join(write_data_path, year_subfolder), zone), "csv")
                    target_path_pkl = os.path.join(os.path.join(os.path.join(write_data_path, year_subfolder), zone), "pkl")

                    # Creating target folder if it does not exist
                    if not os.path.exists(target_path_csv):
                        os.makedirs(target_path_csv)
                    if not os.path.exists(target_path_pkl):
                        os.makedirs(target_path_pkl)

                    save_file_path = os.path.join(target_path_pkl, filename) + ".pkl"

                    # Skip operations if the file already exists
                    if os.path.exists(save_file_path):
                        continue

                    # Adding a set to determine how many different zones are in NY grid
                    nys_zones.add(zone)

                    # Creating a temporary Pandas dataframe
                    df_temp = pd.DataFrame([], columns = ["Time Stamp", "Load"])

                    # Getting the load data
                    df_temp["Load"] = df_aux[df_aux["Name"] == zone]["Integrated Load"].values

                    # Filling the missing values using the next available values
                    df_temp.fillna(method = 'ffill')

                    # Convert time stamp to datetime format
                    df_temp["Time Stamp"] = df_aux[df_aux["Name"] == zone]["Time Stamp"].values

                    time_values = []
                    for date in df_temp["Time Stamp"]:
                        date_aux_1 = datetime.datetime.strptime(date, '%m/%d/%Y %H:%M:%S')
                        time_values.append(date_aux_1)

                    df_temp.drop("Time Stamp", axis = 1, inplace = True)
                    df_temp["Time Stamp"] = time_values

                    with open(save_file_path, 'wb') as f:
                        pickle.dump(df_temp, f, pickle.HIGHEST_PROTOCOL)

                    # Saving dataframe as '.csv' file
                    df_temp.to_csv(os.path.join(target_path_csv, filename) + ".csv", index = False)

                    # Cleaning pandas dataframe
                    if df_temp is not None:
                        df_temp = None

                # Total NYISO load file
                filename = csv_files_names[n_csv_file][:-17] + "_" + "NYISO"
                target_path_pkl = os.path.join(os.path.join(os.path.join(write_data_path, year_subfolder), "NYISO"), "pkl")
                target_path_csv = os.path.join(os.path.join(os.path.join(write_data_path, year_subfolder), "NYISO"), "csv")

                # Creating target folder for '.pkl' files if it does not exist yet
                if not os.path.exists(target_path_pkl):
                    os.makedirs(target_path_pkl)
                # Creating target folder for '.csv' files if it does not exist yet
                if not os.path.exists(target_path_csv):
                    os.makedirs(target_path_csv)

                save_file_path = os.path.join(target_path_pkl, filename) + ".pkl"

                # Skip operations if the file already exists
                if os.path.exists(save_file_path):
                    continue

                #########################################
                ########### TOTAL LOAD IN NYS ###########
                #########################################

                # Temporary data frame for the total load
                df_temp = pd.DataFrame([], columns = ["Time Stamp", "Load"])

                # Time stamp values for the total load data frame
                df_temp["Time Stamp"] = np.unique(df_aux["Time Stamp"].values)

                # Getting total load per time stamp and adding it to the temporary data frame
                total_load = []
                for date in df_temp["Time Stamp"]:
                    total_load.append(df_aux[df_aux["Time Stamp"] == date]["Integrated Load"].sum())
                total_load = np.array(total_load)
                df_temp["Load"] = total_load

                # Converting time stamps to datatime format
                time_values = []
                for date in df_temp["Time Stamp"]:
                    date_aux_1 = datetime.datetime.strptime(date, '%m/%d/%Y %H:%M:%S')
                    time_values.append(date_aux_1)

                df_temp.drop("Time Stamp", axis = 1, inplace = True)
                df_temp["Time Stamp"] = time_values

                with open(save_file_path, 'wb') as f:
                    pickle.dump(df_temp, f, pickle.HIGHEST_PROTOCOL)

                # Saving dataframe as '.csv' file
                df_temp.to_csv(os.path.join(target_path_csv, filename) + ".csv", index = False)

                if df_temp is not None:
                    df_temp = None

                # Cleaning pandas dataframe
                if df_aux is not None:
                    df_aux = None

def organizing_forecast_data_per_zone(raw_data_path, write_data_path):
    '''
    organizing_forecast_data_per_zone

    INPUTS:

    OUTPUTS:

    LAST MODIFICATION DATE:
    09/23/2021 by SADR
    '''

    # Getting subfolders
    year_subfolders = os.listdir(raw_data_path)

    for year_subfolder in tqdm(year_subfolders):

        year_subfolder_path = os.path.join(raw_data_path, year_subfolder)

        # Path of the subfolder files containing the 'csv' files for each year
        csv_subfolders = [os.path.join(year_subfolder_path, csv_subf) for csv_subf in os.listdir(year_subfolder_path)]

        for csv_subf in csv_subfolders:

            # Getting a list of the '.csv' files in each csv subfolder
            csv_files = [os.path.join(csv_subf, csv_file) for csv_file in os.listdir(csv_subf)]
            csv_files_names = os.listdir(csv_subf)

            # Clearing variables for auxiliary containers
            df_aux = None
            df_temp = None

            for n_csv_file, csv_file in enumerate(csv_files):

                # Loading '.csv' file in a Pandas dataframe
                df_aux = pd.read_csv(csv_file)

                # Getting the zones of the NYS power grid from the columns of the '.csv' files
                zones_nys_ps = list(df_aux.columns.values)

                # Removing the columns that are not a zone of the NYS grid
                zones_nys_ps.remove("Time Stamp")

                for zone in zones_nys_ps:

                    # Name of the target file
                    filename = csv_files_names[n_csv_file][:-9] + "_" + zone.upper()

                    # Path of the target folder
                    target_path_csv = os.path.join(os.path.join(os.path.join(write_data_path, year_subfolder), zone.upper()), "csv")
                    target_path_pkl = os.path.join(os.path.join(os.path.join(write_data_path, year_subfolder), zone.upper()), "pkl")

                    # Creating target folder if it does not exist
                    if not os.path.exists(target_path_csv):
                        os.makedirs(target_path_csv)

                    if not os.path.exists(target_path_pkl):
                        os.makedirs(target_path_pkl)

                    save_file_path = os.path.join(target_path_pkl, filename) + ".pkl"

                    # Skip operations if the file already exists
                    if os.path.exists(save_file_path):
                        continue

                    # Creating a temporary Pandas dataframe
                    df_temp = pd.DataFrame([], columns = ["Time Stamp", "Load Forecast"])

                    # Getting the load data
                    df_temp["Load Forecast"] = df_aux[zone].values

                    # Filling the missing values using the next available values
                    df_temp.fillna(method = 'ffill')

                    # Convert time stamp to datetime format
                    df_temp["Time Stamp"] = df_aux["Time Stamp"].values

                    time_values = []
                    for date in df_temp["Time Stamp"]:
                        date_aux_1 = datetime.datetime.strptime(date, '%m/%d/%Y %H:%M')
                        time_values.append(date_aux_1)

                    df_temp.drop("Time Stamp", axis = 1, inplace = True)
                    df_temp["Time Stamp"] = time_values

                    with open(save_file_path, 'wb') as f:
                        pickle.dump(df_temp, f, pickle.HIGHEST_PROTOCOL)

                    df_temp.to_csv(os.path.join(target_path_csv, filename) + ".csv", index = False)

                    # Cleaning pandas dataframe
                    if df_temp is not None:
                        df_temp = None

                # Cleaning pandas dataframe
                if df_aux is not None:
                    df_aux = None
