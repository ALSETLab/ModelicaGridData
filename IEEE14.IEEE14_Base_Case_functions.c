#include "omc_simulation_settings.h"
#include "IEEE14.IEEE14_Base_Case_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "IEEE14.IEEE14_Base_Case_includes.h"


Complex omc_Complex(threadData_t *threadData, modelica_real omc_re, modelica_real omc_im)
{
  Complex tmp1;
  tmp1._re = omc_re;
  tmp1._im = omc_im;
  return tmp1;
}

modelica_metatype boxptr_Complex(threadData_t *threadData, modelica_metatype _re, modelica_metatype _im)
{
  return mmc_mk_box3(3, &Complex__desc, _re, _im);
}

IEEE14_PF__Data_Bus omc_IEEE14_PF__Data_Bus(threadData_t *threadData, modelica_real omc_V1, modelica_real omc_A1, modelica_real omc_V2, modelica_real omc_A2, modelica_real omc_V3, modelica_real omc_A3, modelica_real omc_V4, modelica_real omc_A4, modelica_real omc_V5, modelica_real omc_A5, modelica_real omc_V6, modelica_real omc_A6, modelica_real omc_V7, modelica_real omc_A7, modelica_real omc_V8, modelica_real omc_A8, modelica_real omc_V9, modelica_real omc_A9, modelica_real omc_V10, modelica_real omc_A10, modelica_real omc_V11, modelica_real omc_A11, modelica_real omc_V12, modelica_real omc_A12, modelica_real omc_V13, modelica_real omc_A13, modelica_real omc_V14, modelica_real omc_A14)
{
  IEEE14_PF__Data_Bus tmp1;
  tmp1._V1 = omc_V1;
  tmp1._A1 = omc_A1;
  tmp1._V2 = omc_V2;
  tmp1._A2 = omc_A2;
  tmp1._V3 = omc_V3;
  tmp1._A3 = omc_A3;
  tmp1._V4 = omc_V4;
  tmp1._A4 = omc_A4;
  tmp1._V5 = omc_V5;
  tmp1._A5 = omc_A5;
  tmp1._V6 = omc_V6;
  tmp1._A6 = omc_A6;
  tmp1._V7 = omc_V7;
  tmp1._A7 = omc_A7;
  tmp1._V8 = omc_V8;
  tmp1._A8 = omc_A8;
  tmp1._V9 = omc_V9;
  tmp1._A9 = omc_A9;
  tmp1._V10 = omc_V10;
  tmp1._A10 = omc_A10;
  tmp1._V11 = omc_V11;
  tmp1._A11 = omc_A11;
  tmp1._V12 = omc_V12;
  tmp1._A12 = omc_A12;
  tmp1._V13 = omc_V13;
  tmp1._A13 = omc_A13;
  tmp1._V14 = omc_V14;
  tmp1._A14 = omc_A14;
  return tmp1;
}

modelica_metatype boxptr_IEEE14_PF__Data_Bus(threadData_t *threadData, modelica_metatype _V1, modelica_metatype _A1, modelica_metatype _V2, modelica_metatype _A2, modelica_metatype _V3, modelica_metatype _A3, modelica_metatype _V4, modelica_metatype _A4, modelica_metatype _V5, modelica_metatype _A5, modelica_metatype _V6, modelica_metatype _A6, modelica_metatype _V7, modelica_metatype _A7, modelica_metatype _V8, modelica_metatype _A8, modelica_metatype _V9, modelica_metatype _A9, modelica_metatype _V10, modelica_metatype _A10, modelica_metatype _V11, modelica_metatype _A11, modelica_metatype _V12, modelica_metatype _A12, modelica_metatype _V13, modelica_metatype _A13, modelica_metatype _V14, modelica_metatype _A14)
{
  return mmc_mk_box(29, 3, &IEEE14_PF__Data_Bus__desc, _V1, _A1, _V2, _A2, _V3, _A3, _V4, _A4, _V5, _A5, _V6, _A6, _V7, _A7, _V8, _A8, _V9, _A9, _V10, _A10, _V11, _A11, _V12, _A12, _V13, _A13, _V14, _A14);
}

