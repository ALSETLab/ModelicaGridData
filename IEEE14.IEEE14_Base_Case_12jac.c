/* Jacobians 6 */
#include "IEEE14.IEEE14_Base_Case_model.h"
#include "IEEE14.IEEE14_Base_Case_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 2289
type: SIMPLE_ASSIGN
$res_NLSJac2_100.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_05.p[2].vr * Bus_05.p[2].vr.SeedNLSJac2 + Bus_05.p[2].vi * Bus_05.p[2].vi.SeedNLSJac2) / sqrt(Bus_05.p[2].vr ^ 2.0 + Bus_05.p[2].vi ^ 2.0) - LOAD_05.v.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2289(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2289};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */;
  tmp1 = data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */;
  jacobian->resultVars[99] /* $res_NLSJac2_100.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */) * (jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */) * (jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */),sqrt((tmp0 * tmp0) + (tmp1 * tmp1)),"sqrt(Bus_05.p[2].vr ^ 2.0 + Bus_05.p[2].vi ^ 2.0)") - jacobian->seedVars[94] /* LOAD_05.v.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2290
type: SIMPLE_ASSIGN
$res_NLSJac2_69.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine14.t1 and time < pwLine14.t2 then pwLine14.is.im.SeedNLSJac2 else Bus_09.p[3].vi.SeedNLSJac2 - Bus_07.p[2].vi.SeedNLSJac2 - (pwLine14.Z.re * (pwLine14.is.im.SeedNLSJac2 + (-Bus_09.p[3].vr.SeedNLSJac2) * pwLine14.Y.im - Bus_09.p[3].vi.SeedNLSJac2 * pwLine14.Y.re) + pwLine14.Z.im * (pwLine14.is.re.SeedNLSJac2 + Bus_09.p[3].vi.SeedNLSJac2 * pwLine14.Y.im - Bus_09.p[3].vr.SeedNLSJac2 * pwLine14.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2290(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2290};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->timeValue, data->simulationInfo->realParameter[2263] /* pwLine14.t1 PARAM */, 52, GreaterEq);
  RELATIONHYSTERESIS(tmp3, data->localData[0]->timeValue, data->simulationInfo->realParameter[2264] /* pwLine14.t2 PARAM */, 53, Less);
  jacobian->resultVars[68] /* $res_NLSJac2_69.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp2 && tmp3)?jacobian->seedVars[42] /* pwLine14.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2262] /* pwLine14.Z.re PARAM */) * (jacobian->seedVars[42] /* pwLine14.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2259] /* pwLine14.Y.im PARAM */) - ((jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2260] /* pwLine14.Y.re PARAM */))) + (data->simulationInfo->realParameter[2261] /* pwLine14.Z.im PARAM */) * (jacobian->seedVars[44] /* pwLine14.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2259] /* pwLine14.Y.im PARAM */) - ((jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2260] /* pwLine14.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2291
type: SIMPLE_ASSIGN
$res_NLSJac2_68.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine8.t1 and time < pwLine8.t2 then pwLine8.is.re.SeedNLSJac2 else Bus_14.p[3].vr.SeedNLSJac2 - Bus_09.p[3].vr.SeedNLSJac2 - (pwLine8.Z.re * (pwLine8.is.re.SeedNLSJac2 + Bus_14.p[3].vi.SeedNLSJac2 * pwLine8.Y.im - Bus_14.p[3].vr.SeedNLSJac2 * pwLine8.Y.re) - pwLine8.Z.im * (pwLine8.is.im.SeedNLSJac2 + (-Bus_14.p[3].vr.SeedNLSJac2) * pwLine8.Y.im - Bus_14.p[3].vi.SeedNLSJac2 * pwLine8.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2291(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2291};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->timeValue, data->simulationInfo->realParameter[2351] /* pwLine8.t1 PARAM */, 80, GreaterEq);
  RELATIONHYSTERESIS(tmp5, data->localData[0]->timeValue, data->simulationInfo->realParameter[2352] /* pwLine8.t2 PARAM */, 81, Less);
  jacobian->resultVars[67] /* $res_NLSJac2_68.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp4 && tmp5)?jacobian->seedVars[14] /* pwLine8.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2350] /* pwLine8.Z.re PARAM */) * (jacobian->seedVars[14] /* pwLine8.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2347] /* pwLine8.Y.im PARAM */) - ((jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2348] /* pwLine8.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2349] /* pwLine8.Z.im PARAM */) * (jacobian->seedVars[16] /* pwLine8.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2347] /* pwLine8.Y.im PARAM */) - ((jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2348] /* pwLine8.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2292
type: SIMPLE_ASSIGN
$res_NLSJac2_67.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine8.t1 and time < pwLine8.t2 then pwLine8.is.im.SeedNLSJac2 else Bus_14.p[3].vi.SeedNLSJac2 - Bus_09.p[3].vi.SeedNLSJac2 - (pwLine8.Z.re * (pwLine8.is.im.SeedNLSJac2 + (-Bus_14.p[3].vr.SeedNLSJac2) * pwLine8.Y.im - Bus_14.p[3].vi.SeedNLSJac2 * pwLine8.Y.re) + pwLine8.Z.im * (pwLine8.is.re.SeedNLSJac2 + Bus_14.p[3].vi.SeedNLSJac2 * pwLine8.Y.im - Bus_14.p[3].vr.SeedNLSJac2 * pwLine8.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2292(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2292};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realParameter[2351] /* pwLine8.t1 PARAM */, 80, GreaterEq);
  RELATIONHYSTERESIS(tmp7, data->localData[0]->timeValue, data->simulationInfo->realParameter[2352] /* pwLine8.t2 PARAM */, 81, Less);
  jacobian->resultVars[66] /* $res_NLSJac2_67.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp6 && tmp7)?jacobian->seedVars[16] /* pwLine8.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2350] /* pwLine8.Z.re PARAM */) * (jacobian->seedVars[16] /* pwLine8.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2347] /* pwLine8.Y.im PARAM */) - ((jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2348] /* pwLine8.Y.re PARAM */))) + (data->simulationInfo->realParameter[2349] /* pwLine8.Z.im PARAM */) * (jacobian->seedVars[14] /* pwLine8.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2347] /* pwLine8.Y.im PARAM */) - ((jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2348] /* pwLine8.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2293
type: SIMPLE_ASSIGN
$res_NLSJac2_66.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_14.p[3].vr * Bus_14.p[3].vr.SeedNLSJac2 + Bus_14.p[3].vi * Bus_14.p[3].vi.SeedNLSJac2) / sqrt(Bus_14.p[3].vr ^ 2.0 + Bus_14.p[3].vi ^ 2.0) - LOAD_14.v.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2293(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2293};
  modelica_real tmp8;
  modelica_real tmp9;
  tmp8 = data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */;
  tmp9 = data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */;
  jacobian->resultVars[65] /* $res_NLSJac2_66.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */) * (jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */) * (jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */),sqrt((tmp8 * tmp8) + (tmp9 * tmp9)),"sqrt(Bus_14.p[3].vr ^ 2.0 + Bus_14.p[3].vi ^ 2.0)") - jacobian->seedVars[91] /* LOAD_14.v.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2294
type: SIMPLE_ASSIGN
$res_NLSJac2_61.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine13.t1 and time < pwLine13.t2 then pwLine13.is.im.SeedNLSJac2 else Bus_14.p[3].vi.SeedNLSJac2 - Bus_13.n[2].vi.SeedNLSJac2 - (pwLine13.Z.re * (pwLine13.is.im.SeedNLSJac2 + (-Bus_14.p[3].vr.SeedNLSJac2) * pwLine13.Y.im - Bus_14.p[3].vi.SeedNLSJac2 * pwLine13.Y.re) + pwLine13.Z.im * (pwLine13.is.re.SeedNLSJac2 + Bus_14.p[3].vi.SeedNLSJac2 * pwLine13.Y.im - Bus_14.p[3].vr.SeedNLSJac2 * pwLine13.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2294(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2294};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  RELATIONHYSTERESIS(tmp10, data->localData[0]->timeValue, data->simulationInfo->realParameter[2252] /* pwLine13.t1 PARAM */, 78, GreaterEq);
  RELATIONHYSTERESIS(tmp11, data->localData[0]->timeValue, data->simulationInfo->realParameter[2253] /* pwLine13.t2 PARAM */, 79, Less);
  jacobian->resultVars[60] /* $res_NLSJac2_61.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp10 && tmp11)?jacobian->seedVars[17] /* pwLine13.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2251] /* pwLine13.Z.re PARAM */) * (jacobian->seedVars[17] /* pwLine13.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2248] /* pwLine13.Y.im PARAM */) - ((jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2249] /* pwLine13.Y.re PARAM */))) + (data->simulationInfo->realParameter[2250] /* pwLine13.Z.im PARAM */) * (jacobian->seedVars[15] /* pwLine13.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2248] /* pwLine13.Y.im PARAM */) - ((jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2249] /* pwLine13.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2295
type: SIMPLE_ASSIGN
$res_NLSJac2_60.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine13.t1 and time < pwLine13.t2 then pwLine13.is.re.SeedNLSJac2 else Bus_14.p[3].vr.SeedNLSJac2 - Bus_13.n[2].vr.SeedNLSJac2 - (pwLine13.Z.re * (pwLine13.is.re.SeedNLSJac2 + Bus_14.p[3].vi.SeedNLSJac2 * pwLine13.Y.im - Bus_14.p[3].vr.SeedNLSJac2 * pwLine13.Y.re) - pwLine13.Z.im * (pwLine13.is.im.SeedNLSJac2 + (-Bus_14.p[3].vr.SeedNLSJac2) * pwLine13.Y.im - Bus_14.p[3].vi.SeedNLSJac2 * pwLine13.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2295(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2295};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  RELATIONHYSTERESIS(tmp12, data->localData[0]->timeValue, data->simulationInfo->realParameter[2252] /* pwLine13.t1 PARAM */, 78, GreaterEq);
  RELATIONHYSTERESIS(tmp13, data->localData[0]->timeValue, data->simulationInfo->realParameter[2253] /* pwLine13.t2 PARAM */, 79, Less);
  jacobian->resultVars[59] /* $res_NLSJac2_60.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp12 && tmp13)?jacobian->seedVars[15] /* pwLine13.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2251] /* pwLine13.Z.re PARAM */) * (jacobian->seedVars[15] /* pwLine13.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2248] /* pwLine13.Y.im PARAM */) - ((jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2249] /* pwLine13.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2250] /* pwLine13.Z.im PARAM */) * (jacobian->seedVars[17] /* pwLine13.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2248] /* pwLine13.Y.im PARAM */) - ((jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2249] /* pwLine13.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2296
type: SIMPLE_ASSIGN
$res_NLSJac2_44.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine12.t1 and time < pwLine12.t2 then pwLine12.ir.im.SeedNLSJac2 else Bus_13.n[2].vi.SeedNLSJac2 - Bus_12.n[1].vi.SeedNLSJac2 - (pwLine12.Z.re * (pwLine12.ir.im.SeedNLSJac2 + (-Bus_13.n[2].vr.SeedNLSJac2) * pwLine12.Y.im - Bus_13.n[2].vi.SeedNLSJac2 * pwLine12.Y.re) + pwLine12.Z.im * (pwLine12.ir.re.SeedNLSJac2 + Bus_13.n[2].vi.SeedNLSJac2 * pwLine12.Y.im - Bus_13.n[2].vr.SeedNLSJac2 * pwLine12.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2296(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2296};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  RELATIONHYSTERESIS(tmp14, data->localData[0]->timeValue, data->simulationInfo->realParameter[2241] /* pwLine12.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp15, data->localData[0]->timeValue, data->simulationInfo->realParameter[2242] /* pwLine12.t2 PARAM */, 9, Less);
  jacobian->resultVars[43] /* $res_NLSJac2_44.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp14 && tmp15)?jacobian->seedVars[26] /* pwLine12.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2240] /* pwLine12.Z.re PARAM */) * (jacobian->seedVars[26] /* pwLine12.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2237] /* pwLine12.Y.im PARAM */) - ((jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2238] /* pwLine12.Y.re PARAM */))) + (data->simulationInfo->realParameter[2239] /* pwLine12.Z.im PARAM */) * (jacobian->seedVars[27] /* pwLine12.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2237] /* pwLine12.Y.im PARAM */) - ((jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2238] /* pwLine12.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2297
type: SIMPLE_ASSIGN
$res_NLSJac2_43.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine12.t1 and time < pwLine12.t2 then pwLine12.ir.re.SeedNLSJac2 else Bus_13.n[2].vr.SeedNLSJac2 - Bus_12.n[1].vr.SeedNLSJac2 - (pwLine12.Z.re * (pwLine12.ir.re.SeedNLSJac2 + Bus_13.n[2].vi.SeedNLSJac2 * pwLine12.Y.im - Bus_13.n[2].vr.SeedNLSJac2 * pwLine12.Y.re) - pwLine12.Z.im * (pwLine12.ir.im.SeedNLSJac2 + (-Bus_13.n[2].vr.SeedNLSJac2) * pwLine12.Y.im - Bus_13.n[2].vi.SeedNLSJac2 * pwLine12.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2297(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2297};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  RELATIONHYSTERESIS(tmp16, data->localData[0]->timeValue, data->simulationInfo->realParameter[2241] /* pwLine12.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp17, data->localData[0]->timeValue, data->simulationInfo->realParameter[2242] /* pwLine12.t2 PARAM */, 9, Less);
  jacobian->resultVars[42] /* $res_NLSJac2_43.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp16 && tmp17)?jacobian->seedVars[27] /* pwLine12.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2240] /* pwLine12.Z.re PARAM */) * (jacobian->seedVars[27] /* pwLine12.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2237] /* pwLine12.Y.im PARAM */) - ((jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2238] /* pwLine12.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2239] /* pwLine12.Z.im PARAM */) * (jacobian->seedVars[26] /* pwLine12.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2237] /* pwLine12.Y.im PARAM */) - ((jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2238] /* pwLine12.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2298
type: SIMPLE_ASSIGN
$res_NLSJac2_24.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine7.t1 and time < pwLine7.t2 then pwLine7.is.im.SeedNLSJac2 else Bus_09.p[3].vi.SeedNLSJac2 - Bus_10.n[1].vi.SeedNLSJac2 - (pwLine7.Z.re * (pwLine7.is.im.SeedNLSJac2 + (-Bus_09.p[3].vr.SeedNLSJac2) * pwLine7.Y.im - Bus_09.p[3].vi.SeedNLSJac2 * pwLine7.Y.re) + pwLine7.Z.im * (pwLine7.is.re.SeedNLSJac2 + Bus_09.p[3].vi.SeedNLSJac2 * pwLine7.Y.im - Bus_09.p[3].vr.SeedNLSJac2 * pwLine7.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2298(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2298};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  RELATIONHYSTERESIS(tmp18, data->localData[0]->timeValue, data->simulationInfo->realParameter[2340] /* pwLine7.t1 PARAM */, 60, GreaterEq);
  RELATIONHYSTERESIS(tmp19, data->localData[0]->timeValue, data->simulationInfo->realParameter[2341] /* pwLine7.t2 PARAM */, 61, Less);
  jacobian->resultVars[23] /* $res_NLSJac2_24.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp18 && tmp19)?jacobian->seedVars[43] /* pwLine7.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2339] /* pwLine7.Z.re PARAM */) * (jacobian->seedVars[43] /* pwLine7.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2336] /* pwLine7.Y.im PARAM */) - ((jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2337] /* pwLine7.Y.re PARAM */))) + (data->simulationInfo->realParameter[2338] /* pwLine7.Z.im PARAM */) * (jacobian->seedVars[45] /* pwLine7.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2336] /* pwLine7.Y.im PARAM */) - ((jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2337] /* pwLine7.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2299
type: SIMPLE_ASSIGN
$res_NLSJac2_23.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine7.t1 and time < pwLine7.t2 then pwLine7.is.re.SeedNLSJac2 else Bus_09.p[3].vr.SeedNLSJac2 - Bus_10.n[1].vr.SeedNLSJac2 - (pwLine7.Z.re * (pwLine7.is.re.SeedNLSJac2 + Bus_09.p[3].vi.SeedNLSJac2 * pwLine7.Y.im - Bus_09.p[3].vr.SeedNLSJac2 * pwLine7.Y.re) - pwLine7.Z.im * (pwLine7.is.im.SeedNLSJac2 + (-Bus_09.p[3].vr.SeedNLSJac2) * pwLine7.Y.im - Bus_09.p[3].vi.SeedNLSJac2 * pwLine7.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2299(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2299};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  RELATIONHYSTERESIS(tmp20, data->localData[0]->timeValue, data->simulationInfo->realParameter[2340] /* pwLine7.t1 PARAM */, 60, GreaterEq);
  RELATIONHYSTERESIS(tmp21, data->localData[0]->timeValue, data->simulationInfo->realParameter[2341] /* pwLine7.t2 PARAM */, 61, Less);
  jacobian->resultVars[22] /* $res_NLSJac2_23.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp20 && tmp21)?jacobian->seedVars[45] /* pwLine7.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2339] /* pwLine7.Z.re PARAM */) * (jacobian->seedVars[45] /* pwLine7.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2336] /* pwLine7.Y.im PARAM */) - ((jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2337] /* pwLine7.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2338] /* pwLine7.Z.im PARAM */) * (jacobian->seedVars[43] /* pwLine7.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2336] /* pwLine7.Y.im PARAM */) - ((jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2337] /* pwLine7.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2300
type: SIMPLE_ASSIGN
$res_NLSJac2_20.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_09.p[3].vr * Bus_09.p[3].vr.SeedNLSJac2 + Bus_09.p[3].vi * Bus_09.p[3].vi.SeedNLSJac2) / sqrt(Bus_09.p[3].vr ^ 2.0 + Bus_09.p[3].vi ^ 2.0) - LOAD_09.v.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2300(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2300};
  modelica_real tmp22;
  modelica_real tmp23;
  tmp22 = data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */;
  tmp23 = data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */;
  jacobian->resultVars[19] /* $res_NLSJac2_20.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */) * (jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */) * (jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */),sqrt((tmp22 * tmp22) + (tmp23 * tmp23)),"sqrt(Bus_09.p[3].vr ^ 2.0 + Bus_09.p[3].vi ^ 2.0)") - jacobian->seedVars[89] /* LOAD_09.v.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2301
type: SIMPLE_ASSIGN
pwLine4.ir.im.$pDERNLSJac2.dummyVarNLSJac2 = Bus_05.n[3].ii.SeedNLSJac2 - (pwLine1.ir.im.SeedNLSJac2 + pwLine3.is.im.SeedNLSJac2 - Bus_05.p[2].ii.SeedNLSJac2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2301(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2301};
  jacobian->tmpVars[121] /* pwLine4.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[12] /* Bus_05.n[3].ii.SeedNLSJac2 SEED_VAR */ - (jacobian->seedVars[59] /* pwLine1.ir.im.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[13] /* pwLine3.is.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[66] /* Bus_05.p[2].ii.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2302
type: SIMPLE_ASSIGN
pwLine13.ir.re.$pDERNLSJac2.dummyVarNLSJac2 = Bus_13.p[2].ir.SeedNLSJac2 - (pwLine12.ir.re.SeedNLSJac2 + pwLine15.ir.re.SeedNLSJac2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2302(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2302};
  jacobian->tmpVars[118] /* pwLine13.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[19] /* Bus_13.p[2].ir.SeedNLSJac2 SEED_VAR */ - (jacobian->seedVars[27] /* pwLine12.ir.re.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[18] /* pwLine15.ir.re.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2303
type: SIMPLE_ASSIGN
pwLine13.ir.im.$pDERNLSJac2.dummyVarNLSJac2 = Bus_13.p[2].ii.SeedNLSJac2 - (pwLine12.ir.im.SeedNLSJac2 + pwLine15.ir.im.SeedNLSJac2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2303(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2303};
  jacobian->tmpVars[117] /* pwLine13.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[21] /* Bus_13.p[2].ii.SeedNLSJac2 SEED_VAR */ - (jacobian->seedVars[26] /* pwLine12.ir.im.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[20] /* pwLine15.ir.im.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2304
type: SIMPLE_ASSIGN
$res_NLSJac2_53.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine13.t1 and time < pwLine13.t2 then pwLine13.ir.re.$pDERNLSJac2.dummyVarNLSJac2 else Bus_13.n[2].vr.SeedNLSJac2 - Bus_14.p[3].vr.SeedNLSJac2 - (pwLine13.Z.re * (pwLine13.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_13.n[2].vi.SeedNLSJac2 * pwLine13.Y.im - Bus_13.n[2].vr.SeedNLSJac2 * pwLine13.Y.re) - pwLine13.Z.im * (pwLine13.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_13.n[2].vr.SeedNLSJac2) * pwLine13.Y.im - Bus_13.n[2].vi.SeedNLSJac2 * pwLine13.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2304(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2304};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  RELATIONHYSTERESIS(tmp24, data->localData[0]->timeValue, data->simulationInfo->realParameter[2252] /* pwLine13.t1 PARAM */, 78, GreaterEq);
  RELATIONHYSTERESIS(tmp25, data->localData[0]->timeValue, data->simulationInfo->realParameter[2253] /* pwLine13.t2 PARAM */, 79, Less);
  jacobian->resultVars[52] /* $res_NLSJac2_53.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp24 && tmp25)?jacobian->tmpVars[118] /* pwLine13.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2251] /* pwLine13.Z.re PARAM */) * (jacobian->tmpVars[118] /* pwLine13.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2248] /* pwLine13.Y.im PARAM */) - ((jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2249] /* pwLine13.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2250] /* pwLine13.Z.im PARAM */) * (jacobian->tmpVars[117] /* pwLine13.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2248] /* pwLine13.Y.im PARAM */) - ((jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2249] /* pwLine13.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2305
type: SIMPLE_ASSIGN
$res_NLSJac2_59.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine13.t1 and time < pwLine13.t2 then pwLine13.ir.im.$pDERNLSJac2.dummyVarNLSJac2 else Bus_13.n[2].vi.SeedNLSJac2 - Bus_14.p[3].vi.SeedNLSJac2 - (pwLine13.Z.re * (pwLine13.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_13.n[2].vr.SeedNLSJac2) * pwLine13.Y.im - Bus_13.n[2].vi.SeedNLSJac2 * pwLine13.Y.re) + pwLine13.Z.im * (pwLine13.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_13.n[2].vi.SeedNLSJac2 * pwLine13.Y.im - Bus_13.n[2].vr.SeedNLSJac2 * pwLine13.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2305(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2305};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  RELATIONHYSTERESIS(tmp26, data->localData[0]->timeValue, data->simulationInfo->realParameter[2252] /* pwLine13.t1 PARAM */, 78, GreaterEq);
  RELATIONHYSTERESIS(tmp27, data->localData[0]->timeValue, data->simulationInfo->realParameter[2253] /* pwLine13.t2 PARAM */, 79, Less);
  jacobian->resultVars[58] /* $res_NLSJac2_59.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp26 && tmp27)?jacobian->tmpVars[117] /* pwLine13.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2251] /* pwLine13.Z.re PARAM */) * (jacobian->tmpVars[117] /* pwLine13.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2248] /* pwLine13.Y.im PARAM */) - ((jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2249] /* pwLine13.Y.re PARAM */))) + (data->simulationInfo->realParameter[2250] /* pwLine13.Z.im PARAM */) * (jacobian->tmpVars[118] /* pwLine13.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2248] /* pwLine13.Y.im PARAM */) - ((jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2249] /* pwLine13.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2306
type: SIMPLE_ASSIGN
Bus_12.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 = pwLine11.is.re.SeedNLSJac2 + pwLine12.is.re.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2306(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2306};
  jacobian->tmpVars[116] /* Bus_12.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[23] /* pwLine11.is.re.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[22] /* pwLine12.is.re.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2307
type: SIMPLE_ASSIGN
pwLine12.is.im.$pDERNLSJac2.dummyVarNLSJac2 = Bus_12.n[1].ii.SeedNLSJac2 - pwLine11.is.im.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2307(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2307};
  jacobian->tmpVars[115] /* pwLine12.is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[24] /* Bus_12.n[1].ii.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[25] /* pwLine11.is.im.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2308
type: SIMPLE_ASSIGN
$res_NLSJac2_47.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine12.t1 and time < pwLine12.t2 then pwLine12.is.re.SeedNLSJac2 else Bus_12.n[1].vr.SeedNLSJac2 - Bus_13.n[2].vr.SeedNLSJac2 - (pwLine12.Z.re * (pwLine12.is.re.SeedNLSJac2 + Bus_12.n[1].vi.SeedNLSJac2 * pwLine12.Y.im - Bus_12.n[1].vr.SeedNLSJac2 * pwLine12.Y.re) - pwLine12.Z.im * (pwLine12.is.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_12.n[1].vr.SeedNLSJac2) * pwLine12.Y.im - Bus_12.n[1].vi.SeedNLSJac2 * pwLine12.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2308(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2308};
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  RELATIONHYSTERESIS(tmp28, data->localData[0]->timeValue, data->simulationInfo->realParameter[2241] /* pwLine12.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp29, data->localData[0]->timeValue, data->simulationInfo->realParameter[2242] /* pwLine12.t2 PARAM */, 9, Less);
  jacobian->resultVars[46] /* $res_NLSJac2_47.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp28 && tmp29)?jacobian->seedVars[22] /* pwLine12.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2240] /* pwLine12.Z.re PARAM */) * (jacobian->seedVars[22] /* pwLine12.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2237] /* pwLine12.Y.im PARAM */) - ((jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2238] /* pwLine12.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2239] /* pwLine12.Z.im PARAM */) * (jacobian->tmpVars[115] /* pwLine12.is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2237] /* pwLine12.Y.im PARAM */) - ((jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2238] /* pwLine12.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2309
type: SIMPLE_ASSIGN
$res_NLSJac2_50.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine12.t1 and time < pwLine12.t2 then pwLine12.is.im.$pDERNLSJac2.dummyVarNLSJac2 else Bus_12.n[1].vi.SeedNLSJac2 - Bus_13.n[2].vi.SeedNLSJac2 - (pwLine12.Z.re * (pwLine12.is.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_12.n[1].vr.SeedNLSJac2) * pwLine12.Y.im - Bus_12.n[1].vi.SeedNLSJac2 * pwLine12.Y.re) + pwLine12.Z.im * (pwLine12.is.re.SeedNLSJac2 + Bus_12.n[1].vi.SeedNLSJac2 * pwLine12.Y.im - Bus_12.n[1].vr.SeedNLSJac2 * pwLine12.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2309(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2309};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  RELATIONHYSTERESIS(tmp30, data->localData[0]->timeValue, data->simulationInfo->realParameter[2241] /* pwLine12.t1 PARAM */, 8, GreaterEq);
  RELATIONHYSTERESIS(tmp31, data->localData[0]->timeValue, data->simulationInfo->realParameter[2242] /* pwLine12.t2 PARAM */, 9, Less);
  jacobian->resultVars[49] /* $res_NLSJac2_50.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp30 && tmp31)?jacobian->tmpVars[115] /* pwLine12.is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2240] /* pwLine12.Z.re PARAM */) * (jacobian->tmpVars[115] /* pwLine12.is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2237] /* pwLine12.Y.im PARAM */) - ((jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2238] /* pwLine12.Y.re PARAM */))) + (data->simulationInfo->realParameter[2239] /* pwLine12.Z.im PARAM */) * (jacobian->seedVars[22] /* pwLine12.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2237] /* pwLine12.Y.im PARAM */) - ((jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2238] /* pwLine12.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2310
type: SIMPLE_ASSIGN
pwLine9.ir.im.$pDERNLSJac2.dummyVarNLSJac2 = Bus_11.p[2].ii.SeedNLSJac2 - pwLine10.is.im.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2310(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2310};
  jacobian->tmpVars[112] /* pwLine9.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[34] /* Bus_11.p[2].ii.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[35] /* pwLine10.is.im.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2311
type: SIMPLE_ASSIGN
pwLine10.is.re.$pDERNLSJac2.dummyVarNLSJac2 = Bus_11.p[2].ir.SeedNLSJac2 - pwLine9.ir.re.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2311(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2311};
  jacobian->tmpVars[111] /* pwLine10.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[37] /* Bus_11.p[2].ir.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[36] /* pwLine9.ir.re.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2312
type: SIMPLE_ASSIGN
$res_NLSJac2_31.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine10.t1 and time < pwLine10.t2 then pwLine10.is.re.$pDERNLSJac2.dummyVarNLSJac2 else Bus_11.p[2].vr.SeedNLSJac2 - Bus_10.n[1].vr.SeedNLSJac2 - (pwLine10.Z.re * (pwLine10.is.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_11.p[2].vi.SeedNLSJac2 * pwLine10.Y.im - Bus_11.p[2].vr.SeedNLSJac2 * pwLine10.Y.re) - pwLine10.Z.im * (pwLine10.is.im.SeedNLSJac2 + (-Bus_11.p[2].vr.SeedNLSJac2) * pwLine10.Y.im - Bus_11.p[2].vi.SeedNLSJac2 * pwLine10.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2312(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2312};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  RELATIONHYSTERESIS(tmp32, data->localData[0]->timeValue, data->simulationInfo->realParameter[2219] /* pwLine10.t1 PARAM */, 68, GreaterEq);
  RELATIONHYSTERESIS(tmp33, data->localData[0]->timeValue, data->simulationInfo->realParameter[2220] /* pwLine10.t2 PARAM */, 69, Less);
  jacobian->resultVars[30] /* $res_NLSJac2_31.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp32 && tmp33)?jacobian->tmpVars[111] /* pwLine10.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2218] /* pwLine10.Z.re PARAM */) * (jacobian->tmpVars[111] /* pwLine10.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2215] /* pwLine10.Y.im PARAM */) - ((jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2216] /* pwLine10.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2217] /* pwLine10.Z.im PARAM */) * (jacobian->seedVars[35] /* pwLine10.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2215] /* pwLine10.Y.im PARAM */) - ((jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2216] /* pwLine10.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2313
type: SIMPLE_ASSIGN
$res_NLSJac2_32.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine10.t1 and time < pwLine10.t2 then pwLine10.is.im.SeedNLSJac2 else Bus_11.p[2].vi.SeedNLSJac2 - Bus_10.n[1].vi.SeedNLSJac2 - (pwLine10.Z.re * (pwLine10.is.im.SeedNLSJac2 + (-Bus_11.p[2].vr.SeedNLSJac2) * pwLine10.Y.im - Bus_11.p[2].vi.SeedNLSJac2 * pwLine10.Y.re) + pwLine10.Z.im * (pwLine10.is.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_11.p[2].vi.SeedNLSJac2 * pwLine10.Y.im - Bus_11.p[2].vr.SeedNLSJac2 * pwLine10.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2313(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2313};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  RELATIONHYSTERESIS(tmp34, data->localData[0]->timeValue, data->simulationInfo->realParameter[2219] /* pwLine10.t1 PARAM */, 68, GreaterEq);
  RELATIONHYSTERESIS(tmp35, data->localData[0]->timeValue, data->simulationInfo->realParameter[2220] /* pwLine10.t2 PARAM */, 69, Less);
  jacobian->resultVars[31] /* $res_NLSJac2_32.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp34 && tmp35)?jacobian->seedVars[35] /* pwLine10.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2218] /* pwLine10.Z.re PARAM */) * (jacobian->seedVars[35] /* pwLine10.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2215] /* pwLine10.Y.im PARAM */) - ((jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2216] /* pwLine10.Y.re PARAM */))) + (data->simulationInfo->realParameter[2217] /* pwLine10.Z.im PARAM */) * (jacobian->tmpVars[111] /* pwLine10.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2215] /* pwLine10.Y.im PARAM */) - ((jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2216] /* pwLine10.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2314
type: SIMPLE_ASSIGN
pwLine7.ir.re.$pDERNLSJac2.dummyVarNLSJac2 = Bus_10.p[2].ir.SeedNLSJac2 - pwLine10.ir.re.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2314(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2314};
  jacobian->tmpVars[110] /* pwLine7.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[39] /* Bus_10.p[2].ir.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[38] /* pwLine10.ir.re.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2315
type: SIMPLE_ASSIGN
$res_NLSJac2_27.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine7.t1 and time < pwLine7.t2 then pwLine7.ir.re.$pDERNLSJac2.dummyVarNLSJac2 else Bus_10.n[1].vr.SeedNLSJac2 - Bus_09.p[3].vr.SeedNLSJac2 - (pwLine7.Z.re * (pwLine7.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_10.n[1].vi.SeedNLSJac2 * pwLine7.Y.im - Bus_10.n[1].vr.SeedNLSJac2 * pwLine7.Y.re) - pwLine7.Z.im * (pwLine7.ir.im.SeedNLSJac2 + (-Bus_10.n[1].vr.SeedNLSJac2) * pwLine7.Y.im - Bus_10.n[1].vi.SeedNLSJac2 * pwLine7.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2315(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2315};
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  RELATIONHYSTERESIS(tmp36, data->localData[0]->timeValue, data->simulationInfo->realParameter[2340] /* pwLine7.t1 PARAM */, 60, GreaterEq);
  RELATIONHYSTERESIS(tmp37, data->localData[0]->timeValue, data->simulationInfo->realParameter[2341] /* pwLine7.t2 PARAM */, 61, Less);
  jacobian->resultVars[26] /* $res_NLSJac2_27.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp36 && tmp37)?jacobian->tmpVars[110] /* pwLine7.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2339] /* pwLine7.Z.re PARAM */) * (jacobian->tmpVars[110] /* pwLine7.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2336] /* pwLine7.Y.im PARAM */) - ((jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2337] /* pwLine7.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2338] /* pwLine7.Z.im PARAM */) * (jacobian->seedVars[40] /* pwLine7.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2336] /* pwLine7.Y.im PARAM */) - ((jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2337] /* pwLine7.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2316
type: SIMPLE_ASSIGN
$res_NLSJac2_28.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine7.t1 and time < pwLine7.t2 then pwLine7.ir.im.SeedNLSJac2 else Bus_10.n[1].vi.SeedNLSJac2 - Bus_09.p[3].vi.SeedNLSJac2 - (pwLine7.Z.re * (pwLine7.ir.im.SeedNLSJac2 + (-Bus_10.n[1].vr.SeedNLSJac2) * pwLine7.Y.im - Bus_10.n[1].vi.SeedNLSJac2 * pwLine7.Y.re) + pwLine7.Z.im * (pwLine7.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_10.n[1].vi.SeedNLSJac2 * pwLine7.Y.im - Bus_10.n[1].vr.SeedNLSJac2 * pwLine7.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2316(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2316};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  RELATIONHYSTERESIS(tmp38, data->localData[0]->timeValue, data->simulationInfo->realParameter[2340] /* pwLine7.t1 PARAM */, 60, GreaterEq);
  RELATIONHYSTERESIS(tmp39, data->localData[0]->timeValue, data->simulationInfo->realParameter[2341] /* pwLine7.t2 PARAM */, 61, Less);
  jacobian->resultVars[27] /* $res_NLSJac2_28.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp38 && tmp39)?jacobian->seedVars[40] /* pwLine7.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2339] /* pwLine7.Z.re PARAM */) * (jacobian->seedVars[40] /* pwLine7.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2336] /* pwLine7.Y.im PARAM */) - ((jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2337] /* pwLine7.Y.re PARAM */))) + (data->simulationInfo->realParameter[2338] /* pwLine7.Z.im PARAM */) * (jacobian->tmpVars[110] /* pwLine7.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2336] /* pwLine7.Y.im PARAM */) - ((jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2337] /* pwLine7.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2317
type: SIMPLE_ASSIGN
pwLine10.ir.im.$pDERNLSJac2.dummyVarNLSJac2 = Bus_10.p[2].ii.SeedNLSJac2 - pwLine7.ir.im.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2317(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2317};
  jacobian->tmpVars[109] /* pwLine10.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[41] /* Bus_10.p[2].ii.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[40] /* pwLine7.ir.im.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2318
type: SIMPLE_ASSIGN
$res_NLSJac2_29.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine10.t1 and time < pwLine10.t2 then pwLine10.ir.re.SeedNLSJac2 else Bus_10.n[1].vr.SeedNLSJac2 - Bus_11.p[2].vr.SeedNLSJac2 - (pwLine10.Z.re * (pwLine10.ir.re.SeedNLSJac2 + Bus_10.n[1].vi.SeedNLSJac2 * pwLine10.Y.im - Bus_10.n[1].vr.SeedNLSJac2 * pwLine10.Y.re) - pwLine10.Z.im * (pwLine10.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_10.n[1].vr.SeedNLSJac2) * pwLine10.Y.im - Bus_10.n[1].vi.SeedNLSJac2 * pwLine10.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2318(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2318};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  RELATIONHYSTERESIS(tmp40, data->localData[0]->timeValue, data->simulationInfo->realParameter[2219] /* pwLine10.t1 PARAM */, 68, GreaterEq);
  RELATIONHYSTERESIS(tmp41, data->localData[0]->timeValue, data->simulationInfo->realParameter[2220] /* pwLine10.t2 PARAM */, 69, Less);
  jacobian->resultVars[28] /* $res_NLSJac2_29.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp40 && tmp41)?jacobian->seedVars[38] /* pwLine10.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2218] /* pwLine10.Z.re PARAM */) * (jacobian->seedVars[38] /* pwLine10.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2215] /* pwLine10.Y.im PARAM */) - ((jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2216] /* pwLine10.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2217] /* pwLine10.Z.im PARAM */) * (jacobian->tmpVars[109] /* pwLine10.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2215] /* pwLine10.Y.im PARAM */) - ((jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2216] /* pwLine10.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2319
type: SIMPLE_ASSIGN
$res_NLSJac2_30.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine10.t1 and time < pwLine10.t2 then pwLine10.ir.im.$pDERNLSJac2.dummyVarNLSJac2 else Bus_10.n[1].vi.SeedNLSJac2 - Bus_11.p[2].vi.SeedNLSJac2 - (pwLine10.Z.re * (pwLine10.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_10.n[1].vr.SeedNLSJac2) * pwLine10.Y.im - Bus_10.n[1].vi.SeedNLSJac2 * pwLine10.Y.re) + pwLine10.Z.im * (pwLine10.ir.re.SeedNLSJac2 + Bus_10.n[1].vi.SeedNLSJac2 * pwLine10.Y.im - Bus_10.n[1].vr.SeedNLSJac2 * pwLine10.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2319(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2319};
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  RELATIONHYSTERESIS(tmp42, data->localData[0]->timeValue, data->simulationInfo->realParameter[2219] /* pwLine10.t1 PARAM */, 68, GreaterEq);
  RELATIONHYSTERESIS(tmp43, data->localData[0]->timeValue, data->simulationInfo->realParameter[2220] /* pwLine10.t2 PARAM */, 69, Less);
  jacobian->resultVars[29] /* $res_NLSJac2_30.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp42 && tmp43)?jacobian->tmpVars[109] /* pwLine10.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2218] /* pwLine10.Z.re PARAM */) * (jacobian->tmpVars[109] /* pwLine10.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2215] /* pwLine10.Y.im PARAM */) - ((jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2216] /* pwLine10.Y.re PARAM */))) + (data->simulationInfo->realParameter[2217] /* pwLine10.Z.im PARAM */) * (jacobian->seedVars[38] /* pwLine10.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2215] /* pwLine10.Y.im PARAM */) - ((jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2216] /* pwLine10.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2320
type: SIMPLE_ASSIGN
Bus_04.p.4.ir.$pDERNLSJac2.dummyVarNLSJac2 = pwLine3.ir.re.SeedNLSJac2 + pwLine5.ir.re.SeedNLSJac2 + pwLine6.ir.re.SeedNLSJac2 - Bus_04.p[2].ir.SeedNLSJac2 - Bus_04.n[2].ir.SeedNLSJac2 - Bus_04.p[3].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2320(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2320};
  jacobian->tmpVars[106] /* Bus_04.p.4.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[57] /* pwLine3.ir.re.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[48] /* pwLine5.ir.re.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[55] /* pwLine6.ir.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[70] /* Bus_04.p[2].ir.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[49] /* Bus_04.n[2].ir.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[62] /* Bus_04.p[3].ir.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2321
type: SIMPLE_ASSIGN
shunt.I.re.$pDERNLSJac2.dummyVarNLSJac2 = shunt.G * Bus_14.p[3].vr.SeedNLSJac2 - shunt.B * Bus_14.p[3].vi.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2321(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2321};
  jacobian->tmpVars[103] /* shunt.I.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[2365] /* shunt.G PARAM */) * (jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[2364] /* shunt.B PARAM */) * (jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2322
type: SIMPLE_ASSIGN
Bus_14.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2 = pwLine8.is.re.SeedNLSJac2 + pwLine13.is.re.SeedNLSJac2 + shunt.I.re.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2322(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2322};
  jacobian->tmpVars[120] /* Bus_14.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[14] /* pwLine8.is.re.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[15] /* pwLine13.is.re.SeedNLSJac2 SEED_VAR */ + jacobian->tmpVars[103] /* shunt.I.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 2323
type: SIMPLE_ASSIGN
shunt.I.im.$pDERNLSJac2.dummyVarNLSJac2 = shunt.G * Bus_14.p[3].vi.SeedNLSJac2 + shunt.B * Bus_14.p[3].vr.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2323(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2323};
  jacobian->tmpVars[102] /* shunt.I.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[2365] /* shunt.G PARAM */) * (jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */) + (data->simulationInfo->realParameter[2364] /* shunt.B PARAM */) * (jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2324
type: SIMPLE_ASSIGN
Bus_14.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 = pwLine8.is.im.SeedNLSJac2 + pwLine13.is.im.SeedNLSJac2 + shunt.I.im.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2324(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2324};
  jacobian->tmpVars[119] /* Bus_14.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[16] /* pwLine8.is.im.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[17] /* pwLine13.is.im.SeedNLSJac2 SEED_VAR */ + jacobian->tmpVars[102] /* shunt.I.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 2325
type: SIMPLE_ASSIGN
shunt1.I.im.$pDERNLSJac2.dummyVarNLSJac2 = shunt1.G * Bus_09.p[3].vi.SeedNLSJac2 + shunt1.B * Bus_09.p[3].vr.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2325(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2325};
  jacobian->tmpVars[99] /* shunt1.I.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[2367] /* shunt1.G PARAM */) * (jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) + (data->simulationInfo->realParameter[2366] /* shunt1.B PARAM */) * (jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2326
type: SIMPLE_ASSIGN
pwLine8.ir.im.$pDERNLSJac2.dummyVarNLSJac2 = Bus_09.n[2].ii.SeedNLSJac2 - (pwLine7.is.im.SeedNLSJac2 + pwLine14.is.im.SeedNLSJac2 + shunt1.I.im.$pDERNLSJac2.dummyVarNLSJac2 - Bus_09.p[2].ii.SeedNLSJac2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2326(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2326};
  jacobian->tmpVars[108] /* pwLine8.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[63] /* Bus_09.n[2].ii.SeedNLSJac2 SEED_VAR */ - (jacobian->seedVars[43] /* pwLine7.is.im.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[42] /* pwLine14.is.im.SeedNLSJac2 SEED_VAR */ + jacobian->tmpVars[99] /* shunt1.I.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[47] /* Bus_09.p[2].ii.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2327
type: SIMPLE_ASSIGN
shunt1.I.re.$pDERNLSJac2.dummyVarNLSJac2 = shunt1.G * Bus_09.p[3].vr.SeedNLSJac2 - shunt1.B * Bus_09.p[3].vi.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2327(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2327};
  jacobian->tmpVars[98] /* shunt1.I.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[2367] /* shunt1.G PARAM */) * (jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[2366] /* shunt1.B PARAM */) * (jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2328
type: SIMPLE_ASSIGN
Bus_07.n.1.ii.$pDERNLSJac2.dummyVarNLSJac2 = pwLine14.ir.im.SeedNLSJac2 - Bus_07.p[1].ii.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2328(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2328};
  jacobian->tmpVars[93] /* Bus_07.n.1.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[72] /* pwLine14.ir.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[74] /* Bus_07.p[1].ii.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2329
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_8_1.gENROU.Xppd) * gen_Bus_8_1.gENROU.id.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2329(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2329};
  jacobian->tmpVars[84] /* gen_Bus_8_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[2014] /* gen_Bus_8_1.gENROU.Xppd PARAM */)) * (jacobian->seedVars[78] /* gen_Bus_8_1.gENROU.id.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2330
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 = gen_Bus_8_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 - gen_Bus_8_1.gENROU.R_a * gen_Bus_8_1.gENROU.iq.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2330(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2330};
  jacobian->tmpVars[85] /* gen_Bus_8_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[84] /* gen_Bus_8_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[1996] /* gen_Bus_8_1.gENROU.R_a PARAM */) * (jacobian->seedVars[79] /* gen_Bus_8_1.gENROU.iq.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2331
type: SIMPLE_ASSIGN
Bus_08.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 = ($cse8 * gen_Bus_8_1.gENROU.iq.SeedNLSJac2 + $cse7 * gen_Bus_8_1.gENROU.id.SeedNLSJac2) * gen_Bus_8_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2331(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2331};
  jacobian->tmpVars[82] /* Bus_08.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[218] /* $cse8 variable */) * (jacobian->seedVars[79] /* gen_Bus_8_1.gENROU.iq.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[217] /* $cse7 variable */) * (jacobian->seedVars[78] /* gen_Bus_8_1.gENROU.id.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[1959] /* gen_Bus_8_1.gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 2332
type: SIMPLE_ASSIGN
Bus_08.p.1.ii.$pDERNLSJac2.dummyVarNLSJac2 = ($cse7 * gen_Bus_8_1.gENROU.iq.SeedNLSJac2 - $cse8 * gen_Bus_8_1.gENROU.id.SeedNLSJac2) * gen_Bus_8_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2332(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2332};
  jacobian->tmpVars[81] /* Bus_08.p.1.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[217] /* $cse7 variable */) * (jacobian->seedVars[79] /* gen_Bus_8_1.gENROU.iq.SeedNLSJac2 SEED_VAR */) - ((data->localData[0]->realVars[218] /* $cse8 variable */) * (jacobian->seedVars[78] /* gen_Bus_8_1.gENROU.id.SeedNLSJac2 SEED_VAR */))) * (data->simulationInfo->realParameter[1959] /* gen_Bus_8_1.gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 2333
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_8_1.gENROU.Xppq) * gen_Bus_8_1.gENROU.iq.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2333(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2333};
  jacobian->tmpVars[80] /* gen_Bus_8_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[2015] /* gen_Bus_8_1.gENROU.Xppq PARAM */)) * (jacobian->seedVars[79] /* gen_Bus_8_1.gENROU.iq.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2334
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_8_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2) - gen_Bus_8_1.gENROU.R_a * gen_Bus_8_1.gENROU.id.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2334(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2334};
  jacobian->tmpVars[83] /* gen_Bus_8_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[80] /* gen_Bus_8_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[1996] /* gen_Bus_8_1.gENROU.R_a PARAM */) * (jacobian->seedVars[78] /* gen_Bus_8_1.gENROU.id.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2335
type: SIMPLE_ASSIGN
Bus_08.p.1.vr.$pDERNLSJac2.dummyVarNLSJac2 = $cse7 * gen_Bus_8_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 + $cse8 * gen_Bus_8_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2335(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2335};
  jacobian->tmpVars[86] /* Bus_08.p.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[217] /* $cse7 variable */) * (jacobian->tmpVars[83] /* gen_Bus_8_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[218] /* $cse8 variable */) * (jacobian->tmpVars[85] /* gen_Bus_8_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 2336
type: SIMPLE_ASSIGN
Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 = ((Bus_08.p.1.vr.$pDERNLSJac2.dummyVarNLSJac2 - (twoWindingTransformer3.xeq.re * Bus_08.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 - twoWindingTransformer3.xeq.im * Bus_08.p.1.ii.$pDERNLSJac2.dummyVarNLSJac2)) * (twoWindingTransformer3.t.re ^ 2.0 + twoWindingTransformer3.t.im ^ 2.0) - twoWindingTransformer3.t.im * Bus_07.p[2].vi.SeedNLSJac2) / twoWindingTransformer3.t.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2336(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2336};
  modelica_real tmp44;
  modelica_real tmp45;
  tmp44 = data->simulationInfo->realParameter[2462] /* twoWindingTransformer3.t.re PARAM */;
  tmp45 = data->simulationInfo->realParameter[2461] /* twoWindingTransformer3.t.im PARAM */;
  jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((jacobian->tmpVars[86] /* Bus_08.p.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2467] /* twoWindingTransformer3.xeq.re PARAM */) * (jacobian->tmpVars[82] /* Bus_08.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[2466] /* twoWindingTransformer3.xeq.im PARAM */) * (jacobian->tmpVars[81] /* Bus_08.p.1.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)))) * ((tmp44 * tmp44) + (tmp45 * tmp45)) - ((data->simulationInfo->realParameter[2461] /* twoWindingTransformer3.t.im PARAM */) * (jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */)),data->simulationInfo->realParameter[2462] /* twoWindingTransformer3.t.re PARAM */,"twoWindingTransformer3.t.re");
  TRACE_POP
}

