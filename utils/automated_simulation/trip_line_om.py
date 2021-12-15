import os

def trip_line_om(scenario, working_directory):
    '''
    TRIP_LINE_OM

    DESCRIPTION:
    this function creates a `*.txt` file containing the lines to trip for small-signal
    analysis (linearization-based analysis) using OpenModelica.

    INPUTS:
    - `scenario`: array containing the scenario specification (lines to be tripped)
    - `working_directory`: path to save the `*.txt` file. It is the working directory of the
    corresponding OpenModelica instance.

    OUTPUTS:
    None

    LAST MODIFICATION DATE:
    12/15/2021 by SADR
    '''

    # Removing file if it exists
    f_path = os.path.join(working_directory, "trip_line.txt")
    if os.path.exists(f_path):
        os.remove(f_path)

    # Writing text file with parameter values
    file = open(f_path, "w+")
    for sc in scenario:
        file.write(f"{sc}.X=1e12\n")
    file.close()