IEEE14_PF__Data_Loads omc_IEEE14_PF__Data_Loads(threadData_t *threadData, modelica_real omc_PL1, modelica_real omc_QL1, modelica_real omc_PL2, modelica_real omc_QL2, modelica_real omc_PL3, modelica_real omc_QL3, modelica_real omc_PL4, modelica_real omc_QL4, modelica_real omc_PL5, modelica_real omc_QL5, modelica_real omc_PL6, modelica_real omc_QL6, modelica_real omc_PL7, modelica_real omc_QL7, modelica_real omc_PL8, modelica_real omc_QL8, modelica_real omc_PL9, modelica_real omc_QL9, modelica_real omc_PL10, modelica_real omc_QL10, modelica_real omc_PL11, modelica_real omc_QL11)
{
  IEEE14_PF__Data_Loads tmp1;
  tmp1._PL1 = omc_PL1;
  tmp1._QL1 = omc_QL1;
  tmp1._PL2 = omc_PL2;
  tmp1._QL2 = omc_QL2;
  tmp1._PL3 = omc_PL3;
  tmp1._QL3 = omc_QL3;
  tmp1._PL4 = omc_PL4;
  tmp1._QL4 = omc_QL4;
  tmp1._PL5 = omc_PL5;
  tmp1._QL5 = omc_QL5;
  tmp1._PL6 = omc_PL6;
  tmp1._QL6 = omc_QL6;
  tmp1._PL7 = omc_PL7;
  tmp1._QL7 = omc_QL7;
  tmp1._PL8 = omc_PL8;
  tmp1._QL8 = omc_QL8;
  tmp1._PL9 = omc_PL9;
  tmp1._QL9 = omc_QL9;
  tmp1._PL10 = omc_PL10;
  tmp1._QL10 = omc_QL10;
  tmp1._PL11 = omc_PL11;
  tmp1._QL11 = omc_QL11;
  return tmp1;
}

modelica_metatype boxptr_IEEE14_PF__Data_Loads(threadData_t *threadData, modelica_metatype _PL1, modelica_metatype _QL1, modelica_metatype _PL2, modelica_metatype _QL2, modelica_metatype _PL3, modelica_metatype _QL3, modelica_metatype _PL4, modelica_metatype _QL4, modelica_metatype _PL5, modelica_metatype _QL5, modelica_metatype _PL6, modelica_metatype _QL6, modelica_metatype _PL7, modelica_metatype _QL7, modelica_metatype _PL8, modelica_metatype _QL8, modelica_metatype _PL9, modelica_metatype _QL9, modelica_metatype _PL10, modelica_metatype _QL10, modelica_metatype _PL11, modelica_metatype _QL11)
{
  return mmc_mk_box(23, 3, &IEEE14_PF__Data_Loads__desc, _PL1, _QL1, _PL2, _QL2, _PL3, _QL3, _PL4, _QL4, _PL5, _QL5, _PL6, _QL6, _PL7, _QL7, _PL8, _QL8, _PL9, _QL9, _PL10, _QL10, _PL11, _QL11);
}

IEEE14_PF__Data_Machines omc_IEEE14_PF__Data_Machines(threadData_t *threadData, modelica_real omc_PG1, modelica_real omc_QG1, modelica_real omc_PG2, modelica_real omc_QG2, modelica_real omc_PG3, modelica_real omc_QG3, modelica_real omc_PG4, modelica_real omc_QG4, modelica_real omc_PG5, modelica_real omc_QG5)
{
  IEEE14_PF__Data_Machines tmp1;
  tmp1._PG1 = omc_PG1;
  tmp1._QG1 = omc_QG1;
  tmp1._PG2 = omc_PG2;
  tmp1._QG2 = omc_QG2;
  tmp1._PG3 = omc_PG3;
  tmp1._QG3 = omc_QG3;
  tmp1._PG4 = omc_PG4;
  tmp1._QG4 = omc_QG4;
  tmp1._PG5 = omc_PG5;
  tmp1._QG5 = omc_QG5;
  return tmp1;
}