/*
equation index: 2337
type: SIMPLE_ASSIGN
Bus_07.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 = Bus_07.p[2].vi.SeedNLSJac2 * twoWindingTransformer3.Ym.im - Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * twoWindingTransformer3.Ym.re - ((-Bus_08.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2) - ((-Bus_07.p[1].ii.SeedNLSJac2) - Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * twoWindingTransformer3.Ym.im - Bus_07.p[2].vi.SeedNLSJac2 * twoWindingTransformer3.Ym.re) * twoWindingTransformer3.t.im) / twoWindingTransformer3.t.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2337(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2337};
  jacobian->tmpVars[91] /* Bus_07.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2458] /* twoWindingTransformer3.Ym.im PARAM */) - ((jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2459] /* twoWindingTransformer3.Ym.re PARAM */)) - (DIVISION((-jacobian->tmpVars[82] /* Bus_08.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - (((-jacobian->seedVars[74] /* Bus_07.p[1].ii.SeedNLSJac2 SEED_VAR */) - ((jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2458] /* twoWindingTransformer3.Ym.im PARAM */)) - ((jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2459] /* twoWindingTransformer3.Ym.re PARAM */))) * (data->simulationInfo->realParameter[2461] /* twoWindingTransformer3.t.im PARAM */)),data->simulationInfo->realParameter[2462] /* twoWindingTransformer3.t.re PARAM */,"twoWindingTransformer3.t.re"));
  TRACE_POP
}

/*
equation index: 2338
type: SIMPLE_ASSIGN
Bus_07.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 = pwLine14.ir.re.SeedNLSJac2 - Bus_07.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2338(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2338};
  jacobian->tmpVars[92] /* Bus_07.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[73] /* pwLine14.ir.re.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[91] /* Bus_07.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 2339
type: SIMPLE_ASSIGN
Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 = ((Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - (twoWindingTransformer1.xeq.im * Bus_07.n.1.ii.$pDERNLSJac2.dummyVarNLSJac2 - twoWindingTransformer1.xeq.re * Bus_07.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2)) * (twoWindingTransformer1.t.re ^ 2.0 + twoWindingTransformer1.t.im ^ 2.0) - twoWindingTransformer1.t.im * Bus_04.p[4].vi.SeedNLSJac2) / twoWindingTransformer1.t.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2339(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2339};
  modelica_real tmp46;
  modelica_real tmp47;
  tmp46 = data->simulationInfo->realParameter[2412] /* twoWindingTransformer1.t.re PARAM */;
  tmp47 = data->simulationInfo->realParameter[2411] /* twoWindingTransformer1.t.im PARAM */;
  jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2416] /* twoWindingTransformer1.xeq.im PARAM */) * (jacobian->tmpVars[93] /* Bus_07.n.1.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[2417] /* twoWindingTransformer1.xeq.re PARAM */) * (jacobian->tmpVars[92] /* Bus_07.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)))) * ((tmp46 * tmp46) + (tmp47 * tmp47)) - ((data->simulationInfo->realParameter[2411] /* twoWindingTransformer1.t.im PARAM */) * (jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */)),data->simulationInfo->realParameter[2412] /* twoWindingTransformer1.t.re PARAM */,"twoWindingTransformer1.t.re");
  TRACE_POP
}

/*
equation index: 2340
type: SIMPLE_ASSIGN
Bus_04.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * twoWindingTransformer1.Ym.im - Bus_04.p[4].vi.SeedNLSJac2 * twoWindingTransformer1.Ym.re - (Bus_07.n.1.ii.$pDERNLSJac2.dummyVarNLSJac2 - (Bus_04.p[2].ir.SeedNLSJac2 + Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * twoWindingTransformer1.Ym.re - Bus_04.p[4].vi.SeedNLSJac2 * twoWindingTransformer1.Ym.im) * twoWindingTransformer1.t.im) / twoWindingTransformer1.t.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2340(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2340};
  jacobian->tmpVars[95] /* Bus_04.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2408] /* twoWindingTransformer1.Ym.im PARAM */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2409] /* twoWindingTransformer1.Ym.re PARAM */)) - (DIVISION(jacobian->tmpVars[93] /* Bus_07.n.1.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->seedVars[70] /* Bus_04.p[2].ir.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2409] /* twoWindingTransformer1.Ym.re PARAM */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2408] /* twoWindingTransformer1.Ym.im PARAM */))) * (data->simulationInfo->realParameter[2411] /* twoWindingTransformer1.t.im PARAM */)),data->simulationInfo->realParameter[2412] /* twoWindingTransformer1.t.re PARAM */,"twoWindingTransformer1.t.re"));
  TRACE_POP
}

/*
equation index: 2341
type: SIMPLE_ASSIGN
Bus_09.n.2.ir.$pDERNLSJac2.dummyVarNLSJac2 = ((Bus_04.p[4].vi.SeedNLSJac2 * twoWindingTransformer2.t.re - Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * twoWindingTransformer2.t.im) / (twoWindingTransformer2.t.re ^ 2.0 + twoWindingTransformer2.t.im ^ 2.0) - twoWindingTransformer2.xeq.re * Bus_09.n[2].ii.SeedNLSJac2 - Bus_09.p[3].vi.SeedNLSJac2) / twoWindingTransformer2.xeq.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2341(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2341};
  modelica_real tmp48;
  modelica_real tmp49;
  tmp48 = data->simulationInfo->realParameter[2437] /* twoWindingTransformer2.t.re PARAM */;
  tmp49 = data->simulationInfo->realParameter[2436] /* twoWindingTransformer2.t.im PARAM */;
  jacobian->tmpVars[100] /* Bus_09.n.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION(DIVISION((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2437] /* twoWindingTransformer2.t.re PARAM */) - ((jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2436] /* twoWindingTransformer2.t.im PARAM */)),(tmp48 * tmp48) + (tmp49 * tmp49),"twoWindingTransformer2.t.re ^ 2.0 + twoWindingTransformer2.t.im ^ 2.0") - ((data->simulationInfo->realParameter[2442] /* twoWindingTransformer2.xeq.re PARAM */) * (jacobian->seedVars[63] /* Bus_09.n[2].ii.SeedNLSJac2 SEED_VAR */)) - jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */,data->simulationInfo->realParameter[2441] /* twoWindingTransformer2.xeq.im PARAM */,"twoWindingTransformer2.xeq.im");
  TRACE_POP
}

/*
equation index: 2342
type: SIMPLE_ASSIGN
pwLine8.ir.re.$pDERNLSJac2.dummyVarNLSJac2 = Bus_09.n.2.ir.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine7.is.re.SeedNLSJac2 + pwLine14.is.re.SeedNLSJac2 + shunt1.I.re.$pDERNLSJac2.dummyVarNLSJac2 - Bus_09.p[2].ir.SeedNLSJac2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2342(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2342};
  jacobian->tmpVars[107] /* pwLine8.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[100] /* Bus_09.n.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - (jacobian->seedVars[45] /* pwLine7.is.re.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[44] /* pwLine14.is.re.SeedNLSJac2 SEED_VAR */ + jacobian->tmpVars[98] /* shunt1.I.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[46] /* Bus_09.p[2].ir.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2343
type: SIMPLE_ASSIGN
$res_NLSJac2_62.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine8.t1 and time < pwLine8.t2 then pwLine8.ir.re.$pDERNLSJac2.dummyVarNLSJac2 else Bus_09.p[3].vr.SeedNLSJac2 - Bus_14.p[3].vr.SeedNLSJac2 - (pwLine8.Z.re * (pwLine8.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_09.p[3].vi.SeedNLSJac2 * pwLine8.Y.im - Bus_09.p[3].vr.SeedNLSJac2 * pwLine8.Y.re) - pwLine8.Z.im * (pwLine8.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_09.p[3].vr.SeedNLSJac2) * pwLine8.Y.im - Bus_09.p[3].vi.SeedNLSJac2 * pwLine8.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2343(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2343};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  RELATIONHYSTERESIS(tmp50, data->localData[0]->timeValue, data->simulationInfo->realParameter[2351] /* pwLine8.t1 PARAM */, 80, GreaterEq);
  RELATIONHYSTERESIS(tmp51, data->localData[0]->timeValue, data->simulationInfo->realParameter[2352] /* pwLine8.t2 PARAM */, 81, Less);
  jacobian->resultVars[61] /* $res_NLSJac2_62.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp50 && tmp51)?jacobian->tmpVars[107] /* pwLine8.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2350] /* pwLine8.Z.re PARAM */) * (jacobian->tmpVars[107] /* pwLine8.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2347] /* pwLine8.Y.im PARAM */) - ((jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2348] /* pwLine8.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2349] /* pwLine8.Z.im PARAM */) * (jacobian->tmpVars[108] /* pwLine8.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2347] /* pwLine8.Y.im PARAM */) - ((jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2348] /* pwLine8.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2344
type: SIMPLE_ASSIGN
$res_NLSJac2_63.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine8.t1 and time < pwLine8.t2 then pwLine8.ir.im.$pDERNLSJac2.dummyVarNLSJac2 else Bus_09.p[3].vi.SeedNLSJac2 - Bus_14.p[3].vi.SeedNLSJac2 - (pwLine8.Z.re * (pwLine8.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_09.p[3].vr.SeedNLSJac2) * pwLine8.Y.im - Bus_09.p[3].vi.SeedNLSJac2 * pwLine8.Y.re) + pwLine8.Z.im * (pwLine8.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_09.p[3].vi.SeedNLSJac2 * pwLine8.Y.im - Bus_09.p[3].vr.SeedNLSJac2 * pwLine8.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2344(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2344};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  RELATIONHYSTERESIS(tmp52, data->localData[0]->timeValue, data->simulationInfo->realParameter[2351] /* pwLine8.t1 PARAM */, 80, GreaterEq);
  RELATIONHYSTERESIS(tmp53, data->localData[0]->timeValue, data->simulationInfo->realParameter[2352] /* pwLine8.t2 PARAM */, 81, Less);
  jacobian->resultVars[62] /* $res_NLSJac2_63.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp52 && tmp53)?jacobian->tmpVars[108] /* pwLine8.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2350] /* pwLine8.Z.re PARAM */) * (jacobian->tmpVars[108] /* pwLine8.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2347] /* pwLine8.Y.im PARAM */) - ((jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2348] /* pwLine8.Y.re PARAM */))) + (data->simulationInfo->realParameter[2349] /* pwLine8.Z.im PARAM */) * (jacobian->tmpVars[107] /* pwLine8.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2347] /* pwLine8.Y.im PARAM */) - ((jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2348] /* pwLine8.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2345
type: SIMPLE_ASSIGN
Bus_04.p.3.ii.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * twoWindingTransformer2.Ym.im - Bus_04.p[4].vi.SeedNLSJac2 * twoWindingTransformer2.Ym.re - (Bus_09.n[2].ii.SeedNLSJac2 - (Bus_04.p[3].ir.SeedNLSJac2 + Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * twoWindingTransformer2.Ym.re - Bus_04.p[4].vi.SeedNLSJac2 * twoWindingTransformer2.Ym.im) * twoWindingTransformer2.t.im) / twoWindingTransformer2.t.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2345(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2345};
  jacobian->tmpVars[101] /* Bus_04.p.3.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2433] /* twoWindingTransformer2.Ym.im PARAM */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2434] /* twoWindingTransformer2.Ym.re PARAM */)) - (DIVISION(jacobian->seedVars[63] /* Bus_09.n[2].ii.SeedNLSJac2 SEED_VAR */ - ((jacobian->seedVars[62] /* Bus_04.p[3].ir.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2434] /* twoWindingTransformer2.Ym.re PARAM */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2433] /* twoWindingTransformer2.Ym.im PARAM */))) * (data->simulationInfo->realParameter[2436] /* twoWindingTransformer2.t.im PARAM */)),data->simulationInfo->realParameter[2437] /* twoWindingTransformer2.t.re PARAM */,"twoWindingTransformer2.t.re"));
  TRACE_POP
}

/*
equation index: 2346
type: SIMPLE_ASSIGN
Bus_04.p.4.ii.$pDERNLSJac2.dummyVarNLSJac2 = pwLine3.ir.im.SeedNLSJac2 + pwLine5.ir.im.SeedNLSJac2 + pwLine6.ir.im.SeedNLSJac2 - Bus_04.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 - Bus_04.n[2].ii.SeedNLSJac2 - Bus_04.p.3.ii.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2346(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2346};
  jacobian->tmpVars[124] /* Bus_04.p.4.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[56] /* pwLine3.ir.im.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[2] /* pwLine5.ir.im.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[3] /* pwLine6.ir.im.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[95] /* Bus_04.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[50] /* Bus_04.n[2].ii.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[101] /* Bus_04.p.3.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 2347
type: SIMPLE_ASSIGN
$res_NLSJac2_4.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.im.SeedNLSJac2 else Bus_04.p[4].vi.SeedNLSJac2 - Bus_05.p[2].vi.SeedNLSJac2 - (pwLine3.Z.re * (pwLine3.ir.im.SeedNLSJac2 + (-Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine3.Y.im - Bus_04.p[4].vi.SeedNLSJac2 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.ir.re.SeedNLSJac2 + Bus_04.p[4].vi.SeedNLSJac2 * pwLine3.Y.im - Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine3.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2347(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2347};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  RELATIONHYSTERESIS(tmp54, data->localData[0]->timeValue, data->simulationInfo->realParameter[2296] /* pwLine3.t1 PARAM */, 18, GreaterEq);
  RELATIONHYSTERESIS(tmp55, data->localData[0]->timeValue, data->simulationInfo->realParameter[2297] /* pwLine3.t2 PARAM */, 19, Less);
  jacobian->resultVars[3] /* $res_NLSJac2_4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp54 && tmp55)?jacobian->seedVars[56] /* pwLine3.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2295] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[56] /* pwLine3.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2292] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2293] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[2294] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[57] /* pwLine3.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2292] /* pwLine3.Y.im PARAM */) - ((jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2293] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2348
type: SIMPLE_ASSIGN
$res_NLSJac2_5.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.ir.re.SeedNLSJac2 else Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_05.p[2].vr.SeedNLSJac2 - (pwLine3.Z.re * (pwLine3.ir.re.SeedNLSJac2 + Bus_04.p[4].vi.SeedNLSJac2 * pwLine3.Y.im - Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.ir.im.SeedNLSJac2 + (-Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine3.Y.im - Bus_04.p[4].vi.SeedNLSJac2 * pwLine3.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2348(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2348};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  RELATIONHYSTERESIS(tmp56, data->localData[0]->timeValue, data->simulationInfo->realParameter[2296] /* pwLine3.t1 PARAM */, 18, GreaterEq);
  RELATIONHYSTERESIS(tmp57, data->localData[0]->timeValue, data->simulationInfo->realParameter[2297] /* pwLine3.t2 PARAM */, 19, Less);
  jacobian->resultVars[4] /* $res_NLSJac2_5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp56 && tmp57)?jacobian->seedVars[57] /* pwLine3.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2295] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[57] /* pwLine3.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2292] /* pwLine3.Y.im PARAM */) - ((jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2293] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2294] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[56] /* pwLine3.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2292] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2293] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2349
type: SIMPLE_ASSIGN
$res_NLSJac2_11.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_04.p[4].vr * Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 + Bus_04.p[4].vi * Bus_04.p[4].vi.SeedNLSJac2) / sqrt(Bus_04.p[4].vr ^ 2.0 + Bus_04.p[4].vi ^ 2.0) - LOAD_04.v.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2349(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2349};
  modelica_real tmp58;
  modelica_real tmp59;
  tmp58 = data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */;
  tmp59 = data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */;
  jacobian->resultVars[10] /* $res_NLSJac2_11.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */) * (jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */) * (jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */),sqrt((tmp58 * tmp58) + (tmp59 * tmp59)),"sqrt(Bus_04.p[4].vr ^ 2.0 + Bus_04.p[4].vi ^ 2.0)") - jacobian->seedVars[88] /* LOAD_04.v.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2350
type: SIMPLE_ASSIGN
$res_NLSJac2_12.$pDERNLSJac2.dummyVarNLSJac2 = Bus_04.p[4].vi.SeedNLSJac2 * twoWindingTransformer1.t.re + ((-twoWindingTransformer1.t.re ^ 2.0) - twoWindingTransformer1.t.im ^ 2.0) * (twoWindingTransformer1.xeq.im * Bus_07.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 + twoWindingTransformer1.xeq.re * Bus_07.n.1.ii.$pDERNLSJac2.dummyVarNLSJac2) - Bus_07.p[2].vi.SeedNLSJac2 * (twoWindingTransformer1.t.re ^ 2.0 + twoWindingTransformer1.t.im ^ 2.0) - Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * twoWindingTransformer1.t.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2350(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2350};
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  tmp60 = data->simulationInfo->realParameter[2412] /* twoWindingTransformer1.t.re PARAM */;
  tmp61 = data->simulationInfo->realParameter[2411] /* twoWindingTransformer1.t.im PARAM */;
  tmp62 = data->simulationInfo->realParameter[2412] /* twoWindingTransformer1.t.re PARAM */;
  tmp63 = data->simulationInfo->realParameter[2411] /* twoWindingTransformer1.t.im PARAM */;
  jacobian->resultVars[11] /* $res_NLSJac2_12.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2412] /* twoWindingTransformer1.t.re PARAM */) + ((-((tmp60 * tmp60))) - ((tmp61 * tmp61))) * ((data->simulationInfo->realParameter[2416] /* twoWindingTransformer1.xeq.im PARAM */) * (jacobian->tmpVars[92] /* Bus_07.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[2417] /* twoWindingTransformer1.xeq.re PARAM */) * (jacobian->tmpVars[93] /* Bus_07.n.1.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) - ((jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */) * ((tmp62 * tmp62) + (tmp63 * tmp63))) - ((jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2411] /* twoWindingTransformer1.t.im PARAM */));
  TRACE_POP
}

/*
equation index: 2351
type: SIMPLE_ASSIGN
$res_NLSJac2_15.$pDERNLSJac2.dummyVarNLSJac2 = ((-Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * twoWindingTransformer1.Ym.im - Bus_04.p[4].vi.SeedNLSJac2 * twoWindingTransformer1.Ym.re - Bus_04.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2) * twoWindingTransformer1.t.im + (Bus_04.p[4].vi.SeedNLSJac2 * twoWindingTransformer1.Ym.im + (-Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * twoWindingTransformer1.Ym.re - Bus_04.p[2].ir.SeedNLSJac2) * twoWindingTransformer1.t.re - Bus_07.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2351(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2351};
  jacobian->resultVars[14] /* $res_NLSJac2_15.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (((-jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2408] /* twoWindingTransformer1.Ym.im PARAM */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2409] /* twoWindingTransformer1.Ym.re PARAM */)) - jacobian->tmpVars[95] /* Bus_04.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2411] /* twoWindingTransformer1.t.im PARAM */) + ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2408] /* twoWindingTransformer1.Ym.im PARAM */) + ((-jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2409] /* twoWindingTransformer1.Ym.re PARAM */) - jacobian->seedVars[70] /* Bus_04.p[2].ir.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2412] /* twoWindingTransformer1.t.re PARAM */) - jacobian->tmpVars[92] /* Bus_07.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 2352
type: SIMPLE_ASSIGN
$res_NLSJac2_71.$pDERNLSJac2.dummyVarNLSJac2 = (twoWindingTransformer2.t.re ^ 2.0 + twoWindingTransformer2.t.im ^ 2.0) * (twoWindingTransformer2.xeq.im * Bus_09.n[2].ii.SeedNLSJac2 - twoWindingTransformer2.xeq.re * Bus_09.n.2.ir.$pDERNLSJac2.dummyVarNLSJac2) + Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * twoWindingTransformer2.t.re + Bus_04.p[4].vi.SeedNLSJac2 * twoWindingTransformer2.t.im - Bus_09.p[3].vr.SeedNLSJac2 * (twoWindingTransformer2.t.re ^ 2.0 + twoWindingTransformer2.t.im ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2352(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2352};
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  tmp64 = data->simulationInfo->realParameter[2437] /* twoWindingTransformer2.t.re PARAM */;
  tmp65 = data->simulationInfo->realParameter[2436] /* twoWindingTransformer2.t.im PARAM */;
  tmp66 = data->simulationInfo->realParameter[2437] /* twoWindingTransformer2.t.re PARAM */;
  tmp67 = data->simulationInfo->realParameter[2436] /* twoWindingTransformer2.t.im PARAM */;
  jacobian->resultVars[70] /* $res_NLSJac2_71.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp64 * tmp64) + (tmp65 * tmp65)) * ((data->simulationInfo->realParameter[2441] /* twoWindingTransformer2.xeq.im PARAM */) * (jacobian->seedVars[63] /* Bus_09.n[2].ii.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[2442] /* twoWindingTransformer2.xeq.re PARAM */) * (jacobian->tmpVars[100] /* Bus_09.n.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */))) + (jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2437] /* twoWindingTransformer2.t.re PARAM */) + (jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2436] /* twoWindingTransformer2.t.im PARAM */) - ((jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */) * ((tmp66 * tmp66) + (tmp67 * tmp67)));
  TRACE_POP
}

