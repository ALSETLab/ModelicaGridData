def distribute_scenarios(scenarios, num_batches, print_info = False):
    '''
    Description:
    
    This function takes a list of scenarios and distributes them along quasi-equal batches. This is intended 
    to use scenario data for simulation parallelization
    
    Arguments:
    
    - scenarios: list containing an arbitrary number of simulation scenarios
    - num_batches: number of batches (>=1) to divide the scenario data in
    - print_info: print index information during execution of the function
    '''
    
    # Container for distributed scenarios
    scen_trip = []
    
    # Dividing the scenarios into almost equal parts
    for a in range(num_batches):
        if num_batches == 1:
            scen_trip = scenarios
            break
        if a != num_batches - 1:
            if print_info:
                print(f"{a*int(len(scenarios)/num_batches)} to {(a+1)*int(len(scenarios)/num_batches)}")
            scen_trip.append(scenarios[a*int(len(scenarios)/num_batches):(a+1)*int(len(scenarios)/num_batches)])
        else:
            if print_info:
                print("End")
                print(f"{a*int(len(test_5000)/num_batches)} to {len(test_5000)}")
            scen_trip.append(scenarios[a*int(len(scenarios)/num_batches):])
            
    return scen_trip