modelica_metatype boxptr_IEEE14_PF__Data_Machines(threadData_t *threadData, modelica_metatype _PG1, modelica_metatype _QG1, modelica_metatype _PG2, modelica_metatype _QG2, modelica_metatype _PG3, modelica_metatype _QG3, modelica_metatype _PG4, modelica_metatype _QG4, modelica_metatype _PG5, modelica_metatype _QG5)
{
  return mmc_mk_box11(3, &IEEE14_PF__Data_Machines__desc, _PG1, _QG1, _PG2, _QG2, _PG3, _QG3, _PG4, _QG4, _PG5, _QG5);
}

IEEE14_PF__Data_Power__Flow omc_IEEE14_PF__Data_Power__Flow(threadData_t *threadData, IEEE14_PF__Data_Power__Flow_PowerFlow omc_powerflow)
{
  IEEE14_PF__Data_Power__Flow tmp1;
  tmp1._powerflow = omc_powerflow;
  return tmp1;
}

modelica_metatype boxptr_IEEE14_PF__Data_Power__Flow(threadData_t *threadData, modelica_metatype _powerflow)
{
  return mmc_mk_box2(3, &IEEE14_PF__Data_Power__Flow__desc, _powerflow);
}

IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf omc_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf(threadData_t *threadData, IEEE14_PF__Data_Power__Flow_PowerFlow omc_powerflow)
{
  IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf tmp1;
  tmp1._powerflow = omc_powerflow;
  return tmp1;
}

modelica_metatype boxptr_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf(threadData_t *threadData, modelica_metatype _powerflow)
{
  return mmc_mk_box2(3, &IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf__desc, _powerflow);
}

IEEE14_PF__Data_Trafos omc_IEEE14_PF__Data_Trafos(threadData_t *threadData, modelica_real omc_t1_trafo_1, modelica_real omc_t2_trafo_1, modelica_real omc_t1_trafo_2, modelica_real omc_t2_trafo_2, modelica_real omc_t1_trafo_3, modelica_real omc_t2_trafo_3, modelica_real omc_t1_trafo_4, modelica_real omc_t2_trafo_4)
{
  IEEE14_PF__Data_Trafos tmp1;
  tmp1._t1_trafo_1 = omc_t1_trafo_1;
  tmp1._t2_trafo_1 = omc_t2_trafo_1;
  tmp1._t1_trafo_2 = omc_t1_trafo_2;
  tmp1._t2_trafo_2 = omc_t2_trafo_2;
  tmp1._t1_trafo_3 = omc_t1_trafo_3;
  tmp1._t2_trafo_3 = omc_t2_trafo_3;
  tmp1._t1_trafo_4 = omc_t1_trafo_4;
  tmp1._t2_trafo_4 = omc_t2_trafo_4;
  return tmp1;
}

modelica_metatype boxptr_IEEE14_PF__Data_Trafos(threadData_t *threadData, modelica_metatype _t1_trafo_1, modelica_metatype _t2_trafo_1, modelica_metatype _t1_trafo_2, modelica_metatype _t2_trafo_2, modelica_metatype _t1_trafo_3, modelica_metatype _t2_trafo_3, modelica_metatype _t1_trafo_4, modelica_metatype _t2_trafo_4)
{
  return mmc_mk_box9(3, &IEEE14_PF__Data_Trafos__desc, _t1_trafo_1, _t2_trafo_1, _t1_trafo_2, _t2_trafo_2, _t1_trafo_3, _t2_trafo_3, _t1_trafo_4, _t2_trafo_4);
}

IEEE14_PF__Data_Power__Flow_PowerFlow omc_IEEE14_PF__Data_Power__Flow_PowerFlow(threadData_t *threadData)
{
  IEEE14_PF__Data_Power__Flow_PowerFlow tmp1;
  return tmp1;
}

modelica_metatype boxptr_IEEE14_PF__Data_Power__Flow_PowerFlow(threadData_t *threadData)
{
  return mmc_mk_box1(3, &IEEE14_PF__Data_Power__Flow_PowerFlow__desc);
}

IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow omc_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow(threadData_t *threadData, IEEE14_PF__Data_Bus omc_bus, IEEE14_PF__Data_Loads omc_loads, IEEE14_PF__Data_Machines omc_machines, IEEE14_PF__Data_Trafos omc_trafos)
{
  IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow tmp1;
  tmp1._bus = omc_bus;
  tmp1._loads = omc_loads;
  tmp1._machines = omc_machines;
  tmp1._trafos = omc_trafos;
  return tmp1;
}