/*
equation index: 2353
type: SIMPLE_ASSIGN
$res_NLSJac2_72.$pDERNLSJac2.dummyVarNLSJac2 = ((-Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * twoWindingTransformer2.Ym.im - Bus_04.p[4].vi.SeedNLSJac2 * twoWindingTransformer2.Ym.re - Bus_04.p.3.ii.$pDERNLSJac2.dummyVarNLSJac2) * twoWindingTransformer2.t.im + (Bus_04.p[4].vi.SeedNLSJac2 * twoWindingTransformer2.Ym.im + (-Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * twoWindingTransformer2.Ym.re - Bus_04.p[3].ir.SeedNLSJac2) * twoWindingTransformer2.t.re - Bus_09.n.2.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2353(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2353};
  jacobian->resultVars[71] /* $res_NLSJac2_72.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (((-jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2433] /* twoWindingTransformer2.Ym.im PARAM */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2434] /* twoWindingTransformer2.Ym.re PARAM */)) - jacobian->tmpVars[101] /* Bus_04.p.3.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2436] /* twoWindingTransformer2.t.im PARAM */) + ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2433] /* twoWindingTransformer2.Ym.im PARAM */) + ((-jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2434] /* twoWindingTransformer2.Ym.re PARAM */) - jacobian->seedVars[62] /* Bus_04.p[3].ir.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2437] /* twoWindingTransformer2.t.re PARAM */) - jacobian->tmpVars[100] /* Bus_09.n.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 2354
type: SIMPLE_ASSIGN
$res_NLSJac2_73.$pDERNLSJac2.dummyVarNLSJac2 = if time < pwFault.t1 then -Bus_04.p.4.ir.$pDERNLSJac2.dummyVarNLSJac2 else if time < pwFault.t2 and pwFault.ground then Bus_04.p[4].vi.SeedNLSJac2 else if time < pwFault.t2 then (-Bus_04.p.4.ir.$pDERNLSJac2.dummyVarNLSJac2) - (pwFault.R * Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 + pwFault.X * Bus_04.p[4].vi.SeedNLSJac2) * (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) / (pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0 else -Bus_04.p.4.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2354(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2354};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_boolean tmp76;
  modelica_real tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  modelica_boolean tmp80;
  modelica_real tmp81;
  RELATIONHYSTERESIS(tmp68, data->localData[0]->timeValue, data->simulationInfo->realParameter[2186] /* pwFault.t1 PARAM */, 100, Less);
  tmp80 = (modelica_boolean)tmp68;
  if(tmp80)
  {
    tmp81 = (-jacobian->tmpVars[106] /* Bus_04.p.4.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp69, data->localData[0]->timeValue, data->simulationInfo->realParameter[2187] /* pwFault.t2 PARAM */, 101, Less);
    tmp78 = (modelica_boolean)(tmp69 && data->simulationInfo->booleanParameter[24] /* pwFault.ground PARAM */);
    if(tmp78)
    {
      tmp79 = jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp70, data->localData[0]->timeValue, data->simulationInfo->realParameter[2187] /* pwFault.t2 PARAM */, 101, Less);
      tmp76 = (modelica_boolean)tmp70;
      if(tmp76)
      {
        tmp71 = data->simulationInfo->realParameter[2184] /* pwFault.R PARAM */;
        tmp72 = data->simulationInfo->realParameter[2185] /* pwFault.X PARAM */;
        tmp73 = data->simulationInfo->realParameter[2184] /* pwFault.R PARAM */;
        tmp74 = data->simulationInfo->realParameter[2185] /* pwFault.X PARAM */;
        tmp75 = (tmp73 * tmp73) + (tmp74 * tmp74);
        tmp77 = (-jacobian->tmpVars[106] /* Bus_04.p.4.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - (DIVISION(((data->simulationInfo->realParameter[2184] /* pwFault.R PARAM */) * (jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[2185] /* pwFault.X PARAM */) * (jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */)) * ((tmp71 * tmp71) + (tmp72 * tmp72)),(tmp75 * tmp75),"(pwFault.R ^ 2.0 + pwFault.X ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp77 = (-jacobian->tmpVars[106] /* Bus_04.p.4.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
      }
      tmp79 = tmp77;
    }
    tmp81 = tmp79;
  }
  jacobian->resultVars[72] /* $res_NLSJac2_73.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp81;
  TRACE_POP
}

/*
equation index: 2355
type: SIMPLE_ASSIGN
$res_NLSJac2_74.$pDERNLSJac2.dummyVarNLSJac2 = if time < pwFault.t1 then -Bus_04.p.4.ii.$pDERNLSJac2.dummyVarNLSJac2 else if time < pwFault.t2 and pwFault.ground then Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 else if time < pwFault.t2 then (-Bus_04.p.4.ii.$pDERNLSJac2.dummyVarNLSJac2) - (pwFault.R * Bus_04.p[4].vi.SeedNLSJac2 - pwFault.X * Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) / (pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0 else -Bus_04.p.4.ii.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2355(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2355};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_boolean tmp90;
  modelica_real tmp91;
  modelica_boolean tmp92;
  modelica_real tmp93;
  modelica_boolean tmp94;
  modelica_real tmp95;
  RELATIONHYSTERESIS(tmp82, data->localData[0]->timeValue, data->simulationInfo->realParameter[2186] /* pwFault.t1 PARAM */, 100, Less);
  tmp94 = (modelica_boolean)tmp82;
  if(tmp94)
  {
    tmp95 = (-jacobian->tmpVars[124] /* Bus_04.p.4.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  }
  else
  {
    RELATIONHYSTERESIS(tmp83, data->localData[0]->timeValue, data->simulationInfo->realParameter[2187] /* pwFault.t2 PARAM */, 101, Less);
    tmp92 = (modelica_boolean)(tmp83 && data->simulationInfo->booleanParameter[24] /* pwFault.ground PARAM */);
    if(tmp92)
    {
      tmp93 = jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
    }
    else
    {
      RELATIONHYSTERESIS(tmp84, data->localData[0]->timeValue, data->simulationInfo->realParameter[2187] /* pwFault.t2 PARAM */, 101, Less);
      tmp90 = (modelica_boolean)tmp84;
      if(tmp90)
      {
        tmp85 = data->simulationInfo->realParameter[2185] /* pwFault.X PARAM */;
        tmp86 = data->simulationInfo->realParameter[2184] /* pwFault.R PARAM */;
        tmp87 = data->simulationInfo->realParameter[2185] /* pwFault.X PARAM */;
        tmp88 = data->simulationInfo->realParameter[2184] /* pwFault.R PARAM */;
        tmp89 = (tmp87 * tmp87) + (tmp88 * tmp88);
        tmp91 = (-jacobian->tmpVars[124] /* Bus_04.p.4.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - (DIVISION(((data->simulationInfo->realParameter[2184] /* pwFault.R PARAM */) * (jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[2185] /* pwFault.X PARAM */) * (jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */))) * ((tmp85 * tmp85) + (tmp86 * tmp86)),(tmp89 * tmp89),"(pwFault.X ^ 2.0 + pwFault.R ^ 2.0) ^ 2.0"));
      }
      else
      {
        tmp91 = (-jacobian->tmpVars[124] /* Bus_04.p.4.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
      }
      tmp93 = tmp91;
    }
    tmp95 = tmp93;
  }
  jacobian->resultVars[73] /* $res_NLSJac2_74.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp95;
  TRACE_POP
}

/*
equation index: 2356
type: SIMPLE_ASSIGN
$res_NLSJac2_14.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_07.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 + Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * twoWindingTransformer3.Ym.re - Bus_07.p[2].vi.SeedNLSJac2 * twoWindingTransformer3.Ym.im) * twoWindingTransformer3.t.im + ((-Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * twoWindingTransformer3.Ym.im - Bus_07.p[2].vi.SeedNLSJac2 * twoWindingTransformer3.Ym.re - Bus_07.p[1].ii.SeedNLSJac2) * twoWindingTransformer3.t.re + Bus_08.p.1.ii.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2356};
  jacobian->resultVars[13] /* $res_NLSJac2_14.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (jacobian->tmpVars[91] /* Bus_07.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2459] /* twoWindingTransformer3.Ym.re PARAM */) - ((jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2458] /* twoWindingTransformer3.Ym.im PARAM */))) * (data->simulationInfo->realParameter[2461] /* twoWindingTransformer3.t.im PARAM */) + (((-jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2458] /* twoWindingTransformer3.Ym.im PARAM */) - ((jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2459] /* twoWindingTransformer3.Ym.re PARAM */)) - jacobian->seedVars[74] /* Bus_07.p[1].ii.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2462] /* twoWindingTransformer3.t.re PARAM */) + jacobian->tmpVars[81] /* Bus_08.p.1.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 2357
type: SIMPLE_ASSIGN
$res_NLSJac2_16.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine14.t1 and time < pwLine14.t2 then pwLine14.ir.im.SeedNLSJac2 else Bus_07.p[2].vi.SeedNLSJac2 - Bus_09.p[3].vi.SeedNLSJac2 - (pwLine14.Z.re * (pwLine14.ir.im.SeedNLSJac2 + (-Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine14.Y.im - Bus_07.p[2].vi.SeedNLSJac2 * pwLine14.Y.re) + pwLine14.Z.im * (pwLine14.ir.re.SeedNLSJac2 + Bus_07.p[2].vi.SeedNLSJac2 * pwLine14.Y.im - Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine14.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2357};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  RELATIONHYSTERESIS(tmp96, data->localData[0]->timeValue, data->simulationInfo->realParameter[2263] /* pwLine14.t1 PARAM */, 52, GreaterEq);
  RELATIONHYSTERESIS(tmp97, data->localData[0]->timeValue, data->simulationInfo->realParameter[2264] /* pwLine14.t2 PARAM */, 53, Less);
  jacobian->resultVars[15] /* $res_NLSJac2_16.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp96 && tmp97)?jacobian->seedVars[72] /* pwLine14.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2262] /* pwLine14.Z.re PARAM */) * (jacobian->seedVars[72] /* pwLine14.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2259] /* pwLine14.Y.im PARAM */) - ((jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2260] /* pwLine14.Y.re PARAM */))) + (data->simulationInfo->realParameter[2261] /* pwLine14.Z.im PARAM */) * (jacobian->seedVars[73] /* pwLine14.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2259] /* pwLine14.Y.im PARAM */) - ((jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2260] /* pwLine14.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2358
type: SIMPLE_ASSIGN
$res_NLSJac2_17.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine14.t1 and time < pwLine14.t2 then pwLine14.ir.re.SeedNLSJac2 else Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_09.p[3].vr.SeedNLSJac2 - (pwLine14.Z.re * (pwLine14.ir.re.SeedNLSJac2 + Bus_07.p[2].vi.SeedNLSJac2 * pwLine14.Y.im - Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine14.Y.re) - pwLine14.Z.im * (pwLine14.ir.im.SeedNLSJac2 + (-Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine14.Y.im - Bus_07.p[2].vi.SeedNLSJac2 * pwLine14.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2358(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2358};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  RELATIONHYSTERESIS(tmp98, data->localData[0]->timeValue, data->simulationInfo->realParameter[2263] /* pwLine14.t1 PARAM */, 52, GreaterEq);
  RELATIONHYSTERESIS(tmp99, data->localData[0]->timeValue, data->simulationInfo->realParameter[2264] /* pwLine14.t2 PARAM */, 53, Less);
  jacobian->resultVars[16] /* $res_NLSJac2_17.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp98 && tmp99)?jacobian->seedVars[73] /* pwLine14.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2262] /* pwLine14.Z.re PARAM */) * (jacobian->seedVars[73] /* pwLine14.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2259] /* pwLine14.Y.im PARAM */) - ((jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2260] /* pwLine14.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2261] /* pwLine14.Z.im PARAM */) * (jacobian->seedVars[72] /* pwLine14.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2259] /* pwLine14.Y.im PARAM */) - ((jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2260] /* pwLine14.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2359
type: SIMPLE_ASSIGN
$res_NLSJac2_70.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine14.t1 and time < pwLine14.t2 then pwLine14.is.re.SeedNLSJac2 else Bus_09.p[3].vr.SeedNLSJac2 - Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine14.Z.re * (pwLine14.is.re.SeedNLSJac2 + Bus_09.p[3].vi.SeedNLSJac2 * pwLine14.Y.im - Bus_09.p[3].vr.SeedNLSJac2 * pwLine14.Y.re) - pwLine14.Z.im * (pwLine14.is.im.SeedNLSJac2 + (-Bus_09.p[3].vr.SeedNLSJac2) * pwLine14.Y.im - Bus_09.p[3].vi.SeedNLSJac2 * pwLine14.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2359(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2359};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  RELATIONHYSTERESIS(tmp100, data->localData[0]->timeValue, data->simulationInfo->realParameter[2263] /* pwLine14.t1 PARAM */, 52, GreaterEq);
  RELATIONHYSTERESIS(tmp101, data->localData[0]->timeValue, data->simulationInfo->realParameter[2264] /* pwLine14.t2 PARAM */, 53, Less);
  jacobian->resultVars[69] /* $res_NLSJac2_70.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp100 && tmp101)?jacobian->seedVars[44] /* pwLine14.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2262] /* pwLine14.Z.re PARAM */) * (jacobian->seedVars[44] /* pwLine14.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2259] /* pwLine14.Y.im PARAM */) - ((jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2260] /* pwLine14.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2261] /* pwLine14.Z.im PARAM */) * (jacobian->seedVars[42] /* pwLine14.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2259] /* pwLine14.Y.im PARAM */) - ((jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2260] /* pwLine14.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2360
type: SIMPLE_ASSIGN
Bus_08.p.1.vi.$pDERNLSJac2.dummyVarNLSJac2 = $cse7 * gen_Bus_8_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 - $cse8 * gen_Bus_8_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2360(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2360};
  jacobian->tmpVars[87] /* Bus_08.p.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[217] /* $cse7 variable */) * (jacobian->tmpVars[85] /* gen_Bus_8_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[218] /* $cse8 variable */) * (jacobian->tmpVars[83] /* gen_Bus_8_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 2361
type: SIMPLE_ASSIGN
$res_NLSJac2_13.$pDERNLSJac2.dummyVarNLSJac2 = (twoWindingTransformer3.t.re ^ 2.0 + twoWindingTransformer3.t.im ^ 2.0) * (twoWindingTransformer3.xeq.im * Bus_08.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 + twoWindingTransformer3.xeq.re * Bus_08.p.1.ii.$pDERNLSJac2.dummyVarNLSJac2) + Bus_07.p[2].vi.SeedNLSJac2 * twoWindingTransformer3.t.re + (-Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * twoWindingTransformer3.t.im - Bus_08.p.1.vi.$pDERNLSJac2.dummyVarNLSJac2 * (twoWindingTransformer3.t.re ^ 2.0 + twoWindingTransformer3.t.im ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2361(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2361};
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  tmp102 = data->simulationInfo->realParameter[2462] /* twoWindingTransformer3.t.re PARAM */;
  tmp103 = data->simulationInfo->realParameter[2461] /* twoWindingTransformer3.t.im PARAM */;
  tmp104 = data->simulationInfo->realParameter[2462] /* twoWindingTransformer3.t.re PARAM */;
  tmp105 = data->simulationInfo->realParameter[2461] /* twoWindingTransformer3.t.im PARAM */;
  jacobian->resultVars[12] /* $res_NLSJac2_13.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp102 * tmp102) + (tmp103 * tmp103)) * ((data->simulationInfo->realParameter[2466] /* twoWindingTransformer3.xeq.im PARAM */) * (jacobian->tmpVars[82] /* Bus_08.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->simulationInfo->realParameter[2467] /* twoWindingTransformer3.xeq.re PARAM */) * (jacobian->tmpVars[81] /* Bus_08.p.1.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->seedVars[77] /* Bus_07.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2462] /* twoWindingTransformer3.t.re PARAM */) + ((-jacobian->tmpVars[88] /* Bus_07.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2461] /* twoWindingTransformer3.t.im PARAM */) - ((jacobian->tmpVars[87] /* Bus_08.p.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * ((tmp104 * tmp104) + (tmp105 * tmp105)));
  TRACE_POP
}

/*
equation index: 2362
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_6_1.gENROU.Xppd) * gen_Bus_6_1.gENROU.id.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2362(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2362};
  jacobian->tmpVars[76] /* gen_Bus_6_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[1848] /* gen_Bus_6_1.gENROU.Xppd PARAM */)) * (jacobian->seedVars[80] /* gen_Bus_6_1.gENROU.id.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2363
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 = gen_Bus_6_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 - gen_Bus_6_1.gENROU.R_a * gen_Bus_6_1.gENROU.iq.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2363(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2363};
  jacobian->tmpVars[77] /* gen_Bus_6_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[76] /* gen_Bus_6_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[1830] /* gen_Bus_6_1.gENROU.R_a PARAM */) * (jacobian->seedVars[81] /* gen_Bus_6_1.gENROU.iq.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2364
type: SIMPLE_ASSIGN
Bus_06.p.3.ir.$pDERNLSJac2.dummyVarNLSJac2 = ($cse11 * gen_Bus_6_1.gENROU.iq.SeedNLSJac2 + $cse10 * gen_Bus_6_1.gENROU.id.SeedNLSJac2) * gen_Bus_6_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2364(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2364};
  jacobian->tmpVars[74] /* Bus_06.p.3.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[206] /* $cse11 variable */) * (jacobian->seedVars[81] /* gen_Bus_6_1.gENROU.iq.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[205] /* $cse10 variable */) * (jacobian->seedVars[80] /* gen_Bus_6_1.gENROU.id.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[1793] /* gen_Bus_6_1.gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 2365
type: SIMPLE_ASSIGN
Bus_06.p.3.ii.$pDERNLSJac2.dummyVarNLSJac2 = ($cse10 * gen_Bus_6_1.gENROU.iq.SeedNLSJac2 - $cse11 * gen_Bus_6_1.gENROU.id.SeedNLSJac2) * gen_Bus_6_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2365(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2365};
  jacobian->tmpVars[73] /* Bus_06.p.3.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[205] /* $cse10 variable */) * (jacobian->seedVars[81] /* gen_Bus_6_1.gENROU.iq.SeedNLSJac2 SEED_VAR */) - ((data->localData[0]->realVars[206] /* $cse11 variable */) * (jacobian->seedVars[80] /* gen_Bus_6_1.gENROU.id.SeedNLSJac2 SEED_VAR */))) * (data->simulationInfo->realParameter[1793] /* gen_Bus_6_1.gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 2366
type: SIMPLE_ASSIGN
pwLine11.ir.im.$pDERNLSJac2.dummyVarNLSJac2 = Bus_06.p.3.ii.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine15.is.im.SeedNLSJac2 + pwLine9.is.im.SeedNLSJac2 - Bus_06.p[1].ii.SeedNLSJac2 - Bus_06.n[1].ii.SeedNLSJac2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2366(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2366};
  jacobian->tmpVars[113] /* pwLine11.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[73] /* Bus_06.p.3.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - (jacobian->seedVars[30] /* pwLine15.is.im.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[33] /* pwLine9.is.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[67] /* Bus_06.p[1].ii.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[31] /* Bus_06.n[1].ii.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2367
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_6_1.gENROU.Xppq) * gen_Bus_6_1.gENROU.iq.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2367(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2367};
  jacobian->tmpVars[72] /* gen_Bus_6_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[1849] /* gen_Bus_6_1.gENROU.Xppq PARAM */)) * (jacobian->seedVars[81] /* gen_Bus_6_1.gENROU.iq.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2368
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_6_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2) - gen_Bus_6_1.gENROU.R_a * gen_Bus_6_1.gENROU.id.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2368(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2368};
  jacobian->tmpVars[75] /* gen_Bus_6_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[72] /* gen_Bus_6_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[1830] /* gen_Bus_6_1.gENROU.R_a PARAM */) * (jacobian->seedVars[80] /* gen_Bus_6_1.gENROU.id.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2369
type: SIMPLE_ASSIGN
Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 = $cse10 * gen_Bus_6_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 + $cse11 * gen_Bus_6_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2369(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2369};
  jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[205] /* $cse10 variable */) * (jacobian->tmpVars[75] /* gen_Bus_6_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[206] /* $cse11 variable */) * (jacobian->tmpVars[77] /* gen_Bus_6_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 2370
type: SIMPLE_ASSIGN
$res_NLSJac2_35.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine9.t1 and time < pwLine9.t2 then pwLine9.ir.re.SeedNLSJac2 else Bus_11.p[2].vr.SeedNLSJac2 - Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine9.Z.re * (pwLine9.ir.re.SeedNLSJac2 + Bus_11.p[2].vi.SeedNLSJac2 * pwLine9.Y.im - Bus_11.p[2].vr.SeedNLSJac2 * pwLine9.Y.re) - pwLine9.Z.im * (pwLine9.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_11.p[2].vr.SeedNLSJac2) * pwLine9.Y.im - Bus_11.p[2].vi.SeedNLSJac2 * pwLine9.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2370(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2370};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  RELATIONHYSTERESIS(tmp106, data->localData[0]->timeValue, data->simulationInfo->realParameter[2362] /* pwLine9.t1 PARAM */, 70, GreaterEq);
  RELATIONHYSTERESIS(tmp107, data->localData[0]->timeValue, data->simulationInfo->realParameter[2363] /* pwLine9.t2 PARAM */, 71, Less);
  jacobian->resultVars[34] /* $res_NLSJac2_35.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp106 && tmp107)?jacobian->seedVars[36] /* pwLine9.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2361] /* pwLine9.Z.re PARAM */) * (jacobian->seedVars[36] /* pwLine9.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2358] /* pwLine9.Y.im PARAM */) - ((jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2359] /* pwLine9.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2360] /* pwLine9.Z.im PARAM */) * (jacobian->tmpVars[112] /* pwLine9.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2358] /* pwLine9.Y.im PARAM */) - ((jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2359] /* pwLine9.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2371
type: SIMPLE_ASSIGN
$res_NLSJac2_46.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine11.t1 and time < pwLine11.t2 then pwLine11.is.re.SeedNLSJac2 else Bus_12.n[1].vr.SeedNLSJac2 - Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine11.Z.re * (pwLine11.is.re.SeedNLSJac2 + Bus_12.n[1].vi.SeedNLSJac2 * pwLine11.Y.im - Bus_12.n[1].vr.SeedNLSJac2 * pwLine11.Y.re) - pwLine11.Z.im * (pwLine11.is.im.SeedNLSJac2 + (-Bus_12.n[1].vr.SeedNLSJac2) * pwLine11.Y.im - Bus_12.n[1].vi.SeedNLSJac2 * pwLine11.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2371(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2371};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  RELATIONHYSTERESIS(tmp108, data->localData[0]->timeValue, data->simulationInfo->realParameter[2230] /* pwLine11.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp109, data->localData[0]->timeValue, data->simulationInfo->realParameter[2231] /* pwLine11.t2 PARAM */, 11, Less);
  jacobian->resultVars[45] /* $res_NLSJac2_46.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp108 && tmp109)?jacobian->seedVars[23] /* pwLine11.is.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2229] /* pwLine11.Z.re PARAM */) * (jacobian->seedVars[23] /* pwLine11.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2226] /* pwLine11.Y.im PARAM */) - ((jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2227] /* pwLine11.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2228] /* pwLine11.Z.im PARAM */) * (jacobian->seedVars[25] /* pwLine11.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2226] /* pwLine11.Y.im PARAM */) - ((jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2227] /* pwLine11.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2372
type: SIMPLE_ASSIGN
$res_NLSJac2_55.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine15.t1 and time < pwLine15.t2 then pwLine15.ir.re.SeedNLSJac2 else Bus_13.n[2].vr.SeedNLSJac2 - Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine15.Z.re * (pwLine15.ir.re.SeedNLSJac2 + Bus_13.n[2].vi.SeedNLSJac2 * pwLine15.Y.im - Bus_13.n[2].vr.SeedNLSJac2 * pwLine15.Y.re) - pwLine15.Z.im * (pwLine15.ir.im.SeedNLSJac2 + (-Bus_13.n[2].vr.SeedNLSJac2) * pwLine15.Y.im - Bus_13.n[2].vi.SeedNLSJac2 * pwLine15.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2372(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2372};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  RELATIONHYSTERESIS(tmp110, data->localData[0]->timeValue, data->simulationInfo->realParameter[2274] /* pwLine15.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp111, data->localData[0]->timeValue, data->simulationInfo->realParameter[2275] /* pwLine15.t2 PARAM */, 13, Less);
  jacobian->resultVars[54] /* $res_NLSJac2_55.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp110 && tmp111)?jacobian->seedVars[18] /* pwLine15.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2273] /* pwLine15.Z.re PARAM */) * (jacobian->seedVars[18] /* pwLine15.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2270] /* pwLine15.Y.im PARAM */) - ((jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2271] /* pwLine15.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2272] /* pwLine15.Z.im PARAM */) * (jacobian->seedVars[20] /* pwLine15.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2270] /* pwLine15.Y.im PARAM */) - ((jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2271] /* pwLine15.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2373
type: SIMPLE_ASSIGN
Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 = $cse10 * gen_Bus_6_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 - $cse11 * gen_Bus_6_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2373(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2373};
  jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[205] /* $cse10 variable */) * (jacobian->tmpVars[77] /* gen_Bus_6_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[206] /* $cse11 variable */) * (jacobian->tmpVars[75] /* gen_Bus_6_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 2374
type: SIMPLE_ASSIGN
Bus_06.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 = ((Bus_05.p[2].vi.SeedNLSJac2 * twoWindingTransformer.t.re - Bus_05.p[2].vr.SeedNLSJac2 * twoWindingTransformer.t.im) / (twoWindingTransformer.t.re ^ 2.0 + twoWindingTransformer.t.im ^ 2.0) - twoWindingTransformer.xeq.re * Bus_06.p[1].ii.SeedNLSJac2 - Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2) / twoWindingTransformer.xeq.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2374(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2374};
  modelica_real tmp112;
  modelica_real tmp113;
  tmp112 = data->simulationInfo->realParameter[2387] /* twoWindingTransformer.t.re PARAM */;
  tmp113 = data->simulationInfo->realParameter[2386] /* twoWindingTransformer.t.im PARAM */;
  jacobian->tmpVars[96] /* Bus_06.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION(DIVISION((jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2387] /* twoWindingTransformer.t.re PARAM */) - ((jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2386] /* twoWindingTransformer.t.im PARAM */)),(tmp112 * tmp112) + (tmp113 * tmp113),"twoWindingTransformer.t.re ^ 2.0 + twoWindingTransformer.t.im ^ 2.0") - ((data->simulationInfo->realParameter[2392] /* twoWindingTransformer.xeq.re PARAM */) * (jacobian->seedVars[67] /* Bus_06.p[1].ii.SeedNLSJac2 SEED_VAR */)) - jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[2391] /* twoWindingTransformer.xeq.im PARAM */,"twoWindingTransformer.xeq.im");
  TRACE_POP
}

/*
equation index: 2375
type: SIMPLE_ASSIGN
Bus_05.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2 = Bus_05.p[2].vi.SeedNLSJac2 * twoWindingTransformer.Ym.im - Bus_05.p[2].vr.SeedNLSJac2 * twoWindingTransformer.Ym.re - (Bus_06.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 - ((-Bus_05.p[2].ii.SeedNLSJac2) - Bus_05.p[2].vr.SeedNLSJac2 * twoWindingTransformer.Ym.im - Bus_05.p[2].vi.SeedNLSJac2 * twoWindingTransformer.Ym.re) * twoWindingTransformer.t.im) / twoWindingTransformer.t.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2375(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2375};
  jacobian->tmpVars[97] /* Bus_05.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2383] /* twoWindingTransformer.Ym.im PARAM */) - ((jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2384] /* twoWindingTransformer.Ym.re PARAM */)) - (DIVISION(jacobian->tmpVars[96] /* Bus_06.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - (((-jacobian->seedVars[66] /* Bus_05.p[2].ii.SeedNLSJac2 SEED_VAR */) - ((jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2383] /* twoWindingTransformer.Ym.im PARAM */)) - ((jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2384] /* twoWindingTransformer.Ym.re PARAM */))) * (data->simulationInfo->realParameter[2386] /* twoWindingTransformer.t.im PARAM */)),data->simulationInfo->realParameter[2387] /* twoWindingTransformer.t.re PARAM */,"twoWindingTransformer.t.re"));
  TRACE_POP
}

/*
equation index: 2376
type: SIMPLE_ASSIGN
pwLine3.is.re.$pDERNLSJac2.dummyVarNLSJac2 = Bus_05.n[3].ir.SeedNLSJac2 - (pwLine1.ir.re.SeedNLSJac2 + pwLine4.ir.re.SeedNLSJac2 - Bus_05.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2376(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2376};
  jacobian->tmpVars[122] /* pwLine3.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[10] /* Bus_05.n[3].ir.SeedNLSJac2 SEED_VAR */ - (jacobian->seedVars[58] /* pwLine1.ir.re.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[97] /* Bus_05.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 2377
type: SIMPLE_ASSIGN
$res_NLSJac2_75.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.im.SeedNLSJac2 else Bus_05.p[2].vi.SeedNLSJac2 - Bus_04.p[4].vi.SeedNLSJac2 - (pwLine3.Z.re * (pwLine3.is.im.SeedNLSJac2 + (-Bus_05.p[2].vr.SeedNLSJac2) * pwLine3.Y.im - Bus_05.p[2].vi.SeedNLSJac2 * pwLine3.Y.re) + pwLine3.Z.im * (pwLine3.is.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_05.p[2].vi.SeedNLSJac2 * pwLine3.Y.im - Bus_05.p[2].vr.SeedNLSJac2 * pwLine3.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2377(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2377};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  RELATIONHYSTERESIS(tmp114, data->localData[0]->timeValue, data->simulationInfo->realParameter[2296] /* pwLine3.t1 PARAM */, 18, GreaterEq);
  RELATIONHYSTERESIS(tmp115, data->localData[0]->timeValue, data->simulationInfo->realParameter[2297] /* pwLine3.t2 PARAM */, 19, Less);
  jacobian->resultVars[74] /* $res_NLSJac2_75.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp114 && tmp115)?jacobian->seedVars[13] /* pwLine3.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2295] /* pwLine3.Z.re PARAM */) * (jacobian->seedVars[13] /* pwLine3.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2292] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2293] /* pwLine3.Y.re PARAM */))) + (data->simulationInfo->realParameter[2294] /* pwLine3.Z.im PARAM */) * (jacobian->tmpVars[122] /* pwLine3.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2292] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2293] /* pwLine3.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2378
type: SIMPLE_ASSIGN
$res_NLSJac2_97.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine3.t1 and time < pwLine3.t2 then pwLine3.is.re.$pDERNLSJac2.dummyVarNLSJac2 else Bus_05.p[2].vr.SeedNLSJac2 - Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine3.Z.re * (pwLine3.is.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_05.p[2].vi.SeedNLSJac2 * pwLine3.Y.im - Bus_05.p[2].vr.SeedNLSJac2 * pwLine3.Y.re) - pwLine3.Z.im * (pwLine3.is.im.SeedNLSJac2 + (-Bus_05.p[2].vr.SeedNLSJac2) * pwLine3.Y.im - Bus_05.p[2].vi.SeedNLSJac2 * pwLine3.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2378(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2378};
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  RELATIONHYSTERESIS(tmp116, data->localData[0]->timeValue, data->simulationInfo->realParameter[2296] /* pwLine3.t1 PARAM */, 18, GreaterEq);
  RELATIONHYSTERESIS(tmp117, data->localData[0]->timeValue, data->simulationInfo->realParameter[2297] /* pwLine3.t2 PARAM */, 19, Less);
  jacobian->resultVars[96] /* $res_NLSJac2_97.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp116 && tmp117)?jacobian->tmpVars[122] /* pwLine3.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2295] /* pwLine3.Z.re PARAM */) * (jacobian->tmpVars[122] /* pwLine3.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2292] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2293] /* pwLine3.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2294] /* pwLine3.Z.im PARAM */) * (jacobian->seedVars[13] /* pwLine3.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2292] /* pwLine3.Y.im PARAM */) - ((jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2293] /* pwLine3.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2379
type: SIMPLE_ASSIGN
$res_NLSJac2_22.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_05.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2 + Bus_05.p[2].vr.SeedNLSJac2 * twoWindingTransformer.Ym.re - Bus_05.p[2].vi.SeedNLSJac2 * twoWindingTransformer.Ym.im) * twoWindingTransformer.t.im + ((-Bus_05.p[2].vr.SeedNLSJac2) * twoWindingTransformer.Ym.im - Bus_05.p[2].vi.SeedNLSJac2 * twoWindingTransformer.Ym.re - Bus_05.p[2].ii.SeedNLSJac2) * twoWindingTransformer.t.re - Bus_06.p[1].ii.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2379(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2379};
  jacobian->resultVars[21] /* $res_NLSJac2_22.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (jacobian->tmpVars[97] /* Bus_05.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2384] /* twoWindingTransformer.Ym.re PARAM */) - ((jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2383] /* twoWindingTransformer.Ym.im PARAM */))) * (data->simulationInfo->realParameter[2386] /* twoWindingTransformer.t.im PARAM */) + (((-jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2383] /* twoWindingTransformer.Ym.im PARAM */) - ((jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2384] /* twoWindingTransformer.Ym.re PARAM */)) - jacobian->seedVars[66] /* Bus_05.p[2].ii.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2387] /* twoWindingTransformer.t.re PARAM */) - jacobian->seedVars[67] /* Bus_06.p[1].ii.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2380
type: SIMPLE_ASSIGN
pwLine15.is.re.$pDERNLSJac2.dummyVarNLSJac2 = Bus_06.p.3.ir.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine11.ir.re.SeedNLSJac2 + pwLine9.is.re.SeedNLSJac2 - Bus_06.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 - Bus_06.n[1].ir.SeedNLSJac2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2380(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2380};
  jacobian->tmpVars[114] /* pwLine15.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[74] /* Bus_06.p.3.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - (jacobian->seedVars[28] /* pwLine11.ir.re.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[32] /* pwLine9.is.re.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[96] /* Bus_06.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[29] /* Bus_06.n[1].ir.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2381
type: SIMPLE_ASSIGN
$res_NLSJac2_21.$pDERNLSJac2.dummyVarNLSJac2 = (twoWindingTransformer.t.re ^ 2.0 + twoWindingTransformer.t.im ^ 2.0) * (twoWindingTransformer.xeq.im * Bus_06.p[1].ii.SeedNLSJac2 - twoWindingTransformer.xeq.re * Bus_06.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2) + Bus_05.p[2].vr.SeedNLSJac2 * twoWindingTransformer.t.re + Bus_05.p[2].vi.SeedNLSJac2 * twoWindingTransformer.t.im - Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 * (twoWindingTransformer.t.re ^ 2.0 + twoWindingTransformer.t.im ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2381(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2381};
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_real tmp121;
  tmp118 = data->simulationInfo->realParameter[2387] /* twoWindingTransformer.t.re PARAM */;
  tmp119 = data->simulationInfo->realParameter[2386] /* twoWindingTransformer.t.im PARAM */;
  tmp120 = data->simulationInfo->realParameter[2387] /* twoWindingTransformer.t.re PARAM */;
  tmp121 = data->simulationInfo->realParameter[2386] /* twoWindingTransformer.t.im PARAM */;
  jacobian->resultVars[20] /* $res_NLSJac2_21.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp118 * tmp118) + (tmp119 * tmp119)) * ((data->simulationInfo->realParameter[2391] /* twoWindingTransformer.xeq.im PARAM */) * (jacobian->seedVars[67] /* Bus_06.p[1].ii.SeedNLSJac2 SEED_VAR */) - ((data->simulationInfo->realParameter[2392] /* twoWindingTransformer.xeq.re PARAM */) * (jacobian->tmpVars[96] /* Bus_06.p.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */))) + (jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2387] /* twoWindingTransformer.t.re PARAM */) + (jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2386] /* twoWindingTransformer.t.im PARAM */) - ((jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * ((tmp120 * tmp120) + (tmp121 * tmp121)));
  TRACE_POP
}

