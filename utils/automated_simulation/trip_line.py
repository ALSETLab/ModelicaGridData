def trip_line(model_name, scenario, pf_modifier):
    '''
    Description:

    This function produces the argument of the dymola function linearizeModel for any contingency scenario. It uses a generic
    model name that is passed as an argument by the user, and a corresponding scenario (i.e., lines that will be opened)
    It can handle any number of lines simultaneously.

    Arguments:

    - model_name: name of the model
    - scenario: corresponding scenario (i.e., lines that will be opened)

    '''
    return str(model_name + "(" + pf_modifier + ", " + ".X=1e12, ".join(scenario) + ".X=1e12" + ")")
