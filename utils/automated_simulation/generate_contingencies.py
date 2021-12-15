from itertools import combinations
import numpy as np
import math

def generate_contingencies(lb, verbose = False):
    '''
    GENERATE_CONTINGENCIES

    DESCRIPTION:
    From a list of lines modeled with a transversal impedance, this function returns all possible line combinations using
    the given set. If a set of n lines is passed, this function generates all possible contingencies considering
    1, 2, ..., n-1 lines (the case where n lines are tripped is not considered)

    INPUTS:
    - `lb`: list containing each of the lines that can be tripped in the power system
    - `verbose`: verbosity of the output.

    OUTPUT:
    - `contingencies`: dictionary with the following structure:
        * keys: number of contingencies (1, 2, ..., n-1)
        * scenarios: scenarios with `keys` number of lines being opened at the same time

    LAST MODIFICATION DATE:
    12/14/2021 by SADR
    '''

    # Getting the number of lines
    number_lines = len(lb) - 1

    if number_lines < 30:
        n_contingencies = number_lines
    else:
        # Limiting the maximum number of contingencies to 5 for extremely large systems
        n_contingencies = 5

    # Creating container (dictionary)
    contingencies = dict.fromkeys(range(1, n_contingencies + 1))

    for n in range(1, n_contingencies + 1):
        # Generating the possible combinations with n elements
        comb = list(combinations(lb, n))
        contingencies.update({n : comb})

    scenarios = []
    for i in range(1, n_contingencies + 1):
        for j in range(len(contingencies[i])):
            scenarios.append(contingencies[i][j])

    if verbose:
        print("{t:=^56}".format(t= '='))
        print("{t:=^56}".format(t= ' GENERATED CONTINGENCIES '))
        print("{t:=^56}".format(t= '='))
        print("{t:-^56}".format(t= '-'))
        print("{0:<14} | {1:<10} | {2:<10}".format('Line Trippings', 'Scenarios', 'Accumulation of Scenarios'))
        print("{t:-^56}".format(t= '-'))

    # Variable to count the total number of scenarios
    total_cont = 0

    # Container for the probabilities
    prob = []

    # For loop for counting the total number of scenarios and computing the probability of
    # tripping a given number of lines simultaneously

    for i in range(max(list(contingencies.keys()))):
        total_cont += len(contingencies[i+1])
        if verbose: print("{0:<16} {1:<12} {2:<12}".format(i+1, len(contingencies[i+1]), total_cont))

        # Computation of the probability of tripping i lines simultaneously
        prob.append(len(contingencies[i+1])*math.factorial(number_lines-i-1)/math.factorial(number_lines))

    # Normalizing the probabilities to conform a discrete distribution function
    prob = np.array(prob)
    prob = prob / sum(prob)

    # Zipping the number of trippings and the corresponding probability in a tuple
    probabilities = list(zip(list(range(1, number_lines + 1)), prob))

    if verbose:
        # Printing out the results
        print("{t:-^56}".format(t= '-'))
        print("{0:<16} {1:<10}".format('Total Scenarios:', total_cont))
        print("{t:-^56}".format(t= '-'))

    contingencies.update({'total' : total_cont})
    contingencies.update({'scenarios': scenarios})
    contingencies.update({'probabilities':  probabilities})

    return contingencies