/*
equation index: 2382
type: SIMPLE_ASSIGN
$res_NLSJac2_36.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine9.t1 and time < pwLine9.t2 then pwLine9.ir.im.$pDERNLSJac2.dummyVarNLSJac2 else Bus_11.p[2].vi.SeedNLSJac2 - Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine9.Z.re * (pwLine9.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_11.p[2].vr.SeedNLSJac2) * pwLine9.Y.im - Bus_11.p[2].vi.SeedNLSJac2 * pwLine9.Y.re) + pwLine9.Z.im * (pwLine9.ir.re.SeedNLSJac2 + Bus_11.p[2].vi.SeedNLSJac2 * pwLine9.Y.im - Bus_11.p[2].vr.SeedNLSJac2 * pwLine9.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2382(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2382};
  modelica_boolean tmp122;
  modelica_boolean tmp123;
  RELATIONHYSTERESIS(tmp122, data->localData[0]->timeValue, data->simulationInfo->realParameter[2362] /* pwLine9.t1 PARAM */, 70, GreaterEq);
  RELATIONHYSTERESIS(tmp123, data->localData[0]->timeValue, data->simulationInfo->realParameter[2363] /* pwLine9.t2 PARAM */, 71, Less);
  jacobian->resultVars[35] /* $res_NLSJac2_36.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp122 && tmp123)?jacobian->tmpVars[112] /* pwLine9.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2361] /* pwLine9.Z.re PARAM */) * (jacobian->tmpVars[112] /* pwLine9.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2358] /* pwLine9.Y.im PARAM */) - ((jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2359] /* pwLine9.Y.re PARAM */))) + (data->simulationInfo->realParameter[2360] /* pwLine9.Z.im PARAM */) * (jacobian->seedVars[36] /* pwLine9.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2358] /* pwLine9.Y.im PARAM */) - ((jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2359] /* pwLine9.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2383
type: SIMPLE_ASSIGN
$res_NLSJac2_37.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine9.t1 and time < pwLine9.t2 then pwLine9.is.re.SeedNLSJac2 else Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_11.p[2].vr.SeedNLSJac2 - (pwLine9.Z.re * (pwLine9.is.re.SeedNLSJac2 + Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine9.Y.im - Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine9.Y.re) - pwLine9.Z.im * (pwLine9.is.im.SeedNLSJac2 + (-Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine9.Y.im - Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine9.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2383(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2383};
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  RELATIONHYSTERESIS(tmp124, data->localData[0]->timeValue, data->simulationInfo->realParameter[2362] /* pwLine9.t1 PARAM */, 70, GreaterEq);
  RELATIONHYSTERESIS(tmp125, data->localData[0]->timeValue, data->simulationInfo->realParameter[2363] /* pwLine9.t2 PARAM */, 71, Less);
  jacobian->resultVars[36] /* $res_NLSJac2_37.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp124 && tmp125)?jacobian->seedVars[32] /* pwLine9.is.re.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2361] /* pwLine9.Z.re PARAM */) * (jacobian->seedVars[32] /* pwLine9.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2358] /* pwLine9.Y.im PARAM */) - ((jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2359] /* pwLine9.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2360] /* pwLine9.Z.im PARAM */) * (jacobian->seedVars[33] /* pwLine9.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2358] /* pwLine9.Y.im PARAM */) - ((jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2359] /* pwLine9.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2384
type: SIMPLE_ASSIGN
$res_NLSJac2_38.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine9.t1 and time < pwLine9.t2 then pwLine9.is.im.SeedNLSJac2 else Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 - Bus_11.p[2].vi.SeedNLSJac2 - (pwLine9.Z.re * (pwLine9.is.im.SeedNLSJac2 + (-Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine9.Y.im - Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine9.Y.re) + pwLine9.Z.im * (pwLine9.is.re.SeedNLSJac2 + Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine9.Y.im - Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine9.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2384(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2384};
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  RELATIONHYSTERESIS(tmp126, data->localData[0]->timeValue, data->simulationInfo->realParameter[2362] /* pwLine9.t1 PARAM */, 70, GreaterEq);
  RELATIONHYSTERESIS(tmp127, data->localData[0]->timeValue, data->simulationInfo->realParameter[2363] /* pwLine9.t2 PARAM */, 71, Less);
  jacobian->resultVars[37] /* $res_NLSJac2_38.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp126 && tmp127)?jacobian->seedVars[33] /* pwLine9.is.im.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2361] /* pwLine9.Z.re PARAM */) * (jacobian->seedVars[33] /* pwLine9.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2358] /* pwLine9.Y.im PARAM */) - ((jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2359] /* pwLine9.Y.re PARAM */))) + (data->simulationInfo->realParameter[2360] /* pwLine9.Z.im PARAM */) * (jacobian->seedVars[32] /* pwLine9.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2358] /* pwLine9.Y.im PARAM */) - ((jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2359] /* pwLine9.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2385
type: SIMPLE_ASSIGN
$res_NLSJac2_41.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_06.p[3].vr * Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 + Bus_06.p[3].vi * Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2) / sqrt(Bus_06.p[3].vr ^ 2.0 + Bus_06.p[3].vi ^ 2.0) - LOAD_06.v.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2385(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2385};
  modelica_real tmp128;
  modelica_real tmp129;
  tmp128 = data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */;
  tmp129 = data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */;
  jacobian->resultVars[40] /* $res_NLSJac2_41.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */) * (jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */) * (jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */),sqrt((tmp128 * tmp128) + (tmp129 * tmp129)),"sqrt(Bus_06.p[3].vr ^ 2.0 + Bus_06.p[3].vi ^ 2.0)") - jacobian->seedVars[90] /* LOAD_06.v.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2386
type: SIMPLE_ASSIGN
$res_NLSJac2_42.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine15.t1 and time < pwLine15.t2 then pwLine15.is.im.SeedNLSJac2 else Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 - Bus_13.n[2].vi.SeedNLSJac2 - (pwLine15.Z.re * (pwLine15.is.im.SeedNLSJac2 + (-Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine15.Y.im - Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine15.Y.re) + pwLine15.Z.im * (pwLine15.is.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine15.Y.im - Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine15.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2386(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2386};
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  RELATIONHYSTERESIS(tmp130, data->localData[0]->timeValue, data->simulationInfo->realParameter[2274] /* pwLine15.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp131, data->localData[0]->timeValue, data->simulationInfo->realParameter[2275] /* pwLine15.t2 PARAM */, 13, Less);
  jacobian->resultVars[41] /* $res_NLSJac2_42.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp130 && tmp131)?jacobian->seedVars[30] /* pwLine15.is.im.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2273] /* pwLine15.Z.re PARAM */) * (jacobian->seedVars[30] /* pwLine15.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2270] /* pwLine15.Y.im PARAM */) - ((jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2271] /* pwLine15.Y.re PARAM */))) + (data->simulationInfo->realParameter[2272] /* pwLine15.Z.im PARAM */) * (jacobian->tmpVars[114] /* pwLine15.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2270] /* pwLine15.Y.im PARAM */) - ((jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2271] /* pwLine15.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2387
type: SIMPLE_ASSIGN
$res_NLSJac2_45.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine11.t1 and time < pwLine11.t2 then pwLine11.is.im.SeedNLSJac2 else Bus_12.n[1].vi.SeedNLSJac2 - Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine11.Z.re * (pwLine11.is.im.SeedNLSJac2 + (-Bus_12.n[1].vr.SeedNLSJac2) * pwLine11.Y.im - Bus_12.n[1].vi.SeedNLSJac2 * pwLine11.Y.re) + pwLine11.Z.im * (pwLine11.is.re.SeedNLSJac2 + Bus_12.n[1].vi.SeedNLSJac2 * pwLine11.Y.im - Bus_12.n[1].vr.SeedNLSJac2 * pwLine11.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2387(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2387};
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  RELATIONHYSTERESIS(tmp132, data->localData[0]->timeValue, data->simulationInfo->realParameter[2230] /* pwLine11.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp133, data->localData[0]->timeValue, data->simulationInfo->realParameter[2231] /* pwLine11.t2 PARAM */, 11, Less);
  jacobian->resultVars[44] /* $res_NLSJac2_45.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp132 && tmp133)?jacobian->seedVars[25] /* pwLine11.is.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2229] /* pwLine11.Z.re PARAM */) * (jacobian->seedVars[25] /* pwLine11.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2226] /* pwLine11.Y.im PARAM */) - ((jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2227] /* pwLine11.Y.re PARAM */))) + (data->simulationInfo->realParameter[2228] /* pwLine11.Z.im PARAM */) * (jacobian->seedVars[23] /* pwLine11.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2226] /* pwLine11.Y.im PARAM */) - ((jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2227] /* pwLine11.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2388
type: SIMPLE_ASSIGN
$res_NLSJac2_54.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine15.t1 and time < pwLine15.t2 then pwLine15.ir.im.SeedNLSJac2 else Bus_13.n[2].vi.SeedNLSJac2 - Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine15.Z.re * (pwLine15.ir.im.SeedNLSJac2 + (-Bus_13.n[2].vr.SeedNLSJac2) * pwLine15.Y.im - Bus_13.n[2].vi.SeedNLSJac2 * pwLine15.Y.re) + pwLine15.Z.im * (pwLine15.ir.re.SeedNLSJac2 + Bus_13.n[2].vi.SeedNLSJac2 * pwLine15.Y.im - Bus_13.n[2].vr.SeedNLSJac2 * pwLine15.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2388(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2388};
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  RELATIONHYSTERESIS(tmp134, data->localData[0]->timeValue, data->simulationInfo->realParameter[2274] /* pwLine15.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp135, data->localData[0]->timeValue, data->simulationInfo->realParameter[2275] /* pwLine15.t2 PARAM */, 13, Less);
  jacobian->resultVars[53] /* $res_NLSJac2_54.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp134 && tmp135)?jacobian->seedVars[20] /* pwLine15.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2273] /* pwLine15.Z.re PARAM */) * (jacobian->seedVars[20] /* pwLine15.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2270] /* pwLine15.Y.im PARAM */) - ((jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2271] /* pwLine15.Y.re PARAM */))) + (data->simulationInfo->realParameter[2272] /* pwLine15.Z.im PARAM */) * (jacobian->seedVars[18] /* pwLine15.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2270] /* pwLine15.Y.im PARAM */) - ((jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2271] /* pwLine15.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2389
type: SIMPLE_ASSIGN
$res_NLSJac2_56.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine11.t1 and time < pwLine11.t2 then pwLine11.ir.re.SeedNLSJac2 else Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_12.n[1].vr.SeedNLSJac2 - (pwLine11.Z.re * (pwLine11.ir.re.SeedNLSJac2 + Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine11.Y.im - Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine11.Y.re) - pwLine11.Z.im * (pwLine11.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine11.Y.im - Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine11.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2389(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2389};
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  RELATIONHYSTERESIS(tmp136, data->localData[0]->timeValue, data->simulationInfo->realParameter[2230] /* pwLine11.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp137, data->localData[0]->timeValue, data->simulationInfo->realParameter[2231] /* pwLine11.t2 PARAM */, 11, Less);
  jacobian->resultVars[55] /* $res_NLSJac2_56.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp136 && tmp137)?jacobian->seedVars[28] /* pwLine11.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2229] /* pwLine11.Z.re PARAM */) * (jacobian->seedVars[28] /* pwLine11.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2226] /* pwLine11.Y.im PARAM */) - ((jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2227] /* pwLine11.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2228] /* pwLine11.Z.im PARAM */) * (jacobian->tmpVars[113] /* pwLine11.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2226] /* pwLine11.Y.im PARAM */) - ((jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2227] /* pwLine11.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2390
type: SIMPLE_ASSIGN
$res_NLSJac2_57.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine11.t1 and time < pwLine11.t2 then pwLine11.ir.im.$pDERNLSJac2.dummyVarNLSJac2 else Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 - Bus_12.n[1].vi.SeedNLSJac2 - (pwLine11.Z.re * (pwLine11.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine11.Y.im - Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine11.Y.re) + pwLine11.Z.im * (pwLine11.ir.re.SeedNLSJac2 + Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine11.Y.im - Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine11.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2390(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2390};
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  RELATIONHYSTERESIS(tmp138, data->localData[0]->timeValue, data->simulationInfo->realParameter[2230] /* pwLine11.t1 PARAM */, 10, GreaterEq);
  RELATIONHYSTERESIS(tmp139, data->localData[0]->timeValue, data->simulationInfo->realParameter[2231] /* pwLine11.t2 PARAM */, 11, Less);
  jacobian->resultVars[56] /* $res_NLSJac2_57.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp138 && tmp139)?jacobian->tmpVars[113] /* pwLine11.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2229] /* pwLine11.Z.re PARAM */) * (jacobian->tmpVars[113] /* pwLine11.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2226] /* pwLine11.Y.im PARAM */) - ((jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2227] /* pwLine11.Y.re PARAM */))) + (data->simulationInfo->realParameter[2228] /* pwLine11.Z.im PARAM */) * (jacobian->seedVars[28] /* pwLine11.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2226] /* pwLine11.Y.im PARAM */) - ((jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2227] /* pwLine11.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2391
type: SIMPLE_ASSIGN
$res_NLSJac2_58.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine15.t1 and time < pwLine15.t2 then pwLine15.is.re.$pDERNLSJac2.dummyVarNLSJac2 else Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_13.n[2].vr.SeedNLSJac2 - (pwLine15.Z.re * (pwLine15.is.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine15.Y.im - Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine15.Y.re) - pwLine15.Z.im * (pwLine15.is.im.SeedNLSJac2 + (-Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine15.Y.im - Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine15.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2391(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2391};
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  RELATIONHYSTERESIS(tmp140, data->localData[0]->timeValue, data->simulationInfo->realParameter[2274] /* pwLine15.t1 PARAM */, 12, GreaterEq);
  RELATIONHYSTERESIS(tmp141, data->localData[0]->timeValue, data->simulationInfo->realParameter[2275] /* pwLine15.t2 PARAM */, 13, Less);
  jacobian->resultVars[57] /* $res_NLSJac2_58.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp140 && tmp141)?jacobian->tmpVars[114] /* pwLine15.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2273] /* pwLine15.Z.re PARAM */) * (jacobian->tmpVars[114] /* pwLine15.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2270] /* pwLine15.Y.im PARAM */) - ((jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2271] /* pwLine15.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2272] /* pwLine15.Z.im PARAM */) * (jacobian->seedVars[30] /* pwLine15.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2270] /* pwLine15.Y.im PARAM */) - ((jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2271] /* pwLine15.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2392
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_3_1.gENROU.Xppq) * gen_Bus_3_1.gENROU.iq.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2392(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2392};
  jacobian->tmpVars[68] /* gen_Bus_3_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[1683] /* gen_Bus_3_1.gENROU.Xppq PARAM */)) * (jacobian->seedVars[82] /* gen_Bus_3_1.gENROU.iq.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2393
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_3_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2) - gen_Bus_3_1.gENROU.R_a * gen_Bus_3_1.gENROU.id.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2393(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2393};
  jacobian->tmpVars[69] /* gen_Bus_3_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[68] /* gen_Bus_3_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[1664] /* gen_Bus_3_1.gENROU.R_a PARAM */) * (jacobian->seedVars[83] /* gen_Bus_3_1.gENROU.id.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2394
type: SIMPLE_ASSIGN
Bus_03.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2 = ($cse14 * gen_Bus_3_1.gENROU.iq.SeedNLSJac2 + $cse13 * gen_Bus_3_1.gENROU.id.SeedNLSJac2) * gen_Bus_3_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2394(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2394};
  jacobian->tmpVars[66] /* Bus_03.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[209] /* $cse14 variable */) * (jacobian->seedVars[82] /* gen_Bus_3_1.gENROU.iq.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[208] /* $cse13 variable */) * (jacobian->seedVars[83] /* gen_Bus_3_1.gENROU.id.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[1627] /* gen_Bus_3_1.gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 2395
type: SIMPLE_ASSIGN
pwLine2.ir.re.$pDERNLSJac2.dummyVarNLSJac2 = Bus_03.n[1].ir.SeedNLSJac2 - (pwLine6.is.re.SeedNLSJac2 - Bus_03.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2395(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2395};
  jacobian->tmpVars[104] /* pwLine2.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[53] /* Bus_03.n[1].ir.SeedNLSJac2 SEED_VAR */ - (jacobian->seedVars[54] /* pwLine6.is.re.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[66] /* Bus_03.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 2396
type: SIMPLE_ASSIGN
Bus_03.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 = ($cse13 * gen_Bus_3_1.gENROU.iq.SeedNLSJac2 - $cse14 * gen_Bus_3_1.gENROU.id.SeedNLSJac2) * gen_Bus_3_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2396(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2396};
  jacobian->tmpVars[65] /* Bus_03.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[208] /* $cse13 variable */) * (jacobian->seedVars[82] /* gen_Bus_3_1.gENROU.iq.SeedNLSJac2 SEED_VAR */) - ((data->localData[0]->realVars[209] /* $cse14 variable */) * (jacobian->seedVars[83] /* gen_Bus_3_1.gENROU.id.SeedNLSJac2 SEED_VAR */))) * (data->simulationInfo->realParameter[1627] /* gen_Bus_3_1.gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 2397
type: SIMPLE_ASSIGN
pwLine2.ir.im.$pDERNLSJac2.dummyVarNLSJac2 = Bus_03.n[1].ii.SeedNLSJac2 - (pwLine6.is.im.SeedNLSJac2 - Bus_03.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2397(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2397};
  jacobian->tmpVars[105] /* pwLine2.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[51] /* Bus_03.n[1].ii.SeedNLSJac2 SEED_VAR */ - (jacobian->seedVars[52] /* pwLine6.is.im.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[65] /* Bus_03.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 2398
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_3_1.gENROU.Xppd) * gen_Bus_3_1.gENROU.id.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2398(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2398};
  jacobian->tmpVars[64] /* gen_Bus_3_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[1682] /* gen_Bus_3_1.gENROU.Xppd PARAM */)) * (jacobian->seedVars[83] /* gen_Bus_3_1.gENROU.id.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2399
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 = gen_Bus_3_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 - gen_Bus_3_1.gENROU.R_a * gen_Bus_3_1.gENROU.iq.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2399(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2399};
  jacobian->tmpVars[67] /* gen_Bus_3_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[64] /* gen_Bus_3_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[1664] /* gen_Bus_3_1.gENROU.R_a PARAM */) * (jacobian->seedVars[82] /* gen_Bus_3_1.gENROU.iq.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2400
type: SIMPLE_ASSIGN
Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 = $cse13 * gen_Bus_3_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 + $cse14 * gen_Bus_3_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2400(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2400};
  jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[208] /* $cse13 variable */) * (jacobian->tmpVars[69] /* gen_Bus_3_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[209] /* $cse14 variable */) * (jacobian->tmpVars[67] /* gen_Bus_3_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 2401
type: SIMPLE_ASSIGN
$res_NLSJac2_90.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine6.t1 and time < pwLine6.t2 then pwLine6.ir.re.SeedNLSJac2 else Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine6.Z.re * (pwLine6.ir.re.SeedNLSJac2 + Bus_04.p[4].vi.SeedNLSJac2 * pwLine6.Y.im - Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine6.Y.re) - pwLine6.Z.im * (pwLine6.ir.im.SeedNLSJac2 + (-Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine6.Y.im - Bus_04.p[4].vi.SeedNLSJac2 * pwLine6.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2401(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2401};
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  RELATIONHYSTERESIS(tmp142, data->localData[0]->timeValue, data->simulationInfo->realParameter[2329] /* pwLine6.t1 PARAM */, 20, GreaterEq);
  RELATIONHYSTERESIS(tmp143, data->localData[0]->timeValue, data->simulationInfo->realParameter[2330] /* pwLine6.t2 PARAM */, 21, Less);
  jacobian->resultVars[89] /* $res_NLSJac2_90.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp142 && tmp143)?jacobian->seedVars[55] /* pwLine6.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2328] /* pwLine6.Z.re PARAM */) * (jacobian->seedVars[55] /* pwLine6.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2325] /* pwLine6.Y.im PARAM */) - ((jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2326] /* pwLine6.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2327] /* pwLine6.Z.im PARAM */) * (jacobian->seedVars[3] /* pwLine6.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2325] /* pwLine6.Y.im PARAM */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2326] /* pwLine6.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2402
type: SIMPLE_ASSIGN
Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 = $cse13 * gen_Bus_3_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 - $cse14 * gen_Bus_3_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2402(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2402};
  jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[208] /* $cse13 variable */) * (jacobian->tmpVars[67] /* gen_Bus_3_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[209] /* $cse14 variable */) * (jacobian->tmpVars[69] /* gen_Bus_3_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 2403
type: SIMPLE_ASSIGN
$res_NLSJac2_3.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_03.p[2].vr * Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 + Bus_03.p[2].vi * Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2) / sqrt(Bus_03.p[2].vr ^ 2.0 + Bus_03.p[2].vi ^ 2.0) - LOAD_03.v.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2403(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2403};
  modelica_real tmp144;
  modelica_real tmp145;
  tmp144 = data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */;
  tmp145 = data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */;
  jacobian->resultVars[2] /* $res_NLSJac2_3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */) * (jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */) * (jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */),sqrt((tmp144 * tmp144) + (tmp145 * tmp145)),"sqrt(Bus_03.p[2].vr ^ 2.0 + Bus_03.p[2].vi ^ 2.0)") - jacobian->seedVars[93] /* LOAD_03.v.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2404
type: SIMPLE_ASSIGN
$res_NLSJac2_6.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine6.t1 and time < pwLine6.t2 then pwLine6.ir.im.SeedNLSJac2 else Bus_04.p[4].vi.SeedNLSJac2 - Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine6.Z.re * (pwLine6.ir.im.SeedNLSJac2 + (-Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine6.Y.im - Bus_04.p[4].vi.SeedNLSJac2 * pwLine6.Y.re) + pwLine6.Z.im * (pwLine6.ir.re.SeedNLSJac2 + Bus_04.p[4].vi.SeedNLSJac2 * pwLine6.Y.im - Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine6.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2404(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2404};
  modelica_boolean tmp146;
  modelica_boolean tmp147;
  RELATIONHYSTERESIS(tmp146, data->localData[0]->timeValue, data->simulationInfo->realParameter[2329] /* pwLine6.t1 PARAM */, 20, GreaterEq);
  RELATIONHYSTERESIS(tmp147, data->localData[0]->timeValue, data->simulationInfo->realParameter[2330] /* pwLine6.t2 PARAM */, 21, Less);
  jacobian->resultVars[5] /* $res_NLSJac2_6.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp146 && tmp147)?jacobian->seedVars[3] /* pwLine6.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2328] /* pwLine6.Z.re PARAM */) * (jacobian->seedVars[3] /* pwLine6.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2325] /* pwLine6.Y.im PARAM */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2326] /* pwLine6.Y.re PARAM */))) + (data->simulationInfo->realParameter[2327] /* pwLine6.Z.im PARAM */) * (jacobian->seedVars[55] /* pwLine6.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2325] /* pwLine6.Y.im PARAM */) - ((jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2326] /* pwLine6.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2405
type: SIMPLE_ASSIGN
$res_NLSJac2_7.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine6.t1 and time < pwLine6.t2 then pwLine6.is.im.SeedNLSJac2 else Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 - Bus_04.p[4].vi.SeedNLSJac2 - (pwLine6.Z.re * (pwLine6.is.im.SeedNLSJac2 + (-Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine6.Y.im - Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine6.Y.re) + pwLine6.Z.im * (pwLine6.is.re.SeedNLSJac2 + Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine6.Y.im - Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine6.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2405(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2405};
  modelica_boolean tmp148;
  modelica_boolean tmp149;
  RELATIONHYSTERESIS(tmp148, data->localData[0]->timeValue, data->simulationInfo->realParameter[2329] /* pwLine6.t1 PARAM */, 20, GreaterEq);
  RELATIONHYSTERESIS(tmp149, data->localData[0]->timeValue, data->simulationInfo->realParameter[2330] /* pwLine6.t2 PARAM */, 21, Less);
  jacobian->resultVars[6] /* $res_NLSJac2_7.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp148 && tmp149)?jacobian->seedVars[52] /* pwLine6.is.im.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2328] /* pwLine6.Z.re PARAM */) * (jacobian->seedVars[52] /* pwLine6.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2325] /* pwLine6.Y.im PARAM */) - ((jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2326] /* pwLine6.Y.re PARAM */))) + (data->simulationInfo->realParameter[2327] /* pwLine6.Z.im PARAM */) * (jacobian->seedVars[54] /* pwLine6.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2325] /* pwLine6.Y.im PARAM */) - ((jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2326] /* pwLine6.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2406
type: SIMPLE_ASSIGN
$res_NLSJac2_8.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine6.t1 and time < pwLine6.t2 then pwLine6.is.re.SeedNLSJac2 else Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine6.Z.re * (pwLine6.is.re.SeedNLSJac2 + Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine6.Y.im - Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine6.Y.re) - pwLine6.Z.im * (pwLine6.is.im.SeedNLSJac2 + (-Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine6.Y.im - Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine6.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2406(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2406};
  modelica_boolean tmp150;
  modelica_boolean tmp151;
  RELATIONHYSTERESIS(tmp150, data->localData[0]->timeValue, data->simulationInfo->realParameter[2329] /* pwLine6.t1 PARAM */, 20, GreaterEq);
  RELATIONHYSTERESIS(tmp151, data->localData[0]->timeValue, data->simulationInfo->realParameter[2330] /* pwLine6.t2 PARAM */, 21, Less);
  jacobian->resultVars[7] /* $res_NLSJac2_8.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp150 && tmp151)?jacobian->seedVars[54] /* pwLine6.is.re.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2328] /* pwLine6.Z.re PARAM */) * (jacobian->seedVars[54] /* pwLine6.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2325] /* pwLine6.Y.im PARAM */) - ((jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2326] /* pwLine6.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2327] /* pwLine6.Z.im PARAM */) * (jacobian->seedVars[52] /* pwLine6.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2325] /* pwLine6.Y.im PARAM */) - ((jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2326] /* pwLine6.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2407
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_1_1.gENROU.Xppq) * gen_Bus_1_1.gENROU.iq.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2407(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2407};
  jacobian->tmpVars[60] /* gen_Bus_1_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[612] /* gen_Bus_1_1.gENROU.Xppq PARAM */)) * (jacobian->seedVars[84] /* gen_Bus_1_1.gENROU.iq.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2408
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_1_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2) - gen_Bus_1_1.gENROU.R_a * gen_Bus_1_1.gENROU.id.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2408(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2408};
  jacobian->tmpVars[61] /* gen_Bus_1_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[60] /* gen_Bus_1_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[593] /* gen_Bus_1_1.gENROU.R_a PARAM */) * (jacobian->seedVars[85] /* gen_Bus_1_1.gENROU.id.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2409
type: SIMPLE_ASSIGN
Bus_01.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 = ($cse5 * gen_Bus_1_1.gENROU.iq.SeedNLSJac2 + $cse4 * gen_Bus_1_1.gENROU.id.SeedNLSJac2) * gen_Bus_1_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2409(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2409};
  jacobian->tmpVars[58] /* Bus_01.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[215] /* $cse5 variable */) * (jacobian->seedVars[84] /* gen_Bus_1_1.gENROU.iq.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[214] /* $cse4 variable */) * (jacobian->seedVars[85] /* gen_Bus_1_1.gENROU.id.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[557] /* gen_Bus_1_1.gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 2410
type: SIMPLE_ASSIGN
pwLine1.is.re.$pDERNLSJac2.dummyVarNLSJac2 = Bus_01.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 - pwLine.ir.re.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2410(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2410};
  jacobian->tmpVars[90] /* pwLine1.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[58] /* Bus_01.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[75] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2411
type: SIMPLE_ASSIGN
Bus_01.n.1.ii.$pDERNLSJac2.dummyVarNLSJac2 = ($cse4 * gen_Bus_1_1.gENROU.iq.SeedNLSJac2 - $cse5 * gen_Bus_1_1.gENROU.id.SeedNLSJac2) * gen_Bus_1_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2411(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2411};
  jacobian->tmpVars[57] /* Bus_01.n.1.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[214] /* $cse4 variable */) * (jacobian->seedVars[84] /* gen_Bus_1_1.gENROU.iq.SeedNLSJac2 SEED_VAR */) - ((data->localData[0]->realVars[215] /* $cse5 variable */) * (jacobian->seedVars[85] /* gen_Bus_1_1.gENROU.id.SeedNLSJac2 SEED_VAR */))) * (data->simulationInfo->realParameter[557] /* gen_Bus_1_1.gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 2412
type: SIMPLE_ASSIGN
pwLine.ir.im.$pDERNLSJac2.dummyVarNLSJac2 = Bus_01.n.1.ii.$pDERNLSJac2.dummyVarNLSJac2 - pwLine1.is.im.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2412(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2412};
  jacobian->tmpVars[89] /* pwLine.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[57] /* Bus_01.n.1.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[76] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2413
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_1_1.gENROU.Xppd) * gen_Bus_1_1.gENROU.id.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2413(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2413};
  jacobian->tmpVars[56] /* gen_Bus_1_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[611] /* gen_Bus_1_1.gENROU.Xppd PARAM */)) * (jacobian->seedVars[85] /* gen_Bus_1_1.gENROU.id.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2414
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 = gen_Bus_1_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 - gen_Bus_1_1.gENROU.R_a * gen_Bus_1_1.gENROU.iq.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2414(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2414};
  jacobian->tmpVars[59] /* gen_Bus_1_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[56] /* gen_Bus_1_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[593] /* gen_Bus_1_1.gENROU.R_a PARAM */) * (jacobian->seedVars[84] /* gen_Bus_1_1.gENROU.iq.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2415
type: SIMPLE_ASSIGN
Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 = $cse4 * gen_Bus_1_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 - $cse5 * gen_Bus_1_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2415(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2415};
  jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[214] /* $cse4 variable */) * (jacobian->tmpVars[59] /* gen_Bus_1_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[215] /* $cse5 variable */) * (jacobian->tmpVars[61] /* gen_Bus_1_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 2416
type: SIMPLE_ASSIGN
$res_NLSJac2_1.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.im.SeedNLSJac2 else Bus_05.p[2].vi.SeedNLSJac2 - Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine1.Z.re * (pwLine1.ir.im.SeedNLSJac2 + (-Bus_05.p[2].vr.SeedNLSJac2) * pwLine1.Y.im - Bus_05.p[2].vi.SeedNLSJac2 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.ir.re.SeedNLSJac2 + Bus_05.p[2].vi.SeedNLSJac2 * pwLine1.Y.im - Bus_05.p[2].vr.SeedNLSJac2 * pwLine1.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2416(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2416};
  modelica_boolean tmp152;
  modelica_boolean tmp153;
  RELATIONHYSTERESIS(tmp152, data->localData[0]->timeValue, data->simulationInfo->realParameter[2208] /* pwLine1.t1 PARAM */, 16, GreaterEq);
  RELATIONHYSTERESIS(tmp153, data->localData[0]->timeValue, data->simulationInfo->realParameter[2209] /* pwLine1.t2 PARAM */, 17, Less);
  jacobian->resultVars[0] /* $res_NLSJac2_1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp152 && tmp153)?jacobian->seedVars[59] /* pwLine1.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2207] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[59] /* pwLine1.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2204] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2205] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[2206] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[58] /* pwLine1.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2204] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2205] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2417
type: SIMPLE_ASSIGN
Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 = $cse4 * gen_Bus_1_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 + $cse5 * gen_Bus_1_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2417(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2417};
  jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[214] /* $cse4 variable */) * (jacobian->tmpVars[61] /* gen_Bus_1_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[215] /* $cse5 variable */) * (jacobian->tmpVars[59] /* gen_Bus_1_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 2418
type: SIMPLE_ASSIGN
$res_NLSJac2_2.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.ir.re.SeedNLSJac2 else Bus_05.p[2].vr.SeedNLSJac2 - Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine1.Z.re * (pwLine1.ir.re.SeedNLSJac2 + Bus_05.p[2].vi.SeedNLSJac2 * pwLine1.Y.im - Bus_05.p[2].vr.SeedNLSJac2 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.ir.im.SeedNLSJac2 + (-Bus_05.p[2].vr.SeedNLSJac2) * pwLine1.Y.im - Bus_05.p[2].vi.SeedNLSJac2 * pwLine1.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2418(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2418};
  modelica_boolean tmp154;
  modelica_boolean tmp155;
  RELATIONHYSTERESIS(tmp154, data->localData[0]->timeValue, data->simulationInfo->realParameter[2208] /* pwLine1.t1 PARAM */, 16, GreaterEq);
  RELATIONHYSTERESIS(tmp155, data->localData[0]->timeValue, data->simulationInfo->realParameter[2209] /* pwLine1.t2 PARAM */, 17, Less);
  jacobian->resultVars[1] /* $res_NLSJac2_2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp154 && tmp155)?jacobian->seedVars[58] /* pwLine1.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2207] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[58] /* pwLine1.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2204] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2205] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2206] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[59] /* pwLine1.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2204] /* pwLine1.Y.im PARAM */) - ((jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2205] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2419
type: SIMPLE_ASSIGN
$res_NLSJac2_101.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.re.$pDERNLSJac2.dummyVarNLSJac2 else Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_05.p[2].vr.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.is.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine1.Y.im - Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine1.Y.re) - pwLine1.Z.im * (pwLine1.is.im.SeedNLSJac2 + (-Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine1.Y.im - Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine1.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2419(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2419};
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  RELATIONHYSTERESIS(tmp156, data->localData[0]->timeValue, data->simulationInfo->realParameter[2208] /* pwLine1.t1 PARAM */, 16, GreaterEq);
  RELATIONHYSTERESIS(tmp157, data->localData[0]->timeValue, data->simulationInfo->realParameter[2209] /* pwLine1.t2 PARAM */, 17, Less);
  jacobian->resultVars[100] /* $res_NLSJac2_101.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp156 && tmp157)?jacobian->tmpVars[90] /* pwLine1.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2207] /* pwLine1.Z.re PARAM */) * (jacobian->tmpVars[90] /* pwLine1.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2204] /* pwLine1.Y.im PARAM */) - ((jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2205] /* pwLine1.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2206] /* pwLine1.Z.im PARAM */) * (jacobian->seedVars[76] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2204] /* pwLine1.Y.im PARAM */) - ((jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2205] /* pwLine1.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2420
type: SIMPLE_ASSIGN
$res_NLSJac2_102.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine1.t1 and time < pwLine1.t2 then pwLine1.is.im.SeedNLSJac2 else Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 - Bus_05.p[2].vi.SeedNLSJac2 - (pwLine1.Z.re * (pwLine1.is.im.SeedNLSJac2 + (-Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine1.Y.im - Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine1.Y.re) + pwLine1.Z.im * (pwLine1.is.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine1.Y.im - Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine1.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2420(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2420};
  modelica_boolean tmp158;
  modelica_boolean tmp159;
  RELATIONHYSTERESIS(tmp158, data->localData[0]->timeValue, data->simulationInfo->realParameter[2208] /* pwLine1.t1 PARAM */, 16, GreaterEq);
  RELATIONHYSTERESIS(tmp159, data->localData[0]->timeValue, data->simulationInfo->realParameter[2209] /* pwLine1.t2 PARAM */, 17, Less);
  jacobian->resultVars[101] /* $res_NLSJac2_102.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp158 && tmp159)?jacobian->seedVars[76] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2207] /* pwLine1.Z.re PARAM */) * (jacobian->seedVars[76] /* pwLine1.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2204] /* pwLine1.Y.im PARAM */) - ((jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2205] /* pwLine1.Y.re PARAM */))) + (data->simulationInfo->realParameter[2206] /* pwLine1.Z.im PARAM */) * (jacobian->tmpVars[90] /* pwLine1.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2204] /* pwLine1.Y.im PARAM */) - ((jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2205] /* pwLine1.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2421
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_2_1.gENROU.Xppd) * gen_Bus_2_1.gENROU.id.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2421(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2421};
  jacobian->tmpVars[52] /* gen_Bus_2_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[1146] /* gen_Bus_2_1.gENROU.Xppd PARAM */)) * (jacobian->seedVars[86] /* gen_Bus_2_1.gENROU.id.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2422
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 = gen_Bus_2_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 - gen_Bus_2_1.gENROU.R_a * gen_Bus_2_1.gENROU.iq.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2422(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2422};
  jacobian->tmpVars[53] /* gen_Bus_2_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[52] /* gen_Bus_2_1.gENROU.PSId.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[1128] /* gen_Bus_2_1.gENROU.R_a PARAM */) * (jacobian->seedVars[87] /* gen_Bus_2_1.gENROU.iq.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2423
type: SIMPLE_ASSIGN
Bus_02.n.2.ir.$pDERNLSJac2.dummyVarNLSJac2 = ($cse2 * gen_Bus_2_1.gENROU.iq.SeedNLSJac2 + $cse1 * gen_Bus_2_1.gENROU.id.SeedNLSJac2) * gen_Bus_2_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2423(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2423};
  jacobian->tmpVars[50] /* Bus_02.n.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[212] /* $cse2 variable */) * (jacobian->seedVars[87] /* gen_Bus_2_1.gENROU.iq.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[204] /* $cse1 variable */) * (jacobian->seedVars[86] /* gen_Bus_2_1.gENROU.id.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[1092] /* gen_Bus_2_1.gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 2424
type: SIMPLE_ASSIGN
pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 = Bus_02.n.2.ir.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine4.is.re.SeedNLSJac2 + pwLine.is.re.SeedNLSJac2 + pwLine5.is.re.SeedNLSJac2 - Bus_02.n[1].ir.SeedNLSJac2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2424(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2424};
  jacobian->tmpVars[123] /* pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[50] /* Bus_02.n.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[9] /* pwLine.is.re.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[8] /* pwLine5.is.re.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[6] /* Bus_02.n[1].ir.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2425
type: SIMPLE_ASSIGN
Bus_02.n.2.ii.$pDERNLSJac2.dummyVarNLSJac2 = ($cse1 * gen_Bus_2_1.gENROU.iq.SeedNLSJac2 - $cse2 * gen_Bus_2_1.gENROU.id.SeedNLSJac2) * gen_Bus_2_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2425(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2425};
  jacobian->tmpVars[49] /* Bus_02.n.2.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->realVars[204] /* $cse1 variable */) * (jacobian->seedVars[87] /* gen_Bus_2_1.gENROU.iq.SeedNLSJac2 SEED_VAR */) - ((data->localData[0]->realVars[212] /* $cse2 variable */) * (jacobian->seedVars[86] /* gen_Bus_2_1.gENROU.id.SeedNLSJac2 SEED_VAR */))) * (data->simulationInfo->realParameter[1092] /* gen_Bus_2_1.gENROU.CoB PARAM */);
  TRACE_POP
}

