def data_filter(sig,t,var_thr,step_min):
    
    '''
    DATA_FILTER
    DESCRIPTION:
    Filters the input signal based on a pre-determined variance. The data points with a threshold lower than var_thr are removed. 
    The time vector T is required, which has variable step size. If no oscillation is detected, the function gives empty matrices.
    INPUTS:
    -      `sig`: The signal matrix based on the number of buses in the system in study.
    -        `t`: The time array.
    -  `var_thr`: Variance threshold.
    - `step_min`: Minimum varable step for signal analysis.
    
    OUTPUTS:
    -    `yh`: Output signal after filter.
    -   `ydh`: Output signal concatinated with the time array.
    - `var_s`: Variance of the signal in ascending order.
    
    LAST MODIFICATION DATE:
    12/13/2021 BY FERNANDO FACHINI
   
    '''
    
    import numpy as np
    import matplotlib.pyplot as plt
    import pandas as pd
    from PyEMD import EMD
    
    nL = len(sig[0])
    ts = t
    trshold = var_thr
    tsmin = step_min
    
    double_dif = np.diff(np.diff(sig[:,0]),axis = 0) # The double_dif array is the double sequenced difference of the elements
    std_dd = np.std(double_dif)
    
    if double_dif[0] > std_dd:
        double_dif = np.delete(double_dif, [0,1])
    elif double_dif[-1] > std_dd:
        double_dif = np.delete(double_dif, [-1])
    
    loc_peak = np.where(abs(double_dif) > std_dd) # Position of the peaks in the sequenced difference array
    n_pk = len(loc_peak[0])
    print("The location of the peaks are {} and the length of the array is {}.".format(loc_peak[0], len(loc_peak[0])))
    print("The last element of the loc_peak array is: ", loc_peak[0][-1])
    
    if (len(loc_peak[0]) % 2) == 0:
        new_time = ts[loc_peak[0][-1]+2::]
        new_signal = sig[loc_peak[0][-1]+2::]    
    elif n_pk == 0:
        new_time = ts
        new_signal = sig
        
    
    dt0 = np.diff(new_time, axis = 0)
    gg=dt0.size
    timex = pd.DataFrame(); signalx = pd.DataFrame(); dt0x = pd.DataFrame()
    
    flag_EDM = input('Would you like to run the filtering process with EDM? [Y/N]:')
    
    j0 = 0
    for k in range(gg):
        if dt0[k] >= tsmin:
            dt0x.loc[j0,0] = dt0[k]
            timex.loc[j0,0] = new_time[k]
            signalx[k] = (new_signal[k,:])
            j0 = j0 + 1
            
    dt0x = dt0x.to_numpy(); timex = timex.to_numpy(); signalx = np.transpose(signalx.to_numpy())  # Converting to numpy array
           
    signalx0 = pd.DataFrame(); osc_signal=pd.DataFrame(); var_s = pd.DataFrame()
    
    for k in range(nL):
            if flag_EDM == 'N' or flag_EDM == 'n':
                signalx0[k] = (signalx[:,k] - np.mean(signalx[:,k])).tolist()
            elif flag_EDM == 'Y':
                emd = EMD()
                emd.emd(signalx[:,k])
                imfs, res = emd.get_imfs_and_residue()
                signalx0[k] = np.transpose(imfs[0,:])          # Detrended signal
  
     
    signalx0 = signalx0.to_numpy()
    ydh = np.concatenate((timex, signalx0), axis=1)            # Array containing the time component and the signal
    sig_var = np.transpose(np.var(signalx0,0))
    sig_std = np.transpose(np.std(signalx0,0))
    
    var_sort = np.sort(sig_var)
    var_sort_desc = var_sort[::-1]
    s_idx = np.argsort(sig_var)
    s_idx_desc = s_idx[::-1] 
    
    std_sort = np.sort(sig_std)
    std_sort_desc = std_sort[::-1]
    std_idx = np.argsort(sig_std)
    std_idx_desc = std_idx[::-1] 
    
    nL0 = len(var_sort_desc)
    vA = np.max(var_sort_desc)
    var_sort0 = var_sort_desc/vA
    
    for i in range(nL):
        if var_sort0[i] >= trshold:
            osc_signal.loc[i,0] = s_idx_desc[i]
            var_s.loc[i,0] = var_sort_desc[i]
   
    osc_signal = osc_signal.to_numpy()
    var_s = var_s.to_numpy()
    
    yh = sig[:,np.transpose(osc_signal.astype(int))].reshape(len(sig),len(np.transpose(osc_signal.astype(int))[0]))
    
    return yh, osc_signal, var_s, ydh