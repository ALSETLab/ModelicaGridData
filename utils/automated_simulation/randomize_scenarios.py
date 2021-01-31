import numpy as np
import random

def randomize_scenarios(contingencies, num_scenarios):
    '''

    Description:

    This routine employs a probability distribution to select an arbitrary number of scenarios among a pool of possible contingencies.
    It returns a list of unique values, where each value is a list of strings corresponding to the lines that are opened in a
    specific simulation scenario

    Arguments:
    - contingencies: dictionary of all possible contingencies for a model. It can be obtained using the function generate_contingencies()
    - num_scenarios: amount of scenarios that the user wants to generate. It should be an integer number	
        
    '''
    # Retrieving probabilities
    probabilities = contingencies['probabilities']
    
    trip = []
    prob = []
    
    for num_trip, prob_trip in probabilities:
        trip.append(num_trip)
        prob.append(prob_trip)
    
    # Set to store the sampled scenarios. It guarantees unique scenarios.
    sampled_scenarios = set()

    # Repeat until the number of scenarios equals the requested number given by the user
    while len(sampled_scenarios) < num_scenarios:
        
        # Selecting a number of trippings
        num_trippings = np.random.choice(trip, 1, replace = True, p = prob)[0]
        
        # Getting the number of scenarios with the selected number of trippings
        total_scenarios = len(contingencies[num_trippings])
        
        # Generating a random scenario
        rand_scenario = contingencies[num_trippings][random.randint(1, total_scenarios - 1)]   
        
        sampled_scenarios.add(rand_scenario)   
    
    # Converting the set to a list to access it element-wise
    return list(sampled_scenarios)