/*
equation index: 2426
type: SIMPLE_ASSIGN
pwLine4.is.im.$pDERNLSJac2.dummyVarNLSJac2 = Bus_02.n.2.ii.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine2.is.im.SeedNLSJac2 + pwLine.is.im.SeedNLSJac2 + pwLine5.is.im.SeedNLSJac2 - Bus_02.n[1].ii.SeedNLSJac2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2426(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2426};
  jacobian->tmpVars[125] /* pwLine4.is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[49] /* Bus_02.n.2.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - (jacobian->seedVars[1] /* pwLine2.is.im.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[0] /* pwLine.is.im.SeedNLSJac2 SEED_VAR */ + jacobian->seedVars[7] /* pwLine5.is.im.SeedNLSJac2 SEED_VAR */ - jacobian->seedVars[4] /* Bus_02.n[1].ii.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2427
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_2_1.gENROU.Xppq) * gen_Bus_2_1.gENROU.iq.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2427(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2427};
  jacobian->tmpVars[48] /* gen_Bus_2_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((-data->simulationInfo->realParameter[1147] /* gen_Bus_2_1.gENROU.Xppq PARAM */)) * (jacobian->seedVars[87] /* gen_Bus_2_1.gENROU.iq.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 2428
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 = (-gen_Bus_2_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2) - gen_Bus_2_1.gENROU.R_a * gen_Bus_2_1.gENROU.id.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2428(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2428};
  jacobian->tmpVars[51] /* gen_Bus_2_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[48] /* gen_Bus_2_1.gENROU.PSIq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->simulationInfo->realParameter[1128] /* gen_Bus_2_1.gENROU.R_a PARAM */) * (jacobian->seedVars[86] /* gen_Bus_2_1.gENROU.id.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2429
type: SIMPLE_ASSIGN
Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 = $cse1 * gen_Bus_2_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 - $cse2 * gen_Bus_2_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2429(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2429};
  jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[204] /* $cse1 variable */) * (jacobian->tmpVars[53] /* gen_Bus_2_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[212] /* $cse2 variable */) * (jacobian->tmpVars[51] /* gen_Bus_2_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 2430
type: SIMPLE_ASSIGN
$res_NLSJac2_77.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.im.$pDERNLSJac2.dummyVarNLSJac2 else Bus_05.p[2].vi.SeedNLSJac2 - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine4.Z.re * (pwLine4.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_05.p[2].vr.SeedNLSJac2) * pwLine4.Y.im - Bus_05.p[2].vi.SeedNLSJac2 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.ir.re.SeedNLSJac2 + Bus_05.p[2].vi.SeedNLSJac2 * pwLine4.Y.im - Bus_05.p[2].vr.SeedNLSJac2 * pwLine4.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2430(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2430};
  modelica_boolean tmp160;
  modelica_boolean tmp161;
  RELATIONHYSTERESIS(tmp160, data->localData[0]->timeValue, data->simulationInfo->realParameter[2307] /* pwLine4.t1 PARAM */, 14, GreaterEq);
  RELATIONHYSTERESIS(tmp161, data->localData[0]->timeValue, data->simulationInfo->realParameter[2308] /* pwLine4.t2 PARAM */, 15, Less);
  jacobian->resultVars[76] /* $res_NLSJac2_77.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp160 && tmp161)?jacobian->tmpVars[121] /* pwLine4.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2306] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[121] /* pwLine4.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2303] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2304] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[2305] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2303] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2304] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2431
type: SIMPLE_ASSIGN
$res_NLSJac2_79.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.im.$pDERNLSJac2.dummyVarNLSJac2 else Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine.Z.re * (pwLine.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine.Y.im - Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.re) + pwLine.Z.im * (pwLine.ir.re.SeedNLSJac2 + Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.im - Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2431(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2431};
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  RELATIONHYSTERESIS(tmp162, data->localData[0]->timeValue, data->simulationInfo->realParameter[2197] /* pwLine.t1 PARAM */, 24, GreaterEq);
  RELATIONHYSTERESIS(tmp163, data->localData[0]->timeValue, data->simulationInfo->realParameter[2198] /* pwLine.t2 PARAM */, 25, Less);
  jacobian->resultVars[78] /* $res_NLSJac2_79.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp162 && tmp163)?jacobian->tmpVars[89] /* pwLine.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2196] /* pwLine.Z.re PARAM */) * (jacobian->tmpVars[89] /* pwLine.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2193] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2194] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[2195] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[75] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2193] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2194] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2432
type: SIMPLE_ASSIGN
$res_NLSJac2_86.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.im.$pDERNLSJac2.dummyVarNLSJac2 else Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine2.Z.re * (pwLine2.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine2.Y.im - Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine2.Y.im - Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine2.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2432(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2432};
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  RELATIONHYSTERESIS(tmp164, data->localData[0]->timeValue, data->simulationInfo->realParameter[2285] /* pwLine2.t1 PARAM */, 22, GreaterEq);
  RELATIONHYSTERESIS(tmp165, data->localData[0]->timeValue, data->simulationInfo->realParameter[2286] /* pwLine2.t2 PARAM */, 23, Less);
  jacobian->resultVars[85] /* $res_NLSJac2_86.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp164 && tmp165)?jacobian->tmpVars[105] /* pwLine2.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2284] /* pwLine2.Z.re PARAM */) * (jacobian->tmpVars[105] /* pwLine2.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2281] /* pwLine2.Y.im PARAM */) - ((jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2282] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[2283] /* pwLine2.Z.im PARAM */) * (jacobian->tmpVars[104] /* pwLine2.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2281] /* pwLine2.Y.im PARAM */) - ((jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2282] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2433
type: SIMPLE_ASSIGN
$res_NLSJac2_91.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine5.t1 and time < pwLine5.t2 then pwLine5.ir.im.SeedNLSJac2 else Bus_04.p[4].vi.SeedNLSJac2 - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine5.Z.re * (pwLine5.ir.im.SeedNLSJac2 + (-Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine5.Y.im - Bus_04.p[4].vi.SeedNLSJac2 * pwLine5.Y.re) + pwLine5.Z.im * (pwLine5.ir.re.SeedNLSJac2 + Bus_04.p[4].vi.SeedNLSJac2 * pwLine5.Y.im - Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine5.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2433(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2433};
  modelica_boolean tmp166;
  modelica_boolean tmp167;
  RELATIONHYSTERESIS(tmp166, data->localData[0]->timeValue, data->simulationInfo->realParameter[2318] /* pwLine5.t1 PARAM */, 32, GreaterEq);
  RELATIONHYSTERESIS(tmp167, data->localData[0]->timeValue, data->simulationInfo->realParameter[2319] /* pwLine5.t2 PARAM */, 33, Less);
  jacobian->resultVars[90] /* $res_NLSJac2_91.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp166 && tmp167)?jacobian->seedVars[2] /* pwLine5.ir.im.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2317] /* pwLine5.Z.re PARAM */) * (jacobian->seedVars[2] /* pwLine5.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2314] /* pwLine5.Y.im PARAM */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2315] /* pwLine5.Y.re PARAM */))) + (data->simulationInfo->realParameter[2316] /* pwLine5.Z.im PARAM */) * (jacobian->seedVars[48] /* pwLine5.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2314] /* pwLine5.Y.im PARAM */) - ((jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2315] /* pwLine5.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2434
type: SIMPLE_ASSIGN
Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 = $cse1 * gen_Bus_2_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 + $cse2 * gen_Bus_2_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2434(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2434};
  jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[204] /* $cse1 variable */) * (jacobian->tmpVars[51] /* gen_Bus_2_1.gENROU.ud.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[212] /* $cse2 variable */) * (jacobian->tmpVars[53] /* gen_Bus_2_1.gENROU.uq.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 2435
type: SIMPLE_ASSIGN
$res_NLSJac2_76.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.ir.re.SeedNLSJac2 else Bus_05.p[2].vr.SeedNLSJac2 - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine4.Z.re * (pwLine4.ir.re.SeedNLSJac2 + Bus_05.p[2].vi.SeedNLSJac2 * pwLine4.Y.im - Bus_05.p[2].vr.SeedNLSJac2 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_05.p[2].vr.SeedNLSJac2) * pwLine4.Y.im - Bus_05.p[2].vi.SeedNLSJac2 * pwLine4.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2435(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2435};
  modelica_boolean tmp168;
  modelica_boolean tmp169;
  RELATIONHYSTERESIS(tmp168, data->localData[0]->timeValue, data->simulationInfo->realParameter[2307] /* pwLine4.t1 PARAM */, 14, GreaterEq);
  RELATIONHYSTERESIS(tmp169, data->localData[0]->timeValue, data->simulationInfo->realParameter[2308] /* pwLine4.t2 PARAM */, 15, Less);
  jacobian->resultVars[75] /* $res_NLSJac2_76.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp168 && tmp169)?jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2306] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[11] /* pwLine4.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2303] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2304] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2305] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[121] /* pwLine4.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */)) * (data->simulationInfo->realParameter[2303] /* pwLine4.Y.im PARAM */) - ((jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2304] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2436
type: SIMPLE_ASSIGN
$res_NLSJac2_78.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.ir.re.SeedNLSJac2 else Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine.Z.re * (pwLine.ir.re.SeedNLSJac2 + Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.im - Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.re) - pwLine.Z.im * (pwLine.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine.Y.im - Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2436(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2436};
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  RELATIONHYSTERESIS(tmp170, data->localData[0]->timeValue, data->simulationInfo->realParameter[2197] /* pwLine.t1 PARAM */, 24, GreaterEq);
  RELATIONHYSTERESIS(tmp171, data->localData[0]->timeValue, data->simulationInfo->realParameter[2198] /* pwLine.t2 PARAM */, 25, Less);
  jacobian->resultVars[77] /* $res_NLSJac2_78.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp170 && tmp171)?jacobian->seedVars[75] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2196] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[75] /* pwLine.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2193] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2194] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2195] /* pwLine.Z.im PARAM */) * (jacobian->tmpVars[89] /* pwLine.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2193] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2194] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2437
type: SIMPLE_ASSIGN
$res_NLSJac2_80.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.re.SeedNLSJac2 else Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine.Z.re * (pwLine.is.re.SeedNLSJac2 + Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.im - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.re) - pwLine.Z.im * (pwLine.is.im.SeedNLSJac2 + (-Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine.Y.im - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2437(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2437};
  modelica_boolean tmp172;
  modelica_boolean tmp173;
  RELATIONHYSTERESIS(tmp172, data->localData[0]->timeValue, data->simulationInfo->realParameter[2197] /* pwLine.t1 PARAM */, 24, GreaterEq);
  RELATIONHYSTERESIS(tmp173, data->localData[0]->timeValue, data->simulationInfo->realParameter[2198] /* pwLine.t2 PARAM */, 25, Less);
  jacobian->resultVars[79] /* $res_NLSJac2_80.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp172 && tmp173)?jacobian->seedVars[9] /* pwLine.is.re.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[63] /* Bus_01.n.1.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2196] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[9] /* pwLine.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2193] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2194] /* pwLine.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2195] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[0] /* pwLine.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2193] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2194] /* pwLine.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2438
type: SIMPLE_ASSIGN
$res_NLSJac2_81.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine5.t1 and time < pwLine5.t2 then pwLine5.is.im.SeedNLSJac2 else Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 - Bus_04.p[4].vi.SeedNLSJac2 - (pwLine5.Z.re * (pwLine5.is.im.SeedNLSJac2 + (-Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine5.Y.im - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine5.Y.re) + pwLine5.Z.im * (pwLine5.is.re.SeedNLSJac2 + Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine5.Y.im - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine5.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2438(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2438};
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  RELATIONHYSTERESIS(tmp174, data->localData[0]->timeValue, data->simulationInfo->realParameter[2318] /* pwLine5.t1 PARAM */, 32, GreaterEq);
  RELATIONHYSTERESIS(tmp175, data->localData[0]->timeValue, data->simulationInfo->realParameter[2319] /* pwLine5.t2 PARAM */, 33, Less);
  jacobian->resultVars[80] /* $res_NLSJac2_81.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp174 && tmp175)?jacobian->seedVars[7] /* pwLine5.is.im.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2317] /* pwLine5.Z.re PARAM */) * (jacobian->seedVars[7] /* pwLine5.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2314] /* pwLine5.Y.im PARAM */) - ((jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2315] /* pwLine5.Y.re PARAM */))) + (data->simulationInfo->realParameter[2316] /* pwLine5.Z.im PARAM */) * (jacobian->seedVars[8] /* pwLine5.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2314] /* pwLine5.Y.im PARAM */) - ((jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2315] /* pwLine5.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2439
type: SIMPLE_ASSIGN
$res_NLSJac2_82.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine5.t1 and time < pwLine5.t2 then pwLine5.is.re.SeedNLSJac2 else Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine5.Z.re * (pwLine5.is.re.SeedNLSJac2 + Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine5.Y.im - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine5.Y.re) - pwLine5.Z.im * (pwLine5.is.im.SeedNLSJac2 + (-Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine5.Y.im - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine5.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2439(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2439};
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  RELATIONHYSTERESIS(tmp176, data->localData[0]->timeValue, data->simulationInfo->realParameter[2318] /* pwLine5.t1 PARAM */, 32, GreaterEq);
  RELATIONHYSTERESIS(tmp177, data->localData[0]->timeValue, data->simulationInfo->realParameter[2319] /* pwLine5.t2 PARAM */, 33, Less);
  jacobian->resultVars[81] /* $res_NLSJac2_82.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp176 && tmp177)?jacobian->seedVars[8] /* pwLine5.is.re.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2317] /* pwLine5.Z.re PARAM */) * (jacobian->seedVars[8] /* pwLine5.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2314] /* pwLine5.Y.im PARAM */) - ((jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2315] /* pwLine5.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2316] /* pwLine5.Z.im PARAM */) * (jacobian->seedVars[7] /* pwLine5.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2314] /* pwLine5.Y.im PARAM */) - ((jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2315] /* pwLine5.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2440
type: SIMPLE_ASSIGN
$res_NLSJac2_85.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_02.n[2].vr * Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 + Bus_02.n[2].vi * Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2) / sqrt(Bus_02.n[2].vr ^ 2.0 + Bus_02.n[2].vi ^ 2.0) - LOAD_02.v.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2440(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2440};
  modelica_real tmp178;
  modelica_real tmp179;
  tmp178 = data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */;
  tmp179 = data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */;
  jacobian->resultVars[84] /* $res_NLSJac2_85.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = DIVISION((data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */),sqrt((tmp178 * tmp178) + (tmp179 * tmp179)),"sqrt(Bus_02.n[2].vr ^ 2.0 + Bus_02.n[2].vi ^ 2.0)") - jacobian->seedVars[92] /* LOAD_02.v.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 2441
type: SIMPLE_ASSIGN
$res_NLSJac2_87.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.ir.re.$pDERNLSJac2.dummyVarNLSJac2 else Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine2.Z.re * (pwLine2.ir.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine2.Y.im - Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.ir.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine2.Y.im - Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine2.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2441(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2441};
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  RELATIONHYSTERESIS(tmp180, data->localData[0]->timeValue, data->simulationInfo->realParameter[2285] /* pwLine2.t1 PARAM */, 22, GreaterEq);
  RELATIONHYSTERESIS(tmp181, data->localData[0]->timeValue, data->simulationInfo->realParameter[2286] /* pwLine2.t2 PARAM */, 23, Less);
  jacobian->resultVars[86] /* $res_NLSJac2_87.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp180 && tmp181)?jacobian->tmpVars[104] /* pwLine2.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2284] /* pwLine2.Z.re PARAM */) * (jacobian->tmpVars[104] /* pwLine2.ir.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2281] /* pwLine2.Y.im PARAM */) - ((jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2282] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2283] /* pwLine2.Z.im PARAM */) * (jacobian->tmpVars[105] /* pwLine2.ir.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2281] /* pwLine2.Y.im PARAM */) - ((jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2282] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2442
type: SIMPLE_ASSIGN
$res_NLSJac2_92.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine5.t1 and time < pwLine5.t2 then pwLine5.ir.re.SeedNLSJac2 else Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine5.Z.re * (pwLine5.ir.re.SeedNLSJac2 + Bus_04.p[4].vi.SeedNLSJac2 * pwLine5.Y.im - Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine5.Y.re) - pwLine5.Z.im * (pwLine5.ir.im.SeedNLSJac2 + (-Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine5.Y.im - Bus_04.p[4].vi.SeedNLSJac2 * pwLine5.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2442(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2442};
  modelica_boolean tmp182;
  modelica_boolean tmp183;
  RELATIONHYSTERESIS(tmp182, data->localData[0]->timeValue, data->simulationInfo->realParameter[2318] /* pwLine5.t1 PARAM */, 32, GreaterEq);
  RELATIONHYSTERESIS(tmp183, data->localData[0]->timeValue, data->simulationInfo->realParameter[2319] /* pwLine5.t2 PARAM */, 33, Less);
  jacobian->resultVars[91] /* $res_NLSJac2_92.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp182 && tmp183)?jacobian->seedVars[48] /* pwLine5.ir.re.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2317] /* pwLine5.Z.re PARAM */) * (jacobian->seedVars[48] /* pwLine5.ir.re.SeedNLSJac2 SEED_VAR */ + (jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2314] /* pwLine5.Y.im PARAM */) - ((jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2315] /* pwLine5.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2316] /* pwLine5.Z.im PARAM */) * (jacobian->seedVars[2] /* pwLine5.ir.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2314] /* pwLine5.Y.im PARAM */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[2315] /* pwLine5.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2443
type: SIMPLE_ASSIGN
$res_NLSJac2_93.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 else Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine2.Z.re * (pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine2.Y.im - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine2.Y.re) - pwLine2.Z.im * (pwLine2.is.im.SeedNLSJac2 + (-Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine2.Y.im - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine2.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2443};
  modelica_boolean tmp184;
  modelica_boolean tmp185;
  RELATIONHYSTERESIS(tmp184, data->localData[0]->timeValue, data->simulationInfo->realParameter[2285] /* pwLine2.t1 PARAM */, 22, GreaterEq);
  RELATIONHYSTERESIS(tmp185, data->localData[0]->timeValue, data->simulationInfo->realParameter[2286] /* pwLine2.t2 PARAM */, 23, Less);
  jacobian->resultVars[92] /* $res_NLSJac2_93.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp184 && tmp185)?jacobian->tmpVars[123] /* pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2284] /* pwLine2.Z.re PARAM */) * (jacobian->tmpVars[123] /* pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2281] /* pwLine2.Y.im PARAM */) - ((jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2282] /* pwLine2.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2283] /* pwLine2.Z.im PARAM */) * (jacobian->seedVars[1] /* pwLine2.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2281] /* pwLine2.Y.im PARAM */) - ((jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2282] /* pwLine2.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2444
type: SIMPLE_ASSIGN
$res_NLSJac2_94.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine2.t1 and time < pwLine2.t2 then pwLine2.is.im.SeedNLSJac2 else Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 - Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine2.Z.re * (pwLine2.is.im.SeedNLSJac2 + (-Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine2.Y.im - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine2.Y.re) + pwLine2.Z.im * (pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 + Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine2.Y.im - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine2.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2444(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2444};
  modelica_boolean tmp186;
  modelica_boolean tmp187;
  RELATIONHYSTERESIS(tmp186, data->localData[0]->timeValue, data->simulationInfo->realParameter[2285] /* pwLine2.t1 PARAM */, 22, GreaterEq);
  RELATIONHYSTERESIS(tmp187, data->localData[0]->timeValue, data->simulationInfo->realParameter[2286] /* pwLine2.t2 PARAM */, 23, Less);
  jacobian->resultVars[93] /* $res_NLSJac2_94.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp186 && tmp187)?jacobian->seedVars[1] /* pwLine2.is.im.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2284] /* pwLine2.Z.re PARAM */) * (jacobian->seedVars[1] /* pwLine2.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2281] /* pwLine2.Y.im PARAM */) - ((jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2282] /* pwLine2.Y.re PARAM */))) + (data->simulationInfo->realParameter[2283] /* pwLine2.Z.im PARAM */) * (jacobian->tmpVars[123] /* pwLine2.is.re.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + (jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2281] /* pwLine2.Y.im PARAM */) - ((jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2282] /* pwLine2.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2445
type: SIMPLE_ASSIGN
$res_NLSJac2_95.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.re.SeedNLSJac2 else Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 - Bus_05.p[2].vr.SeedNLSJac2 - (pwLine4.Z.re * (pwLine4.is.re.SeedNLSJac2 + Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine4.Y.im - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine4.Y.re) - pwLine4.Z.im * (pwLine4.is.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine4.Y.im - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine4.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2445(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2445};
  modelica_boolean tmp188;
  modelica_boolean tmp189;
  RELATIONHYSTERESIS(tmp188, data->localData[0]->timeValue, data->simulationInfo->realParameter[2307] /* pwLine4.t1 PARAM */, 14, GreaterEq);
  RELATIONHYSTERESIS(tmp189, data->localData[0]->timeValue, data->simulationInfo->realParameter[2308] /* pwLine4.t2 PARAM */, 15, Less);
  jacobian->resultVars[94] /* $res_NLSJac2_95.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp188 && tmp189)?jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2306] /* pwLine4.Z.re PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2303] /* pwLine4.Y.im PARAM */) - ((jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2304] /* pwLine4.Y.re PARAM */))) - ((data->simulationInfo->realParameter[2305] /* pwLine4.Z.im PARAM */) * (jacobian->tmpVars[125] /* pwLine4.is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2303] /* pwLine4.Y.im PARAM */) - ((jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2304] /* pwLine4.Y.re PARAM */))))));
  TRACE_POP
}

/*
equation index: 2446
type: SIMPLE_ASSIGN
$res_NLSJac2_96.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine4.t1 and time < pwLine4.t2 then pwLine4.is.im.$pDERNLSJac2.dummyVarNLSJac2 else Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 - Bus_05.p[2].vi.SeedNLSJac2 - (pwLine4.Z.re * (pwLine4.is.im.$pDERNLSJac2.dummyVarNLSJac2 + (-Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine4.Y.im - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine4.Y.re) + pwLine4.Z.im * (pwLine4.is.re.SeedNLSJac2 + Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine4.Y.im - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine4.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2446(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2446};
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  RELATIONHYSTERESIS(tmp190, data->localData[0]->timeValue, data->simulationInfo->realParameter[2307] /* pwLine4.t1 PARAM */, 14, GreaterEq);
  RELATIONHYSTERESIS(tmp191, data->localData[0]->timeValue, data->simulationInfo->realParameter[2308] /* pwLine4.t2 PARAM */, 15, Less);
  jacobian->resultVars[95] /* $res_NLSJac2_96.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp190 && tmp191)?jacobian->tmpVars[125] /* pwLine4.is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */ - ((data->simulationInfo->realParameter[2306] /* pwLine4.Z.re PARAM */) * (jacobian->tmpVars[125] /* pwLine4.is.im.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ + ((-jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2303] /* pwLine4.Y.im PARAM */) - ((jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2304] /* pwLine4.Y.re PARAM */))) + (data->simulationInfo->realParameter[2305] /* pwLine4.Z.im PARAM */) * (jacobian->seedVars[5] /* pwLine4.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2303] /* pwLine4.Y.im PARAM */) - ((jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2304] /* pwLine4.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2447
type: SIMPLE_ASSIGN
$res_NLSJac2_103.$pDERNLSJac2.dummyVarNLSJac2 = if time >= pwLine.t1 and time < pwLine.t2 then pwLine.is.im.SeedNLSJac2 else Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 - Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 - (pwLine.Z.re * (pwLine.is.im.SeedNLSJac2 + (-Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2) * pwLine.Y.im - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.re) + pwLine.Z.im * (pwLine.is.re.SeedNLSJac2 + Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.im - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * pwLine.Y.re))
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2447(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2447};
  modelica_boolean tmp192;
  modelica_boolean tmp193;
  RELATIONHYSTERESIS(tmp192, data->localData[0]->timeValue, data->simulationInfo->realParameter[2197] /* pwLine.t1 PARAM */, 24, GreaterEq);
  RELATIONHYSTERESIS(tmp193, data->localData[0]->timeValue, data->simulationInfo->realParameter[2198] /* pwLine.t2 PARAM */, 25, Less);
  jacobian->resultVars[102] /* $res_NLSJac2_103.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((tmp192 && tmp193)?jacobian->seedVars[0] /* pwLine.is.im.SeedNLSJac2 SEED_VAR */:jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[62] /* Bus_01.n.1.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->simulationInfo->realParameter[2196] /* pwLine.Z.re PARAM */) * (jacobian->seedVars[0] /* pwLine.is.im.SeedNLSJac2 SEED_VAR */ + ((-jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->simulationInfo->realParameter[2193] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2194] /* pwLine.Y.re PARAM */))) + (data->simulationInfo->realParameter[2195] /* pwLine.Z.im PARAM */) * (jacobian->seedVars[9] /* pwLine.is.re.SeedNLSJac2 SEED_VAR */ + (jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2193] /* pwLine.Y.im PARAM */) - ((jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[2194] /* pwLine.Y.re PARAM */)))));
  TRACE_POP
}