modelica_metatype boxptr_IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow(threadData_t *threadData, modelica_metatype _bus, modelica_metatype _loads, modelica_metatype _machines, modelica_metatype _trafos)
{
  return mmc_mk_box5(3, &IEEE14_PF__Data__omcQPower_5F_5FFlow_24pf_PowerFlow__desc, _bus, _loads, _machines, _trafos);
}

DLLExport
modelica_real omc_Modelica_Math_atan3(threadData_t *threadData, modelica_real _u1, modelica_real _u2, modelica_real _y0)
{
  modelica_real _y;
  modelica_real _pi2;
  modelica_real _w;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  _pi2 = 6.283185307179586;
  // _w has no default value.
  _w = atan2(_u1, _u2);

  if((_y0 == 0.0))
  {
    _y = _w;
  }
  else
  {
    _y = _w + (6.283185307179586) * (((modelica_real)((modelica_integer)floor(0.5 + (0.1591549430918954) * (_y0 - _w)))));
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Math_atan3(threadData_t *threadData, modelica_metatype _u1, modelica_metatype _u2, modelica_metatype _y0)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_u1);
  tmp2 = mmc_unbox_real(_u2);
  tmp3 = mmc_unbox_real(_y0);
  _y = omc_Modelica_Math_atan3(threadData, tmp1, tmp2, tmp3);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

OpenIPSL_Electrical_SystemBase omc_OpenIPSL_Electrical_SystemBase(threadData_t *threadData, modelica_real omc_S_b, modelica_real omc_fn)
{
  OpenIPSL_Electrical_SystemBase tmp1;
  tmp1._S_b = omc_S_b;
  tmp1._fn = omc_fn;
  return tmp1;
}

modelica_metatype boxptr_OpenIPSL_Electrical_SystemBase(threadData_t *threadData, modelica_metatype _S_b, modelica_metatype _fn)
{
  return mmc_mk_box3(3, &OpenIPSL_Electrical_SystemBase__desc, _S_b, _fn);
}

OpenIPSL_Electrical__omcQSystemBase_24SysData omc_OpenIPSL_Electrical__omcQSystemBase_24SysData(threadData_t *threadData, modelica_real omc_S_b, modelica_real omc_fn)
{
  OpenIPSL_Electrical__omcQSystemBase_24SysData tmp1;
  tmp1._S_b = omc_S_b;
  tmp1._fn = omc_fn;
  return tmp1;
}

modelica_metatype boxptr_OpenIPSL_Electrical__omcQSystemBase_24SysData(threadData_t *threadData, modelica_metatype _S_b, modelica_metatype _fn)
{
  return mmc_mk_box3(3, &OpenIPSL_Electrical__omcQSystemBase_24SysData__desc, _S_b, _fn);
}

DLLExport
modelica_real omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData_t *threadData, modelica_real _V_RMAX_init, modelica_real _V_RMIN_init, modelica_real _K_E_init, modelica_real _E_2, modelica_real _S_EE_2, modelica_real _Efd0, modelica_real _SE_Efd0, modelica_real *out_V_RMIN, modelica_real *out_K_E)
{
  modelica_real _V_RMAX;
  modelica_real _V_RMIN;
  modelica_real _K_E;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _V_RMAX has no default value.
  // _V_RMIN has no default value.
  // _K_E has no default value.
  if((_V_RMAX_init == 0.0))
  {
    if((_K_E_init <= 0.0))
    {
      _V_RMAX = (_S_EE_2) * (_E_2);
    }
    else
    {
      _V_RMAX = _S_EE_2 + _K_E_init;
    }
  }
  else
  {
    _V_RMAX = _V_RMAX_init;
  }

  if((_K_E_init == 0.0))
  {
    tmp1 = _Efd0;
    _K_E = (0.1) * ((_V_RMAX) / tmp1) - _SE_Efd0;
  }
  else
  {
    _K_E = _K_E_init;
  }

  if((_V_RMAX_init == 0.0))
  {
    _V_RMIN = (-_V_RMAX);
  }
  else
  {
    _V_RMIN = _V_RMIN_init;
  }
  _return: OMC_LABEL_UNUSED
  if (out_V_RMIN) { *out_V_RMIN = _V_RMIN; }
  if (out_K_E) { *out_K_E = _K_E; }
  return _V_RMAX;
}
modelica_metatype boxptr_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData_t *threadData, modelica_metatype _V_RMAX_init, modelica_metatype _V_RMIN_init, modelica_metatype _K_E_init, modelica_metatype _E_2, modelica_metatype _S_EE_2, modelica_metatype _Efd0, modelica_metatype _SE_Efd0, modelica_metatype *out_V_RMIN, modelica_metatype *out_K_E)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _V_RMIN;
  modelica_real _K_E;
  modelica_real _V_RMAX;
  modelica_metatype out_V_RMAX;
  tmp1 = mmc_unbox_real(_V_RMAX_init);
  tmp2 = mmc_unbox_real(_V_RMIN_init);
  tmp3 = mmc_unbox_real(_K_E_init);
  tmp4 = mmc_unbox_real(_E_2);
  tmp5 = mmc_unbox_real(_S_EE_2);
  tmp6 = mmc_unbox_real(_Efd0);
  tmp7 = mmc_unbox_real(_SE_Efd0);
  _V_RMAX = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, &_V_RMIN, &_K_E);
  out_V_RMAX = mmc_mk_rcon(_V_RMAX);
  if (out_V_RMIN) { *out_V_RMIN = mmc_mk_rcon(_V_RMIN); }
  if (out_K_E) { *out_K_E = mmc_mk_rcon(_K_E); }
  return out_V_RMAX;
}

