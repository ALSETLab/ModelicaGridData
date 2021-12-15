def trip_line(model_name, scenario):
    '''
    TRIP_LINE

    DESCRIPTION:
    this function produces the argument of the dymola function `linearizeModel` for any contingency scenario. It uses a generic
    model name that is passed as an argument by the user, and a corresponding scenario (i.e., lines that will be opened)
    It can handle any number of lines simultaneously.

    INPUTS:
    - `model_name`: name of the model
    - `scenario`: corresponding scenario (i.e., lines that will be opened)

    OUTPUTS:
    String containing the scenario description as a class constructor to be used within
    `linearizeModel`.

    LAST MODIFICATION DATE:
    12/15/2021 by SADR
    '''
    return str(model_name + "(" + ".X=1e12, ".join(scenario) + ".X=1e12" + ")")