/*
equation index: 2448
type: SIMPLE_ASSIGN
LOAD_04.kP.$pDERNLSJac2.dummyVarNLSJac2 = if LOAD_04.v < 0.5 * LOAD_04.PQBRAK and LOAD_04.v > 0.0 then 2.0 * 2.0 * LOAD_04.v / LOAD_04.PQBRAK * LOAD_04.v.SeedNLSJac2 * LOAD_04.PQBRAK / LOAD_04.PQBRAK ^ 2.0 else if LOAD_04.v > 0.5 * LOAD_04.PQBRAK and LOAD_04.v < LOAD_04.PQBRAK then (-2.0) * 2.0 * (LOAD_04.v - LOAD_04.PQBRAK) / LOAD_04.PQBRAK * LOAD_04.v.SeedNLSJac2 * LOAD_04.PQBRAK / LOAD_04.PQBRAK ^ 2.0 else 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2448(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2448};
  modelica_boolean tmp194;
  modelica_boolean tmp195;
  modelica_real tmp196;
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  modelica_real tmp199;
  modelica_boolean tmp200;
  modelica_real tmp201;
  modelica_boolean tmp202;
  modelica_real tmp203;
  RELATIONHYSTERESIS(tmp194, data->localData[0]->realVars[341] /* LOAD_04.v variable */, (0.5) * (data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */), 48, Less);
  RELATIONHYSTERESIS(tmp195, data->localData[0]->realVars[341] /* LOAD_04.v variable */, 0.0, 49, Greater);
  tmp202 = (modelica_boolean)(tmp194 && tmp195);
  if(tmp202)
  {
    tmp196 = data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */;
    tmp203 = (2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[341] /* LOAD_04.v variable */,data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */,"LOAD_04.PQBRAK"))) * ((jacobian->seedVars[88] /* LOAD_04.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */)),(tmp196 * tmp196),"LOAD_04.PQBRAK ^ 2.0"));
  }
  else
  {
    RELATIONHYSTERESIS(tmp197, data->localData[0]->realVars[341] /* LOAD_04.v variable */, (0.5) * (data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */), 50, Greater);
    RELATIONHYSTERESIS(tmp198, data->localData[0]->realVars[341] /* LOAD_04.v variable */, data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */, 51, Less);
    tmp200 = (modelica_boolean)(tmp197 && tmp198);
    if(tmp200)
    {
      tmp199 = data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */;
      tmp201 = (-2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[341] /* LOAD_04.v variable */ - data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */,data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */,"LOAD_04.PQBRAK"))) * ((jacobian->seedVars[88] /* LOAD_04.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */)),(tmp199 * tmp199),"LOAD_04.PQBRAK ^ 2.0"));
    }
    else
    {
      tmp201 = 0.0;
    }
    tmp203 = tmp201;
  }
  jacobian->tmpVars[45] /* LOAD_04.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp203;
  TRACE_POP
}

/*
equation index: 2449
type: SIMPLE_ASSIGN
LOAD_04.Q.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_04.t1 and time <= LOAD_04.t1 + LOAD_04.d_t then LOAD_04.S_I.im * LOAD_04.kI * LOAD_04.v.SeedNLSJac2 + LOAD_04.S_Y.im * 2.0 * LOAD_04.v * LOAD_04.v.SeedNLSJac2 + LOAD_04.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_04.S_P.im + LOAD_04.d_Q) else LOAD_04.S_I.im * LOAD_04.kI * LOAD_04.v.SeedNLSJac2 + LOAD_04.S_Y.im * 2.0 * LOAD_04.v * LOAD_04.v.SeedNLSJac2 + LOAD_04.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_04.S_P.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2449(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2449};
  modelica_boolean tmp204;
  modelica_boolean tmp205;
  RELATIONHYSTERESIS(tmp204, data->localData[0]->timeValue, data->simulationInfo->realParameter[206] /* LOAD_04.t1 PARAM */, 46, GreaterEq);
  RELATIONHYSTERESIS(tmp205, data->localData[0]->timeValue, data->simulationInfo->realParameter[206] /* LOAD_04.t1 PARAM */ + data->simulationInfo->realParameter[200] /* LOAD_04.d_t PARAM */, 47, LessEq);
  jacobian->tmpVars[46] /* LOAD_04.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp204 && tmp205)?(data->simulationInfo->realParameter[172] /* LOAD_04.S_I.im PARAM */) * ((data->localData[0]->realVars[339] /* LOAD_04.kI variable */) * (jacobian->seedVars[88] /* LOAD_04.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[176] /* LOAD_04.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[341] /* LOAD_04.v variable */)) * (jacobian->seedVars[88] /* LOAD_04.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[45] /* LOAD_04.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[174] /* LOAD_04.S_P.im PARAM */ + data->simulationInfo->realParameter[199] /* LOAD_04.d_Q PARAM */):(data->simulationInfo->realParameter[172] /* LOAD_04.S_I.im PARAM */) * ((data->localData[0]->realVars[339] /* LOAD_04.kI variable */) * (jacobian->seedVars[88] /* LOAD_04.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[176] /* LOAD_04.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[341] /* LOAD_04.v variable */)) * (jacobian->seedVars[88] /* LOAD_04.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[45] /* LOAD_04.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[174] /* LOAD_04.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 2450
type: SIMPLE_ASSIGN
$res_NLSJac2_9.$pDERNLSJac2.dummyVarNLSJac2 = Bus_04.p[4].vr * Bus_04.n[2].ii.SeedNLSJac2 + Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * Bus_04.n[2].ii + (-Bus_04.p[4].vi.SeedNLSJac2) * Bus_04.n[2].ir - LOAD_04.Q.$pDERNLSJac2.dummyVarNLSJac2 - Bus_04.p[4].vi * Bus_04.n[2].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2450(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2450};
  jacobian->resultVars[8] /* $res_NLSJac2_9.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */) * (jacobian->seedVars[50] /* Bus_04.n[2].ii.SeedNLSJac2 SEED_VAR */) + (jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[244] /* Bus_04.n[2].ii variable */) + ((-jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */)) * (data->localData[0]->realVars[245] /* Bus_04.n[2].ir variable */) - jacobian->tmpVars[46] /* LOAD_04.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */) * (jacobian->seedVars[49] /* Bus_04.n[2].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2451
type: SIMPLE_ASSIGN
LOAD_04.P.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_04.t1 and time <= LOAD_04.t1 + LOAD_04.d_t then LOAD_04.S_I.re * LOAD_04.kI * LOAD_04.v.SeedNLSJac2 + LOAD_04.S_Y.re * 2.0 * LOAD_04.v * LOAD_04.v.SeedNLSJac2 + LOAD_04.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_04.S_P.re + LOAD_04.d_P) else LOAD_04.S_I.re * LOAD_04.kI * LOAD_04.v.SeedNLSJac2 + LOAD_04.S_Y.re * 2.0 * LOAD_04.v * LOAD_04.v.SeedNLSJac2 + LOAD_04.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_04.S_P.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2451(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2451};
  modelica_boolean tmp206;
  modelica_boolean tmp207;
  RELATIONHYSTERESIS(tmp206, data->localData[0]->timeValue, data->simulationInfo->realParameter[206] /* LOAD_04.t1 PARAM */, 46, GreaterEq);
  RELATIONHYSTERESIS(tmp207, data->localData[0]->timeValue, data->simulationInfo->realParameter[206] /* LOAD_04.t1 PARAM */ + data->simulationInfo->realParameter[200] /* LOAD_04.d_t PARAM */, 47, LessEq);
  jacobian->tmpVars[47] /* LOAD_04.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp206 && tmp207)?(data->simulationInfo->realParameter[173] /* LOAD_04.S_I.re PARAM */) * ((data->localData[0]->realVars[339] /* LOAD_04.kI variable */) * (jacobian->seedVars[88] /* LOAD_04.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[177] /* LOAD_04.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[341] /* LOAD_04.v variable */)) * (jacobian->seedVars[88] /* LOAD_04.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[45] /* LOAD_04.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[175] /* LOAD_04.S_P.re PARAM */ + data->simulationInfo->realParameter[198] /* LOAD_04.d_P PARAM */):(data->simulationInfo->realParameter[173] /* LOAD_04.S_I.re PARAM */) * ((data->localData[0]->realVars[339] /* LOAD_04.kI variable */) * (jacobian->seedVars[88] /* LOAD_04.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[177] /* LOAD_04.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[341] /* LOAD_04.v variable */)) * (jacobian->seedVars[88] /* LOAD_04.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[45] /* LOAD_04.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[175] /* LOAD_04.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 2452
type: SIMPLE_ASSIGN
$res_NLSJac2_10.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_04.p[4].vi) * Bus_04.n[2].ii.SeedNLSJac2 - Bus_04.p[4].vi.SeedNLSJac2 * Bus_04.n[2].ii - LOAD_04.P.$pDERNLSJac2.dummyVarNLSJac2 - Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 * Bus_04.n[2].ir - Bus_04.p[4].vr * Bus_04.n[2].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2452(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2452};
  jacobian->resultVars[9] /* $res_NLSJac2_10.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */)) * (jacobian->seedVars[50] /* Bus_04.n[2].ii.SeedNLSJac2 SEED_VAR */) - ((jacobian->seedVars[71] /* Bus_04.p[4].vi.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[244] /* Bus_04.n[2].ii variable */)) - jacobian->tmpVars[47] /* LOAD_04.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[94] /* Bus_04.p.4.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[245] /* Bus_04.n[2].ir variable */)) - ((data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */) * (jacobian->seedVars[49] /* Bus_04.n[2].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2453
type: SIMPLE_ASSIGN
LOAD_09.kP.$pDERNLSJac2.dummyVarNLSJac2 = if LOAD_09.v < 0.5 * LOAD_09.PQBRAK and LOAD_09.v > 0.0 then 2.0 * 2.0 * LOAD_09.v / LOAD_09.PQBRAK * LOAD_09.v.SeedNLSJac2 * LOAD_09.PQBRAK / LOAD_09.PQBRAK ^ 2.0 else if LOAD_09.v > 0.5 * LOAD_09.PQBRAK and LOAD_09.v < LOAD_09.PQBRAK then (-2.0) * 2.0 * (LOAD_09.v - LOAD_09.PQBRAK) / LOAD_09.PQBRAK * LOAD_09.v.SeedNLSJac2 * LOAD_09.PQBRAK / LOAD_09.PQBRAK ^ 2.0 else 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2453(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2453};
  modelica_boolean tmp208;
  modelica_boolean tmp209;
  modelica_real tmp210;
  modelica_boolean tmp211;
  modelica_boolean tmp212;
  modelica_real tmp213;
  modelica_boolean tmp214;
  modelica_real tmp215;
  modelica_boolean tmp216;
  modelica_real tmp217;
  RELATIONHYSTERESIS(tmp208, data->localData[0]->realVars[359] /* LOAD_09.v variable */, (0.5) * (data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */), 56, Less);
  RELATIONHYSTERESIS(tmp209, data->localData[0]->realVars[359] /* LOAD_09.v variable */, 0.0, 57, Greater);
  tmp216 = (modelica_boolean)(tmp208 && tmp209);
  if(tmp216)
  {
    tmp210 = data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */;
    tmp217 = (2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[359] /* LOAD_09.v variable */,data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */,"LOAD_09.PQBRAK"))) * ((jacobian->seedVars[89] /* LOAD_09.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */)),(tmp210 * tmp210),"LOAD_09.PQBRAK ^ 2.0"));
  }
  else
  {
    RELATIONHYSTERESIS(tmp211, data->localData[0]->realVars[359] /* LOAD_09.v variable */, (0.5) * (data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */), 58, Greater);
    RELATIONHYSTERESIS(tmp212, data->localData[0]->realVars[359] /* LOAD_09.v variable */, data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */, 59, Less);
    tmp214 = (modelica_boolean)(tmp211 && tmp212);
    if(tmp214)
    {
      tmp213 = data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */;
      tmp215 = (-2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[359] /* LOAD_09.v variable */ - data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */,data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */,"LOAD_09.PQBRAK"))) * ((jacobian->seedVars[89] /* LOAD_09.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */)),(tmp213 * tmp213),"LOAD_09.PQBRAK ^ 2.0"));
    }
    else
    {
      tmp215 = 0.0;
    }
    tmp217 = tmp215;
  }
  jacobian->tmpVars[41] /* LOAD_09.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp217;
  TRACE_POP
}

/*
equation index: 2454
type: SIMPLE_ASSIGN
LOAD_09.Q.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_09.t1 and time <= LOAD_09.t1 + LOAD_09.d_t then LOAD_09.S_I.im * LOAD_09.kI * LOAD_09.v.SeedNLSJac2 + LOAD_09.S_Y.im * 2.0 * LOAD_09.v * LOAD_09.v.SeedNLSJac2 + LOAD_09.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_09.S_P.im + LOAD_09.d_Q) else LOAD_09.S_I.im * LOAD_09.kI * LOAD_09.v.SeedNLSJac2 + LOAD_09.S_Y.im * 2.0 * LOAD_09.v * LOAD_09.v.SeedNLSJac2 + LOAD_09.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_09.S_P.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2454(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2454};
  modelica_boolean tmp218;
  modelica_boolean tmp219;
  RELATIONHYSTERESIS(tmp218, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* LOAD_09.t1 PARAM */, 54, GreaterEq);
  RELATIONHYSTERESIS(tmp219, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* LOAD_09.t1 PARAM */ + data->simulationInfo->realParameter[326] /* LOAD_09.d_t PARAM */, 55, LessEq);
  jacobian->tmpVars[42] /* LOAD_09.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp218 && tmp219)?(data->simulationInfo->realParameter[298] /* LOAD_09.S_I.im PARAM */) * ((data->localData[0]->realVars[357] /* LOAD_09.kI variable */) * (jacobian->seedVars[89] /* LOAD_09.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[302] /* LOAD_09.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[359] /* LOAD_09.v variable */)) * (jacobian->seedVars[89] /* LOAD_09.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[41] /* LOAD_09.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[300] /* LOAD_09.S_P.im PARAM */ + data->simulationInfo->realParameter[325] /* LOAD_09.d_Q PARAM */):(data->simulationInfo->realParameter[298] /* LOAD_09.S_I.im PARAM */) * ((data->localData[0]->realVars[357] /* LOAD_09.kI variable */) * (jacobian->seedVars[89] /* LOAD_09.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[302] /* LOAD_09.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[359] /* LOAD_09.v variable */)) * (jacobian->seedVars[89] /* LOAD_09.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[41] /* LOAD_09.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[300] /* LOAD_09.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 2455
type: SIMPLE_ASSIGN
$res_NLSJac2_18.$pDERNLSJac2.dummyVarNLSJac2 = Bus_09.p[3].vr * Bus_09.p[2].ii.SeedNLSJac2 + Bus_09.p[3].vr.SeedNLSJac2 * Bus_09.p[2].ii + (-Bus_09.p[3].vi.SeedNLSJac2) * Bus_09.p[2].ir - LOAD_09.Q.$pDERNLSJac2.dummyVarNLSJac2 - Bus_09.p[3].vi * Bus_09.p[2].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2455(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2455};
  jacobian->resultVars[17] /* $res_NLSJac2_18.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */) * (jacobian->seedVars[47] /* Bus_09.p[2].ii.SeedNLSJac2 SEED_VAR */) + (jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[290] /* Bus_09.p[2].ii variable */) + ((-jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */)) * (data->localData[0]->realVars[291] /* Bus_09.p[2].ir variable */) - jacobian->tmpVars[42] /* LOAD_09.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */) * (jacobian->seedVars[46] /* Bus_09.p[2].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2456
type: SIMPLE_ASSIGN
LOAD_09.P.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_09.t1 and time <= LOAD_09.t1 + LOAD_09.d_t then LOAD_09.S_I.re * LOAD_09.kI * LOAD_09.v.SeedNLSJac2 + LOAD_09.S_Y.re * 2.0 * LOAD_09.v * LOAD_09.v.SeedNLSJac2 + LOAD_09.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_09.S_P.re + LOAD_09.d_P) else LOAD_09.S_I.re * LOAD_09.kI * LOAD_09.v.SeedNLSJac2 + LOAD_09.S_Y.re * 2.0 * LOAD_09.v * LOAD_09.v.SeedNLSJac2 + LOAD_09.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_09.S_P.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2456(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2456};
  modelica_boolean tmp220;
  modelica_boolean tmp221;
  RELATIONHYSTERESIS(tmp220, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* LOAD_09.t1 PARAM */, 54, GreaterEq);
  RELATIONHYSTERESIS(tmp221, data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* LOAD_09.t1 PARAM */ + data->simulationInfo->realParameter[326] /* LOAD_09.d_t PARAM */, 55, LessEq);
  jacobian->tmpVars[43] /* LOAD_09.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp220 && tmp221)?(data->simulationInfo->realParameter[299] /* LOAD_09.S_I.re PARAM */) * ((data->localData[0]->realVars[357] /* LOAD_09.kI variable */) * (jacobian->seedVars[89] /* LOAD_09.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[303] /* LOAD_09.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[359] /* LOAD_09.v variable */)) * (jacobian->seedVars[89] /* LOAD_09.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[41] /* LOAD_09.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[301] /* LOAD_09.S_P.re PARAM */ + data->simulationInfo->realParameter[324] /* LOAD_09.d_P PARAM */):(data->simulationInfo->realParameter[299] /* LOAD_09.S_I.re PARAM */) * ((data->localData[0]->realVars[357] /* LOAD_09.kI variable */) * (jacobian->seedVars[89] /* LOAD_09.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[303] /* LOAD_09.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[359] /* LOAD_09.v variable */)) * (jacobian->seedVars[89] /* LOAD_09.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[41] /* LOAD_09.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[301] /* LOAD_09.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 2457
type: SIMPLE_ASSIGN
$res_NLSJac2_19.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_09.p[3].vi) * Bus_09.p[2].ii.SeedNLSJac2 - Bus_09.p[3].vi.SeedNLSJac2 * Bus_09.p[2].ii - LOAD_09.P.$pDERNLSJac2.dummyVarNLSJac2 - Bus_09.p[3].vr.SeedNLSJac2 * Bus_09.p[2].ir - Bus_09.p[3].vr * Bus_09.p[2].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2457(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2457};
  jacobian->resultVars[18] /* $res_NLSJac2_19.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */)) * (jacobian->seedVars[47] /* Bus_09.p[2].ii.SeedNLSJac2 SEED_VAR */) - ((jacobian->seedVars[64] /* Bus_09.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[290] /* Bus_09.p[2].ii variable */)) - jacobian->tmpVars[43] /* LOAD_09.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->seedVars[65] /* Bus_09.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[291] /* Bus_09.p[2].ir variable */)) - ((data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */) * (jacobian->seedVars[46] /* Bus_09.p[2].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2458
type: SIMPLE_ASSIGN
LOAD_06.kP.$pDERNLSJac2.dummyVarNLSJac2 = if LOAD_06.v < 0.5 * LOAD_06.PQBRAK and LOAD_06.v > 0.0 then 2.0 * 2.0 * LOAD_06.v / LOAD_06.PQBRAK * LOAD_06.v.SeedNLSJac2 * LOAD_06.PQBRAK / LOAD_06.PQBRAK ^ 2.0 else if LOAD_06.v > 0.5 * LOAD_06.PQBRAK and LOAD_06.v < LOAD_06.PQBRAK then (-2.0) * 2.0 * (LOAD_06.v - LOAD_06.PQBRAK) / LOAD_06.PQBRAK * LOAD_06.v.SeedNLSJac2 * LOAD_06.PQBRAK / LOAD_06.PQBRAK ^ 2.0 else 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2458(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2458};
  modelica_boolean tmp222;
  modelica_boolean tmp223;
  modelica_real tmp224;
  modelica_boolean tmp225;
  modelica_boolean tmp226;
  modelica_real tmp227;
  modelica_boolean tmp228;
  modelica_real tmp229;
  modelica_boolean tmp230;
  modelica_real tmp231;
  RELATIONHYSTERESIS(tmp222, data->localData[0]->realVars[353] /* LOAD_06.v variable */, (0.5) * (data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */), 74, Less);
  RELATIONHYSTERESIS(tmp223, data->localData[0]->realVars[353] /* LOAD_06.v variable */, 0.0, 75, Greater);
  tmp230 = (modelica_boolean)(tmp222 && tmp223);
  if(tmp230)
  {
    tmp224 = data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */;
    tmp231 = (2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[353] /* LOAD_06.v variable */,data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */,"LOAD_06.PQBRAK"))) * ((jacobian->seedVars[90] /* LOAD_06.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */)),(tmp224 * tmp224),"LOAD_06.PQBRAK ^ 2.0"));
  }
  else
  {
    RELATIONHYSTERESIS(tmp225, data->localData[0]->realVars[353] /* LOAD_06.v variable */, (0.5) * (data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */), 76, Greater);
    RELATIONHYSTERESIS(tmp226, data->localData[0]->realVars[353] /* LOAD_06.v variable */, data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */, 77, Less);
    tmp228 = (modelica_boolean)(tmp225 && tmp226);
    if(tmp228)
    {
      tmp227 = data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */;
      tmp229 = (-2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[353] /* LOAD_06.v variable */ - data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */,data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */,"LOAD_06.PQBRAK"))) * ((jacobian->seedVars[90] /* LOAD_06.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */)),(tmp227 * tmp227),"LOAD_06.PQBRAK ^ 2.0"));
    }
    else
    {
      tmp229 = 0.0;
    }
    tmp231 = tmp229;
  }
  jacobian->tmpVars[37] /* LOAD_06.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp231;
  TRACE_POP
}

/*
equation index: 2459
type: SIMPLE_ASSIGN
LOAD_06.Q.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_06.t1 and time <= LOAD_06.t1 + LOAD_06.d_t then LOAD_06.S_I.im * LOAD_06.kI * LOAD_06.v.SeedNLSJac2 + LOAD_06.S_Y.im * 2.0 * LOAD_06.v * LOAD_06.v.SeedNLSJac2 + LOAD_06.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_06.S_P.im + LOAD_06.d_Q) else LOAD_06.S_I.im * LOAD_06.kI * LOAD_06.v.SeedNLSJac2 + LOAD_06.S_Y.im * 2.0 * LOAD_06.v * LOAD_06.v.SeedNLSJac2 + LOAD_06.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_06.S_P.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2459(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2459};
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  RELATIONHYSTERESIS(tmp232, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* LOAD_06.t1 PARAM */, 72, GreaterEq);
  RELATIONHYSTERESIS(tmp233, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* LOAD_06.t1 PARAM */ + data->simulationInfo->realParameter[284] /* LOAD_06.d_t PARAM */, 73, LessEq);
  jacobian->tmpVars[38] /* LOAD_06.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp232 && tmp233)?(data->simulationInfo->realParameter[256] /* LOAD_06.S_I.im PARAM */) * ((data->localData[0]->realVars[351] /* LOAD_06.kI variable */) * (jacobian->seedVars[90] /* LOAD_06.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[260] /* LOAD_06.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[353] /* LOAD_06.v variable */)) * (jacobian->seedVars[90] /* LOAD_06.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[37] /* LOAD_06.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258] /* LOAD_06.S_P.im PARAM */ + data->simulationInfo->realParameter[283] /* LOAD_06.d_Q PARAM */):(data->simulationInfo->realParameter[256] /* LOAD_06.S_I.im PARAM */) * ((data->localData[0]->realVars[351] /* LOAD_06.kI variable */) * (jacobian->seedVars[90] /* LOAD_06.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[260] /* LOAD_06.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[353] /* LOAD_06.v variable */)) * (jacobian->seedVars[90] /* LOAD_06.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[37] /* LOAD_06.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[258] /* LOAD_06.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 2460
type: SIMPLE_ASSIGN
$res_NLSJac2_39.$pDERNLSJac2.dummyVarNLSJac2 = Bus_06.p[3].vr * Bus_06.n[1].ii.SeedNLSJac2 + Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 * Bus_06.n[1].ii + (-Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2) * Bus_06.n[1].ir - LOAD_06.Q.$pDERNLSJac2.dummyVarNLSJac2 - Bus_06.p[3].vi * Bus_06.n[1].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2460(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2460};
  jacobian->resultVars[38] /* $res_NLSJac2_39.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */) * (jacobian->seedVars[31] /* Bus_06.n[1].ii.SeedNLSJac2 SEED_VAR */) + (jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[264] /* Bus_06.n[1].ii variable */) + ((-jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->localData[0]->realVars[265] /* Bus_06.n[1].ir variable */) - jacobian->tmpVars[38] /* LOAD_06.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */) * (jacobian->seedVars[29] /* Bus_06.n[1].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2461
type: SIMPLE_ASSIGN
LOAD_06.P.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_06.t1 and time <= LOAD_06.t1 + LOAD_06.d_t then LOAD_06.S_I.re * LOAD_06.kI * LOAD_06.v.SeedNLSJac2 + LOAD_06.S_Y.re * 2.0 * LOAD_06.v * LOAD_06.v.SeedNLSJac2 + LOAD_06.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_06.S_P.re + LOAD_06.d_P) else LOAD_06.S_I.re * LOAD_06.kI * LOAD_06.v.SeedNLSJac2 + LOAD_06.S_Y.re * 2.0 * LOAD_06.v * LOAD_06.v.SeedNLSJac2 + LOAD_06.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_06.S_P.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2461(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2461};
  modelica_boolean tmp234;
  modelica_boolean tmp235;
  RELATIONHYSTERESIS(tmp234, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* LOAD_06.t1 PARAM */, 72, GreaterEq);
  RELATIONHYSTERESIS(tmp235, data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* LOAD_06.t1 PARAM */ + data->simulationInfo->realParameter[284] /* LOAD_06.d_t PARAM */, 73, LessEq);
  jacobian->tmpVars[39] /* LOAD_06.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp234 && tmp235)?(data->simulationInfo->realParameter[257] /* LOAD_06.S_I.re PARAM */) * ((data->localData[0]->realVars[351] /* LOAD_06.kI variable */) * (jacobian->seedVars[90] /* LOAD_06.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[261] /* LOAD_06.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[353] /* LOAD_06.v variable */)) * (jacobian->seedVars[90] /* LOAD_06.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[37] /* LOAD_06.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[259] /* LOAD_06.S_P.re PARAM */ + data->simulationInfo->realParameter[282] /* LOAD_06.d_P PARAM */):(data->simulationInfo->realParameter[257] /* LOAD_06.S_I.re PARAM */) * ((data->localData[0]->realVars[351] /* LOAD_06.kI variable */) * (jacobian->seedVars[90] /* LOAD_06.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[261] /* LOAD_06.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[353] /* LOAD_06.v variable */)) * (jacobian->seedVars[90] /* LOAD_06.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[37] /* LOAD_06.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[259] /* LOAD_06.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 2462
type: SIMPLE_ASSIGN
$res_NLSJac2_40.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_06.p[3].vi) * Bus_06.n[1].ii.SeedNLSJac2 - Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 * Bus_06.n[1].ii - LOAD_06.P.$pDERNLSJac2.dummyVarNLSJac2 - Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 * Bus_06.n[1].ir - Bus_06.p[3].vr * Bus_06.n[1].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2462(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2462};
  jacobian->resultVars[39] /* $res_NLSJac2_40.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */)) * (jacobian->seedVars[31] /* Bus_06.n[1].ii.SeedNLSJac2 SEED_VAR */) - ((jacobian->tmpVars[79] /* Bus_06.p.3.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[264] /* Bus_06.n[1].ii variable */)) - jacobian->tmpVars[39] /* LOAD_06.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[78] /* Bus_06.p.3.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[265] /* Bus_06.n[1].ir variable */)) - ((data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */) * (jacobian->seedVars[29] /* Bus_06.n[1].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2463
type: SIMPLE_ASSIGN
LOAD_14.kP.$pDERNLSJac2.dummyVarNLSJac2 = if LOAD_14.v < 0.5 * LOAD_14.PQBRAK and LOAD_14.v > 0.0 then 2.0 * 2.0 * LOAD_14.v / LOAD_14.PQBRAK * LOAD_14.v.SeedNLSJac2 * LOAD_14.PQBRAK / LOAD_14.PQBRAK ^ 2.0 else if LOAD_14.v > 0.5 * LOAD_14.PQBRAK and LOAD_14.v < LOAD_14.PQBRAK then (-2.0) * 2.0 * (LOAD_14.v - LOAD_14.PQBRAK) / LOAD_14.PQBRAK * LOAD_14.v.SeedNLSJac2 * LOAD_14.PQBRAK / LOAD_14.PQBRAK ^ 2.0 else 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2463(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2463};
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  modelica_real tmp238;
  modelica_boolean tmp239;
  modelica_boolean tmp240;
  modelica_real tmp241;
  modelica_boolean tmp242;
  modelica_real tmp243;
  modelica_boolean tmp244;
  modelica_real tmp245;
  RELATIONHYSTERESIS(tmp236, data->localData[0]->realVars[389] /* LOAD_14.v variable */, (0.5) * (data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */), 84, Less);
  RELATIONHYSTERESIS(tmp237, data->localData[0]->realVars[389] /* LOAD_14.v variable */, 0.0, 85, Greater);
  tmp244 = (modelica_boolean)(tmp236 && tmp237);
  if(tmp244)
  {
    tmp238 = data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */;
    tmp245 = (2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[389] /* LOAD_14.v variable */,data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */,"LOAD_14.PQBRAK"))) * ((jacobian->seedVars[91] /* LOAD_14.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */)),(tmp238 * tmp238),"LOAD_14.PQBRAK ^ 2.0"));
  }
  else
  {
    RELATIONHYSTERESIS(tmp239, data->localData[0]->realVars[389] /* LOAD_14.v variable */, (0.5) * (data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */), 86, Greater);
    RELATIONHYSTERESIS(tmp240, data->localData[0]->realVars[389] /* LOAD_14.v variable */, data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */, 87, Less);
    tmp242 = (modelica_boolean)(tmp239 && tmp240);
    if(tmp242)
    {
      tmp241 = data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */;
      tmp243 = (-2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[389] /* LOAD_14.v variable */ - data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */,data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */,"LOAD_14.PQBRAK"))) * ((jacobian->seedVars[91] /* LOAD_14.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */)),(tmp241 * tmp241),"LOAD_14.PQBRAK ^ 2.0"));
    }
    else
    {
      tmp243 = 0.0;
    }
    tmp245 = tmp243;
  }
  jacobian->tmpVars[32] /* LOAD_14.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp245;
  TRACE_POP
}

/*
equation index: 2464
type: SIMPLE_ASSIGN
LOAD_14.Q.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_14.t1 and time <= LOAD_14.t1 + LOAD_14.d_t then LOAD_14.S_I.im * LOAD_14.kI * LOAD_14.v.SeedNLSJac2 + LOAD_14.S_Y.im * 2.0 * LOAD_14.v * LOAD_14.v.SeedNLSJac2 + LOAD_14.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_14.S_P.im + LOAD_14.d_Q) else LOAD_14.S_I.im * LOAD_14.kI * LOAD_14.v.SeedNLSJac2 + LOAD_14.S_Y.im * 2.0 * LOAD_14.v * LOAD_14.v.SeedNLSJac2 + LOAD_14.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_14.S_P.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2464(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2464};
  modelica_boolean tmp246;
  modelica_boolean tmp247;
  RELATIONHYSTERESIS(tmp246, data->localData[0]->timeValue, data->simulationInfo->realParameter[542] /* LOAD_14.t1 PARAM */, 82, GreaterEq);
  RELATIONHYSTERESIS(tmp247, data->localData[0]->timeValue, data->simulationInfo->realParameter[542] /* LOAD_14.t1 PARAM */ + data->simulationInfo->realParameter[536] /* LOAD_14.d_t PARAM */, 83, LessEq);
  jacobian->tmpVars[34] /* LOAD_14.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp246 && tmp247)?(data->simulationInfo->realParameter[508] /* LOAD_14.S_I.im PARAM */) * ((data->localData[0]->realVars[387] /* LOAD_14.kI variable */) * (jacobian->seedVars[91] /* LOAD_14.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[512] /* LOAD_14.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[389] /* LOAD_14.v variable */)) * (jacobian->seedVars[91] /* LOAD_14.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[32] /* LOAD_14.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[510] /* LOAD_14.S_P.im PARAM */ + data->simulationInfo->realParameter[535] /* LOAD_14.d_Q PARAM */):(data->simulationInfo->realParameter[508] /* LOAD_14.S_I.im PARAM */) * ((data->localData[0]->realVars[387] /* LOAD_14.kI variable */) * (jacobian->seedVars[91] /* LOAD_14.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[512] /* LOAD_14.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[389] /* LOAD_14.v variable */)) * (jacobian->seedVars[91] /* LOAD_14.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[32] /* LOAD_14.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[510] /* LOAD_14.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 2465
type: SIMPLE_ASSIGN
$res_NLSJac2_65.$pDERNLSJac2.dummyVarNLSJac2 = Bus_14.p[3].vr * Bus_14.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 + Bus_14.p[3].vr.SeedNLSJac2 * Bus_14.p[2].ii + (-Bus_14.p[3].vi.SeedNLSJac2) * Bus_14.p[2].ir - LOAD_14.Q.$pDERNLSJac2.dummyVarNLSJac2 - Bus_14.p[3].vi * Bus_14.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2465(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2465};
  jacobian->resultVars[64] /* $res_NLSJac2_65.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */) * (jacobian->tmpVars[119] /* Bus_14.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[320] /* Bus_14.p[2].ii variable */) + ((-jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */)) * (data->localData[0]->realVars[321] /* Bus_14.p[2].ir variable */) - jacobian->tmpVars[34] /* LOAD_14.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */) * (jacobian->tmpVars[120] /* Bus_14.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 2466
type: SIMPLE_ASSIGN
LOAD_14.P.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_14.t1 and time <= LOAD_14.t1 + LOAD_14.d_t then LOAD_14.S_I.re * LOAD_14.kI * LOAD_14.v.SeedNLSJac2 + LOAD_14.S_Y.re * 2.0 * LOAD_14.v * LOAD_14.v.SeedNLSJac2 + LOAD_14.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_14.S_P.re + LOAD_14.d_P) else LOAD_14.S_I.re * LOAD_14.kI * LOAD_14.v.SeedNLSJac2 + LOAD_14.S_Y.re * 2.0 * LOAD_14.v * LOAD_14.v.SeedNLSJac2 + LOAD_14.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_14.S_P.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2466(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2466};
  modelica_boolean tmp248;
  modelica_boolean tmp249;
  RELATIONHYSTERESIS(tmp248, data->localData[0]->timeValue, data->simulationInfo->realParameter[542] /* LOAD_14.t1 PARAM */, 82, GreaterEq);
  RELATIONHYSTERESIS(tmp249, data->localData[0]->timeValue, data->simulationInfo->realParameter[542] /* LOAD_14.t1 PARAM */ + data->simulationInfo->realParameter[536] /* LOAD_14.d_t PARAM */, 83, LessEq);
  jacobian->tmpVars[35] /* LOAD_14.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp248 && tmp249)?(data->simulationInfo->realParameter[509] /* LOAD_14.S_I.re PARAM */) * ((data->localData[0]->realVars[387] /* LOAD_14.kI variable */) * (jacobian->seedVars[91] /* LOAD_14.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[513] /* LOAD_14.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[389] /* LOAD_14.v variable */)) * (jacobian->seedVars[91] /* LOAD_14.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[32] /* LOAD_14.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[511] /* LOAD_14.S_P.re PARAM */ + data->simulationInfo->realParameter[534] /* LOAD_14.d_P PARAM */):(data->simulationInfo->realParameter[509] /* LOAD_14.S_I.re PARAM */) * ((data->localData[0]->realVars[387] /* LOAD_14.kI variable */) * (jacobian->seedVars[91] /* LOAD_14.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[513] /* LOAD_14.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[389] /* LOAD_14.v variable */)) * (jacobian->seedVars[91] /* LOAD_14.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[32] /* LOAD_14.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[511] /* LOAD_14.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 2467
type: SIMPLE_ASSIGN
$res_NLSJac2_64.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_14.p[3].vi) * Bus_14.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 - Bus_14.p[3].vi.SeedNLSJac2 * Bus_14.p[2].ii - LOAD_14.P.$pDERNLSJac2.dummyVarNLSJac2 - Bus_14.p[3].vr.SeedNLSJac2 * Bus_14.p[2].ir - Bus_14.p[3].vr * Bus_14.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2467(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2467};
  jacobian->resultVars[63] /* $res_NLSJac2_64.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */)) * (jacobian->tmpVars[119] /* Bus_14.p.2.ii.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) - ((jacobian->seedVars[61] /* Bus_14.p[3].vi.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[320] /* Bus_14.p[2].ii variable */)) - jacobian->tmpVars[35] /* LOAD_14.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->seedVars[60] /* Bus_14.p[3].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[321] /* Bus_14.p[2].ir variable */)) - ((data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */) * (jacobian->tmpVars[120] /* Bus_14.p.2.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 2468
type: SIMPLE_ASSIGN
LOAD_02.kP.$pDERNLSJac2.dummyVarNLSJac2 = if LOAD_02.v < 0.5 * LOAD_02.PQBRAK and LOAD_02.v > 0.0 then 2.0 * 2.0 * LOAD_02.v / LOAD_02.PQBRAK * LOAD_02.v.SeedNLSJac2 * LOAD_02.PQBRAK / LOAD_02.PQBRAK ^ 2.0 else if LOAD_02.v > 0.5 * LOAD_02.PQBRAK and LOAD_02.v < LOAD_02.PQBRAK then (-2.0) * 2.0 * (LOAD_02.v - LOAD_02.PQBRAK) / LOAD_02.PQBRAK * LOAD_02.v.SeedNLSJac2 * LOAD_02.PQBRAK / LOAD_02.PQBRAK ^ 2.0 else 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2468(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2468};
  modelica_boolean tmp250;
  modelica_boolean tmp251;
  modelica_real tmp252;
  modelica_boolean tmp253;
  modelica_boolean tmp254;
  modelica_real tmp255;
  modelica_boolean tmp256;
  modelica_real tmp257;
  modelica_boolean tmp258;
  modelica_real tmp259;
  RELATIONHYSTERESIS(tmp250, data->localData[0]->realVars[329] /* LOAD_02.v variable */, (0.5) * (data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */), 36, Less);
  RELATIONHYSTERESIS(tmp251, data->localData[0]->realVars[329] /* LOAD_02.v variable */, 0.0, 37, Greater);
  tmp258 = (modelica_boolean)(tmp250 && tmp251);
  if(tmp258)
  {
    tmp252 = data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */;
    tmp259 = (2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[329] /* LOAD_02.v variable */,data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */,"LOAD_02.PQBRAK"))) * ((jacobian->seedVars[92] /* LOAD_02.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */)),(tmp252 * tmp252),"LOAD_02.PQBRAK ^ 2.0"));
  }
  else
  {
    RELATIONHYSTERESIS(tmp253, data->localData[0]->realVars[329] /* LOAD_02.v variable */, (0.5) * (data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */), 38, Greater);
    RELATIONHYSTERESIS(tmp254, data->localData[0]->realVars[329] /* LOAD_02.v variable */, data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */, 39, Less);
    tmp256 = (modelica_boolean)(tmp253 && tmp254);
    if(tmp256)
    {
      tmp255 = data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */;
      tmp257 = (-2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[329] /* LOAD_02.v variable */ - data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */,data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */,"LOAD_02.PQBRAK"))) * ((jacobian->seedVars[92] /* LOAD_02.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */)),(tmp255 * tmp255),"LOAD_02.PQBRAK ^ 2.0"));
    }
    else
    {
      tmp257 = 0.0;
    }
    tmp259 = tmp257;
  }
  jacobian->tmpVars[29] /* LOAD_02.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp259;
  TRACE_POP
}

/*
equation index: 2469
type: SIMPLE_ASSIGN
LOAD_02.Q.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_02.t1 and time <= LOAD_02.t1 + LOAD_02.d_t then LOAD_02.S_I.im * LOAD_02.kI * LOAD_02.v.SeedNLSJac2 + LOAD_02.S_Y.im * 2.0 * LOAD_02.v * LOAD_02.v.SeedNLSJac2 + LOAD_02.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_02.S_P.im + LOAD_02.d_Q) else LOAD_02.S_I.im * LOAD_02.kI * LOAD_02.v.SeedNLSJac2 + LOAD_02.S_Y.im * 2.0 * LOAD_02.v * LOAD_02.v.SeedNLSJac2 + LOAD_02.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_02.S_P.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2469(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2469};
  modelica_boolean tmp260;
  modelica_boolean tmp261;
  RELATIONHYSTERESIS(tmp260, data->localData[0]->timeValue, data->simulationInfo->realParameter[122] /* LOAD_02.t1 PARAM */, 34, GreaterEq);
  RELATIONHYSTERESIS(tmp261, data->localData[0]->timeValue, data->simulationInfo->realParameter[122] /* LOAD_02.t1 PARAM */ + data->simulationInfo->realParameter[116] /* LOAD_02.d_t PARAM */, 35, LessEq);
  jacobian->tmpVars[30] /* LOAD_02.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp260 && tmp261)?(data->simulationInfo->realParameter[88] /* LOAD_02.S_I.im PARAM */) * ((data->localData[0]->realVars[327] /* LOAD_02.kI variable */) * (jacobian->seedVars[92] /* LOAD_02.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[92] /* LOAD_02.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[329] /* LOAD_02.v variable */)) * (jacobian->seedVars[92] /* LOAD_02.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[29] /* LOAD_02.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[90] /* LOAD_02.S_P.im PARAM */ + data->simulationInfo->realParameter[115] /* LOAD_02.d_Q PARAM */):(data->simulationInfo->realParameter[88] /* LOAD_02.S_I.im PARAM */) * ((data->localData[0]->realVars[327] /* LOAD_02.kI variable */) * (jacobian->seedVars[92] /* LOAD_02.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[92] /* LOAD_02.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[329] /* LOAD_02.v variable */)) * (jacobian->seedVars[92] /* LOAD_02.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[29] /* LOAD_02.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[90] /* LOAD_02.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 2470
type: SIMPLE_ASSIGN
$res_NLSJac2_83.$pDERNLSJac2.dummyVarNLSJac2 = Bus_02.n[2].vr * Bus_02.n[1].ii.SeedNLSJac2 + Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * Bus_02.n[1].ii + (-Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2) * Bus_02.n[1].ir - LOAD_02.Q.$pDERNLSJac2.dummyVarNLSJac2 - Bus_02.n[2].vi * Bus_02.n[1].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2470(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2470};
  jacobian->resultVars[82] /* $res_NLSJac2_83.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (jacobian->seedVars[4] /* Bus_02.n[1].ii.SeedNLSJac2 SEED_VAR */) + (jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[228] /* Bus_02.n[1].ii variable */) + ((-jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->localData[0]->realVars[230] /* Bus_02.n[1].ir variable */) - jacobian->tmpVars[30] /* LOAD_02.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (jacobian->seedVars[6] /* Bus_02.n[1].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2471
type: SIMPLE_ASSIGN
LOAD_02.P.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_02.t1 and time <= LOAD_02.t1 + LOAD_02.d_t then LOAD_02.S_I.re * LOAD_02.kI * LOAD_02.v.SeedNLSJac2 + LOAD_02.S_Y.re * 2.0 * LOAD_02.v * LOAD_02.v.SeedNLSJac2 + LOAD_02.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_02.S_P.re + LOAD_02.d_P) else LOAD_02.S_I.re * LOAD_02.kI * LOAD_02.v.SeedNLSJac2 + LOAD_02.S_Y.re * 2.0 * LOAD_02.v * LOAD_02.v.SeedNLSJac2 + LOAD_02.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_02.S_P.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2471(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2471};
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  RELATIONHYSTERESIS(tmp262, data->localData[0]->timeValue, data->simulationInfo->realParameter[122] /* LOAD_02.t1 PARAM */, 34, GreaterEq);
  RELATIONHYSTERESIS(tmp263, data->localData[0]->timeValue, data->simulationInfo->realParameter[122] /* LOAD_02.t1 PARAM */ + data->simulationInfo->realParameter[116] /* LOAD_02.d_t PARAM */, 35, LessEq);
  jacobian->tmpVars[31] /* LOAD_02.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp262 && tmp263)?(data->simulationInfo->realParameter[89] /* LOAD_02.S_I.re PARAM */) * ((data->localData[0]->realVars[327] /* LOAD_02.kI variable */) * (jacobian->seedVars[92] /* LOAD_02.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[93] /* LOAD_02.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[329] /* LOAD_02.v variable */)) * (jacobian->seedVars[92] /* LOAD_02.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[29] /* LOAD_02.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[91] /* LOAD_02.S_P.re PARAM */ + data->simulationInfo->realParameter[114] /* LOAD_02.d_P PARAM */):(data->simulationInfo->realParameter[89] /* LOAD_02.S_I.re PARAM */) * ((data->localData[0]->realVars[327] /* LOAD_02.kI variable */) * (jacobian->seedVars[92] /* LOAD_02.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[93] /* LOAD_02.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[329] /* LOAD_02.v variable */)) * (jacobian->seedVars[92] /* LOAD_02.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[29] /* LOAD_02.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[91] /* LOAD_02.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 2472
type: SIMPLE_ASSIGN
$res_NLSJac2_84.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_02.n[2].vi) * Bus_02.n[1].ii.SeedNLSJac2 - Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * Bus_02.n[1].ii - LOAD_02.P.$pDERNLSJac2.dummyVarNLSJac2 - Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * Bus_02.n[1].ir - Bus_02.n[2].vr * Bus_02.n[1].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2472(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2472};
  jacobian->resultVars[83] /* $res_NLSJac2_84.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */)) * (jacobian->seedVars[4] /* Bus_02.n[1].ii.SeedNLSJac2 SEED_VAR */) - ((jacobian->tmpVars[54] /* Bus_02.n.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[228] /* Bus_02.n[1].ii variable */)) - jacobian->tmpVars[31] /* LOAD_02.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[55] /* Bus_02.n.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[230] /* Bus_02.n[1].ir variable */)) - ((data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (jacobian->seedVars[6] /* Bus_02.n[1].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2473
type: SIMPLE_ASSIGN
LOAD_03.kP.$pDERNLSJac2.dummyVarNLSJac2 = if LOAD_03.v < 0.5 * LOAD_03.PQBRAK and LOAD_03.v > 0.0 then 2.0 * 2.0 * LOAD_03.v / LOAD_03.PQBRAK * LOAD_03.v.SeedNLSJac2 * LOAD_03.PQBRAK / LOAD_03.PQBRAK ^ 2.0 else if LOAD_03.v > 0.5 * LOAD_03.PQBRAK and LOAD_03.v < LOAD_03.PQBRAK then (-2.0) * 2.0 * (LOAD_03.v - LOAD_03.PQBRAK) / LOAD_03.PQBRAK * LOAD_03.v.SeedNLSJac2 * LOAD_03.PQBRAK / LOAD_03.PQBRAK ^ 2.0 else 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2473(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2473};
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  modelica_real tmp266;
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  modelica_real tmp269;
  modelica_boolean tmp270;
  modelica_real tmp271;
  modelica_boolean tmp272;
  modelica_real tmp273;
  RELATIONHYSTERESIS(tmp264, data->localData[0]->realVars[335] /* LOAD_03.v variable */, (0.5) * (data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */), 42, Less);
  RELATIONHYSTERESIS(tmp265, data->localData[0]->realVars[335] /* LOAD_03.v variable */, 0.0, 43, Greater);
  tmp272 = (modelica_boolean)(tmp264 && tmp265);
  if(tmp272)
  {
    tmp266 = data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */;
    tmp273 = (2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[335] /* LOAD_03.v variable */,data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */,"LOAD_03.PQBRAK"))) * ((jacobian->seedVars[93] /* LOAD_03.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */)),(tmp266 * tmp266),"LOAD_03.PQBRAK ^ 2.0"));
  }
  else
  {
    RELATIONHYSTERESIS(tmp267, data->localData[0]->realVars[335] /* LOAD_03.v variable */, (0.5) * (data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */), 44, Greater);
    RELATIONHYSTERESIS(tmp268, data->localData[0]->realVars[335] /* LOAD_03.v variable */, data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */, 45, Less);
    tmp270 = (modelica_boolean)(tmp267 && tmp268);
    if(tmp270)
    {
      tmp269 = data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */;
      tmp271 = (-2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[335] /* LOAD_03.v variable */ - data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */,data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */,"LOAD_03.PQBRAK"))) * ((jacobian->seedVars[93] /* LOAD_03.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */)),(tmp269 * tmp269),"LOAD_03.PQBRAK ^ 2.0"));
    }
    else
    {
      tmp271 = 0.0;
    }
    tmp273 = tmp271;
  }
  jacobian->tmpVars[24] /* LOAD_03.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp273;
  TRACE_POP
}

/*
equation index: 2474
type: SIMPLE_ASSIGN
LOAD_03.Q.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_03.t1 and time <= LOAD_03.t1 + LOAD_03.d_t then LOAD_03.S_I.im * LOAD_03.kI * LOAD_03.v.SeedNLSJac2 + LOAD_03.S_Y.im * 2.0 * LOAD_03.v * LOAD_03.v.SeedNLSJac2 + LOAD_03.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_03.S_P.im + LOAD_03.d_Q) else LOAD_03.S_I.im * LOAD_03.kI * LOAD_03.v.SeedNLSJac2 + LOAD_03.S_Y.im * 2.0 * LOAD_03.v * LOAD_03.v.SeedNLSJac2 + LOAD_03.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_03.S_P.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2474(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2474};
  modelica_boolean tmp274;
  modelica_boolean tmp275;
  RELATIONHYSTERESIS(tmp274, data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* LOAD_03.t1 PARAM */, 40, GreaterEq);
  RELATIONHYSTERESIS(tmp275, data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* LOAD_03.t1 PARAM */ + data->simulationInfo->realParameter[158] /* LOAD_03.d_t PARAM */, 41, LessEq);
  jacobian->tmpVars[26] /* LOAD_03.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp274 && tmp275)?(data->simulationInfo->realParameter[130] /* LOAD_03.S_I.im PARAM */) * ((data->localData[0]->realVars[333] /* LOAD_03.kI variable */) * (jacobian->seedVars[93] /* LOAD_03.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[134] /* LOAD_03.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[335] /* LOAD_03.v variable */)) * (jacobian->seedVars[93] /* LOAD_03.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[24] /* LOAD_03.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[132] /* LOAD_03.S_P.im PARAM */ + data->simulationInfo->realParameter[157] /* LOAD_03.d_Q PARAM */):(data->simulationInfo->realParameter[130] /* LOAD_03.S_I.im PARAM */) * ((data->localData[0]->realVars[333] /* LOAD_03.kI variable */) * (jacobian->seedVars[93] /* LOAD_03.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[134] /* LOAD_03.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[335] /* LOAD_03.v variable */)) * (jacobian->seedVars[93] /* LOAD_03.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[24] /* LOAD_03.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[132] /* LOAD_03.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 2475
type: SIMPLE_ASSIGN
$res_NLSJac2_89.$pDERNLSJac2.dummyVarNLSJac2 = Bus_03.p[2].vr * Bus_03.n[1].ii.SeedNLSJac2 + Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * Bus_03.n[1].ii + (-Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2) * Bus_03.n[1].ir - LOAD_03.Q.$pDERNLSJac2.dummyVarNLSJac2 - Bus_03.p[2].vi * Bus_03.n[1].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2475(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2475};
  jacobian->resultVars[88] /* $res_NLSJac2_89.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */) * (jacobian->seedVars[51] /* Bus_03.n[1].ii.SeedNLSJac2 SEED_VAR */) + (jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[236] /* Bus_03.n[1].ii variable */) + ((-jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) * (data->localData[0]->realVars[237] /* Bus_03.n[1].ir variable */) - jacobian->tmpVars[26] /* LOAD_03.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */) * (jacobian->seedVars[53] /* Bus_03.n[1].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2476
type: SIMPLE_ASSIGN
LOAD_03.P.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_03.t1 and time <= LOAD_03.t1 + LOAD_03.d_t then LOAD_03.S_I.re * LOAD_03.kI * LOAD_03.v.SeedNLSJac2 + LOAD_03.S_Y.re * 2.0 * LOAD_03.v * LOAD_03.v.SeedNLSJac2 + LOAD_03.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_03.S_P.re + LOAD_03.d_P) else LOAD_03.S_I.re * LOAD_03.kI * LOAD_03.v.SeedNLSJac2 + LOAD_03.S_Y.re * 2.0 * LOAD_03.v * LOAD_03.v.SeedNLSJac2 + LOAD_03.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_03.S_P.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2476(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2476};
  modelica_boolean tmp276;
  modelica_boolean tmp277;
  RELATIONHYSTERESIS(tmp276, data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* LOAD_03.t1 PARAM */, 40, GreaterEq);
  RELATIONHYSTERESIS(tmp277, data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* LOAD_03.t1 PARAM */ + data->simulationInfo->realParameter[158] /* LOAD_03.d_t PARAM */, 41, LessEq);
  jacobian->tmpVars[27] /* LOAD_03.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp276 && tmp277)?(data->simulationInfo->realParameter[131] /* LOAD_03.S_I.re PARAM */) * ((data->localData[0]->realVars[333] /* LOAD_03.kI variable */) * (jacobian->seedVars[93] /* LOAD_03.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[135] /* LOAD_03.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[335] /* LOAD_03.v variable */)) * (jacobian->seedVars[93] /* LOAD_03.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[24] /* LOAD_03.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[133] /* LOAD_03.S_P.re PARAM */ + data->simulationInfo->realParameter[156] /* LOAD_03.d_P PARAM */):(data->simulationInfo->realParameter[131] /* LOAD_03.S_I.re PARAM */) * ((data->localData[0]->realVars[333] /* LOAD_03.kI variable */) * (jacobian->seedVars[93] /* LOAD_03.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[135] /* LOAD_03.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[335] /* LOAD_03.v variable */)) * (jacobian->seedVars[93] /* LOAD_03.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[24] /* LOAD_03.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[133] /* LOAD_03.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 2477
type: SIMPLE_ASSIGN
$res_NLSJac2_88.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_03.p[2].vi) * Bus_03.n[1].ii.SeedNLSJac2 - Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 * Bus_03.n[1].ii - LOAD_03.P.$pDERNLSJac2.dummyVarNLSJac2 - Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 * Bus_03.n[1].ir - Bus_03.p[2].vr * Bus_03.n[1].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2477(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2477};
  jacobian->resultVars[87] /* $res_NLSJac2_88.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */)) * (jacobian->seedVars[51] /* Bus_03.n[1].ii.SeedNLSJac2 SEED_VAR */) - ((jacobian->tmpVars[71] /* Bus_03.p.2.vi.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[236] /* Bus_03.n[1].ii variable */)) - jacobian->tmpVars[27] /* LOAD_03.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->tmpVars[70] /* Bus_03.p.2.vr.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->localData[0]->realVars[237] /* Bus_03.n[1].ir variable */)) - ((data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */) * (jacobian->seedVars[53] /* Bus_03.n[1].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2478
type: SIMPLE_ASSIGN
LOAD_05.kP.$pDERNLSJac2.dummyVarNLSJac2 = if LOAD_05.v < 0.5 * LOAD_05.PQBRAK and LOAD_05.v > 0.0 then 2.0 * 2.0 * LOAD_05.v / LOAD_05.PQBRAK * LOAD_05.v.SeedNLSJac2 * LOAD_05.PQBRAK / LOAD_05.PQBRAK ^ 2.0 else if LOAD_05.v > 0.5 * LOAD_05.PQBRAK and LOAD_05.v < LOAD_05.PQBRAK then (-2.0) * 2.0 * (LOAD_05.v - LOAD_05.PQBRAK) / LOAD_05.PQBRAK * LOAD_05.v.SeedNLSJac2 * LOAD_05.PQBRAK / LOAD_05.PQBRAK ^ 2.0 else 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2478(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2478};
  modelica_boolean tmp278;
  modelica_boolean tmp279;
  modelica_real tmp280;
  modelica_boolean tmp281;
  modelica_boolean tmp282;
  modelica_real tmp283;
  modelica_boolean tmp284;
  modelica_real tmp285;
  modelica_boolean tmp286;
  modelica_real tmp287;
  RELATIONHYSTERESIS(tmp278, data->localData[0]->realVars[347] /* LOAD_05.v variable */, (0.5) * (data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */), 28, Less);
  RELATIONHYSTERESIS(tmp279, data->localData[0]->realVars[347] /* LOAD_05.v variable */, 0.0, 29, Greater);
  tmp286 = (modelica_boolean)(tmp278 && tmp279);
  if(tmp286)
  {
    tmp280 = data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */;
    tmp287 = (2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[347] /* LOAD_05.v variable */,data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */,"LOAD_05.PQBRAK"))) * ((jacobian->seedVars[94] /* LOAD_05.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */)),(tmp280 * tmp280),"LOAD_05.PQBRAK ^ 2.0"));
  }
  else
  {
    RELATIONHYSTERESIS(tmp281, data->localData[0]->realVars[347] /* LOAD_05.v variable */, (0.5) * (data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */), 30, Greater);
    RELATIONHYSTERESIS(tmp282, data->localData[0]->realVars[347] /* LOAD_05.v variable */, data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */, 31, Less);
    tmp284 = (modelica_boolean)(tmp281 && tmp282);
    if(tmp284)
    {
      tmp283 = data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */;
      tmp285 = (-2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[347] /* LOAD_05.v variable */ - data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */,data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */,"LOAD_05.PQBRAK"))) * ((jacobian->seedVars[94] /* LOAD_05.v.SeedNLSJac2 SEED_VAR */) * (data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */)),(tmp283 * tmp283),"LOAD_05.PQBRAK ^ 2.0"));
    }
    else
    {
      tmp285 = 0.0;
    }
    tmp287 = tmp285;
  }
  jacobian->tmpVars[21] /* LOAD_05.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp287;
  TRACE_POP
}

/*
equation index: 2479
type: SIMPLE_ASSIGN
LOAD_05.Q.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_05.t1 and time <= LOAD_05.t1 + LOAD_05.d_t then LOAD_05.S_I.im * LOAD_05.kI * LOAD_05.v.SeedNLSJac2 + LOAD_05.S_Y.im * 2.0 * LOAD_05.v * LOAD_05.v.SeedNLSJac2 + LOAD_05.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_05.S_P.im + LOAD_05.d_Q) else LOAD_05.S_I.im * LOAD_05.kI * LOAD_05.v.SeedNLSJac2 + LOAD_05.S_Y.im * 2.0 * LOAD_05.v * LOAD_05.v.SeedNLSJac2 + LOAD_05.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_05.S_P.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2479(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2479};
  modelica_boolean tmp288;
  modelica_boolean tmp289;
  RELATIONHYSTERESIS(tmp288, data->localData[0]->timeValue, data->simulationInfo->realParameter[248] /* LOAD_05.t1 PARAM */, 26, GreaterEq);
  RELATIONHYSTERESIS(tmp289, data->localData[0]->timeValue, data->simulationInfo->realParameter[248] /* LOAD_05.t1 PARAM */ + data->simulationInfo->realParameter[242] /* LOAD_05.d_t PARAM */, 27, LessEq);
  jacobian->tmpVars[22] /* LOAD_05.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp288 && tmp289)?(data->simulationInfo->realParameter[214] /* LOAD_05.S_I.im PARAM */) * ((data->localData[0]->realVars[345] /* LOAD_05.kI variable */) * (jacobian->seedVars[94] /* LOAD_05.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[218] /* LOAD_05.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[347] /* LOAD_05.v variable */)) * (jacobian->seedVars[94] /* LOAD_05.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[21] /* LOAD_05.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[216] /* LOAD_05.S_P.im PARAM */ + data->simulationInfo->realParameter[241] /* LOAD_05.d_Q PARAM */):(data->simulationInfo->realParameter[214] /* LOAD_05.S_I.im PARAM */) * ((data->localData[0]->realVars[345] /* LOAD_05.kI variable */) * (jacobian->seedVars[94] /* LOAD_05.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[218] /* LOAD_05.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[347] /* LOAD_05.v variable */)) * (jacobian->seedVars[94] /* LOAD_05.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[21] /* LOAD_05.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[216] /* LOAD_05.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 2480
type: SIMPLE_ASSIGN
$res_NLSJac2_98.$pDERNLSJac2.dummyVarNLSJac2 = Bus_05.p[2].vr * Bus_05.n[3].ii.SeedNLSJac2 + Bus_05.p[2].vr.SeedNLSJac2 * Bus_05.n[3].ii + (-Bus_05.p[2].vi.SeedNLSJac2) * Bus_05.n[3].ir - LOAD_05.Q.$pDERNLSJac2.dummyVarNLSJac2 - Bus_05.p[2].vi * Bus_05.n[3].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2480(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2480};
  jacobian->resultVars[97] /* $res_NLSJac2_98.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */) * (jacobian->seedVars[12] /* Bus_05.n[3].ii.SeedNLSJac2 SEED_VAR */) + (jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[256] /* Bus_05.n[3].ii variable */) + ((-jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */)) * (data->localData[0]->realVars[257] /* Bus_05.n[3].ir variable */) - jacobian->tmpVars[22] /* LOAD_05.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */) * (jacobian->seedVars[10] /* Bus_05.n[3].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2481
type: SIMPLE_ASSIGN
LOAD_05.P.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_05.t1 and time <= LOAD_05.t1 + LOAD_05.d_t then LOAD_05.S_I.re * LOAD_05.kI * LOAD_05.v.SeedNLSJac2 + LOAD_05.S_Y.re * 2.0 * LOAD_05.v * LOAD_05.v.SeedNLSJac2 + LOAD_05.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_05.S_P.re + LOAD_05.d_P) else LOAD_05.S_I.re * LOAD_05.kI * LOAD_05.v.SeedNLSJac2 + LOAD_05.S_Y.re * 2.0 * LOAD_05.v * LOAD_05.v.SeedNLSJac2 + LOAD_05.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_05.S_P.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2481(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2481};
  modelica_boolean tmp290;
  modelica_boolean tmp291;
  RELATIONHYSTERESIS(tmp290, data->localData[0]->timeValue, data->simulationInfo->realParameter[248] /* LOAD_05.t1 PARAM */, 26, GreaterEq);
  RELATIONHYSTERESIS(tmp291, data->localData[0]->timeValue, data->simulationInfo->realParameter[248] /* LOAD_05.t1 PARAM */ + data->simulationInfo->realParameter[242] /* LOAD_05.d_t PARAM */, 27, LessEq);
  jacobian->tmpVars[23] /* LOAD_05.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp290 && tmp291)?(data->simulationInfo->realParameter[215] /* LOAD_05.S_I.re PARAM */) * ((data->localData[0]->realVars[345] /* LOAD_05.kI variable */) * (jacobian->seedVars[94] /* LOAD_05.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[219] /* LOAD_05.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[347] /* LOAD_05.v variable */)) * (jacobian->seedVars[94] /* LOAD_05.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[21] /* LOAD_05.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[217] /* LOAD_05.S_P.re PARAM */ + data->simulationInfo->realParameter[240] /* LOAD_05.d_P PARAM */):(data->simulationInfo->realParameter[215] /* LOAD_05.S_I.re PARAM */) * ((data->localData[0]->realVars[345] /* LOAD_05.kI variable */) * (jacobian->seedVars[94] /* LOAD_05.v.SeedNLSJac2 SEED_VAR */)) + (data->simulationInfo->realParameter[219] /* LOAD_05.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[347] /* LOAD_05.v variable */)) * (jacobian->seedVars[94] /* LOAD_05.v.SeedNLSJac2 SEED_VAR */)) + (jacobian->tmpVars[21] /* LOAD_05.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[217] /* LOAD_05.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 2482
type: SIMPLE_ASSIGN
$res_NLSJac2_99.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_05.p[2].vi) * Bus_05.n[3].ii.SeedNLSJac2 - Bus_05.p[2].vi.SeedNLSJac2 * Bus_05.n[3].ii - LOAD_05.P.$pDERNLSJac2.dummyVarNLSJac2 - Bus_05.p[2].vr.SeedNLSJac2 * Bus_05.n[3].ir - Bus_05.p[2].vr * Bus_05.n[3].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2482(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2482};
  jacobian->resultVars[98] /* $res_NLSJac2_99.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */)) * (jacobian->seedVars[12] /* Bus_05.n[3].ii.SeedNLSJac2 SEED_VAR */) - ((jacobian->seedVars[69] /* Bus_05.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[256] /* Bus_05.n[3].ii variable */)) - jacobian->tmpVars[23] /* LOAD_05.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->seedVars[68] /* Bus_05.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[257] /* Bus_05.n[3].ir variable */)) - ((data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */) * (jacobian->seedVars[10] /* Bus_05.n[3].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2483
type: SIMPLE_ASSIGN
LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_10.n[1].vr * Bus_10.n[1].vr.SeedNLSJac2 + Bus_10.n[1].vi * Bus_10.n[1].vi.SeedNLSJac2) / sqrt(Bus_10.n[1].vr ^ 2.0 + Bus_10.n[1].vi ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2483(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2483};
  modelica_real tmp292;
  modelica_real tmp293;
  tmp292 = data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */;
  tmp293 = data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */;
  jacobian->tmpVars[12] /* LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */) * (jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */) * (jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */),sqrt((tmp292 * tmp292) + (tmp293 * tmp293)),"sqrt(Bus_10.n[1].vr ^ 2.0 + Bus_10.n[1].vi ^ 2.0)");
  TRACE_POP
}

