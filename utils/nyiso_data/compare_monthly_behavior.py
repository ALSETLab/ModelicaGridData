from .get_monthly_behavior import *
import os

def format_ticks(axis, font_plot):
    for tick in axis.xaxis.get_major_ticks():
        tick.label.set_fontsize(0)
        tick.label.set_fontname(font_plot)

    for tick in axis.yaxis.get_major_ticks():
        tick.label.set_fontsize(14)
        tick.label.set_fontname(font_plot)

def compare_monthly_behavior(date, comparison_years, zone, data_path = os.path.join(os.getcwd(), "data")):
    '''
    COMPARE_MONTHLY_BEHAVIOR

    This function is used to perform a comparison between the monthly behavior in different years for actual load and forecast error. It outputs a dictionary containing the information of the years which were compared.

    INPUTS:
    - date: month/year as a basis to be compared (e.g., March 2020 is passed as '03/2020').
    - comparison_years: list containing the specific years to be compared. To pass only one year, pass it as a one-element list (e.g., [2020]).
    - zone: string with the ID of a zone of the NY state power grid. See the repository documentation for more information.
    - data_path: relative path to the NYISO data folder

    OUTPUTS:
    - data_comparison: dictionary whose keys are the years to be compared (including year passed on 'date'). It contains both the monthly information and the
    weekly information for the given month. See the documentation of `get_monthly_behavior` for more information.

    data_comparison
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
    10/01/2021 BY SADR
    '''

    # Converting inputted date information to suitable 'datatime' format
    given_date = datetime.datetime.strptime(date, '%m/%Y')

    # Extracting year and month from given string
    now_year = given_date.date().year
    now_month = given_date.date().month

    # Adding the current year to the list of comparison_years
    comparison_years.append(now_year)

    # Sorting 'comparison_years' list (in-place operation)
    comparison_years.sort()

    # Creating a data container for the data in the years to be compared
    data_comparison = dict.fromkeys(comparison_years)

    # Creating figure to plot data
    fig = plt.figure(figsize = (16,12), constrained_layout = True)

    # Selecting font for plots
    if platform.system() == 'Windows':
        font_plot = "Times New Roman"
    else:
        font_plot = "liberation sans"

    # Creating multi-column/multi-row arrangement for plotting
    gs = GridSpec(3, 2, figure = fig)
    ax1 = fig.add_subplot(gs[0, :])
    ax2 = fig.add_subplot(gs[1, :])
    ax3 = fig.add_subplot(gs[2, :])

    # Auxiliary variable to determine the number of points to show in the plots
    min_data_points = 1e6

    for year in comparison_years:

        ################################
        #### GETTING MONTHLY DATA ######
        ################################

        date_year_month = f"{now_month:02d}/{year}"
        data_comparison[year] = get_monthly_behavior(date_year_month, zone, data_path, show_plot = False)

        ################################
        #### PLOTTING MONTHLY DATA #####
        ################################

        if year == now_year:
            # Actual Load Data
            ax1.plot(data_comparison[year]['monthly']['Actual_Load'], label = date_year_month, color = 'darkblue')
            # Best Forecast Error
            ax2.plot(np.abs(np.array(data_comparison[year]['monthly']['Actual_Load']) - np.array(data_comparison[year]['monthly']['Best_Forecast'])), color = 'darkblue',
                label = date_year_month)
            # Worst Forecast Error
            ax3.plot(np.abs(np.array(data_comparison[year]['monthly']['Actual_Load']) - np.array(data_comparison[year]['monthly']['Worst_Forecast'])), color = 'darkblue',
                label = date_year_month)

            # Updating the number of data points to show
            min_data_points = min(min_data_points, len(data_comparison[year]['monthly']['Actual_Load']))

        else:
            # Actual Load Data
            ax1.plot(data_comparison[year]['monthly']['Actual_Load'], label = date_year_month, linestyle = '--')
            # Best Forecast Error
            ax2.plot(np.abs(np.array(data_comparison[year]['monthly']['Actual_Load']) - np.array(data_comparison[year]['monthly']['Best_Forecast'])),
                label = date_year_month, linestyle = '--')
            # Worst Forecast Error
            ax3.plot(np.abs(np.array(data_comparison[year]['monthly']['Actual_Load']) - np.array(data_comparison[year]['monthly']['Worst_Forecast'])),
                label = date_year_month, linestyle = '--')

            # Updating the number of data points to show
            min_data_points = min(min_data_points, len(data_comparison[year]['monthly']['Actual_Load']))

    # Reducing limits of x-axis
    ax1.set_xlim(left = 0, right = min_data_points)
    ax2.set_xlim(left = 0, right = min_data_points)
    ax3.set_xlim(left = 0, right = min_data_points)

    # Setting plot titles
    ax1.set_title("Actual Load", fontname = font_plot, fontsize = 20)
    ax2.set_title("Best Forecast Error", fontname = font_plot, fontsize = 20)
    ax3.set_title("Worst Forecast Error", fontname = font_plot, fontsize = 20)

    # Showing legends
    ax1.legend(loc = 'upper right', prop = {'size' : 14, 'family' : font_plot})
    ax2.legend(loc = 'upper right', prop = {'size' : 14, 'family' : font_plot})
    ax3.legend(loc = 'upper right', prop = {'size' : 14, 'family' : font_plot})

    # Formatting ticks
    format_ticks(ax1, font_plot)
    format_ticks(ax2, font_plot)
    format_ticks(ax3, font_plot)

    # Title for the figure
    fig.suptitle(f"Comparison of Monthly Behavior (M - {now_month:02d}) of Load and Forecast ({zone})", fontname = font_plot, fontsize = 22)

    # Saving figure
    month_number_label = f"M{now_month}_"
    year_string = ""

    for n_year, year in enumerate(comparison_years):
        if n_year == len(comparison_years)-1:
            year_string += f"{year}"
        else:
            year_string += f"{year}_"

    plot_label_save = month_number_label + year_string
    save_path = os.path.join(data_path, "Figs")
    export_name = f"{zone}_monthly_comparison_{plot_label_save}.png"
    fig.savefig(os.path.join(save_path, export_name), dpi = 300)

    # Clearing figure
    fig = None

    return data_comparison
