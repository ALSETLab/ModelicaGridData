import os

def open_line_om(scenario, simulation_time, line_reclosing_time, working_directory):
    '''
    OPEN_LINE_OM

    DESCRIPTION:
    this function creates an auxiliary `*.txt` file indicating the lines to be opened
    according to the specified simulation scenario. Such functionality is used by OpenModelica
    only

    INPUTS:
    - `scenario`: array containing the lines to be tripped in the contingency scenario
    - `simulation_time`: span of simulation time (i.e., final simulation time)
    - `line_reclosing_time`: fault clearing time (i.e., how many seconds after opening the
    line will be closed again)
    - `working_directory`: directory where the `*.txt` file is to be saved. It is
    to the working directory of the corresponding OpenModelica instance

    LAST MODIFICATION DATE:
    12/15/2021 by SADR
    '''

    # Removing file if it exists
    f_path = os.path.join(working_directory, "open_line.txt")
    if os.path.exists(f_path):
        os.remove(f_path)

    # Writing text file with parameter values
    file = open(f_path, "w+")

    # Just one line opening
    if len(scenario) ==  1:
        line = scenario[0]
        t_initial = simulation_time/2
        t_final = t_initial + line_reclosing_time
        file.write(f"{line}.t1={t_initial:.3f}\n")
        file.write(f"{line}.t2={t_final:.3f}\n")
        file.write(f"{line}.opening=2\n")
    else:
        for n_scenario, line in enumerate(scenario):
            t_initial = 10 + n_scenario * (simulation_time - 10)/len(scenario)
            t_final = t_initial + line_reclosing_time
            file.write(f"{line}.t1={t_initial:.3f}\n")
            file.write(f"{line}.t2={t_final:.3f}\n")
            file.write(f"{line}.opening=2\n")
    file.close()