/*
equation index: 2484
type: SIMPLE_ASSIGN
LOAD_10.kP.$pDERNLSJac2.dummyVarNLSJac2 = if LOAD_10.v < 0.5 * LOAD_10.PQBRAK and LOAD_10.v > 0.0 then 2.0 * 2.0 * LOAD_10.v / LOAD_10.PQBRAK * LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_10.PQBRAK / LOAD_10.PQBRAK ^ 2.0 else if LOAD_10.v > 0.5 * LOAD_10.PQBRAK and LOAD_10.v < LOAD_10.PQBRAK then (-2.0) * 2.0 * (LOAD_10.v - LOAD_10.PQBRAK) / LOAD_10.PQBRAK * LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_10.PQBRAK / LOAD_10.PQBRAK ^ 2.0 else 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2484(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2484};
  modelica_boolean tmp294;
  modelica_boolean tmp295;
  modelica_real tmp296;
  modelica_boolean tmp297;
  modelica_boolean tmp298;
  modelica_real tmp299;
  modelica_boolean tmp300;
  modelica_real tmp301;
  modelica_boolean tmp302;
  modelica_real tmp303;
  RELATIONHYSTERESIS(tmp294, data->localData[0]->realVars[365] /* LOAD_10.v variable */, (0.5) * (data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */), 64, Less);
  RELATIONHYSTERESIS(tmp295, data->localData[0]->realVars[365] /* LOAD_10.v variable */, 0.0, 65, Greater);
  tmp302 = (modelica_boolean)(tmp294 && tmp295);
  if(tmp302)
  {
    tmp296 = data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */;
    tmp303 = (2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[365] /* LOAD_10.v variable */,data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */,"LOAD_10.PQBRAK"))) * ((jacobian->tmpVars[12] /* LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */)),(tmp296 * tmp296),"LOAD_10.PQBRAK ^ 2.0"));
  }
  else
  {
    RELATIONHYSTERESIS(tmp297, data->localData[0]->realVars[365] /* LOAD_10.v variable */, (0.5) * (data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */), 66, Greater);
    RELATIONHYSTERESIS(tmp298, data->localData[0]->realVars[365] /* LOAD_10.v variable */, data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */, 67, Less);
    tmp300 = (modelica_boolean)(tmp297 && tmp298);
    if(tmp300)
    {
      tmp299 = data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */;
      tmp301 = (-2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[365] /* LOAD_10.v variable */ - data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */,data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */,"LOAD_10.PQBRAK"))) * ((jacobian->tmpVars[12] /* LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */)),(tmp299 * tmp299),"LOAD_10.PQBRAK ^ 2.0"));
    }
    else
    {
      tmp301 = 0.0;
    }
    tmp303 = tmp301;
  }
  jacobian->tmpVars[14] /* LOAD_10.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp303;
  TRACE_POP
}

/*
equation index: 2485
type: SIMPLE_ASSIGN
LOAD_10.Q.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_10.t1 and time <= LOAD_10.t1 + LOAD_10.d_t then LOAD_10.S_I.im * LOAD_10.kI * LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_10.S_Y.im * 2.0 * LOAD_10.v * LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_10.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_10.S_P.im + LOAD_10.d_Q) else LOAD_10.S_I.im * LOAD_10.kI * LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_10.S_Y.im * 2.0 * LOAD_10.v * LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_10.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_10.S_P.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2485(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2485};
  modelica_boolean tmp304;
  modelica_boolean tmp305;
  RELATIONHYSTERESIS(tmp304, data->localData[0]->timeValue, data->simulationInfo->realParameter[374] /* LOAD_10.t1 PARAM */, 62, GreaterEq);
  RELATIONHYSTERESIS(tmp305, data->localData[0]->timeValue, data->simulationInfo->realParameter[374] /* LOAD_10.t1 PARAM */ + data->simulationInfo->realParameter[368] /* LOAD_10.d_t PARAM */, 63, LessEq);
  jacobian->tmpVars[15] /* LOAD_10.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp304 && tmp305)?(data->simulationInfo->realParameter[340] /* LOAD_10.S_I.im PARAM */) * ((data->localData[0]->realVars[363] /* LOAD_10.kI variable */) * (jacobian->tmpVars[12] /* LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[344] /* LOAD_10.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[365] /* LOAD_10.v variable */)) * (jacobian->tmpVars[12] /* LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[14] /* LOAD_10.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[342] /* LOAD_10.S_P.im PARAM */ + data->simulationInfo->realParameter[367] /* LOAD_10.d_Q PARAM */):(data->simulationInfo->realParameter[340] /* LOAD_10.S_I.im PARAM */) * ((data->localData[0]->realVars[363] /* LOAD_10.kI variable */) * (jacobian->tmpVars[12] /* LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[344] /* LOAD_10.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[365] /* LOAD_10.v variable */)) * (jacobian->tmpVars[12] /* LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[14] /* LOAD_10.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[342] /* LOAD_10.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 2486
type: SIMPLE_ASSIGN
$res_NLSJac2_25.$pDERNLSJac2.dummyVarNLSJac2 = Bus_10.n[1].vr * Bus_10.p[2].ii.SeedNLSJac2 + Bus_10.n[1].vr.SeedNLSJac2 * Bus_10.p[2].ii + (-Bus_10.n[1].vi.SeedNLSJac2) * Bus_10.p[2].ir - LOAD_10.Q.$pDERNLSJac2.dummyVarNLSJac2 - Bus_10.n[1].vi * Bus_10.p[2].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2486(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2486};
  jacobian->resultVars[24] /* $res_NLSJac2_25.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */) * (jacobian->seedVars[41] /* Bus_10.p[2].ii.SeedNLSJac2 SEED_VAR */) + (jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[298] /* Bus_10.p[2].ii variable */) + ((-jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */)) * (data->localData[0]->realVars[299] /* Bus_10.p[2].ir variable */) - jacobian->tmpVars[15] /* LOAD_10.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */) * (jacobian->seedVars[39] /* Bus_10.p[2].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2487
type: SIMPLE_ASSIGN
LOAD_10.P.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_10.t1 and time <= LOAD_10.t1 + LOAD_10.d_t then LOAD_10.S_I.re * LOAD_10.kI * LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_10.S_Y.re * 2.0 * LOAD_10.v * LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_10.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_10.S_P.re + LOAD_10.d_P) else LOAD_10.S_I.re * LOAD_10.kI * LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_10.S_Y.re * 2.0 * LOAD_10.v * LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_10.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_10.S_P.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2487(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2487};
  modelica_boolean tmp306;
  modelica_boolean tmp307;
  RELATIONHYSTERESIS(tmp306, data->localData[0]->timeValue, data->simulationInfo->realParameter[374] /* LOAD_10.t1 PARAM */, 62, GreaterEq);
  RELATIONHYSTERESIS(tmp307, data->localData[0]->timeValue, data->simulationInfo->realParameter[374] /* LOAD_10.t1 PARAM */ + data->simulationInfo->realParameter[368] /* LOAD_10.d_t PARAM */, 63, LessEq);
  jacobian->tmpVars[19] /* LOAD_10.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp306 && tmp307)?(data->simulationInfo->realParameter[341] /* LOAD_10.S_I.re PARAM */) * ((data->localData[0]->realVars[363] /* LOAD_10.kI variable */) * (jacobian->tmpVars[12] /* LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[345] /* LOAD_10.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[365] /* LOAD_10.v variable */)) * (jacobian->tmpVars[12] /* LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[14] /* LOAD_10.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[343] /* LOAD_10.S_P.re PARAM */ + data->simulationInfo->realParameter[366] /* LOAD_10.d_P PARAM */):(data->simulationInfo->realParameter[341] /* LOAD_10.S_I.re PARAM */) * ((data->localData[0]->realVars[363] /* LOAD_10.kI variable */) * (jacobian->tmpVars[12] /* LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[345] /* LOAD_10.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[365] /* LOAD_10.v variable */)) * (jacobian->tmpVars[12] /* LOAD_10.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[14] /* LOAD_10.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[343] /* LOAD_10.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 2488
type: SIMPLE_ASSIGN
$res_NLSJac2_26.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_10.n[1].vi) * Bus_10.p[2].ii.SeedNLSJac2 - Bus_10.n[1].vi.SeedNLSJac2 * Bus_10.p[2].ii - LOAD_10.P.$pDERNLSJac2.dummyVarNLSJac2 - Bus_10.n[1].vr.SeedNLSJac2 * Bus_10.p[2].ir - Bus_10.n[1].vr * Bus_10.p[2].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2488(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2488};
  jacobian->resultVars[25] /* $res_NLSJac2_26.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */)) * (jacobian->seedVars[41] /* Bus_10.p[2].ii.SeedNLSJac2 SEED_VAR */) - ((jacobian->seedVars[102] /* Bus_10.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[298] /* Bus_10.p[2].ii variable */)) - jacobian->tmpVars[19] /* LOAD_10.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->seedVars[101] /* Bus_10.n[1].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[299] /* Bus_10.p[2].ir variable */)) - ((data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */) * (jacobian->seedVars[39] /* Bus_10.p[2].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2489
type: SIMPLE_ASSIGN
LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_11.p[2].vr * Bus_11.p[2].vr.SeedNLSJac2 + Bus_11.p[2].vi * Bus_11.p[2].vi.SeedNLSJac2) / sqrt(Bus_11.p[2].vr ^ 2.0 + Bus_11.p[2].vi ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2489(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2489};
  modelica_real tmp308;
  modelica_real tmp309;
  tmp308 = data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */;
  tmp309 = data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */;
  jacobian->tmpVars[8] /* LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */) * (jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */) * (jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */),sqrt((tmp308 * tmp308) + (tmp309 * tmp309)),"sqrt(Bus_11.p[2].vr ^ 2.0 + Bus_11.p[2].vi ^ 2.0)");
  TRACE_POP
}

/*
equation index: 2490
type: SIMPLE_ASSIGN
LOAD_11.kP.$pDERNLSJac2.dummyVarNLSJac2 = if LOAD_11.v < 0.5 * LOAD_11.PQBRAK and LOAD_11.v > 0.0 then 2.0 * 2.0 * LOAD_11.v / LOAD_11.PQBRAK * LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_11.PQBRAK / LOAD_11.PQBRAK ^ 2.0 else if LOAD_11.v > 0.5 * LOAD_11.PQBRAK and LOAD_11.v < LOAD_11.PQBRAK then (-2.0) * 2.0 * (LOAD_11.v - LOAD_11.PQBRAK) / LOAD_11.PQBRAK * LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_11.PQBRAK / LOAD_11.PQBRAK ^ 2.0 else 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2490(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2490};
  modelica_boolean tmp310;
  modelica_boolean tmp311;
  modelica_real tmp312;
  modelica_boolean tmp313;
  modelica_boolean tmp314;
  modelica_real tmp315;
  modelica_boolean tmp316;
  modelica_real tmp317;
  modelica_boolean tmp318;
  modelica_real tmp319;
  RELATIONHYSTERESIS(tmp310, data->localData[0]->realVars[371] /* LOAD_11.v variable */, (0.5) * (data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */), 96, Less);
  RELATIONHYSTERESIS(tmp311, data->localData[0]->realVars[371] /* LOAD_11.v variable */, 0.0, 97, Greater);
  tmp318 = (modelica_boolean)(tmp310 && tmp311);
  if(tmp318)
  {
    tmp312 = data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */;
    tmp319 = (2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[371] /* LOAD_11.v variable */,data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */,"LOAD_11.PQBRAK"))) * ((jacobian->tmpVars[8] /* LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */)),(tmp312 * tmp312),"LOAD_11.PQBRAK ^ 2.0"));
  }
  else
  {
    RELATIONHYSTERESIS(tmp313, data->localData[0]->realVars[371] /* LOAD_11.v variable */, (0.5) * (data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */), 98, Greater);
    RELATIONHYSTERESIS(tmp314, data->localData[0]->realVars[371] /* LOAD_11.v variable */, data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */, 99, Less);
    tmp316 = (modelica_boolean)(tmp313 && tmp314);
    if(tmp316)
    {
      tmp315 = data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */;
      tmp317 = (-2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[371] /* LOAD_11.v variable */ - data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */,data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */,"LOAD_11.PQBRAK"))) * ((jacobian->tmpVars[8] /* LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */)),(tmp315 * tmp315),"LOAD_11.PQBRAK ^ 2.0"));
    }
    else
    {
      tmp317 = 0.0;
    }
    tmp319 = tmp317;
  }
  jacobian->tmpVars[9] /* LOAD_11.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp319;
  TRACE_POP
}

/*
equation index: 2491
type: SIMPLE_ASSIGN
LOAD_11.Q.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_11.t1 and time <= LOAD_11.t1 + LOAD_11.d_t then LOAD_11.S_I.im * LOAD_11.kI * LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_11.S_Y.im * 2.0 * LOAD_11.v * LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_11.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_11.S_P.im + LOAD_11.d_Q) else LOAD_11.S_I.im * LOAD_11.kI * LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_11.S_Y.im * 2.0 * LOAD_11.v * LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_11.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_11.S_P.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2491(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2491};
  modelica_boolean tmp320;
  modelica_boolean tmp321;
  RELATIONHYSTERESIS(tmp320, data->localData[0]->timeValue, data->simulationInfo->realParameter[416] /* LOAD_11.t1 PARAM */, 94, GreaterEq);
  RELATIONHYSTERESIS(tmp321, data->localData[0]->timeValue, data->simulationInfo->realParameter[416] /* LOAD_11.t1 PARAM */ + data->simulationInfo->realParameter[410] /* LOAD_11.d_t PARAM */, 95, LessEq);
  jacobian->tmpVars[11] /* LOAD_11.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp320 && tmp321)?(data->simulationInfo->realParameter[382] /* LOAD_11.S_I.im PARAM */) * ((data->localData[0]->realVars[369] /* LOAD_11.kI variable */) * (jacobian->tmpVars[8] /* LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[386] /* LOAD_11.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[371] /* LOAD_11.v variable */)) * (jacobian->tmpVars[8] /* LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[9] /* LOAD_11.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[384] /* LOAD_11.S_P.im PARAM */ + data->simulationInfo->realParameter[409] /* LOAD_11.d_Q PARAM */):(data->simulationInfo->realParameter[382] /* LOAD_11.S_I.im PARAM */) * ((data->localData[0]->realVars[369] /* LOAD_11.kI variable */) * (jacobian->tmpVars[8] /* LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[386] /* LOAD_11.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[371] /* LOAD_11.v variable */)) * (jacobian->tmpVars[8] /* LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[9] /* LOAD_11.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[384] /* LOAD_11.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 2492
type: SIMPLE_ASSIGN
$res_NLSJac2_34.$pDERNLSJac2.dummyVarNLSJac2 = Bus_11.p[2].vr * Bus_11.p[2].ii.SeedNLSJac2 + Bus_11.p[2].vr.SeedNLSJac2 * Bus_11.p[2].ii + (-Bus_11.p[2].vi.SeedNLSJac2) * Bus_11.p[2].ir - LOAD_11.Q.$pDERNLSJac2.dummyVarNLSJac2 - Bus_11.p[2].vi * Bus_11.p[2].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2492(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2492};
  jacobian->resultVars[33] /* $res_NLSJac2_34.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */) * (jacobian->seedVars[34] /* Bus_11.p[2].ii.SeedNLSJac2 SEED_VAR */) + (jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[302] /* Bus_11.p[2].ii variable */) + ((-jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */)) * (data->localData[0]->realVars[303] /* Bus_11.p[2].ir variable */) - jacobian->tmpVars[11] /* LOAD_11.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */) * (jacobian->seedVars[37] /* Bus_11.p[2].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2493
type: SIMPLE_ASSIGN
LOAD_11.P.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_11.t1 and time <= LOAD_11.t1 + LOAD_11.d_t then LOAD_11.S_I.re * LOAD_11.kI * LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_11.S_Y.re * 2.0 * LOAD_11.v * LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_11.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_11.S_P.re + LOAD_11.d_P) else LOAD_11.S_I.re * LOAD_11.kI * LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_11.S_Y.re * 2.0 * LOAD_11.v * LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_11.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_11.S_P.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2493(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2493};
  modelica_boolean tmp322;
  modelica_boolean tmp323;
  RELATIONHYSTERESIS(tmp322, data->localData[0]->timeValue, data->simulationInfo->realParameter[416] /* LOAD_11.t1 PARAM */, 94, GreaterEq);
  RELATIONHYSTERESIS(tmp323, data->localData[0]->timeValue, data->simulationInfo->realParameter[416] /* LOAD_11.t1 PARAM */ + data->simulationInfo->realParameter[410] /* LOAD_11.d_t PARAM */, 95, LessEq);
  jacobian->tmpVars[18] /* LOAD_11.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp322 && tmp323)?(data->simulationInfo->realParameter[383] /* LOAD_11.S_I.re PARAM */) * ((data->localData[0]->realVars[369] /* LOAD_11.kI variable */) * (jacobian->tmpVars[8] /* LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[387] /* LOAD_11.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[371] /* LOAD_11.v variable */)) * (jacobian->tmpVars[8] /* LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[9] /* LOAD_11.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[385] /* LOAD_11.S_P.re PARAM */ + data->simulationInfo->realParameter[408] /* LOAD_11.d_P PARAM */):(data->simulationInfo->realParameter[383] /* LOAD_11.S_I.re PARAM */) * ((data->localData[0]->realVars[369] /* LOAD_11.kI variable */) * (jacobian->tmpVars[8] /* LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[387] /* LOAD_11.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[371] /* LOAD_11.v variable */)) * (jacobian->tmpVars[8] /* LOAD_11.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[9] /* LOAD_11.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[385] /* LOAD_11.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 2494
type: SIMPLE_ASSIGN
$res_NLSJac2_33.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_11.p[2].vi) * Bus_11.p[2].ii.SeedNLSJac2 - Bus_11.p[2].vi.SeedNLSJac2 * Bus_11.p[2].ii - LOAD_11.P.$pDERNLSJac2.dummyVarNLSJac2 - Bus_11.p[2].vr.SeedNLSJac2 * Bus_11.p[2].ir - Bus_11.p[2].vr * Bus_11.p[2].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2494(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2494};
  jacobian->resultVars[32] /* $res_NLSJac2_33.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */)) * (jacobian->seedVars[34] /* Bus_11.p[2].ii.SeedNLSJac2 SEED_VAR */) - ((jacobian->seedVars[100] /* Bus_11.p[2].vi.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[302] /* Bus_11.p[2].ii variable */)) - jacobian->tmpVars[18] /* LOAD_11.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->seedVars[99] /* Bus_11.p[2].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[303] /* Bus_11.p[2].ir variable */)) - ((data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */) * (jacobian->seedVars[37] /* Bus_11.p[2].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2495
type: SIMPLE_ASSIGN
LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_12.n[1].vr * Bus_12.n[1].vr.SeedNLSJac2 + Bus_12.n[1].vi * Bus_12.n[1].vi.SeedNLSJac2) / sqrt(Bus_12.n[1].vr ^ 2.0 + Bus_12.n[1].vi ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2495(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2495};
  modelica_real tmp324;
  modelica_real tmp325;
  tmp324 = data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */;
  tmp325 = data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */;
  jacobian->tmpVars[4] /* LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */) * (jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */) * (jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */),sqrt((tmp324 * tmp324) + (tmp325 * tmp325)),"sqrt(Bus_12.n[1].vr ^ 2.0 + Bus_12.n[1].vi ^ 2.0)");
  TRACE_POP
}

/*
equation index: 2496
type: SIMPLE_ASSIGN
LOAD_12.kP.$pDERNLSJac2.dummyVarNLSJac2 = if LOAD_12.v < 0.5 * LOAD_12.PQBRAK and LOAD_12.v > 0.0 then 2.0 * 2.0 * LOAD_12.v / LOAD_12.PQBRAK * LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_12.PQBRAK / LOAD_12.PQBRAK ^ 2.0 else if LOAD_12.v > 0.5 * LOAD_12.PQBRAK and LOAD_12.v < LOAD_12.PQBRAK then (-2.0) * 2.0 * (LOAD_12.v - LOAD_12.PQBRAK) / LOAD_12.PQBRAK * LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_12.PQBRAK / LOAD_12.PQBRAK ^ 2.0 else 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2496(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2496};
  modelica_boolean tmp326;
  modelica_boolean tmp327;
  modelica_real tmp328;
  modelica_boolean tmp329;
  modelica_boolean tmp330;
  modelica_real tmp331;
  modelica_boolean tmp332;
  modelica_real tmp333;
  modelica_boolean tmp334;
  modelica_real tmp335;
  RELATIONHYSTERESIS(tmp326, data->localData[0]->realVars[377] /* LOAD_12.v variable */, (0.5) * (data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */), 104, Less);
  RELATIONHYSTERESIS(tmp327, data->localData[0]->realVars[377] /* LOAD_12.v variable */, 0.0, 105, Greater);
  tmp334 = (modelica_boolean)(tmp326 && tmp327);
  if(tmp334)
  {
    tmp328 = data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */;
    tmp335 = (2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[377] /* LOAD_12.v variable */,data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */,"LOAD_12.PQBRAK"))) * ((jacobian->tmpVars[4] /* LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */)),(tmp328 * tmp328),"LOAD_12.PQBRAK ^ 2.0"));
  }
  else
  {
    RELATIONHYSTERESIS(tmp329, data->localData[0]->realVars[377] /* LOAD_12.v variable */, (0.5) * (data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */), 106, Greater);
    RELATIONHYSTERESIS(tmp330, data->localData[0]->realVars[377] /* LOAD_12.v variable */, data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */, 107, Less);
    tmp332 = (modelica_boolean)(tmp329 && tmp330);
    if(tmp332)
    {
      tmp331 = data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */;
      tmp333 = (-2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[377] /* LOAD_12.v variable */ - data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */,data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */,"LOAD_12.PQBRAK"))) * ((jacobian->tmpVars[4] /* LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */)),(tmp331 * tmp331),"LOAD_12.PQBRAK ^ 2.0"));
    }
    else
    {
      tmp333 = 0.0;
    }
    tmp335 = tmp333;
  }
  jacobian->tmpVars[5] /* LOAD_12.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp335;
  TRACE_POP
}

/*
equation index: 2497
type: SIMPLE_ASSIGN
LOAD_12.Q.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_12.t1 and time <= LOAD_12.t1 + LOAD_12.d_t then LOAD_12.S_I.im * LOAD_12.kI * LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_12.S_Y.im * 2.0 * LOAD_12.v * LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_12.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_12.S_P.im + LOAD_12.d_Q) else LOAD_12.S_I.im * LOAD_12.kI * LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_12.S_Y.im * 2.0 * LOAD_12.v * LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_12.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_12.S_P.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2497(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2497};
  modelica_boolean tmp336;
  modelica_boolean tmp337;
  RELATIONHYSTERESIS(tmp336, data->localData[0]->timeValue, data->simulationInfo->realParameter[458] /* LOAD_12.t1 PARAM */, 102, GreaterEq);
  RELATIONHYSTERESIS(tmp337, data->localData[0]->timeValue, data->simulationInfo->realParameter[458] /* LOAD_12.t1 PARAM */ + data->simulationInfo->realParameter[452] /* LOAD_12.d_t PARAM */, 103, LessEq);
  jacobian->tmpVars[7] /* LOAD_12.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp336 && tmp337)?(data->simulationInfo->realParameter[424] /* LOAD_12.S_I.im PARAM */) * ((data->localData[0]->realVars[375] /* LOAD_12.kI variable */) * (jacobian->tmpVars[4] /* LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[428] /* LOAD_12.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[377] /* LOAD_12.v variable */)) * (jacobian->tmpVars[4] /* LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[5] /* LOAD_12.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[426] /* LOAD_12.S_P.im PARAM */ + data->simulationInfo->realParameter[451] /* LOAD_12.d_Q PARAM */):(data->simulationInfo->realParameter[424] /* LOAD_12.S_I.im PARAM */) * ((data->localData[0]->realVars[375] /* LOAD_12.kI variable */) * (jacobian->tmpVars[4] /* LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[428] /* LOAD_12.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[377] /* LOAD_12.v variable */)) * (jacobian->tmpVars[4] /* LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[5] /* LOAD_12.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[426] /* LOAD_12.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 2498
type: SIMPLE_ASSIGN
$res_NLSJac2_49.$pDERNLSJac2.dummyVarNLSJac2 = Bus_12.n[1].vr * Bus_12.n[1].ii.SeedNLSJac2 + Bus_12.n[1].vr.SeedNLSJac2 * Bus_12.n[1].ii + (-Bus_12.n[1].vi.SeedNLSJac2) * Bus_12.n[1].ir - LOAD_12.Q.$pDERNLSJac2.dummyVarNLSJac2 - Bus_12.n[1].vi * Bus_12.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2498(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2498};
  jacobian->resultVars[48] /* $res_NLSJac2_49.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */) * (jacobian->seedVars[24] /* Bus_12.n[1].ii.SeedNLSJac2 SEED_VAR */) + (jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[308] /* Bus_12.n[1].ii variable */) + ((-jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */)) * (data->localData[0]->realVars[309] /* Bus_12.n[1].ir variable */) - jacobian->tmpVars[7] /* LOAD_12.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */) * (jacobian->tmpVars[116] /* Bus_12.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 2499
type: SIMPLE_ASSIGN
LOAD_12.P.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_12.t1 and time <= LOAD_12.t1 + LOAD_12.d_t then LOAD_12.S_I.re * LOAD_12.kI * LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_12.S_Y.re * 2.0 * LOAD_12.v * LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_12.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_12.S_P.re + LOAD_12.d_P) else LOAD_12.S_I.re * LOAD_12.kI * LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_12.S_Y.re * 2.0 * LOAD_12.v * LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_12.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_12.S_P.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2499(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2499};
  modelica_boolean tmp338;
  modelica_boolean tmp339;
  RELATIONHYSTERESIS(tmp338, data->localData[0]->timeValue, data->simulationInfo->realParameter[458] /* LOAD_12.t1 PARAM */, 102, GreaterEq);
  RELATIONHYSTERESIS(tmp339, data->localData[0]->timeValue, data->simulationInfo->realParameter[458] /* LOAD_12.t1 PARAM */ + data->simulationInfo->realParameter[452] /* LOAD_12.d_t PARAM */, 103, LessEq);
  jacobian->tmpVars[17] /* LOAD_12.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp338 && tmp339)?(data->simulationInfo->realParameter[425] /* LOAD_12.S_I.re PARAM */) * ((data->localData[0]->realVars[375] /* LOAD_12.kI variable */) * (jacobian->tmpVars[4] /* LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[429] /* LOAD_12.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[377] /* LOAD_12.v variable */)) * (jacobian->tmpVars[4] /* LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[5] /* LOAD_12.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[427] /* LOAD_12.S_P.re PARAM */ + data->simulationInfo->realParameter[450] /* LOAD_12.d_P PARAM */):(data->simulationInfo->realParameter[425] /* LOAD_12.S_I.re PARAM */) * ((data->localData[0]->realVars[375] /* LOAD_12.kI variable */) * (jacobian->tmpVars[4] /* LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[429] /* LOAD_12.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[377] /* LOAD_12.v variable */)) * (jacobian->tmpVars[4] /* LOAD_12.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[5] /* LOAD_12.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[427] /* LOAD_12.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 2500
type: SIMPLE_ASSIGN
$res_NLSJac2_48.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_12.n[1].vi) * Bus_12.n[1].ii.SeedNLSJac2 - Bus_12.n[1].vi.SeedNLSJac2 * Bus_12.n[1].ii - LOAD_12.P.$pDERNLSJac2.dummyVarNLSJac2 - Bus_12.n[1].vr.SeedNLSJac2 * Bus_12.n[1].ir - Bus_12.n[1].vr * Bus_12.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2500(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2500};
  jacobian->resultVars[47] /* $res_NLSJac2_48.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */)) * (jacobian->seedVars[24] /* Bus_12.n[1].ii.SeedNLSJac2 SEED_VAR */) - ((jacobian->seedVars[98] /* Bus_12.n[1].vi.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[308] /* Bus_12.n[1].ii variable */)) - jacobian->tmpVars[17] /* LOAD_12.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->seedVars[97] /* Bus_12.n[1].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[309] /* Bus_12.n[1].ir variable */)) - ((data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */) * (jacobian->tmpVars[116] /* Bus_12.n.1.ir.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 2501
type: SIMPLE_ASSIGN
LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 = (Bus_13.n[2].vr * Bus_13.n[2].vr.SeedNLSJac2 + Bus_13.n[2].vi * Bus_13.n[2].vi.SeedNLSJac2) / sqrt(Bus_13.n[2].vr ^ 2.0 + Bus_13.n[2].vi ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2501(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2501};
  modelica_real tmp340;
  modelica_real tmp341;
  tmp340 = data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */;
  tmp341 = data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */;
  jacobian->tmpVars[0] /* LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */) * (jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */) + (data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */) * (jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */),sqrt((tmp340 * tmp340) + (tmp341 * tmp341)),"sqrt(Bus_13.n[2].vr ^ 2.0 + Bus_13.n[2].vi ^ 2.0)");
  TRACE_POP
}