DLLExport
modelica_real omc_OpenIPSL_NonElectrical_Functions_SE(threadData_t *threadData, modelica_real _u, modelica_real _SE1, modelica_real _SE2, modelica_real _E1, modelica_real _E2)
{
  modelica_real _sys;
  modelica_real _a;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real _A;
  modelica_real tmp5;
  modelica_real _B;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  _tailrecursive: OMC_LABEL_UNUSED
  // _sys has no default value.
  tmp3 = (modelica_boolean)(_SE2 != 0.0);
  if(tmp3)
  {
    tmp1 = (_E2) * (_SE2);
    tmp2 = (_SE1) * ((_E1) / tmp1);
    if(!(tmp2 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(SE1 * E1 / (E2 * SE2)) was %g should be >= 0", tmp2);
    }
    tmp4 = sqrt(tmp2);
  }
  else
  {
    tmp4 = 0.0;
  }
  _a = tmp4;
  tmp5 = -1.0 + _a;
  _A = _E2 + (_E2 - _E1) / tmp5;
  tmp8 = (modelica_boolean)(fabs(_E1 - _E2) < 1e-015);
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp6 = _E1 - _E2;
    tmp7 = (-1.0 + _a) / tmp6;
    tmp9 = (_SE2) * ((_E2) * ((tmp7 * tmp7)));
  }
  _B = tmp9;
  if(((_SE1 == 0.0) || (_u <= 0.0)))
  {
    _sys = 0.0;
  }
  else
  {
    if((_u <= _A))
    {
      _sys = 0.0;
    }
    else
    {
      tmp10 = _u - _A;
      tmp11 = _u;
      _sys = (_B) * (((tmp10 * tmp10)) / tmp11);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _sys;
}
modelica_metatype boxptr_OpenIPSL_NonElectrical_Functions_SE(threadData_t *threadData, modelica_metatype _u, modelica_metatype _SE1, modelica_metatype _SE2, modelica_metatype _E1, modelica_metatype _E2)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _sys;
  modelica_metatype out_sys;
  tmp1 = mmc_unbox_real(_u);
  tmp2 = mmc_unbox_real(_SE1);
  tmp3 = mmc_unbox_real(_SE2);
  tmp4 = mmc_unbox_real(_E1);
  tmp5 = mmc_unbox_real(_E2);
  _sys = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, tmp1, tmp2, tmp3, tmp4, tmp5);
  out_sys = mmc_mk_rcon(_sys);
  return out_sys;
}

#ifdef __cplusplus
}
#endif
