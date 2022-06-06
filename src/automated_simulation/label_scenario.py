import numpy as np
import scipy.linalg as sl

def label_scenario(A, verbose = False):
    '''
    LABEL_SCENARIO

    DESCRIPTION:
    function computing an analytical label using the damping ratio of the
    eigenvalues of an A matrix given by the user

    INPUTS:
    - `A`: A matrix to be processed
    - `verbose`: verbosity of the function

    OUTPUTS:
    - `label`: label of the given scenario using the A matrix (classification based
    on the dominant pole)

    LAST MODIFICATION DATE:
    12/14/2021 by SADR
    '''

    EPS = np.finfo(float).eps

    # Computing eigenvalues of the given `A` matrix
    if verbose: print(f"A: {np.shape(A)}")
    eigs = sl.eig(A)[0]
    if verbose: print(f"eigs: {np.shape(eigs)}")

    # Computing the damping ratio for all eigenvalues (including real-ones)
    dmp_ratio = np.zeros([len(A), len(A)])
    dmp_ratio = np.divide(-np.real(eigs), np.sqrt(np.power(np.real(eigs), 2) + np.power(np.imag(eigs), 2) + EPS))*100
    if verbose: print(f"dmp_ratio: {dmp_ratio.shape}")

    # Indices of the eigenvalues closer to the origin (irrelevant for power system small-signal stability analysis)
    # ind = [c for c, val in enumerate(np.real(eigs)) if val == np.min(abs(np.real(eigs)))]
    ind = [c for c, val in enumerate(np.real(eigs)) if abs(val) <= 1e-6]
    if verbose: print(ind)

    # Removing these eigenvalues from the damping ratio array
    dmp_red = np.delete(dmp_ratio, ind)
    if verbose: print(f"dmp_red: {dmp_red.shape}")

    # ===================
    # COMPARISON OPERATOR
    # ===================
    # Labels:
    # - 0: unstable
    # - 1: marginally stable (stable but critical)
    # - 2: acceptable operation
    # - 3: good operation
    # - 4: satisfactory operation

    bool_unstable = (dmp_red < 0);
    bool_marg_stable = (dmp_red > 0) & (dmp_red < 5)
    bool_acc =  (dmp_red >= 5) & (dmp_red <= 10)
    bool_good = (dmp_red > 10) & (dmp_red < 100)

    if sum(bool_unstable):
        label = 0
        if verbose: print("(0) Unstable (z < 0)")
    elif sum(bool_marg_stable):
        label = 1
        if verbose: print("(1) Stable but critical (0 <= z < 0.05)")
    elif sum(bool_acc):
        label = 2
        if verbose: print("(2) Acceptable operation (0.05 <= z <= 0.1)")
    elif sum(bool_good):
        label = 3
        if verbose: print("(3) Good operation (0.1 <= z < 1)")
    else:
        label = 4
        if verbose: print("(4) Satisfactory operation (z = 1)")

    if verbose: print(f"Label: {label}")

    return label