/*
equation index: 2502
type: SIMPLE_ASSIGN
LOAD_13.kP.$pDERNLSJac2.dummyVarNLSJac2 = if LOAD_13.v < 0.5 * LOAD_13.PQBRAK and LOAD_13.v > 0.0 then 2.0 * 2.0 * LOAD_13.v / LOAD_13.PQBRAK * LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_13.PQBRAK / LOAD_13.PQBRAK ^ 2.0 else if LOAD_13.v > 0.5 * LOAD_13.PQBRAK and LOAD_13.v < LOAD_13.PQBRAK then (-2.0) * 2.0 * (LOAD_13.v - LOAD_13.PQBRAK) / LOAD_13.PQBRAK * LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_13.PQBRAK / LOAD_13.PQBRAK ^ 2.0 else 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2502(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2502};
  modelica_boolean tmp342;
  modelica_boolean tmp343;
  modelica_real tmp344;
  modelica_boolean tmp345;
  modelica_boolean tmp346;
  modelica_real tmp347;
  modelica_boolean tmp348;
  modelica_real tmp349;
  modelica_boolean tmp350;
  modelica_real tmp351;
  RELATIONHYSTERESIS(tmp342, data->localData[0]->realVars[383] /* LOAD_13.v variable */, (0.5) * (data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */), 90, Less);
  RELATIONHYSTERESIS(tmp343, data->localData[0]->realVars[383] /* LOAD_13.v variable */, 0.0, 91, Greater);
  tmp350 = (modelica_boolean)(tmp342 && tmp343);
  if(tmp350)
  {
    tmp344 = data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */;
    tmp351 = (2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[383] /* LOAD_13.v variable */,data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */,"LOAD_13.PQBRAK"))) * ((jacobian->tmpVars[0] /* LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */)),(tmp344 * tmp344),"LOAD_13.PQBRAK ^ 2.0"));
  }
  else
  {
    RELATIONHYSTERESIS(tmp345, data->localData[0]->realVars[383] /* LOAD_13.v variable */, (0.5) * (data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */), 92, Greater);
    RELATIONHYSTERESIS(tmp346, data->localData[0]->realVars[383] /* LOAD_13.v variable */, data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */, 93, Less);
    tmp348 = (modelica_boolean)(tmp345 && tmp346);
    if(tmp348)
    {
      tmp347 = data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */;
      tmp349 = (-2.0) * (DIVISION(((2.0) * (DIVISION(data->localData[0]->realVars[383] /* LOAD_13.v variable */ - data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */,data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */,"LOAD_13.PQBRAK"))) * ((jacobian->tmpVars[0] /* LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */)),(tmp347 * tmp347),"LOAD_13.PQBRAK ^ 2.0"));
    }
    else
    {
      tmp349 = 0.0;
    }
    tmp351 = tmp349;
  }
  jacobian->tmpVars[2] /* LOAD_13.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = tmp351;
  TRACE_POP
}

/*
equation index: 2503
type: SIMPLE_ASSIGN
LOAD_13.Q.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_13.t1 and time <= LOAD_13.t1 + LOAD_13.d_t then LOAD_13.S_I.im * LOAD_13.kI * LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_13.S_Y.im * 2.0 * LOAD_13.v * LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_13.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_13.S_P.im + LOAD_13.d_Q) else LOAD_13.S_I.im * LOAD_13.kI * LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_13.S_Y.im * 2.0 * LOAD_13.v * LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_13.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_13.S_P.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2503(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2503};
  modelica_boolean tmp352;
  modelica_boolean tmp353;
  RELATIONHYSTERESIS(tmp352, data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* LOAD_13.t1 PARAM */, 88, GreaterEq);
  RELATIONHYSTERESIS(tmp353, data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* LOAD_13.t1 PARAM */ + data->simulationInfo->realParameter[494] /* LOAD_13.d_t PARAM */, 89, LessEq);
  jacobian->tmpVars[3] /* LOAD_13.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp352 && tmp353)?(data->simulationInfo->realParameter[466] /* LOAD_13.S_I.im PARAM */) * ((data->localData[0]->realVars[381] /* LOAD_13.kI variable */) * (jacobian->tmpVars[0] /* LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[470] /* LOAD_13.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[383] /* LOAD_13.v variable */)) * (jacobian->tmpVars[0] /* LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* LOAD_13.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[468] /* LOAD_13.S_P.im PARAM */ + data->simulationInfo->realParameter[493] /* LOAD_13.d_Q PARAM */):(data->simulationInfo->realParameter[466] /* LOAD_13.S_I.im PARAM */) * ((data->localData[0]->realVars[381] /* LOAD_13.kI variable */) * (jacobian->tmpVars[0] /* LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[470] /* LOAD_13.S_Y.im PARAM */) * (((2.0) * (data->localData[0]->realVars[383] /* LOAD_13.v variable */)) * (jacobian->tmpVars[0] /* LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* LOAD_13.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[468] /* LOAD_13.S_P.im PARAM */));
  TRACE_POP
}

/*
equation index: 2504
type: SIMPLE_ASSIGN
$res_NLSJac2_52.$pDERNLSJac2.dummyVarNLSJac2 = Bus_13.n[2].vr * Bus_13.p[2].ii.SeedNLSJac2 + Bus_13.n[2].vr.SeedNLSJac2 * Bus_13.p[2].ii + (-Bus_13.n[2].vi.SeedNLSJac2) * Bus_13.p[2].ir - LOAD_13.Q.$pDERNLSJac2.dummyVarNLSJac2 - Bus_13.n[2].vi * Bus_13.p[2].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2504(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2504};
  jacobian->resultVars[51] /* $res_NLSJac2_52.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */) * (jacobian->seedVars[21] /* Bus_13.p[2].ii.SeedNLSJac2 SEED_VAR */) + (jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[316] /* Bus_13.p[2].ii variable */) + ((-jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */)) * (data->localData[0]->realVars[317] /* Bus_13.p[2].ir variable */) - jacobian->tmpVars[3] /* LOAD_13.Q.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */) * (jacobian->seedVars[19] /* Bus_13.p[2].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 2505
type: SIMPLE_ASSIGN
LOAD_13.P.$pDERNLSJac2.dummyVarNLSJac2 = if time >= LOAD_13.t1 and time <= LOAD_13.t1 + LOAD_13.d_t then LOAD_13.S_I.re * LOAD_13.kI * LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_13.S_Y.re * 2.0 * LOAD_13.v * LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_13.kP.$pDERNLSJac2.dummyVarNLSJac2 * (LOAD_13.S_P.re + LOAD_13.d_P) else LOAD_13.S_I.re * LOAD_13.kI * LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_13.S_Y.re * 2.0 * LOAD_13.v * LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 + LOAD_13.kP.$pDERNLSJac2.dummyVarNLSJac2 * LOAD_13.S_P.re
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2505(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2505};
  modelica_boolean tmp354;
  modelica_boolean tmp355;
  RELATIONHYSTERESIS(tmp354, data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* LOAD_13.t1 PARAM */, 88, GreaterEq);
  RELATIONHYSTERESIS(tmp355, data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* LOAD_13.t1 PARAM */ + data->simulationInfo->realParameter[494] /* LOAD_13.d_t PARAM */, 89, LessEq);
  jacobian->tmpVars[16] /* LOAD_13.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((tmp354 && tmp355)?(data->simulationInfo->realParameter[467] /* LOAD_13.S_I.re PARAM */) * ((data->localData[0]->realVars[381] /* LOAD_13.kI variable */) * (jacobian->tmpVars[0] /* LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[471] /* LOAD_13.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[383] /* LOAD_13.v variable */)) * (jacobian->tmpVars[0] /* LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* LOAD_13.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[469] /* LOAD_13.S_P.re PARAM */ + data->simulationInfo->realParameter[492] /* LOAD_13.d_P PARAM */):(data->simulationInfo->realParameter[467] /* LOAD_13.S_I.re PARAM */) * ((data->localData[0]->realVars[381] /* LOAD_13.kI variable */) * (jacobian->tmpVars[0] /* LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (data->simulationInfo->realParameter[471] /* LOAD_13.S_Y.re PARAM */) * (((2.0) * (data->localData[0]->realVars[383] /* LOAD_13.v variable */)) * (jacobian->tmpVars[0] /* LOAD_13.v.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */)) + (jacobian->tmpVars[2] /* LOAD_13.kP.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[469] /* LOAD_13.S_P.re PARAM */));
  TRACE_POP
}

/*
equation index: 2506
type: SIMPLE_ASSIGN
$res_NLSJac2_51.$pDERNLSJac2.dummyVarNLSJac2 = (-Bus_13.n[2].vi) * Bus_13.p[2].ii.SeedNLSJac2 - Bus_13.n[2].vi.SeedNLSJac2 * Bus_13.p[2].ii - LOAD_13.P.$pDERNLSJac2.dummyVarNLSJac2 - Bus_13.n[2].vr.SeedNLSJac2 * Bus_13.p[2].ir - Bus_13.n[2].vr * Bus_13.p[2].ir.SeedNLSJac2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2506(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,2506};
  jacobian->resultVars[50] /* $res_NLSJac2_51.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((-data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */)) * (jacobian->seedVars[21] /* Bus_13.p[2].ii.SeedNLSJac2 SEED_VAR */) - ((jacobian->seedVars[96] /* Bus_13.n[2].vi.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[316] /* Bus_13.p[2].ii variable */)) - jacobian->tmpVars[16] /* LOAD_13.P.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - ((jacobian->seedVars[95] /* Bus_13.n[2].vr.SeedNLSJac2 SEED_VAR */) * (data->localData[0]->realVars[317] /* Bus_13.p[2].ir variable */)) - ((data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */) * (jacobian->seedVars[19] /* Bus_13.p[2].ir.SeedNLSJac2 SEED_VAR */));
  TRACE_POP
}

OMC_DISABLE_OPT
int IEEE14_IEEE14_Base_Case_functionJacNLSJac2_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = IEEE14_IEEE14_Base_Case_INDEX_JAC_NLSJac2;
  
  
  TRACE_POP
  return 0;
}

int IEEE14_IEEE14_Base_Case_functionJacNLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = IEEE14_IEEE14_Base_Case_INDEX_JAC_NLSJac2;
  IEEE14_IEEE14_Base_Case_eqFunction_2289(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2290(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2291(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2292(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2293(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2294(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2295(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2296(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2297(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2298(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2299(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2300(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2301(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2302(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2303(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2304(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2305(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2306(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2307(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2308(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2309(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2310(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2311(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2312(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2313(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2314(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2315(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2316(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2317(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2318(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2319(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2320(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2321(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2322(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2323(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2324(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2325(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2326(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2327(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2328(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2329(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2330(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2331(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2332(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2333(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2334(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2335(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2336(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2337(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2338(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2339(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2340(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2341(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2342(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2343(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2344(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2345(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2346(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2347(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2348(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2349(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2350(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2351(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2352(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2353(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2354(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2355(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2356(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2357(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2358(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2359(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2360(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2361(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2362(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2363(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2364(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2365(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2366(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2367(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2368(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2369(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2370(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2371(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2372(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2373(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2374(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2375(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2376(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2377(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2378(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2379(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2380(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2381(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2382(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2383(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2384(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2385(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2386(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2387(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2388(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2389(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2390(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2391(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2392(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2393(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2394(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2395(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2396(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2397(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2398(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2399(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2400(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2401(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2402(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2403(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2404(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2405(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2406(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2407(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2408(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2409(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2410(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2411(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2412(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2413(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2414(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2415(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2416(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2417(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2418(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2419(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2420(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2421(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2422(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2423(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2424(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2425(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2426(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2427(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2428(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2429(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2430(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2431(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2432(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2433(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2434(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2435(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2436(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2437(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2438(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2439(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2440(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2441(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2442(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2443(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2444(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2445(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2446(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2447(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2448(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2449(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2450(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2451(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2452(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2453(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2454(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2455(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2456(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2457(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2458(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2459(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2460(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2461(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2462(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2463(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2464(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2465(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2466(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2467(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2468(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2469(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2470(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2471(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2472(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2473(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2474(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2475(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2476(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2477(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2478(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2479(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2480(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2481(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2482(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2483(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2484(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2485(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2486(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2487(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2488(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2489(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2490(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2491(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2492(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2493(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2494(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2495(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2496(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2497(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2498(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2499(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2500(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2501(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2502(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2503(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2504(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2505(data, threadData, jacobian, parentJacobian);
  IEEE14_IEEE14_Base_Case_eqFunction_2506(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int IEEE14_IEEE14_Base_Case_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int IEEE14_IEEE14_Base_Case_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int IEEE14_IEEE14_Base_Case_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int IEEE14_IEEE14_Base_Case_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int IEEE14_IEEE14_Base_Case_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = IEEE14_IEEE14_Base_Case_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int IEEE14_IEEE14_Base_Case_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = IEEE14_IEEE14_Base_Case_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int IEEE14_IEEE14_Base_Case_initialAnalyticJacobianNLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+103] = {0,4,4,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,3,3,4,4,4,4,3,3,3,4,4,9,9,3,5,14,13,5,8,16,16,3,23,22,22,21,4,4,26,25,25,19,19,11,11,8,8,19,19,3,3,3,3,3,3,3,11,11,8,8,8,8,8,8};
  const int rowIndex[710] = {79,94,95,102,92,93,94,95,73,90,91,5,73,89,82,83,94,95,92,93,94,95,82,83,92,93,80,81,94,95,80,81,92,93,79,92,93,102,74,96,97,98,74,75,76,96,75,76,97,98,74,75,76,96,63,64,66,67,59,60,63,64,63,64,66,67,59,60,63,64,52,53,54,58,50,51,52,58,52,53,54,58,50,51,52,58,46,47,48,49,44,45,47,48,46,47,48,49,44,45,46,49,42,43,52,58,42,43,52,58,41,55,56,57,38,39,41,57,41,55,56,57,38,39,55,56,36,37,41,57,36,37,55,56,32,33,34,35,30,31,34,35,30,31,34,35,30,31,32,33,26,27,28,29,24,25,26,27,26,27,28,29,24,25,28,29,61,62,68,69,22,23,61,62,61,62,68,69,22,23,61,62,17,18,61,62,17,18,61,62,72,90,91,8,9,72,8,9,73,85,86,87,88,6,7,85,86,85,86,87,88,6,7,85,86,5,72,89,3,4,73,3,4,72,0,1,74,96,0,1,75,76,52,59,60,61,63,64,65,66,67,58,59,60,62,63,64,65,66,67,71,72,73,61,62,70,71,73,15,17,18,19,22,23,27,61,62,66,68,69,70,71,16,17,18,19,22,23,26,61,62,67,68,69,70,21,74,75,76,96,20,21,41,55,56,57,74,96,0,1,4,20,21,41,57,74,75,76,94,96,97,98,99,100,0,1,3,20,21,41,57,74,75,76,95,96,97,98,99,101,14,72,73,3,4,5,6,7,8,9,10,11,14,61,62,70,71,72,73,74,80,81,89,90,91,96,3,4,5,7,8,9,10,11,14,15,16,61,62,70,71,72,73,81,89,90,91,96,3,4,5,7,8,9,10,11,14,15,16,61,62,70,71,72,73,81,89,90,91,96,3,4,5,7,8,9,10,11,13,14,61,62,70,71,72,73,81,89,90,91,96,77,78,100,101,77,78,100,101,3,4,5,7,8,9,10,11,12,13,14,15,16,61,62,68,69,70,71,72,73,81,89,90,91,96,3,4,5,7,8,9,10,11,12,13,14,15,16,61,62,69,70,71,72,73,81,89,90,91,96,3,4,5,7,8,9,10,11,12,13,14,15,16,61,62,69,70,71,72,73,81,89,90,91,96,20,21,34,35,36,37,38,39,40,41,44,45,53,54,55,56,57,74,96,20,21,34,35,36,37,38,39,40,41,44,45,53,54,55,56,57,74,96,2,5,6,7,85,86,87,88,89,92,93,2,5,6,7,85,86,87,88,89,92,93,0,1,77,78,79,100,101,102,0,1,77,78,79,100,101,102,75,76,77,78,79,80,81,82,83,84,85,86,90,91,92,93,94,95,102,75,76,77,78,79,80,81,82,83,84,85,86,90,91,92,93,94,95,102,8,9,10,17,18,19,38,39,40,63,64,65,82,83,84,2,87,88,97,98,99,42,43,46,50,51,52,53,54,57,58,59,41,42,43,49,50,51,52,53,54,58,60,42,44,45,46,47,48,49,55,43,44,45,46,47,48,49,56,28,30,31,32,33,34,35,36,29,30,31,32,33,34,35,37,22,24,25,26,27,28,29,30,23,24,25,26,27,28,29,31};
  int i = 0;
  
  jacobian->sizeCols = 103;
  jacobian->sizeRows = 103;
  jacobian->sizeTmpVars = 229;
  jacobian->seedVars = (modelica_real*) calloc(103,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(103,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(229,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((103+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(710*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 710;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(103*sizeof(int));
  jacobian->sparsePattern->maxColors = 18;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (103+1)*sizeof(int));
  
  for(i=2;i<103+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 710*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[79] = 1;
  jacobian->sparsePattern->colorCols[78] = 2;
  jacobian->sparsePattern->colorCols[77] = 3;
  jacobian->sparsePattern->colorCols[74] = 4;
  jacobian->sparsePattern->colorCols[73] = 5;
  jacobian->sparsePattern->colorCols[72] = 6;
  jacobian->sparsePattern->colorCols[71] = 7;
  jacobian->sparsePattern->colorCols[96] = 7;
  jacobian->sparsePattern->colorCols[65] = 8;
  jacobian->sparsePattern->colorCols[95] = 8;
  jacobian->sparsePattern->colorCols[64] = 9;
  jacobian->sparsePattern->colorCols[81] = 9;
  jacobian->sparsePattern->colorCols[87] = 9;
  jacobian->sparsePattern->colorCols[63] = 10;
  jacobian->sparsePattern->colorCols[80] = 10;
  jacobian->sparsePattern->colorCols[86] = 10;
  jacobian->sparsePattern->colorCols[61] = 11;
  jacobian->sparsePattern->colorCols[69] = 11;
  jacobian->sparsePattern->colorCols[98] = 11;
  jacobian->sparsePattern->colorCols[102] = 11;
  jacobian->sparsePattern->colorCols[60] = 12;
  jacobian->sparsePattern->colorCols[68] = 12;
  jacobian->sparsePattern->colorCols[70] = 12;
  jacobian->sparsePattern->colorCols[83] = 12;
  jacobian->sparsePattern->colorCols[97] = 12;
  jacobian->sparsePattern->colorCols[101] = 12;
  jacobian->sparsePattern->colorCols[27] = 13;
  jacobian->sparsePattern->colorCols[47] = 13;
  jacobian->sparsePattern->colorCols[62] = 13;
  jacobian->sparsePattern->colorCols[67] = 13;
  jacobian->sparsePattern->colorCols[82] = 13;
  jacobian->sparsePattern->colorCols[85] = 13;
  jacobian->sparsePattern->colorCols[100] = 13;
  jacobian->sparsePattern->colorCols[7] = 14;
  jacobian->sparsePattern->colorCols[9] = 14;
  jacobian->sparsePattern->colorCols[26] = 14;
  jacobian->sparsePattern->colorCols[46] = 14;
  jacobian->sparsePattern->colorCols[57] = 14;
  jacobian->sparsePattern->colorCols[66] = 14;
  jacobian->sparsePattern->colorCols[91] = 14;
  jacobian->sparsePattern->colorCols[99] = 14;
  jacobian->sparsePattern->colorCols[5] = 15;
  jacobian->sparsePattern->colorCols[13] = 15;
  jacobian->sparsePattern->colorCols[17] = 15;
  jacobian->sparsePattern->colorCols[21] = 15;
  jacobian->sparsePattern->colorCols[25] = 15;
  jacobian->sparsePattern->colorCols[31] = 15;
  jacobian->sparsePattern->colorCols[32] = 15;
  jacobian->sparsePattern->colorCols[37] = 15;
  jacobian->sparsePattern->colorCols[41] = 15;
  jacobian->sparsePattern->colorCols[45] = 15;
  jacobian->sparsePattern->colorCols[54] = 15;
  jacobian->sparsePattern->colorCols[56] = 15;
  jacobian->sparsePattern->colorCols[84] = 15;
  jacobian->sparsePattern->colorCols[4] = 16;
  jacobian->sparsePattern->colorCols[8] = 16;
  jacobian->sparsePattern->colorCols[12] = 16;
  jacobian->sparsePattern->colorCols[16] = 16;
  jacobian->sparsePattern->colorCols[20] = 16;
  jacobian->sparsePattern->colorCols[24] = 16;
  jacobian->sparsePattern->colorCols[30] = 16;
  jacobian->sparsePattern->colorCols[36] = 16;
  jacobian->sparsePattern->colorCols[40] = 16;
  jacobian->sparsePattern->colorCols[44] = 16;
  jacobian->sparsePattern->colorCols[50] = 16;
  jacobian->sparsePattern->colorCols[53] = 16;
  jacobian->sparsePattern->colorCols[55] = 16;
  jacobian->sparsePattern->colorCols[58] = 16;
  jacobian->sparsePattern->colorCols[1] = 17;
  jacobian->sparsePattern->colorCols[3] = 17;
  jacobian->sparsePattern->colorCols[11] = 17;
  jacobian->sparsePattern->colorCols[15] = 17;
  jacobian->sparsePattern->colorCols[19] = 17;
  jacobian->sparsePattern->colorCols[23] = 17;
  jacobian->sparsePattern->colorCols[29] = 17;
  jacobian->sparsePattern->colorCols[33] = 17;
  jacobian->sparsePattern->colorCols[35] = 17;
  jacobian->sparsePattern->colorCols[39] = 17;
  jacobian->sparsePattern->colorCols[43] = 17;
  jacobian->sparsePattern->colorCols[48] = 17;
  jacobian->sparsePattern->colorCols[52] = 17;
  jacobian->sparsePattern->colorCols[76] = 17;
  jacobian->sparsePattern->colorCols[88] = 17;
  jacobian->sparsePattern->colorCols[92] = 17;
  jacobian->sparsePattern->colorCols[93] = 17;
  jacobian->sparsePattern->colorCols[94] = 17;
  jacobian->sparsePattern->colorCols[0] = 18;
  jacobian->sparsePattern->colorCols[2] = 18;
  jacobian->sparsePattern->colorCols[6] = 18;
  jacobian->sparsePattern->colorCols[10] = 18;
  jacobian->sparsePattern->colorCols[14] = 18;
  jacobian->sparsePattern->colorCols[18] = 18;
  jacobian->sparsePattern->colorCols[22] = 18;
  jacobian->sparsePattern->colorCols[28] = 18;
  jacobian->sparsePattern->colorCols[34] = 18;
  jacobian->sparsePattern->colorCols[38] = 18;
  jacobian->sparsePattern->colorCols[42] = 18;
  jacobian->sparsePattern->colorCols[49] = 18;
  jacobian->sparsePattern->colorCols[51] = 18;
  jacobian->sparsePattern->colorCols[59] = 18;
  jacobian->sparsePattern->colorCols[75] = 18;
  jacobian->sparsePattern->colorCols[89] = 18;
  jacobian->sparsePattern->colorCols[90] = 18;
  TRACE_POP
  return 0;
}
int IEEE14_IEEE14_Base_Case_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int IEEE14_IEEE14_Base_Case_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int IEEE14_IEEE14_Base_Case_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int IEEE14_IEEE14_Base_Case_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int IEEE14_IEEE14_Base_Case_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+102] = {0,82,82,82,82,82,27,3,3,4,2,4,3,21,21,23,22,23,22,20,7,6,5,4,3,2,1,12,11,10,9,8,3,2,1,2,3,82,82,82,82,82,27,3,3,4,2,4,3,21,21,23,22,23,22,20,7,6,5,4,3,2,1,12,11,10,9,8,3,2,1,2,3,82,82,82,82,82,2,3,3,4,2,82,82,82,82,82,2,3,3,4,2,82,82,82,82,82,2,3,3,4,2};
  const int rowIndex[2666] = {0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,4,5,8,9,10,11,12,14,15,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,6,8,9,7,8,9,1,7,8,9,8,9,8,9,10,11,8,9,11,8,9,10,11,12,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,8,9,10,11,13,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,8,9,10,11,12,14,15,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,8,9,10,11,12,15,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,8,9,10,11,13,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,8,9,10,11,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,19,20,21,22,23,24,25,20,21,22,23,24,25,21,22,23,24,25,22,23,24,25,23,24,25,24,25,25,8,9,10,11,26,27,28,29,30,31,32,33,8,9,10,11,27,28,29,30,31,32,33,8,9,10,11,28,29,30,31,32,33,8,9,10,11,29,30,31,32,33,8,9,10,11,30,31,32,33,31,32,33,32,33,33,5,34,5,34,35,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,40,41,44,45,46,47,48,50,51,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,42,44,45,43,44,45,37,43,44,45,44,45,44,45,46,47,44,45,47,44,45,46,47,48,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,44,45,46,47,49,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,44,45,46,47,48,50,51,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,44,45,46,47,48,51,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,44,45,46,47,49,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,44,45,46,47,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,55,56,57,58,59,60,61,56,57,58,59,60,61,57,58,59,60,61,58,59,60,61,59,60,61,60,61,61,44,45,46,47,62,63,64,65,66,67,68,69,44,45,46,47,63,64,65,66,67,68,69,44,45,46,47,64,65,66,67,68,69,44,45,46,47,65,66,67,68,69,44,45,46,47,66,67,68,69,67,68,69,68,69,69,41,70,41,70,71,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,76,77,78,80,81,79,80,81,73,79,80,81,80,81,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,86,87,88,90,91,89,90,91,83,89,90,91,90,91,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,0,1,2,3,5,6,8,9,10,11,13,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,36,37,38,39,41,42,44,45,46,47,49,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,74,75,77,78,80,81,82,83,84,85,87,88,90,91,92,93,94,95,97,98,100,101,96,97,98,100,101,99,100,101,93,99,100,101,100,101};
  int i = 0;
  
  jacobian->sizeCols = 102;
  jacobian->sizeRows = 102;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(102,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(102,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((102+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(2666*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 2666;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(102*sizeof(int));
  jacobian->sparsePattern->maxColors = 44;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (102+1)*sizeof(int));
  
  for(i=2;i<102+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 2666*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[39] = 1;
  jacobian->sparsePattern->colorCols[38] = 2;
  jacobian->sparsePattern->colorCols[37] = 3;
  jacobian->sparsePattern->colorCols[36] = 4;
  jacobian->sparsePattern->colorCols[40] = 5;
  jacobian->sparsePattern->colorCols[6] = 6;
  jacobian->sparsePattern->colorCols[42] = 6;
  jacobian->sparsePattern->colorCols[8] = 7;
  jacobian->sparsePattern->colorCols[44] = 7;
  jacobian->sparsePattern->colorCols[9] = 8;
  jacobian->sparsePattern->colorCols[45] = 8;
  jacobian->sparsePattern->colorCols[17] = 9;
  jacobian->sparsePattern->colorCols[53] = 9;
  jacobian->sparsePattern->colorCols[16] = 10;
  jacobian->sparsePattern->colorCols[52] = 10;
  jacobian->sparsePattern->colorCols[15] = 11;
  jacobian->sparsePattern->colorCols[51] = 11;
  jacobian->sparsePattern->colorCols[14] = 12;
  jacobian->sparsePattern->colorCols[50] = 12;
  jacobian->sparsePattern->colorCols[33] = 13;
  jacobian->sparsePattern->colorCols[7] = 13;
  jacobian->sparsePattern->colorCols[69] = 13;
  jacobian->sparsePattern->colorCols[43] = 13;
  jacobian->sparsePattern->colorCols[25] = 14;
  jacobian->sparsePattern->colorCols[30] = 14;
  jacobian->sparsePattern->colorCols[61] = 14;
  jacobian->sparsePattern->colorCols[66] = 14;
  jacobian->sparsePattern->colorCols[24] = 15;
  jacobian->sparsePattern->colorCols[29] = 15;
  jacobian->sparsePattern->colorCols[60] = 15;
  jacobian->sparsePattern->colorCols[65] = 15;
  jacobian->sparsePattern->colorCols[23] = 16;
  jacobian->sparsePattern->colorCols[28] = 16;
  jacobian->sparsePattern->colorCols[59] = 16;
  jacobian->sparsePattern->colorCols[64] = 16;
  jacobian->sparsePattern->colorCols[22] = 17;
  jacobian->sparsePattern->colorCols[27] = 17;
  jacobian->sparsePattern->colorCols[58] = 17;
  jacobian->sparsePattern->colorCols[63] = 17;
  jacobian->sparsePattern->colorCols[21] = 18;
  jacobian->sparsePattern->colorCols[26] = 18;
  jacobian->sparsePattern->colorCols[57] = 18;
  jacobian->sparsePattern->colorCols[62] = 18;
  jacobian->sparsePattern->colorCols[18] = 19;
  jacobian->sparsePattern->colorCols[54] = 19;
  jacobian->sparsePattern->colorCols[13] = 20;
  jacobian->sparsePattern->colorCols[49] = 20;
  jacobian->sparsePattern->colorCols[3] = 21;
  jacobian->sparsePattern->colorCols[2] = 22;
  jacobian->sparsePattern->colorCols[1] = 23;
  jacobian->sparsePattern->colorCols[0] = 24;
  jacobian->sparsePattern->colorCols[4] = 25;
  jacobian->sparsePattern->colorCols[95] = 26;
  jacobian->sparsePattern->colorCols[94] = 27;
  jacobian->sparsePattern->colorCols[93] = 28;
  jacobian->sparsePattern->colorCols[92] = 29;
  jacobian->sparsePattern->colorCols[96] = 30;
  jacobian->sparsePattern->colorCols[85] = 31;
  jacobian->sparsePattern->colorCols[84] = 32;
  jacobian->sparsePattern->colorCols[83] = 33;
  jacobian->sparsePattern->colorCols[82] = 34;
  jacobian->sparsePattern->colorCols[86] = 35;
  jacobian->sparsePattern->colorCols[78] = 36;
  jacobian->sparsePattern->colorCols[88] = 36;
  jacobian->sparsePattern->colorCols[98] = 36;
  jacobian->sparsePattern->colorCols[12] = 36;
  jacobian->sparsePattern->colorCols[48] = 36;
  jacobian->sparsePattern->colorCols[80] = 37;
  jacobian->sparsePattern->colorCols[90] = 37;
  jacobian->sparsePattern->colorCols[100] = 37;
  jacobian->sparsePattern->colorCols[35] = 37;
  jacobian->sparsePattern->colorCols[11] = 37;
  jacobian->sparsePattern->colorCols[20] = 37;
  jacobian->sparsePattern->colorCols[32] = 37;
  jacobian->sparsePattern->colorCols[71] = 37;
  jacobian->sparsePattern->colorCols[47] = 37;
  jacobian->sparsePattern->colorCols[56] = 37;
  jacobian->sparsePattern->colorCols[68] = 37;
  jacobian->sparsePattern->colorCols[81] = 38;
  jacobian->sparsePattern->colorCols[91] = 38;
  jacobian->sparsePattern->colorCols[101] = 38;
  jacobian->sparsePattern->colorCols[34] = 38;
  jacobian->sparsePattern->colorCols[10] = 38;
  jacobian->sparsePattern->colorCols[19] = 38;
  jacobian->sparsePattern->colorCols[31] = 38;
  jacobian->sparsePattern->colorCols[70] = 38;
  jacobian->sparsePattern->colorCols[46] = 38;
  jacobian->sparsePattern->colorCols[55] = 38;
  jacobian->sparsePattern->colorCols[67] = 38;
  jacobian->sparsePattern->colorCols[75] = 39;
  jacobian->sparsePattern->colorCols[74] = 40;
  jacobian->sparsePattern->colorCols[73] = 41;
  jacobian->sparsePattern->colorCols[72] = 42;
  jacobian->sparsePattern->colorCols[76] = 43;
  jacobian->sparsePattern->colorCols[77] = 44;
  jacobian->sparsePattern->colorCols[79] = 44;
  jacobian->sparsePattern->colorCols[87] = 44;
  jacobian->sparsePattern->colorCols[89] = 44;
  jacobian->sparsePattern->colorCols[97] = 44;
  jacobian->sparsePattern->colorCols[99] = 44;
  jacobian->sparsePattern->colorCols[5] = 44;
  jacobian->sparsePattern->colorCols[41] = 44;
  TRACE_POP
  return 0;
}


