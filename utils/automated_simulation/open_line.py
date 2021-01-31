def open_line(model_name, scenario, simulation_time, line_reclosing_time):
    '''
    Description:
    
    This function produces the argument of the dymola function linearizeModel for any contingency scenario. It uses a generic
    model name that is passed as an argument by the user, and a corresponding scenario (i.e., lines that will be opened)
    It can handle any number of lines simultaneously.
    
    Arguments:
    
    - model_name: name of the model
    - scenario: corresponding scenario (i.e., lines that will be opened)
    - simulation_time: span of the simulation (in seconds)
    - line_reclosing_time: number of seconds to close a line after being opened
    
    '''
    
    if len(scenario) == 1:
        # Just one line being opened
        t_initial = simulation_time/2
        t_final = t_initial + line_reclosing_time
        return str(model_name + "(" + "{l}.t1 = {t1:.3f}, {l}.t2 = {t2:.3f}, {l}.opening = 2".format(l = scenario[0], t1 = t_initial, t2 = t_final) + ")")
    else:
        modifiers = []
        # Multiple lines being opened
        for n_scenario, line in enumerate(scenario):
            t_initial = 10 + n_scenario*(simulation_time-10)/len(scenario)
            t_final = t_initial + line_reclosing_time
            modifiers.append("{l}.t1 = {t1:.3f}, {l}.t2 = {t2:.3f}, {l}.opening = 2".format(l = line, t1 = t_initial, t2 = t_final))
            
        return str(model_name + "(" + ", ".join(modifiers) + ")")
        