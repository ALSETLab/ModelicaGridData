import os

def trip_line_om(scenario, working_directory):
    '''

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
