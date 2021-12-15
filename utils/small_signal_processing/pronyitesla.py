import sys
import numpy as np
import math
import pandas as pd
import numpy.linalg as lin
import matplotlib.pyplot as plt

#from scipy.interpolate import CubicSpline
from scipy import interpolate
# from scipy.interpolate import UnivariateSpline

def pronyitesla(t,y,XX,tstart,tend,T,shift,tstplot,tedplot,plotFlag):

    '''
    PRONYITESLA

    DESCRIPTION:
    Prony analysis program for fitting to a ringdown.

    INPUTS:
    -        `y`: The ringdown matrix of order N by NChan corresponding to t, each column is a different signal.
    -        `t`: The time array.
    -        `n`: The order of the estimated model.
    -   `tstart`: The tstart(k) is the starting time for analysis for y(:,k).
    -     `tend`: The ending times for analysis (same dimension as tstart).
    -    `shift`: shift = flag; if shift = 1, residues are shifted to t = 0. If the data is noisy, reccomend shift = 0.
    -        `T`: Sample period for analysis.
    - `tsttplot`: The starting time for model simulation.
    -  `tedplot`: The ending time for model simulation.
    - `plotFlag`: if = 1, plot results.

    OUTPUTS:
    - `model_Poles`: ringdown pole matrix -- column k is for column k of y.
    -   `model_Res`: ringdown residue matrix.
    -     `model_K`: ringdown offset row vector.
    -  `model_yhat`: model signal matrix.
    -  `model_that`: time vector for yhat (starts at tstart).
    -      `lambda`: Poles in the S domain.

    LAST MODIFICATION DATE:
    WRITTEN BY D. TRUDNOWSKY IN 1999 AND LAST UPDATED BY FERNANDO FACHINI IN 12/13/2021
    '''

    # -----------------------------------------------------------------------------------------------------
    # ------------------------------------ BASIC ERROR CHECKS ---------------------------------------------
    # -----------------------------------------------------------------------------------------------------

    if ((len(y[0])) != (len(tstart[0]))) or ((len(y[0])) != (len(tend[0]))):
        sys.exit('Dimension error in y, tstart, tend.')
    if ((len(tstart)) != 1) or ((len(tend)) != 1):
        sys.exit('Dimension error in tstart or tend.')
    if (T <= 0) or (tstplot >= tedplot) or (np.max(t) < np.max(np.transpose(tend))) or (np.min(t) > np.min(np.transpose(tstart))):
        sys.exit('Data Error.')
    if (len(t) != len(y)) or (len(t[0]) != 1):
        sys.exit('Dimension error in y or t')

    # -----------------------------------------------------------------------------------------------------
    # ----------------------------------- DATA PARAMETERS -------------------------------------------------
    # -----------------------------------------------------------------------------------------------------

    NChannels = len(y[0])

    # -----------------------------------------------------------------------------------------------------
    # ----------------------------------- SHIFT TIME PARAMETERS -------------------------------------------
    # -----------------------------------------------------------------------------------------------------

    tstart = tstart-t[0]                                    # OK!
    tend = tend-t[0]                                        # OK!
    tstplot = tstplot-t[0]                                  # OK!
    tedplot = tedplot-t[0]                                  # OK!
    t = t-t[0]                                              # OK!

    # -----------------------------------------------------------------------------------------------------
    # ---------------------------- Set up analysis data and calculate offset ------------------------------
    # -----------------------------------------------------------------------------------------------------

    tanalysis = T*np.transpose(np.array(range(math.ceil(np.max(np.transpose(tend))/T)+2)))
    Nstart = np.zeros([1,NChannels])
    Nend = np.zeros([1,NChannels])
    yanal = np.zeros([len(tanalysis),NChannels])

    K = np.zeros([1,NChannels])

    for i in range(NChannels):
        Nstart[0,i] = math.floor(tstart[:,i]/T)
        Nend[0,i] = math.ceil(tend[:,i]/T)+1
        spl = interpolate.splrep(t.flatten(), y[:,i].flatten())
        yanal[:,i] = interpolate.splev(tanalysis, spl)
        K[0,i] = np.mean(yanal[int(Nstart[0,i]):int((Nend[0,i])),i])
        yanal[:,i] = yanal[:,i] - K[0,i]

    # -----------------------------------------------------------------------------------------------------
    # --------------------------------------- FIND MODEL ORDER --------------------------------------------
    # -----------------------------------------------------------------------------------------------------

    NdataPoints = Nend - Nstart
    Ntotal = np.sum(np.transpose(NdataPoints))
    nOrder = XX

    # -----------------------------------------------------------------------------------------------------
    # ------------------------------------- BUILD MATRIX AND VECTOR ---------------------------------------
    # -----------------------------------------------------------------------------------------------------

    for k in range(NChannels):
        Ym = np.zeros([int(NdataPoints[0,k])-nOrder,nOrder])
        for kk in range(nOrder):
            Ym[:,kk] = yanal[(int(Nstart[0,k]) + nOrder-kk-1):(int(Nstart[0,k])-kk+int(NdataPoints[0,k]))-1,k]
        yv = yanal[int(Nstart[0,k])+nOrder:int(Nstart[0,k])+int(NdataPoints[0,k]),k] # + 1
        if k == 0:
            Ymatrix = Ym
            yvector = yv
        else:
            Ymatrix = np.r_[Ymatrix,Ym]
            yvector = np.r_[yvector,yv]

    yvector = yvector.reshape(-1,1)
    acoef = lin.pinv(Ymatrix).dot(yvector)

    # -----------------------------------------------------------------------------------------------------
    # ----------------------------------------- FIND POLES ------------------------------------------------
    # -----------------------------------------------------------------------------------------------------

    zPoles = np.roots(np.insert(-acoef,0,1)).reshape(-1,1)
    sPoles = np.log(zPoles).reshape(-1,1)/T

    # -----------------------------------------------------------------------------------------------------
    # ------------------------------------ SOLVE FOR RESIDUALS --------------------------------------------
    # -----------------------------------------------------------------------------------------------------

    Res = np.zeros([nOrder,NChannels], dtype=complex)
    for k in range(NChannels):
        ZMatrix = np.zeros([int(NdataPoints[0,k]), nOrder], dtype=complex)
        for kk in range(int(NdataPoints[0,k])):
            ZMatrix[kk,:] = np.transpose(zPoles)**kk  #.conjugate()
        # Res[:,k] = np.linalg.lstsq(ZMatrix,yanal[int(Nstart[k]):int(Nend[k]),k])
        Res[:,k] = np.matmul(lin.pinv(ZMatrix),(yanal[int(Nstart[0,k]):int(Nend[0,k]),k]))
        if shift == 1:
            Res[:,k] = (Res[:,k:k+1]*(zPoles**(-Nstart[0,k]))).flatten()

    del k, kk

    # -----------------------------------------------------------------------------------------------------
    # ------------------------------------ REORDER USING ENERGY -------------------------------------------
    # -----------------------------------------------------------------------------------------------------

    P = np.zeros([nOrder,NChannels], dtype = complex)
    R = np.zeros([len(Res), len(Res[0])], dtype = complex)
    for k in range(NChannels):
        E = pd.DataFrame()
        for kk in range(nOrder):
            if np.abs(np.real(sPoles[kk])) < 1e-8:
                E.loc[kk,0] = (Res[kk,k]**2)*(tend[0,k]-tstart[0,k])
            else:
                E.loc[kk,0] = complex((Res[kk,k]**2/(2*np.real(sPoles[kk,0])))*(np.exp(2*np.real(sPoles[kk])*(tend[0,k]-tstart[0,k]))-1))

        E = E.to_numpy()
        x = sorted(E, key = abs)
        ii = np.argsort(np.transpose(abs(E)))

        R[:,k] = Res[ii,k]
        P[:,k]=sPoles[ii,0]
        M = np.transpose(np.array(range(len(ii[0]),0,-1)))
        R[:,k] = R[M-1,k]
        P[:,k] = P[M-1,k]

    # -----------------------------------------------------------------------------------------------------
    # ----------------------------------------- SIMULATE --------------------------------------------------
    # -----------------------------------------------------------------------------------------------------

    that = (np.transpose(np.array(np.arange(tstplot,tedplot,T))).reshape(-1,1)).reshape(-1,1)
    yhat = np.zeros([len(that), NChannels], dtype = complex)
    for k in range(NChannels):
        yhat[:,k] = K[0,k]*np.ones([len(that)])
        for kk in range(len(that)):
            for n in range(nOrder):
                yhat[kk,k] = yhat[kk,k] + R[n,k]*np.exp(P[n,k]*that[kk,0])
    yhat = np.real(yhat)

    # -----------------------------------------------------------------------------------------------------
    # --------------------------------- Place output in structured array ----------------------------------
    # -----------------------------------------------------------------------------------------------------

    model_Poles = P
    model_Res = R
    model_K = K
    model_that = that
    model_yhat = yhat
    lamda=sPoles

    # -----------------------------------------------------------------------------------------------------
    # ---------------------------------------- PLOT RESULTS -----------------------------------------------
    # -----------------------------------------------------------------------------------------------------


    if plotFlag == 1:
        plt.figure()
        plt.plot(t,y)
        plt.plot(that, yhat,'--*')
        plt.xlabel('Time (sec)')
        plt.ylabel('Intensity')
        plt.title("Prony Signal Estimation x Real Input Signal")
        plt.savefig("prony_output")
        plt.show()


    return lamda, model_Poles, model_Res, model_K, model_that, model_yhat
