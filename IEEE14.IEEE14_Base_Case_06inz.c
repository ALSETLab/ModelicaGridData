/* Initialization */
#include "IEEE14.IEEE14_Base_Case_model.h"
#include "IEEE14.IEEE14_Base_Case_11mix.h"
#include "IEEE14.IEEE14_Base_Case_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void IEEE14_IEEE14_Base_Case_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.local_reset = false
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->booleanVars[16] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.local_set = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[622] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.local_reset = false
*/
void IEEE14_IEEE14_Base_Case_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->booleanVars[17] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.local_set = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[657] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.local_reset = false
*/
void IEEE14_IEEE14_Base_Case_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->booleanVars[18] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.local_set = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[692] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.local_reset = false
*/
void IEEE14_IEEE14_Base_Case_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->booleanVars[14] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.local_set = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[424] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.local_reset = false
*/
void IEEE14_IEEE14_Base_Case_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->booleanVars[15] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.local_set = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[524] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.DiffV1.y = gen_Bus_2_1.const.k * (gen_Bus_2_1.iEEET1_1.DiffV1.k1 + gen_Bus_2_1.iEEET1_1.DiffV1.k2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[513] /* gen_Bus_2_1.iEEET1_1.DiffV1.y variable */ = (data->simulationInfo->realParameter[1089] /* gen_Bus_2_1.const.k PARAM */) * (data->simulationInfo->realParameter[1180] /* gen_Bus_2_1.iEEET1_1.DiffV1.k1 PARAM */ + data->simulationInfo->realParameter[1181] /* gen_Bus_2_1.iEEET1_1.DiffV1.k2 PARAM */);
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.DiffV1.y = gen_Bus_1_1.const.k * (gen_Bus_1_1.iEEET1_1.DiffV1.k1 + gen_Bus_1_1.iEEET1_1.DiffV1.k2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[413] /* gen_Bus_1_1.iEEET1_1.DiffV1.y variable */ = (data->simulationInfo->realParameter[554] /* gen_Bus_1_1.const.k PARAM */) * (data->simulationInfo->realParameter[645] /* gen_Bus_1_1.iEEET1_1.DiffV1.k1 PARAM */ + data->simulationInfo->realParameter[646] /* gen_Bus_1_1.iEEET1_1.DiffV1.k2 PARAM */);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.DiffV1.y = gen_Bus_8_1.const.k * (gen_Bus_8_1.iEEET1_1.DiffV1.k1 + gen_Bus_8_1.iEEET1_1.DiffV1.k2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[682] /* gen_Bus_8_1.iEEET1_1.DiffV1.y variable */ = (data->simulationInfo->realParameter[1956] /* gen_Bus_8_1.const.k PARAM */) * (data->simulationInfo->realParameter[2048] /* gen_Bus_8_1.iEEET1_1.DiffV1.k1 PARAM */ + data->simulationInfo->realParameter[2049] /* gen_Bus_8_1.iEEET1_1.DiffV1.k2 PARAM */);
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.DiffV1.y = gen_Bus_6_1.const.k * (gen_Bus_6_1.iEEET1_1.DiffV1.k1 + gen_Bus_6_1.iEEET1_1.DiffV1.k2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[647] /* gen_Bus_6_1.iEEET1_1.DiffV1.y variable */ = (data->simulationInfo->realParameter[1790] /* gen_Bus_6_1.const.k PARAM */) * (data->simulationInfo->realParameter[1882] /* gen_Bus_6_1.iEEET1_1.DiffV1.k1 PARAM */ + data->simulationInfo->realParameter[1883] /* gen_Bus_6_1.iEEET1_1.DiffV1.k2 PARAM */);
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.DiffV1.y = gen_Bus_3_1.const.k * (gen_Bus_3_1.iEEET1_1.DiffV1.k1 + gen_Bus_3_1.iEEET1_1.DiffV1.k2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[612] /* gen_Bus_3_1.iEEET1_1.DiffV1.y variable */ = (data->simulationInfo->realParameter[1624] /* gen_Bus_3_1.const.k PARAM */) * (data->simulationInfo->realParameter[1716] /* gen_Bus_3_1.iEEET1_1.DiffV1.k1 PARAM */ + data->simulationInfo->realParameter[1717] /* gen_Bus_3_1.iEEET1_1.DiffV1.k2 PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_1923(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1924(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1925(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1926(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1927(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1928(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1929(DATA *data, threadData_t *threadData);


/*
equation index: 23
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.Efd0 = gen_Bus_2_1.iEEET1_1.EFD0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->simulationInfo->realParameter[1187] /* gen_Bus_2_1.iEEET1_1.Efd0 PARAM */ = data->localData[0]->realVars[515] /* gen_Bus_2_1.iEEET1_1.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.Efd0 = gen_Bus_2_1.iEEET1_1.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->simulationInfo->realParameter[1220] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.Efd0 PARAM */ = data->simulationInfo->realParameter[1187] /* gen_Bus_2_1.iEEET1_1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y_start = gen_Bus_2_1.iEEET1_1.rotatingExciter.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->simulationInfo->realParameter[1229] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */ = data->simulationInfo->realParameter[1220] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
$START.gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->modelData->realVarsData[44].attribute /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[1229] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */;
    data->localData[0]->realVars[44] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ = data->modelData->realVarsData[44].attribute /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y */.name, (modelica_real) data->localData[0]->realVars[44] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.derivativeLag.x_start = gen_Bus_2_1.iEEET1_1.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->simulationInfo->realParameter[1216] /* gen_Bus_2_1.iEEET1_1.derivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[1187] /* gen_Bus_2_1.iEEET1_1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
$START.gen_Bus_2_1.iEEET1_1.derivativeLag.x = gen_Bus_2_1.iEEET1_1.derivativeLag.x_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->modelData->realVarsData[43].attribute /* gen_Bus_2_1.iEEET1_1.derivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[1216] /* gen_Bus_2_1.iEEET1_1.derivativeLag.x_start PARAM */;
    data->localData[0]->realVars[43] /* gen_Bus_2_1.iEEET1_1.derivativeLag.x STATE(1) */ = data->modelData->realVarsData[43].attribute /* gen_Bus_2_1.iEEET1_1.derivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[43].info /* gen_Bus_2_1.iEEET1_1.derivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[43] /* gen_Bus_2_1.iEEET1_1.derivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.SE_Efd0 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_2_1.iEEET1_1.Efd0, gen_Bus_2_1.iEEET1_1.S_EE_1, gen_Bus_2_1.iEEET1_1.S_EE_2, gen_Bus_2_1.iEEET1_1.E_1, gen_Bus_2_1.iEEET1_1.E_2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->simulationInfo->realParameter[1192] /* gen_Bus_2_1.iEEET1_1.SE_Efd0 PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[1187] /* gen_Bus_2_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[1193] /* gen_Bus_2_1.iEEET1_1.S_EE_1 PARAM */, data->simulationInfo->realParameter[1194] /* gen_Bus_2_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[1185] /* gen_Bus_2_1.iEEET1_1.E_1 PARAM */, data->simulationInfo->realParameter[1186] /* gen_Bus_2_1.iEEET1_1.E_2 PARAM */);
  TRACE_POP
}

/*
equation index: 30
type: ALGORITHM

  (gen_Bus_2_1.iEEET1_1.VRMAX0, gen_Bus_2_1.iEEET1_1.VRMIN0, gen_Bus_2_1.iEEET1_1.KE0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(gen_Bus_2_1.iEEET1_1.V_RMAX, gen_Bus_2_1.iEEET1_1.V_RMIN, gen_Bus_2_1.iEEET1_1.K_E, gen_Bus_2_1.iEEET1_1.E_2, gen_Bus_2_1.iEEET1_1.S_EE_2, gen_Bus_2_1.iEEET1_1.Efd0, gen_Bus_2_1.iEEET1_1.SE_Efd0);
*/
void IEEE14_IEEE14_Base_Case_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->simulationInfo->realParameter[1206] /* gen_Bus_2_1.iEEET1_1.VRMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[1210] /* gen_Bus_2_1.iEEET1_1.V_RMAX PARAM */, data->simulationInfo->realParameter[1211] /* gen_Bus_2_1.iEEET1_1.V_RMIN PARAM */, data->simulationInfo->realParameter[1190] /* gen_Bus_2_1.iEEET1_1.K_E PARAM */, data->simulationInfo->realParameter[1186] /* gen_Bus_2_1.iEEET1_1.E_2 PARAM */, data->simulationInfo->realParameter[1194] /* gen_Bus_2_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[1187] /* gen_Bus_2_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[1192] /* gen_Bus_2_1.iEEET1_1.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[1207] /* gen_Bus_2_1.iEEET1_1.VRMIN0 PARAM */ ,&data->simulationInfo->realParameter[1188] /* gen_Bus_2_1.iEEET1_1.KE0 PARAM */);
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.K_E = gen_Bus_2_1.iEEET1_1.KE0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->simulationInfo->realParameter[1221] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.K_E PARAM */ = data->simulationInfo->realParameter[1188] /* gen_Bus_2_1.iEEET1_1.KE0 PARAM */;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.gain.k = gen_Bus_2_1.iEEET1_1.rotatingExciter.K_E
*/
void IEEE14_IEEE14_Base_Case_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->simulationInfo->realParameter[1227] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.gain.k PARAM */ = data->simulationInfo->realParameter[1221] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.VR0 = gen_Bus_2_1.iEEET1_1.Efd0 * (gen_Bus_2_1.iEEET1_1.KE0 + gen_Bus_2_1.iEEET1_1.SE_Efd0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->simulationInfo->realParameter[1205] /* gen_Bus_2_1.iEEET1_1.VR0 PARAM */ = (data->simulationInfo->realParameter[1187] /* gen_Bus_2_1.iEEET1_1.Efd0 PARAM */) * (data->simulationInfo->realParameter[1188] /* gen_Bus_2_1.iEEET1_1.KE0 PARAM */ + data->simulationInfo->realParameter[1192] /* gen_Bus_2_1.iEEET1_1.SE_Efd0 PARAM */);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.simpleLagLim.y_start = gen_Bus_2_1.iEEET1_1.VR0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->simulationInfo->realParameter[1240] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[1205] /* gen_Bus_2_1.iEEET1_1.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
$START.gen_Bus_2_1.iEEET1_1.rotatingExciter.I_C = gen_Bus_2_1.iEEET1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->modelData->realVarsData[518].attribute /* gen_Bus_2_1.iEEET1_1.rotatingExciter.I_C variable */.start = data->simulationInfo->realParameter[1240] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[518] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.I_C variable */ = data->modelData->realVarsData[518].attribute /* gen_Bus_2_1.iEEET1_1.rotatingExciter.I_C variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[518].info /* gen_Bus_2_1.iEEET1_1.rotatingExciter.I_C */.name, (modelica_real) data->localData[0]->realVars[518] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.I_C variable */);
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[44] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ = data->simulationInfo->realParameter[1229] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_1930(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2872(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2873(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2874(DATA *data, threadData_t *threadData);


/*
equation index: 41
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.simpleLagLim.state = gen_Bus_2_1.iEEET1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1240] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.derivativeLag.y = gen_Bus_2_1.iEEET1_1.derivativeLag.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[517] /* gen_Bus_2_1.iEEET1_1.derivativeLag.y variable */ = data->simulationInfo->realParameter[1217] /* gen_Bus_2_1.iEEET1_1.derivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.derivativeLag.x = 10.0 * (gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y / gen_Bus_2_1.iEEET1_1.derivativeLag.T * 0.1 - gen_Bus_2_1.iEEET1_1.derivativeLag.y) * gen_Bus_2_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[43] /* gen_Bus_2_1.iEEET1_1.derivativeLag.x STATE(1) */ = (10.0) * (((DIVISION_SIM(data->localData[0]->realVars[44] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */,data->simulationInfo->realParameter[1214] /* gen_Bus_2_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_2_1.iEEET1_1.derivativeLag.T",equationIndexes)) * (0.1) - data->localData[0]->realVars[517] /* gen_Bus_2_1.iEEET1_1.derivativeLag.y variable */) * (data->simulationInfo->realParameter[1214] /* gen_Bus_2_1.iEEET1_1.derivativeLag.T PARAM */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_1932(DATA *data, threadData_t *threadData);


/*
equation index: 45
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag3.TF.y = gen_Bus_2_1.pSS2A.derivativeLag3.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[550] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.y variable */ = data->simulationInfo->realParameter[1378] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag2.TF.y = gen_Bus_2_1.pSS2A.derivativeLag2.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[547] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.y variable */ = data->simulationInfo->realParameter[1361] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag1.TF.y = gen_Bus_2_1.pSS2A.derivativeLag1.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[545] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.y variable */ = data->simulationInfo->realParameter[1344] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag.TF.y = gen_Bus_2_1.pSS2A.derivativeLag.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[542] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.y variable */ = data->simulationInfo->realParameter[1327] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.state = gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[69] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.state STATE(1) */ = data->simulationInfo->realParameter[1571] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.state = gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[68] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.state STATE(1) */ = data->simulationInfo->realParameter[1566] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.state = gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[67] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.state STATE(1) */ = data->simulationInfo->realParameter[1561] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.state = gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[66] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.state STATE(1) */ = data->simulationInfo->realParameter[1556] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.state = gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[65] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.state STATE(1) */ = data->simulationInfo->realParameter[1551] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.state = gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[64] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.state STATE(1) */ = data->simulationInfo->realParameter[1546] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.state = gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[63] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.state STATE(1) */ = data->simulationInfo->realParameter[1541] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.state = gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[62] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.state STATE(1) */ = data->simulationInfo->realParameter[1536] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.y = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[573] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.y variable */ = data->simulationInfo->realParameter[1525] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.y = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[570] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.y variable */ = data->simulationInfo->realParameter[1507] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.y = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[567] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.y variable */ = data->simulationInfo->realParameter[1489] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.y = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[564] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.y variable */ = data->simulationInfo->realParameter[1471] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.y = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[561] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.y variable */ = data->simulationInfo->realParameter[1453] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.y = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[558] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.y variable */ = data->simulationInfo->realParameter[1435] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.y = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[555] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.y variable */ = data->simulationInfo->realParameter[1417] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.y = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[552] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.y variable */ = data->simulationInfo->realParameter[1399] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.SimpleLag2.state = gen_Bus_2_1.pSS2A.SimpleLag2.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[49] /* gen_Bus_2_1.pSS2A.SimpleLag2.state STATE(1) */ = data->simulationInfo->realParameter[1296] /* gen_Bus_2_1.pSS2A.SimpleLag2.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.SimpleLag1.state = gen_Bus_2_1.pSS2A.SimpleLag1.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[48] /* gen_Bus_2_1.pSS2A.SimpleLag1.state STATE(1) */ = data->simulationInfo->realParameter[1291] /* gen_Bus_2_1.pSS2A.SimpleLag1.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag2.TF.y = gen_Bus_2_1.pSS2A.Leadlag2.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[532] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.y variable */ = data->simulationInfo->realParameter[1280] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag1.TF.y = gen_Bus_2_1.pSS2A.Leadlag1.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[528] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.y variable */ = data->simulationInfo->realParameter[1262] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.P0 = gen_Bus_2_1.tGOV1_1.PMECH0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->simulationInfo->realParameter[1576] /* gen_Bus_2_1.tGOV1_1.P0 PARAM */ = data->localData[0]->realVars[582] /* gen_Bus_2_1.tGOV1_1.PMECH0 variable */;
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.P_REF = gen_Bus_2_1.tGOV1_1.P0 * gen_Bus_2_1.tGOV1_1.R
*/
void IEEE14_IEEE14_Base_Case_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->simulationInfo->realParameter[1577] /* gen_Bus_2_1.tGOV1_1.P_REF PARAM */ = (data->simulationInfo->realParameter[1576] /* gen_Bus_2_1.tGOV1_1.P0 PARAM */) * (data->simulationInfo->realParameter[1578] /* gen_Bus_2_1.tGOV1_1.R PARAM */);
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.REF.k = gen_Bus_2_1.tGOV1_1.P_REF
*/
void IEEE14_IEEE14_Base_Case_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->simulationInfo->realParameter[1579] /* gen_Bus_2_1.tGOV1_1.REF.k PARAM */ = data->simulationInfo->realParameter[1577] /* gen_Bus_2_1.tGOV1_1.P_REF PARAM */;
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.add.u1 = gen_Bus_2_1.tGOV1_1.REF.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->simulationInfo->realParameter[1588] /* gen_Bus_2_1.tGOV1_1.add.u1 PARAM */ = data->simulationInfo->realParameter[1579] /* gen_Bus_2_1.tGOV1_1.REF.k PARAM */;
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.REF.y = gen_Bus_2_1.tGOV1_1.REF.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->simulationInfo->realParameter[1580] /* gen_Bus_2_1.tGOV1_1.REF.y PARAM */ = data->simulationInfo->realParameter[1579] /* gen_Bus_2_1.tGOV1_1.REF.k PARAM */;
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.simpleLagLim.y_start = gen_Bus_2_1.tGOV1_1.P0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->simulationInfo->realParameter[1617] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[1576] /* gen_Bus_2_1.tGOV1_1.P0 PARAM */;
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
$START.gen_Bus_2_1.tGOV1_1.imLeadLag.u = gen_Bus_2_1.tGOV1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->modelData->realVarsData[589].attribute /* gen_Bus_2_1.tGOV1_1.imLeadLag.u variable */.start = data->simulationInfo->realParameter[1617] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[589] /* gen_Bus_2_1.tGOV1_1.imLeadLag.u variable */ = data->modelData->realVarsData[589].attribute /* gen_Bus_2_1.tGOV1_1.imLeadLag.u variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[589].info /* gen_Bus_2_1.tGOV1_1.imLeadLag.u */.name, (modelica_real) data->localData[0]->realVars[589] /* gen_Bus_2_1.tGOV1_1.imLeadLag.u variable */);
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.imLeadLag.y_start = gen_Bus_2_1.tGOV1_1.P0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->simulationInfo->realParameter[1610] /* gen_Bus_2_1.tGOV1_1.imLeadLag.y_start PARAM */ = data->simulationInfo->realParameter[1576] /* gen_Bus_2_1.tGOV1_1.P0 PARAM */;
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.imLeadLag.TF.y_start = gen_Bus_2_1.tGOV1_1.imLeadLag.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->simulationInfo->realParameter[1606] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[1610] /* gen_Bus_2_1.tGOV1_1.imLeadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.simpleLagLim.state = gen_Bus_2_1.tGOV1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1617] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.imLeadLag.TF.y = gen_Bus_2_1.tGOV1_1.imLeadLag.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[588] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[1606] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.w = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[41] /* gen_Bus_2_1.gENROU.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_1967(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1962(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1955(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1956(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1958(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1957(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1959(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1960(DATA *data, threadData_t *threadData);


/*
equation index: 89
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x[1] = (gen_Bus_2_1.tGOV1_1.imLeadLag.TF.d * gen_Bus_2_1.tGOV1_1.imLeadLag.u - gen_Bus_2_1.tGOV1_1.imLeadLag.TF.y) / (gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a[2] * gen_Bus_2_1.tGOV1_1.imLeadLag.TF.d - gen_Bus_2_1.tGOV1_1.imLeadLag.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->localData[0]->realVars[587] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1604] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[589] /* gen_Bus_2_1.tGOV1_1.imLeadLag.u variable */) - data->localData[0]->realVars[588] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[1598] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1604] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.d PARAM */) - data->simulationInfo->realParameter[1603] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.bb[2] PARAM */,"gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a[2] * gen_Bus_2_1.tGOV1_1.imLeadLag.TF.d - gen_Bus_2_1.tGOV1_1.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x_scaled[1] = gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x[1] * gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  data->localData[0]->realVars[70] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[587] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[1599] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_1961(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1965(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1966(DATA *data, threadData_t *threadData);


/*
equation index: 94
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag.TF.x[1] = (gen_Bus_2_1.pSS2A.derivativeLag.TF.d * gen_Bus_2_1.gENROU.w - gen_Bus_2_1.pSS2A.derivativeLag.TF.y) / (gen_Bus_2_1.pSS2A.derivativeLag.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag.TF.d - gen_Bus_2_1.pSS2A.derivativeLag.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->localData[0]->realVars[541] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1325] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.d PARAM */) * (data->localData[0]->realVars[41] /* gen_Bus_2_1.gENROU.w STATE(1) */) - data->localData[0]->realVars[542] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.y variable */,(data->simulationInfo->realParameter[1319] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1325] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.d PARAM */) - data->simulationInfo->realParameter[1324] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.derivativeLag.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag.TF.d - gen_Bus_2_1.pSS2A.derivativeLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.derivativeLag.TF.x[1] * gen_Bus_2_1.pSS2A.derivativeLag.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  data->localData[0]->realVars[50] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[541] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[1320] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_1944(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1938(DATA *data, threadData_t *threadData);


/*
equation index: 98
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag1.TF.x[1] = (gen_Bus_2_1.pSS2A.derivativeLag1.TF.d * gen_Bus_2_1.pSS2A.derivativeLag.y - gen_Bus_2_1.pSS2A.derivativeLag1.TF.y) / (gen_Bus_2_1.pSS2A.derivativeLag1.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag1.TF.d - gen_Bus_2_1.pSS2A.derivativeLag1.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->localData[0]->realVars[544] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1342] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.d PARAM */) * (data->localData[0]->realVars[543] /* gen_Bus_2_1.pSS2A.derivativeLag.y variable */) - data->localData[0]->realVars[545] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.y variable */,(data->simulationInfo->realParameter[1336] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1342] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.d PARAM */) - data->simulationInfo->realParameter[1341] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.derivativeLag1.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag1.TF.d - gen_Bus_2_1.pSS2A.derivativeLag1.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag1.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.derivativeLag1.TF.x[1] * gen_Bus_2_1.pSS2A.derivativeLag1.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[51] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[544] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.x[1] variable */) * (data->simulationInfo->realParameter[1337] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_1939(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1941(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1943(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1942(DATA *data, threadData_t *threadData);


/*
equation index: 104
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.delta = gen_Bus_2_1.gENROU.delta0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[40] /* gen_Bus_2_1.gENROU.delta STATE(1) */ = data->simulationInfo->realParameter[1160] /* gen_Bus_2_1.gENROU.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.gENROU.PSIkq = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[141] /* der(gen_Bus_2_1.gENROU.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.gENROU.PSIkd = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->localData[0]->realVars[140] /* der(gen_Bus_2_1.gENROU.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.gENROU.Epq = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[139] /* der(gen_Bus_2_1.gENROU.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.ISORCE = gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y - $DER.gen_Bus_2_1.gENROU.Epq * gen_Bus_2_1.gENROU.Tpd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[493] /* gen_Bus_2_1.gENROU.ISORCE variable */ = data->localData[0]->realVars[44] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - ((data->localData[0]->realVars[139] /* der(gen_Bus_2_1.gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[1134] /* gen_Bus_2_1.gENROU.Tpd0 PARAM */));
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.gENROU.Epd = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->localData[0]->realVars[138] /* der(gen_Bus_2_1.gENROU.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.XaqIlq = (-$DER.gen_Bus_2_1.gENROU.Epd) * gen_Bus_2_1.gENROU.Tpq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->realVars[504] /* gen_Bus_2_1.gENROU.XaqIlq variable */ = ((-data->localData[0]->realVars[138] /* der(gen_Bus_2_1.gENROU.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[1137] /* gen_Bus_2_1.gENROU.Tpq0 PARAM */);
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.Efd0 = gen_Bus_1_1.iEEET1_1.EFD0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->simulationInfo->realParameter[652] /* gen_Bus_1_1.iEEET1_1.Efd0 PARAM */ = data->localData[0]->realVars[415] /* gen_Bus_1_1.iEEET1_1.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.Efd0 = gen_Bus_1_1.iEEET1_1.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->simulationInfo->realParameter[685] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.Efd0 PARAM */ = data->simulationInfo->realParameter[652] /* gen_Bus_1_1.iEEET1_1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y_start = gen_Bus_1_1.iEEET1_1.rotatingExciter.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->simulationInfo->realParameter[694] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */ = data->simulationInfo->realParameter[685] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
$START.gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->modelData->realVarsData[8].attribute /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[694] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */;
    data->localData[0]->realVars[8] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ = data->modelData->realVarsData[8].attribute /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y */.name, (modelica_real) data->localData[0]->realVars[8] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.derivativeLag.x_start = gen_Bus_1_1.iEEET1_1.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->simulationInfo->realParameter[681] /* gen_Bus_1_1.iEEET1_1.derivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[652] /* gen_Bus_1_1.iEEET1_1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
$START.gen_Bus_1_1.iEEET1_1.derivativeLag.x = gen_Bus_1_1.iEEET1_1.derivativeLag.x_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->modelData->realVarsData[7].attribute /* gen_Bus_1_1.iEEET1_1.derivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[681] /* gen_Bus_1_1.iEEET1_1.derivativeLag.x_start PARAM */;
    data->localData[0]->realVars[7] /* gen_Bus_1_1.iEEET1_1.derivativeLag.x STATE(1) */ = data->modelData->realVarsData[7].attribute /* gen_Bus_1_1.iEEET1_1.derivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* gen_Bus_1_1.iEEET1_1.derivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[7] /* gen_Bus_1_1.iEEET1_1.derivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.SE_Efd0 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_1_1.iEEET1_1.Efd0, gen_Bus_1_1.iEEET1_1.S_EE_1, gen_Bus_1_1.iEEET1_1.S_EE_2, gen_Bus_1_1.iEEET1_1.E_1, gen_Bus_1_1.iEEET1_1.E_2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->simulationInfo->realParameter[657] /* gen_Bus_1_1.iEEET1_1.SE_Efd0 PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[652] /* gen_Bus_1_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[658] /* gen_Bus_1_1.iEEET1_1.S_EE_1 PARAM */, data->simulationInfo->realParameter[659] /* gen_Bus_1_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[650] /* gen_Bus_1_1.iEEET1_1.E_1 PARAM */, data->simulationInfo->realParameter[651] /* gen_Bus_1_1.iEEET1_1.E_2 PARAM */);
  TRACE_POP
}

/*
equation index: 118
type: ALGORITHM

  (gen_Bus_1_1.iEEET1_1.VRMAX0, gen_Bus_1_1.iEEET1_1.VRMIN0, gen_Bus_1_1.iEEET1_1.KE0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(gen_Bus_1_1.iEEET1_1.V_RMAX, gen_Bus_1_1.iEEET1_1.V_RMIN, gen_Bus_1_1.iEEET1_1.K_E, gen_Bus_1_1.iEEET1_1.E_2, gen_Bus_1_1.iEEET1_1.S_EE_2, gen_Bus_1_1.iEEET1_1.Efd0, gen_Bus_1_1.iEEET1_1.SE_Efd0);
*/
void IEEE14_IEEE14_Base_Case_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->simulationInfo->realParameter[671] /* gen_Bus_1_1.iEEET1_1.VRMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[675] /* gen_Bus_1_1.iEEET1_1.V_RMAX PARAM */, data->simulationInfo->realParameter[676] /* gen_Bus_1_1.iEEET1_1.V_RMIN PARAM */, data->simulationInfo->realParameter[655] /* gen_Bus_1_1.iEEET1_1.K_E PARAM */, data->simulationInfo->realParameter[651] /* gen_Bus_1_1.iEEET1_1.E_2 PARAM */, data->simulationInfo->realParameter[659] /* gen_Bus_1_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[652] /* gen_Bus_1_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[657] /* gen_Bus_1_1.iEEET1_1.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[672] /* gen_Bus_1_1.iEEET1_1.VRMIN0 PARAM */ ,&data->simulationInfo->realParameter[653] /* gen_Bus_1_1.iEEET1_1.KE0 PARAM */);
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.K_E = gen_Bus_1_1.iEEET1_1.KE0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->simulationInfo->realParameter[686] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.K_E PARAM */ = data->simulationInfo->realParameter[653] /* gen_Bus_1_1.iEEET1_1.KE0 PARAM */;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.gain.k = gen_Bus_1_1.iEEET1_1.rotatingExciter.K_E
*/
void IEEE14_IEEE14_Base_Case_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->simulationInfo->realParameter[692] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.gain.k PARAM */ = data->simulationInfo->realParameter[686] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.VR0 = gen_Bus_1_1.iEEET1_1.Efd0 * (gen_Bus_1_1.iEEET1_1.KE0 + gen_Bus_1_1.iEEET1_1.SE_Efd0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->simulationInfo->realParameter[670] /* gen_Bus_1_1.iEEET1_1.VR0 PARAM */ = (data->simulationInfo->realParameter[652] /* gen_Bus_1_1.iEEET1_1.Efd0 PARAM */) * (data->simulationInfo->realParameter[653] /* gen_Bus_1_1.iEEET1_1.KE0 PARAM */ + data->simulationInfo->realParameter[657] /* gen_Bus_1_1.iEEET1_1.SE_Efd0 PARAM */);
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.simpleLagLim.y_start = gen_Bus_1_1.iEEET1_1.VR0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->simulationInfo->realParameter[705] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[670] /* gen_Bus_1_1.iEEET1_1.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
$START.gen_Bus_1_1.iEEET1_1.rotatingExciter.I_C = gen_Bus_1_1.iEEET1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->modelData->realVarsData[418].attribute /* gen_Bus_1_1.iEEET1_1.rotatingExciter.I_C variable */.start = data->simulationInfo->realParameter[705] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[418] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.I_C variable */ = data->modelData->realVarsData[418].attribute /* gen_Bus_1_1.iEEET1_1.rotatingExciter.I_C variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[418].info /* gen_Bus_1_1.iEEET1_1.rotatingExciter.I_C */.name, (modelica_real) data->localData[0]->realVars[418] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.I_C variable */);
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->localData[0]->realVars[8] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ = data->simulationInfo->realParameter[694] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_1972(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2055(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2056(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2057(DATA *data, threadData_t *threadData);


/*
equation index: 129
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.simpleLagLim.state = gen_Bus_1_1.iEEET1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[705] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.derivativeLag.y = gen_Bus_1_1.iEEET1_1.derivativeLag.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->localData[0]->realVars[417] /* gen_Bus_1_1.iEEET1_1.derivativeLag.y variable */ = data->simulationInfo->realParameter[682] /* gen_Bus_1_1.iEEET1_1.derivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.derivativeLag.x = (gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y / gen_Bus_1_1.iEEET1_1.derivativeLag.T * 0.08599999999999999 - gen_Bus_1_1.iEEET1_1.derivativeLag.y) * gen_Bus_1_1.iEEET1_1.derivativeLag.T / 0.08599999999999999
*/
void IEEE14_IEEE14_Base_Case_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[7] /* gen_Bus_1_1.iEEET1_1.derivativeLag.x STATE(1) */ = DIVISION_SIM(((DIVISION_SIM(data->localData[0]->realVars[8] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */,data->simulationInfo->realParameter[679] /* gen_Bus_1_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_1_1.iEEET1_1.derivativeLag.T",equationIndexes)) * (0.08599999999999999) - data->localData[0]->realVars[417] /* gen_Bus_1_1.iEEET1_1.derivativeLag.y variable */) * (data->simulationInfo->realParameter[679] /* gen_Bus_1_1.iEEET1_1.derivativeLag.T PARAM */),0.08599999999999999,"0.08599999999999999",equationIndexes);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_1974(DATA *data, threadData_t *threadData);


/*
equation index: 133
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag3.TF.y = gen_Bus_1_1.pSS2A.derivativeLag3.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[450] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.y variable */ = data->simulationInfo->realParameter[843] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag2.TF.y = gen_Bus_1_1.pSS2A.derivativeLag2.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->localData[0]->realVars[447] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.y variable */ = data->simulationInfo->realParameter[826] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag1.TF.y = gen_Bus_1_1.pSS2A.derivativeLag1.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->localData[0]->realVars[445] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.y variable */ = data->simulationInfo->realParameter[809] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag.TF.y = gen_Bus_1_1.pSS2A.derivativeLag.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[442] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.y variable */ = data->simulationInfo->realParameter[792] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.state = gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[33] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.state STATE(1) */ = data->simulationInfo->realParameter[1036] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.state = gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[32] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.state STATE(1) */ = data->simulationInfo->realParameter[1031] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.state = gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[31] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.state STATE(1) */ = data->simulationInfo->realParameter[1026] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.state = gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[30] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.state STATE(1) */ = data->simulationInfo->realParameter[1021] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.state = gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[29] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.state STATE(1) */ = data->simulationInfo->realParameter[1016] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.state = gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->localData[0]->realVars[28] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.state STATE(1) */ = data->simulationInfo->realParameter[1011] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.state = gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[27] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.state STATE(1) */ = data->simulationInfo->realParameter[1006] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.state = gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[26] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.state STATE(1) */ = data->simulationInfo->realParameter[1001] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.y = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[473] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.y variable */ = data->simulationInfo->realParameter[990] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.y = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[470] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.y variable */ = data->simulationInfo->realParameter[972] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.y = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[467] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.y variable */ = data->simulationInfo->realParameter[954] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.y = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->localData[0]->realVars[464] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.y variable */ = data->simulationInfo->realParameter[936] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.y = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[461] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.y variable */ = data->simulationInfo->realParameter[918] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.y = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[458] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.y variable */ = data->simulationInfo->realParameter[900] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.y = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[455] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.y variable */ = data->simulationInfo->realParameter[882] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.y = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[452] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.y variable */ = data->simulationInfo->realParameter[864] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.SimpleLag2.state = gen_Bus_1_1.pSS2A.SimpleLag2.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->realVars[13] /* gen_Bus_1_1.pSS2A.SimpleLag2.state STATE(1) */ = data->simulationInfo->realParameter[761] /* gen_Bus_1_1.pSS2A.SimpleLag2.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.SimpleLag1.state = gen_Bus_1_1.pSS2A.SimpleLag1.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->localData[0]->realVars[12] /* gen_Bus_1_1.pSS2A.SimpleLag1.state STATE(1) */ = data->simulationInfo->realParameter[756] /* gen_Bus_1_1.pSS2A.SimpleLag1.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag2.TF.y = gen_Bus_1_1.pSS2A.Leadlag2.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->localData[0]->realVars[432] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.y variable */ = data->simulationInfo->realParameter[745] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag1.TF.y = gen_Bus_1_1.pSS2A.Leadlag1.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->localData[0]->realVars[428] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.y variable */ = data->simulationInfo->realParameter[727] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.P0 = gen_Bus_1_1.tGOV1_1.PMECH0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->simulationInfo->realParameter[1041] /* gen_Bus_1_1.tGOV1_1.P0 PARAM */ = data->localData[0]->realVars[482] /* gen_Bus_1_1.tGOV1_1.PMECH0 variable */;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.P_REF = gen_Bus_1_1.tGOV1_1.P0 * gen_Bus_1_1.tGOV1_1.R
*/
void IEEE14_IEEE14_Base_Case_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->simulationInfo->realParameter[1042] /* gen_Bus_1_1.tGOV1_1.P_REF PARAM */ = (data->simulationInfo->realParameter[1041] /* gen_Bus_1_1.tGOV1_1.P0 PARAM */) * (data->simulationInfo->realParameter[1043] /* gen_Bus_1_1.tGOV1_1.R PARAM */);
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.REF.k = gen_Bus_1_1.tGOV1_1.P_REF
*/
void IEEE14_IEEE14_Base_Case_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->simulationInfo->realParameter[1044] /* gen_Bus_1_1.tGOV1_1.REF.k PARAM */ = data->simulationInfo->realParameter[1042] /* gen_Bus_1_1.tGOV1_1.P_REF PARAM */;
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.add.u1 = gen_Bus_1_1.tGOV1_1.REF.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->simulationInfo->realParameter[1053] /* gen_Bus_1_1.tGOV1_1.add.u1 PARAM */ = data->simulationInfo->realParameter[1044] /* gen_Bus_1_1.tGOV1_1.REF.k PARAM */;
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.REF.y = gen_Bus_1_1.tGOV1_1.REF.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->simulationInfo->realParameter[1045] /* gen_Bus_1_1.tGOV1_1.REF.y PARAM */ = data->simulationInfo->realParameter[1044] /* gen_Bus_1_1.tGOV1_1.REF.k PARAM */;
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.simpleLagLim.y_start = gen_Bus_1_1.tGOV1_1.P0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->simulationInfo->realParameter[1082] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[1041] /* gen_Bus_1_1.tGOV1_1.P0 PARAM */;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
$START.gen_Bus_1_1.tGOV1_1.imLeadLag.u = gen_Bus_1_1.tGOV1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->modelData->realVarsData[489].attribute /* gen_Bus_1_1.tGOV1_1.imLeadLag.u variable */.start = data->simulationInfo->realParameter[1082] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[489] /* gen_Bus_1_1.tGOV1_1.imLeadLag.u variable */ = data->modelData->realVarsData[489].attribute /* gen_Bus_1_1.tGOV1_1.imLeadLag.u variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[489].info /* gen_Bus_1_1.tGOV1_1.imLeadLag.u */.name, (modelica_real) data->localData[0]->realVars[489] /* gen_Bus_1_1.tGOV1_1.imLeadLag.u variable */);
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.imLeadLag.y_start = gen_Bus_1_1.tGOV1_1.P0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->simulationInfo->realParameter[1075] /* gen_Bus_1_1.tGOV1_1.imLeadLag.y_start PARAM */ = data->simulationInfo->realParameter[1041] /* gen_Bus_1_1.tGOV1_1.P0 PARAM */;
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.imLeadLag.TF.y_start = gen_Bus_1_1.tGOV1_1.imLeadLag.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->simulationInfo->realParameter[1071] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.y_start PARAM */ = data->simulationInfo->realParameter[1075] /* gen_Bus_1_1.tGOV1_1.imLeadLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.simpleLagLim.state = gen_Bus_1_1.tGOV1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1082] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.imLeadLag.TF.y = gen_Bus_1_1.tGOV1_1.imLeadLag.TF.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[488] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.y variable */ = data->simulationInfo->realParameter[1071] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.w = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[5] /* gen_Bus_1_1.gENROU.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2009(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2004(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1997(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1998(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2000(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1999(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2001(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2002(DATA *data, threadData_t *threadData);


/*
equation index: 177
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x[1] = (gen_Bus_1_1.tGOV1_1.imLeadLag.TF.d * gen_Bus_1_1.tGOV1_1.imLeadLag.u - gen_Bus_1_1.tGOV1_1.imLeadLag.TF.y) / (gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a[2] * gen_Bus_1_1.tGOV1_1.imLeadLag.TF.d - gen_Bus_1_1.tGOV1_1.imLeadLag.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[487] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1069] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[489] /* gen_Bus_1_1.tGOV1_1.imLeadLag.u variable */) - data->localData[0]->realVars[488] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.y variable */,(data->simulationInfo->realParameter[1063] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1069] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.d PARAM */) - data->simulationInfo->realParameter[1068] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.bb[2] PARAM */,"gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a[2] * gen_Bus_1_1.tGOV1_1.imLeadLag.TF.d - gen_Bus_1_1.tGOV1_1.imLeadLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x_scaled[1] = gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x[1] * gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[34] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[487] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[1064] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2003(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2007(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2008(DATA *data, threadData_t *threadData);


/*
equation index: 182
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag.TF.x[1] = (gen_Bus_1_1.pSS2A.derivativeLag.TF.d * gen_Bus_1_1.gENROU.w - gen_Bus_1_1.pSS2A.derivativeLag.TF.y) / (gen_Bus_1_1.pSS2A.derivativeLag.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag.TF.d - gen_Bus_1_1.pSS2A.derivativeLag.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->localData[0]->realVars[441] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[790] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.d PARAM */) * (data->localData[0]->realVars[5] /* gen_Bus_1_1.gENROU.w STATE(1) */) - data->localData[0]->realVars[442] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.y variable */,(data->simulationInfo->realParameter[784] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[790] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.d PARAM */) - data->simulationInfo->realParameter[789] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.derivativeLag.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag.TF.d - gen_Bus_1_1.pSS2A.derivativeLag.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.derivativeLag.TF.x[1] * gen_Bus_1_1.pSS2A.derivativeLag.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->localData[0]->realVars[14] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[441] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.x[1] variable */) * (data->simulationInfo->realParameter[785] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_1986(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1980(DATA *data, threadData_t *threadData);


/*
equation index: 186
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag1.TF.x[1] = (gen_Bus_1_1.pSS2A.derivativeLag1.TF.d * gen_Bus_1_1.pSS2A.derivativeLag.y - gen_Bus_1_1.pSS2A.derivativeLag1.TF.y) / (gen_Bus_1_1.pSS2A.derivativeLag1.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag1.TF.d - gen_Bus_1_1.pSS2A.derivativeLag1.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->localData[0]->realVars[444] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[807] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.d PARAM */) * (data->localData[0]->realVars[443] /* gen_Bus_1_1.pSS2A.derivativeLag.y variable */) - data->localData[0]->realVars[445] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.y variable */,(data->simulationInfo->realParameter[801] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[807] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.d PARAM */) - data->simulationInfo->realParameter[806] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.derivativeLag1.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag1.TF.d - gen_Bus_1_1.pSS2A.derivativeLag1.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag1.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.derivativeLag1.TF.x[1] * gen_Bus_1_1.pSS2A.derivativeLag1.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->localData[0]->realVars[15] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[444] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.x[1] variable */) * (data->simulationInfo->realParameter[802] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_1981(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1983(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1985(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1984(DATA *data, threadData_t *threadData);


/*
equation index: 192
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.delta = gen_Bus_1_1.gENROU.delta0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[4] /* gen_Bus_1_1.gENROU.delta STATE(1) */ = data->simulationInfo->realParameter[625] /* gen_Bus_1_1.gENROU.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.gENROU.PSIkq = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->localData[0]->realVars[105] /* der(gen_Bus_1_1.gENROU.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.gENROU.PSIkd = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[104] /* der(gen_Bus_1_1.gENROU.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.gENROU.Epq = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[103] /* der(gen_Bus_1_1.gENROU.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.ISORCE = gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y - $DER.gen_Bus_1_1.gENROU.Epq * gen_Bus_1_1.gENROU.Tpd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->localData[0]->realVars[393] /* gen_Bus_1_1.gENROU.ISORCE variable */ = data->localData[0]->realVars[8] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - ((data->localData[0]->realVars[103] /* der(gen_Bus_1_1.gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[599] /* gen_Bus_1_1.gENROU.Tpd0 PARAM */));
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.gENROU.Epd = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->localData[0]->realVars[102] /* der(gen_Bus_1_1.gENROU.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.XaqIlq = (-$DER.gen_Bus_1_1.gENROU.Epd) * gen_Bus_1_1.gENROU.Tpq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->localData[0]->realVars[404] /* gen_Bus_1_1.gENROU.XaqIlq variable */ = ((-data->localData[0]->realVars[102] /* der(gen_Bus_1_1.gENROU.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[602] /* gen_Bus_1_1.gENROU.Tpq0 PARAM */);
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.Efd0 = gen_Bus_8_1.iEEET1_1.EFD0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->simulationInfo->realParameter[2055] /* gen_Bus_8_1.iEEET1_1.Efd0 PARAM */ = data->localData[0]->realVars[684] /* gen_Bus_8_1.iEEET1_1.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.Efd0 = gen_Bus_8_1.iEEET1_1.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->simulationInfo->realParameter[2089] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.Efd0 PARAM */ = data->simulationInfo->realParameter[2055] /* gen_Bus_8_1.iEEET1_1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y_start = gen_Bus_8_1.iEEET1_1.rotatingExciter.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->simulationInfo->realParameter[2098] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */ = data->simulationInfo->realParameter[2089] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
$START.gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->modelData->realVarsData[100].attribute /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[2098] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */;
    data->localData[0]->realVars[100] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ = data->modelData->realVarsData[100].attribute /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[100].info /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y */.name, (modelica_real) data->localData[0]->realVars[100] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.derivativeLag.x_start = gen_Bus_8_1.iEEET1_1.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->simulationInfo->realParameter[2085] /* gen_Bus_8_1.iEEET1_1.derivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[2055] /* gen_Bus_8_1.iEEET1_1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
$START.gen_Bus_8_1.iEEET1_1.derivativeLag.x = gen_Bus_8_1.iEEET1_1.derivativeLag.x_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->modelData->realVarsData[99].attribute /* gen_Bus_8_1.iEEET1_1.derivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[2085] /* gen_Bus_8_1.iEEET1_1.derivativeLag.x_start PARAM */;
    data->localData[0]->realVars[99] /* gen_Bus_8_1.iEEET1_1.derivativeLag.x STATE(1) */ = data->modelData->realVarsData[99].attribute /* gen_Bus_8_1.iEEET1_1.derivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* gen_Bus_8_1.iEEET1_1.derivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[99] /* gen_Bus_8_1.iEEET1_1.derivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.SE_Efd0 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_8_1.iEEET1_1.Efd0, gen_Bus_8_1.iEEET1_1.S_EE_1, gen_Bus_8_1.iEEET1_1.S_EE_2, gen_Bus_8_1.iEEET1_1.E_1, gen_Bus_8_1.iEEET1_1.E_2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->simulationInfo->realParameter[2060] /* gen_Bus_8_1.iEEET1_1.SE_Efd0 PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[2055] /* gen_Bus_8_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[2061] /* gen_Bus_8_1.iEEET1_1.S_EE_1 PARAM */, data->simulationInfo->realParameter[2062] /* gen_Bus_8_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[2053] /* gen_Bus_8_1.iEEET1_1.E_1 PARAM */, data->simulationInfo->realParameter[2054] /* gen_Bus_8_1.iEEET1_1.E_2 PARAM */);
  TRACE_POP
}

/*
equation index: 206
type: ALGORITHM

  (gen_Bus_8_1.iEEET1_1.VRMAX0, gen_Bus_8_1.iEEET1_1.VRMIN0, gen_Bus_8_1.iEEET1_1.KE0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(gen_Bus_8_1.iEEET1_1.V_RMAX, gen_Bus_8_1.iEEET1_1.V_RMIN, gen_Bus_8_1.iEEET1_1.K_E, gen_Bus_8_1.iEEET1_1.E_2, gen_Bus_8_1.iEEET1_1.S_EE_2, gen_Bus_8_1.iEEET1_1.Efd0, gen_Bus_8_1.iEEET1_1.SE_Efd0);
*/
void IEEE14_IEEE14_Base_Case_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->simulationInfo->realParameter[2075] /* gen_Bus_8_1.iEEET1_1.VRMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[2079] /* gen_Bus_8_1.iEEET1_1.V_RMAX PARAM */, data->simulationInfo->realParameter[2080] /* gen_Bus_8_1.iEEET1_1.V_RMIN PARAM */, data->simulationInfo->realParameter[2058] /* gen_Bus_8_1.iEEET1_1.K_E PARAM */, data->simulationInfo->realParameter[2054] /* gen_Bus_8_1.iEEET1_1.E_2 PARAM */, data->simulationInfo->realParameter[2062] /* gen_Bus_8_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[2055] /* gen_Bus_8_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[2060] /* gen_Bus_8_1.iEEET1_1.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[2076] /* gen_Bus_8_1.iEEET1_1.VRMIN0 PARAM */ ,&data->simulationInfo->realParameter[2056] /* gen_Bus_8_1.iEEET1_1.KE0 PARAM */);
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.K_E = gen_Bus_8_1.iEEET1_1.KE0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->simulationInfo->realParameter[2090] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.K_E PARAM */ = data->simulationInfo->realParameter[2056] /* gen_Bus_8_1.iEEET1_1.KE0 PARAM */;
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.gain.k = gen_Bus_8_1.iEEET1_1.rotatingExciter.K_E
*/
void IEEE14_IEEE14_Base_Case_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->simulationInfo->realParameter[2096] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.gain.k PARAM */ = data->simulationInfo->realParameter[2090] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.VR0 = gen_Bus_8_1.iEEET1_1.Efd0 * (gen_Bus_8_1.iEEET1_1.KE0 + gen_Bus_8_1.iEEET1_1.SE_Efd0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  data->simulationInfo->realParameter[2074] /* gen_Bus_8_1.iEEET1_1.VR0 PARAM */ = (data->simulationInfo->realParameter[2055] /* gen_Bus_8_1.iEEET1_1.Efd0 PARAM */) * (data->simulationInfo->realParameter[2056] /* gen_Bus_8_1.iEEET1_1.KE0 PARAM */ + data->simulationInfo->realParameter[2060] /* gen_Bus_8_1.iEEET1_1.SE_Efd0 PARAM */);
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.simpleLagLim.y_start = gen_Bus_8_1.iEEET1_1.VR0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  data->simulationInfo->realParameter[2109] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[2074] /* gen_Bus_8_1.iEEET1_1.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
$START.gen_Bus_8_1.iEEET1_1.rotatingExciter.I_C = gen_Bus_8_1.iEEET1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  data->modelData->realVarsData[686].attribute /* gen_Bus_8_1.iEEET1_1.rotatingExciter.I_C variable */.start = data->simulationInfo->realParameter[2109] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[686] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.I_C variable */ = data->modelData->realVarsData[686].attribute /* gen_Bus_8_1.iEEET1_1.rotatingExciter.I_C variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[686].info /* gen_Bus_8_1.iEEET1_1.rotatingExciter.I_C */.name, (modelica_real) data->localData[0]->realVars[686] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.I_C variable */);
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->localData[0]->realVars[100] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ = data->simulationInfo->realParameter[2098] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2014(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2050(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2051(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2052(DATA *data, threadData_t *threadData);


/*
equation index: 217
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.simpleLagLim.state = gen_Bus_8_1.iEEET1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[2109] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.derivativeLag.y = gen_Bus_8_1.iEEET1_1.derivativeLag.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->localData[0]->realVars[685] /* gen_Bus_8_1.iEEET1_1.derivativeLag.y variable */ = data->simulationInfo->realParameter[2086] /* gen_Bus_8_1.iEEET1_1.derivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.derivativeLag.x = 10.0 * (gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y / gen_Bus_8_1.iEEET1_1.derivativeLag.T * 0.1 - gen_Bus_8_1.iEEET1_1.derivativeLag.y) * gen_Bus_8_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->localData[0]->realVars[99] /* gen_Bus_8_1.iEEET1_1.derivativeLag.x STATE(1) */ = (10.0) * (((DIVISION_SIM(data->localData[0]->realVars[100] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */,data->simulationInfo->realParameter[2083] /* gen_Bus_8_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_8_1.iEEET1_1.derivativeLag.T",equationIndexes)) * (0.1) - data->localData[0]->realVars[685] /* gen_Bus_8_1.iEEET1_1.derivativeLag.y variable */) * (data->simulationInfo->realParameter[2083] /* gen_Bus_8_1.iEEET1_1.derivativeLag.T PARAM */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2016(DATA *data, threadData_t *threadData);


/*
equation index: 221
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.w = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->localData[0]->realVars[97] /* gen_Bus_8_1.gENROU.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2017(DATA *data, threadData_t *threadData);


/*
equation index: 223
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.delta = gen_Bus_8_1.gENROU.delta0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->localData[0]->realVars[96] /* gen_Bus_8_1.gENROU.delta STATE(1) */ = data->simulationInfo->realParameter[2028] /* gen_Bus_8_1.gENROU.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.gENROU.PSIkq = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->localData[0]->realVars[197] /* der(gen_Bus_8_1.gENROU.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.gENROU.PSIkd = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->localData[0]->realVars[196] /* der(gen_Bus_8_1.gENROU.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.gENROU.Epq = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->localData[0]->realVars[195] /* der(gen_Bus_8_1.gENROU.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.ISORCE = gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y - $DER.gen_Bus_8_1.gENROU.Epq * gen_Bus_8_1.gENROU.Tpd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->localData[0]->realVars[663] /* gen_Bus_8_1.gENROU.ISORCE variable */ = data->localData[0]->realVars[100] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - ((data->localData[0]->realVars[195] /* der(gen_Bus_8_1.gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[2002] /* gen_Bus_8_1.gENROU.Tpd0 PARAM */));
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.gENROU.Epd = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->localData[0]->realVars[194] /* der(gen_Bus_8_1.gENROU.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.XaqIlq = (-$DER.gen_Bus_8_1.gENROU.Epd) * gen_Bus_8_1.gENROU.Tpq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->localData[0]->realVars[673] /* gen_Bus_8_1.gENROU.XaqIlq variable */ = ((-data->localData[0]->realVars[194] /* der(gen_Bus_8_1.gENROU.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[2005] /* gen_Bus_8_1.gENROU.Tpq0 PARAM */);
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.Efd0 = gen_Bus_6_1.iEEET1_1.EFD0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->simulationInfo->realParameter[1889] /* gen_Bus_6_1.iEEET1_1.Efd0 PARAM */ = data->localData[0]->realVars[649] /* gen_Bus_6_1.iEEET1_1.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.Efd0 = gen_Bus_6_1.iEEET1_1.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->simulationInfo->realParameter[1923] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.Efd0 PARAM */ = data->simulationInfo->realParameter[1889] /* gen_Bus_6_1.iEEET1_1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y_start = gen_Bus_6_1.iEEET1_1.rotatingExciter.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->simulationInfo->realParameter[1932] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */ = data->simulationInfo->realParameter[1923] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
$START.gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->modelData->realVarsData[90].attribute /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[1932] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */;
    data->localData[0]->realVars[90] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ = data->modelData->realVarsData[90].attribute /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y */.name, (modelica_real) data->localData[0]->realVars[90] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.derivativeLag.x_start = gen_Bus_6_1.iEEET1_1.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->simulationInfo->realParameter[1919] /* gen_Bus_6_1.iEEET1_1.derivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[1889] /* gen_Bus_6_1.iEEET1_1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
$START.gen_Bus_6_1.iEEET1_1.derivativeLag.x = gen_Bus_6_1.iEEET1_1.derivativeLag.x_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->modelData->realVarsData[89].attribute /* gen_Bus_6_1.iEEET1_1.derivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[1919] /* gen_Bus_6_1.iEEET1_1.derivativeLag.x_start PARAM */;
    data->localData[0]->realVars[89] /* gen_Bus_6_1.iEEET1_1.derivativeLag.x STATE(1) */ = data->modelData->realVarsData[89].attribute /* gen_Bus_6_1.iEEET1_1.derivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* gen_Bus_6_1.iEEET1_1.derivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[89] /* gen_Bus_6_1.iEEET1_1.derivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.SE_Efd0 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_6_1.iEEET1_1.Efd0, gen_Bus_6_1.iEEET1_1.S_EE_1, gen_Bus_6_1.iEEET1_1.S_EE_2, gen_Bus_6_1.iEEET1_1.E_1, gen_Bus_6_1.iEEET1_1.E_2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->simulationInfo->realParameter[1894] /* gen_Bus_6_1.iEEET1_1.SE_Efd0 PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[1889] /* gen_Bus_6_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[1895] /* gen_Bus_6_1.iEEET1_1.S_EE_1 PARAM */, data->simulationInfo->realParameter[1896] /* gen_Bus_6_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[1887] /* gen_Bus_6_1.iEEET1_1.E_1 PARAM */, data->simulationInfo->realParameter[1888] /* gen_Bus_6_1.iEEET1_1.E_2 PARAM */);
  TRACE_POP
}

/*
equation index: 237
type: ALGORITHM

  (gen_Bus_6_1.iEEET1_1.VRMAX0, gen_Bus_6_1.iEEET1_1.VRMIN0, gen_Bus_6_1.iEEET1_1.KE0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(gen_Bus_6_1.iEEET1_1.V_RMAX, gen_Bus_6_1.iEEET1_1.V_RMIN, gen_Bus_6_1.iEEET1_1.K_E, gen_Bus_6_1.iEEET1_1.E_2, gen_Bus_6_1.iEEET1_1.S_EE_2, gen_Bus_6_1.iEEET1_1.Efd0, gen_Bus_6_1.iEEET1_1.SE_Efd0);
*/
void IEEE14_IEEE14_Base_Case_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->simulationInfo->realParameter[1909] /* gen_Bus_6_1.iEEET1_1.VRMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[1913] /* gen_Bus_6_1.iEEET1_1.V_RMAX PARAM */, data->simulationInfo->realParameter[1914] /* gen_Bus_6_1.iEEET1_1.V_RMIN PARAM */, data->simulationInfo->realParameter[1892] /* gen_Bus_6_1.iEEET1_1.K_E PARAM */, data->simulationInfo->realParameter[1888] /* gen_Bus_6_1.iEEET1_1.E_2 PARAM */, data->simulationInfo->realParameter[1896] /* gen_Bus_6_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[1889] /* gen_Bus_6_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[1894] /* gen_Bus_6_1.iEEET1_1.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[1910] /* gen_Bus_6_1.iEEET1_1.VRMIN0 PARAM */ ,&data->simulationInfo->realParameter[1890] /* gen_Bus_6_1.iEEET1_1.KE0 PARAM */);
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.K_E = gen_Bus_6_1.iEEET1_1.KE0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->simulationInfo->realParameter[1924] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.K_E PARAM */ = data->simulationInfo->realParameter[1890] /* gen_Bus_6_1.iEEET1_1.KE0 PARAM */;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.gain.k = gen_Bus_6_1.iEEET1_1.rotatingExciter.K_E
*/
void IEEE14_IEEE14_Base_Case_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->simulationInfo->realParameter[1930] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.gain.k PARAM */ = data->simulationInfo->realParameter[1924] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.VR0 = gen_Bus_6_1.iEEET1_1.Efd0 * (gen_Bus_6_1.iEEET1_1.KE0 + gen_Bus_6_1.iEEET1_1.SE_Efd0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->simulationInfo->realParameter[1908] /* gen_Bus_6_1.iEEET1_1.VR0 PARAM */ = (data->simulationInfo->realParameter[1889] /* gen_Bus_6_1.iEEET1_1.Efd0 PARAM */) * (data->simulationInfo->realParameter[1890] /* gen_Bus_6_1.iEEET1_1.KE0 PARAM */ + data->simulationInfo->realParameter[1894] /* gen_Bus_6_1.iEEET1_1.SE_Efd0 PARAM */);
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.simpleLagLim.y_start = gen_Bus_6_1.iEEET1_1.VR0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->simulationInfo->realParameter[1943] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[1908] /* gen_Bus_6_1.iEEET1_1.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
$START.gen_Bus_6_1.iEEET1_1.rotatingExciter.I_C = gen_Bus_6_1.iEEET1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->modelData->realVarsData[651].attribute /* gen_Bus_6_1.iEEET1_1.rotatingExciter.I_C variable */.start = data->simulationInfo->realParameter[1943] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[651] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.I_C variable */ = data->modelData->realVarsData[651].attribute /* gen_Bus_6_1.iEEET1_1.rotatingExciter.I_C variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[651].info /* gen_Bus_6_1.iEEET1_1.rotatingExciter.I_C */.name, (modelica_real) data->localData[0]->realVars[651] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.I_C variable */);
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[90] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ = data->simulationInfo->realParameter[1932] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2022(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2045(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2046(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2047(DATA *data, threadData_t *threadData);


/*
equation index: 248
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.simpleLagLim.state = gen_Bus_6_1.iEEET1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1943] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.derivativeLag.y = gen_Bus_6_1.iEEET1_1.derivativeLag.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[650] /* gen_Bus_6_1.iEEET1_1.derivativeLag.y variable */ = data->simulationInfo->realParameter[1920] /* gen_Bus_6_1.iEEET1_1.derivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.derivativeLag.x = 10.0 * (gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y / gen_Bus_6_1.iEEET1_1.derivativeLag.T * 0.1 - gen_Bus_6_1.iEEET1_1.derivativeLag.y) * gen_Bus_6_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[89] /* gen_Bus_6_1.iEEET1_1.derivativeLag.x STATE(1) */ = (10.0) * (((DIVISION_SIM(data->localData[0]->realVars[90] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */,data->simulationInfo->realParameter[1917] /* gen_Bus_6_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_6_1.iEEET1_1.derivativeLag.T",equationIndexes)) * (0.1) - data->localData[0]->realVars[650] /* gen_Bus_6_1.iEEET1_1.derivativeLag.y variable */) * (data->simulationInfo->realParameter[1917] /* gen_Bus_6_1.iEEET1_1.derivativeLag.T PARAM */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2024(DATA *data, threadData_t *threadData);


/*
equation index: 252
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.w = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[87] /* gen_Bus_6_1.gENROU.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2025(DATA *data, threadData_t *threadData);


/*
equation index: 254
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.delta = gen_Bus_6_1.gENROU.delta0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->localData[0]->realVars[86] /* gen_Bus_6_1.gENROU.delta STATE(1) */ = data->simulationInfo->realParameter[1862] /* gen_Bus_6_1.gENROU.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.gENROU.PSIkq = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->localData[0]->realVars[187] /* der(gen_Bus_6_1.gENROU.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.gENROU.PSIkd = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[186] /* der(gen_Bus_6_1.gENROU.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.gENROU.Epq = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[185] /* der(gen_Bus_6_1.gENROU.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.ISORCE = gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y - $DER.gen_Bus_6_1.gENROU.Epq * gen_Bus_6_1.gENROU.Tpd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[628] /* gen_Bus_6_1.gENROU.ISORCE variable */ = data->localData[0]->realVars[90] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - ((data->localData[0]->realVars[185] /* der(gen_Bus_6_1.gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[1836] /* gen_Bus_6_1.gENROU.Tpd0 PARAM */));
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.gENROU.Epd = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[184] /* der(gen_Bus_6_1.gENROU.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.XaqIlq = (-$DER.gen_Bus_6_1.gENROU.Epd) * gen_Bus_6_1.gENROU.Tpq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[638] /* gen_Bus_6_1.gENROU.XaqIlq variable */ = ((-data->localData[0]->realVars[184] /* der(gen_Bus_6_1.gENROU.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[1839] /* gen_Bus_6_1.gENROU.Tpq0 PARAM */);
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.Efd0 = gen_Bus_3_1.iEEET1_1.EFD0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->simulationInfo->realParameter[1723] /* gen_Bus_3_1.iEEET1_1.Efd0 PARAM */ = data->localData[0]->realVars[614] /* gen_Bus_3_1.iEEET1_1.EFD0 variable */;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.Efd0 = gen_Bus_3_1.iEEET1_1.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->simulationInfo->realParameter[1757] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.Efd0 PARAM */ = data->simulationInfo->realParameter[1723] /* gen_Bus_3_1.iEEET1_1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y_start = gen_Bus_3_1.iEEET1_1.rotatingExciter.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->simulationInfo->realParameter[1766] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */ = data->simulationInfo->realParameter[1757] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
$START.gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->modelData->realVarsData[80].attribute /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */.start = data->simulationInfo->realParameter[1766] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */;
    data->localData[0]->realVars[80] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ = data->modelData->realVarsData[80].attribute /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y */.name, (modelica_real) data->localData[0]->realVars[80] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.derivativeLag.x_start = gen_Bus_3_1.iEEET1_1.Efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->simulationInfo->realParameter[1753] /* gen_Bus_3_1.iEEET1_1.derivativeLag.x_start PARAM */ = data->simulationInfo->realParameter[1723] /* gen_Bus_3_1.iEEET1_1.Efd0 PARAM */;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
$START.gen_Bus_3_1.iEEET1_1.derivativeLag.x = gen_Bus_3_1.iEEET1_1.derivativeLag.x_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->modelData->realVarsData[79].attribute /* gen_Bus_3_1.iEEET1_1.derivativeLag.x STATE(1) */.start = data->simulationInfo->realParameter[1753] /* gen_Bus_3_1.iEEET1_1.derivativeLag.x_start PARAM */;
    data->localData[0]->realVars[79] /* gen_Bus_3_1.iEEET1_1.derivativeLag.x STATE(1) */ = data->modelData->realVarsData[79].attribute /* gen_Bus_3_1.iEEET1_1.derivativeLag.x STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* gen_Bus_3_1.iEEET1_1.derivativeLag.x */.name, (modelica_real) data->localData[0]->realVars[79] /* gen_Bus_3_1.iEEET1_1.derivativeLag.x STATE(1) */);
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.SE_Efd0 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_3_1.iEEET1_1.Efd0, gen_Bus_3_1.iEEET1_1.S_EE_1, gen_Bus_3_1.iEEET1_1.S_EE_2, gen_Bus_3_1.iEEET1_1.E_1, gen_Bus_3_1.iEEET1_1.E_2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->simulationInfo->realParameter[1728] /* gen_Bus_3_1.iEEET1_1.SE_Efd0 PARAM */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->simulationInfo->realParameter[1723] /* gen_Bus_3_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[1729] /* gen_Bus_3_1.iEEET1_1.S_EE_1 PARAM */, data->simulationInfo->realParameter[1730] /* gen_Bus_3_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[1721] /* gen_Bus_3_1.iEEET1_1.E_1 PARAM */, data->simulationInfo->realParameter[1722] /* gen_Bus_3_1.iEEET1_1.E_2 PARAM */);
  TRACE_POP
}

/*
equation index: 268
type: ALGORITHM

  (gen_Bus_3_1.iEEET1_1.VRMAX0, gen_Bus_3_1.iEEET1_1.VRMIN0, gen_Bus_3_1.iEEET1_1.KE0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(gen_Bus_3_1.iEEET1_1.V_RMAX, gen_Bus_3_1.iEEET1_1.V_RMIN, gen_Bus_3_1.iEEET1_1.K_E, gen_Bus_3_1.iEEET1_1.E_2, gen_Bus_3_1.iEEET1_1.S_EE_2, gen_Bus_3_1.iEEET1_1.Efd0, gen_Bus_3_1.iEEET1_1.SE_Efd0);
*/
void IEEE14_IEEE14_Base_Case_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->simulationInfo->realParameter[1743] /* gen_Bus_3_1.iEEET1_1.VRMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[1747] /* gen_Bus_3_1.iEEET1_1.V_RMAX PARAM */, data->simulationInfo->realParameter[1748] /* gen_Bus_3_1.iEEET1_1.V_RMIN PARAM */, data->simulationInfo->realParameter[1726] /* gen_Bus_3_1.iEEET1_1.K_E PARAM */, data->simulationInfo->realParameter[1722] /* gen_Bus_3_1.iEEET1_1.E_2 PARAM */, data->simulationInfo->realParameter[1730] /* gen_Bus_3_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[1723] /* gen_Bus_3_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[1728] /* gen_Bus_3_1.iEEET1_1.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[1744] /* gen_Bus_3_1.iEEET1_1.VRMIN0 PARAM */ ,&data->simulationInfo->realParameter[1724] /* gen_Bus_3_1.iEEET1_1.KE0 PARAM */);
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.K_E = gen_Bus_3_1.iEEET1_1.KE0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->simulationInfo->realParameter[1758] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.K_E PARAM */ = data->simulationInfo->realParameter[1724] /* gen_Bus_3_1.iEEET1_1.KE0 PARAM */;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.gain.k = gen_Bus_3_1.iEEET1_1.rotatingExciter.K_E
*/
void IEEE14_IEEE14_Base_Case_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->simulationInfo->realParameter[1764] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.gain.k PARAM */ = data->simulationInfo->realParameter[1758] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.K_E PARAM */;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.VR0 = gen_Bus_3_1.iEEET1_1.Efd0 * (gen_Bus_3_1.iEEET1_1.KE0 + gen_Bus_3_1.iEEET1_1.SE_Efd0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->simulationInfo->realParameter[1742] /* gen_Bus_3_1.iEEET1_1.VR0 PARAM */ = (data->simulationInfo->realParameter[1723] /* gen_Bus_3_1.iEEET1_1.Efd0 PARAM */) * (data->simulationInfo->realParameter[1724] /* gen_Bus_3_1.iEEET1_1.KE0 PARAM */ + data->simulationInfo->realParameter[1728] /* gen_Bus_3_1.iEEET1_1.SE_Efd0 PARAM */);
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.simpleLagLim.y_start = gen_Bus_3_1.iEEET1_1.VR0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->simulationInfo->realParameter[1777] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.y_start PARAM */ = data->simulationInfo->realParameter[1742] /* gen_Bus_3_1.iEEET1_1.VR0 PARAM */;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
$START.gen_Bus_3_1.iEEET1_1.rotatingExciter.I_C = gen_Bus_3_1.iEEET1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->modelData->realVarsData[616].attribute /* gen_Bus_3_1.iEEET1_1.rotatingExciter.I_C variable */.start = data->simulationInfo->realParameter[1777] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.y_start PARAM */;
    data->localData[0]->realVars[616] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.I_C variable */ = data->modelData->realVarsData[616].attribute /* gen_Bus_3_1.iEEET1_1.rotatingExciter.I_C variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[616].info /* gen_Bus_3_1.iEEET1_1.rotatingExciter.I_C */.name, (modelica_real) data->localData[0]->realVars[616] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.I_C variable */);
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->localData[0]->realVars[80] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ = data->simulationInfo->realParameter[1766] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y_start PARAM */;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2030(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2040(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2041(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2042(DATA *data, threadData_t *threadData);


/*
equation index: 279
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.simpleLagLim.state = gen_Bus_3_1.iEEET1_1.simpleLagLim.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1777] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.derivativeLag.y = gen_Bus_3_1.iEEET1_1.derivativeLag.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[615] /* gen_Bus_3_1.iEEET1_1.derivativeLag.y variable */ = data->simulationInfo->realParameter[1754] /* gen_Bus_3_1.iEEET1_1.derivativeLag.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.derivativeLag.x = 10.0 * (gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y / gen_Bus_3_1.iEEET1_1.derivativeLag.T * 0.1 - gen_Bus_3_1.iEEET1_1.derivativeLag.y) * gen_Bus_3_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[79] /* gen_Bus_3_1.iEEET1_1.derivativeLag.x STATE(1) */ = (10.0) * (((DIVISION_SIM(data->localData[0]->realVars[80] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */,data->simulationInfo->realParameter[1751] /* gen_Bus_3_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_3_1.iEEET1_1.derivativeLag.T",equationIndexes)) * (0.1) - data->localData[0]->realVars[615] /* gen_Bus_3_1.iEEET1_1.derivativeLag.y variable */) * (data->simulationInfo->realParameter[1751] /* gen_Bus_3_1.iEEET1_1.derivativeLag.T PARAM */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2032(DATA *data, threadData_t *threadData);


/*
equation index: 283
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.w = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[77] /* gen_Bus_3_1.gENROU.w STATE(1) */ = 0.0;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2033(DATA *data, threadData_t *threadData);


/*
equation index: 285
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.delta = gen_Bus_3_1.gENROU.delta0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->localData[0]->realVars[76] /* gen_Bus_3_1.gENROU.delta STATE(1) */ = data->simulationInfo->realParameter[1696] /* gen_Bus_3_1.gENROU.delta0 PARAM */;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.gENROU.PSIkq = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->localData[0]->realVars[177] /* der(gen_Bus_3_1.gENROU.PSIkq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.gENROU.PSIkd = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->localData[0]->realVars[176] /* der(gen_Bus_3_1.gENROU.PSIkd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.gENROU.Epq = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->localData[0]->realVars[175] /* der(gen_Bus_3_1.gENROU.Epq) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.ISORCE = gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y - $DER.gen_Bus_3_1.gENROU.Epq * gen_Bus_3_1.gENROU.Tpd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->localData[0]->realVars[593] /* gen_Bus_3_1.gENROU.ISORCE variable */ = data->localData[0]->realVars[80] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - ((data->localData[0]->realVars[175] /* der(gen_Bus_3_1.gENROU.Epq) STATE_DER */) * (data->simulationInfo->realParameter[1670] /* gen_Bus_3_1.gENROU.Tpd0 PARAM */));
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.gENROU.Epd = 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->localData[0]->realVars[174] /* der(gen_Bus_3_1.gENROU.Epd) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.XaqIlq = (-$DER.gen_Bus_3_1.gENROU.Epd) * gen_Bus_3_1.gENROU.Tpq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->localData[0]->realVars[603] /* gen_Bus_3_1.gENROU.XaqIlq variable */ = ((-data->localData[0]->realVars[174] /* der(gen_Bus_3_1.gENROU.Epd) STATE_DER */)) * (data->simulationInfo->realParameter[1673] /* gen_Bus_3_1.gENROU.Tpq0 PARAM */);
  TRACE_POP
}

void IEEE14_IEEE14_Base_Case_eqFunction_292(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_293(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_294(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_295(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_296(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_297(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_298(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_299(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_300(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_301(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_302(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_303(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_304(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_305(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_306(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_307(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_308(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_309(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_310(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_311(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_312(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_313(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_314(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_315(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_316(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_317(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_318(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_319(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_320(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_321(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_322(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_323(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_324(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_325(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_326(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_327(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_328(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_329(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_330(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_331(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_332(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_333(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_334(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_335(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_336(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_337(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_338(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_339(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_340(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_341(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_342(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_343(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_344(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_345(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_346(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_347(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_348(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_349(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_350(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_351(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_352(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_353(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_354(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_355(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_356(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_357(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_358(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_359(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_360(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_361(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_362(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_363(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_364(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_365(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_366(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_367(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_368(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_369(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_370(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_371(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_372(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_373(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_374(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_375(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_376(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_377(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_378(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_379(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_380(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_381(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_382(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_383(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_384(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_385(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_386(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_387(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_388(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_389(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_390(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_391(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_392(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_393(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_394(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_395(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_396(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_397(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_398(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_399(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_400(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_401(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_402(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_403(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_404(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_405(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_406(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_407(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_408(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_409(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_410(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_411(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_412(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_413(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_414(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_415(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_416(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_417(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_418(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_419(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_420(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_421(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_422(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_423(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_424(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_425(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_555(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_554(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_553(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_552(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_551(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_550(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_549(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_548(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_547(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_546(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_545(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_544(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_543(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_542(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_541(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_540(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_539(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_538(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_537(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_536(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_535(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_534(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_533(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_532(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_531(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_530(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_529(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_528(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_527(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_526(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_525(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_524(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_523(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_522(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_521(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_520(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_519(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_518(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_517(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_516(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_515(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_514(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_513(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_512(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_511(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_510(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_509(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_508(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_507(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_506(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_505(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_504(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_503(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_502(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_501(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_500(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_499(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_498(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_497(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_496(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_495(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_494(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_493(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_492(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_491(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_490(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_489(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_488(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_487(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_486(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_485(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_484(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_483(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_482(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_481(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_480(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_479(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_478(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_477(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_476(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_475(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_474(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_473(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_472(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_471(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_470(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_469(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_468(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_467(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_466(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_465(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_464(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_463(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_462(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_461(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_460(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_459(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_458(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_457(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_456(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_455(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_454(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_453(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_452(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_451(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_450(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_449(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_448(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_447(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_446(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_445(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_444(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_443(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_442(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_441(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_440(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_439(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_438(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_437(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_436(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_435(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_434(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_433(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_432(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_431(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_430(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_429(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_428(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_427(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_426(DATA*, threadData_t*);
/*
equation index: 556
indexNonlinear: 0
type: NONLINEAR

vars: {pwLine6.ir.re, pwLine3.ir.re, pwLine12.ir.im, pwLine15.ir.im, pwLine13.ir.re, pwLine15.ir.re, pwLine9.is.re, pwLine11.ir.re, pwLine15.is.im, pwLine11.ir.im, pwLine4.is.re, pwLine5.is.re, pwLine3.ir.im, pwLine5.ir.im, pwLine5.ir.re, pwLine2.is.re, pwLine4.is.im, pwLine2.is.im, pwLine6.ir.im, pwLine.is.im, pwLine4.ir.re, pwLine3.is.re, pwLine4.ir.im, pwLine3.is.im, pwLine7.is.im, pwLine8.ir.im, pwLine7.is.re, pwLine8.ir.re, pwLine2.ir.re, Bus_03.n[1].ir, Bus_04.n[2].ir, Bus_04.n[2].ii, Bus_13.p[2].ii, Bus_13.p[2].ir, pwLine12.is.re, Bus_12.n[1].ir, pwLine11.is.im, Bus_12.n[1].ii, pwLine10.is.re, Bus_11.p[2].ir, pwLine9.ir.im, Bus_11.p[2].ii, pwLine10.ir.re, Bus_10.p[2].ir, pwLine10.ir.im, Bus_10.p[2].ii, Bus_06.n[1].ii, Bus_06.n[1].ir, pwLine2.ir.im, Bus_03.n[1].ii, Bus_02.n[1].ir, Bus_02.n[1].ii, Bus_05.n[3].ii, Bus_05.n[3].ir, pwLine8.is.im, Bus_14.p[2].ii, pwLine8.is.re, Bus_14.p[2].ir, Bus_09.p[2].ir, Bus_09.p[2].ii, gen_Bus_3_1.gENROU.Epq, gen_Bus_3_1.gENROU.Epd, gen_Bus_3_1.gENROU.PSIppd, gen_Bus_3_1.gENROU.PSIppq, gen_Bus_3_1.gENROU.id, gen_Bus_3_1.gENROU.iq, Bus_04.p[2].ir, pwLine14.ir.im, Bus_07.n[1].ii, Bus_07.p[2].vr, gen_Bus_8_1.gENROU.Epd, gen_Bus_8_1.gENROU.PSIkd, gen_Bus_8_1.gENROU.ud, gen_Bus_8_1.gENROU.PSIppd, gen_Bus_8_1.gENROU.iq, gen_Bus_8_1.gENROU.id, gen_Bus_6_1.gENROU.PSIkq, gen_Bus_6_1.gENROU.PSIkd, gen_Bus_6_1.gENROU.PSIppd, gen_Bus_6_1.gENROU.PSIppq, gen_Bus_6_1.gENROU.id, gen_Bus_6_1.gENROU.iq, pwLine1.is.re, pwLine1.is.im, gen_Bus_1_1.gENROU.Epd, gen_Bus_1_1.gENROU.PSIkd, gen_Bus_1_1.gENROU.PSIppd, gen_Bus_1_1.gENROU.PSIppq, gen_Bus_1_1.gENROU.iq, gen_Bus_1_1.gENROU.id, gen_Bus_2_1.gENROU.PSIkq, gen_Bus_2_1.gENROU.PSIkd, gen_Bus_2_1.gENROU.PSIppd, gen_Bus_2_1.gENROU.PSIppq, gen_Bus_2_1.gENROU.iq, gen_Bus_2_1.gENROU.id, Bus_01.n[1].vr, Bus_01.n[1].vi, Bus_03.p[2].vr, Bus_03.p[2].vi, Bus_14.p[3].vi, Bus_14.p[3].vr, Bus_05.p[2].ii, Bus_06.p[1].ii, Bus_06.p[3].vi, Bus_04.p[3].ir, Bus_09.n[2].ir, Bus_09.p[3].vi, Bus_09.p[3].vr, Bus_05.p[2].vr, Bus_05.p[2].vi, Bus_02.n[2].vr, Bus_02.n[2].vi, Bus_04.p[4].vr, Bus_04.p[4].vi, LOAD_04.v, LOAD_09.v, LOAD_14.v, LOAD_05.v, LOAD_02.v, LOAD_03.v, LOAD_06.v, Bus_13.n[2].vr, Bus_13.n[2].vi, Bus_11.p[2].vr, Bus_10.n[1].vi, Bus_10.n[1].vr, Bus_11.p[2].vi, Bus_12.n[1].vr, Bus_12.n[1].vi}
eqns: {292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 555, 554, 553, 552, 551, 550, 549, 548, 547, 546, 545, 544, 543, 542, 541, 540, 539, 538, 537, 536, 535, 534, 533, 532, 531, 530, 529, 528, 527, 526, 525, 524, 523, 522, 521, 520, 519, 518, 517, 516, 515, 514, 513, 512, 511, 510, 509, 508, 507, 506, 505, 504, 503, 502, 501, 500, 499, 498, 497, 496, 495, 494, 493, 492, 491, 490, 489, 488, 487, 486, 485, 484, 483, 482, 481, 480, 479, 478, 477, 476, 475, 474, 473, 472, 471, 470, 469, 468, 467, 466, 465, 464, 463, 462, 461, 460, 459, 458, 457, 456, 455, 454, 453, 452, 451, 450, 449, 448, 447, 446, 445, 444, 443, 442, 441, 440, 439, 438, 437, 436, 435, 434, 433, 432, 431, 430, 429, 428, 427, 426}
*/
void IEEE14_IEEE14_Base_Case_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 556 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[796] /* pwLine6.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[772] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[731] /* pwLine12.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[755] /* pwLine15.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[740] /* pwLine13.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[756] /* pwLine15.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[822] /* pwLine9.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[724] /* pwLine11.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[757] /* pwLine15.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[723] /* pwLine11.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[782] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[790] /* pwLine5.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[771] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[787] /* pwLine5.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[788] /* pwLine5.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[766] /* pwLine2.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[781] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[765] /* pwLine2.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[795] /* pwLine6.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[701] /* pwLine.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[780] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[774] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[779] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[773] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->localData[0]->realVars[805] /* pwLine7.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->localData[0]->realVars[811] /* pwLine8.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = data->localData[0]->realVars[806] /* pwLine7.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = data->localData[0]->realVars[812] /* pwLine8.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = data->localData[0]->realVars[764] /* pwLine2.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[29] = data->localData[0]->realVars[237] /* Bus_03.n[1].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[30] = data->localData[0]->realVars[245] /* Bus_04.n[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[31] = data->localData[0]->realVars[244] /* Bus_04.n[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[32] = data->localData[0]->realVars[316] /* Bus_13.p[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[33] = data->localData[0]->realVars[317] /* Bus_13.p[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[34] = data->localData[0]->realVars[734] /* pwLine12.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[35] = data->localData[0]->realVars[309] /* Bus_12.n[1].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[36] = data->localData[0]->realVars[725] /* pwLine11.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[37] = data->localData[0]->realVars[308] /* Bus_12.n[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[38] = data->localData[0]->realVars[718] /* pwLine10.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[39] = data->localData[0]->realVars[303] /* Bus_11.p[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[40] = data->localData[0]->realVars[819] /* pwLine9.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[41] = data->localData[0]->realVars[302] /* Bus_11.p[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[42] = data->localData[0]->realVars[716] /* pwLine10.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[43] = data->localData[0]->realVars[299] /* Bus_10.p[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[44] = data->localData[0]->realVars[715] /* pwLine10.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[45] = data->localData[0]->realVars[298] /* Bus_10.p[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[46] = data->localData[0]->realVars[264] /* Bus_06.n[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[47] = data->localData[0]->realVars[265] /* Bus_06.n[1].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[48] = data->localData[0]->realVars[763] /* pwLine2.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[49] = data->localData[0]->realVars[236] /* Bus_03.n[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[50] = data->localData[0]->realVars[230] /* Bus_02.n[1].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[51] = data->localData[0]->realVars[228] /* Bus_02.n[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[52] = data->localData[0]->realVars[256] /* Bus_05.n[3].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[53] = data->localData[0]->realVars[257] /* Bus_05.n[3].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[54] = data->localData[0]->realVars[813] /* pwLine8.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[55] = data->localData[0]->realVars[320] /* Bus_14.p[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[56] = data->localData[0]->realVars[814] /* pwLine8.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[57] = data->localData[0]->realVars[321] /* Bus_14.p[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[58] = data->localData[0]->realVars[291] /* Bus_09.p[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[59] = data->localData[0]->realVars[290] /* Bus_09.p[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[60] = data->localData[0]->realVars[73] /* gen_Bus_3_1.gENROU.Epq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[61] = data->localData[0]->realVars[72] /* gen_Bus_3_1.gENROU.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[62] = data->localData[0]->realVars[598] /* gen_Bus_3_1.gENROU.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[63] = data->localData[0]->realVars[599] /* gen_Bus_3_1.gENROU.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[64] = data->localData[0]->realVars[606] /* gen_Bus_3_1.gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[65] = data->localData[0]->realVars[607] /* gen_Bus_3_1.gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[66] = data->localData[0]->realVars[249] /* Bus_04.p[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[67] = data->localData[0]->realVars[747] /* pwLine14.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[68] = data->localData[0]->realVars[274] /* Bus_07.n[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[69] = data->localData[0]->realVars[279] /* Bus_07.p[2].vr variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[70] = data->localData[0]->realVars[92] /* gen_Bus_8_1.gENROU.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[71] = data->localData[0]->realVars[94] /* gen_Bus_8_1.gENROU.PSIkd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[72] = data->localData[0]->realVars[678] /* gen_Bus_8_1.gENROU.ud variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[73] = data->localData[0]->realVars[668] /* gen_Bus_8_1.gENROU.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[74] = data->localData[0]->realVars[677] /* gen_Bus_8_1.gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[75] = data->localData[0]->realVars[676] /* gen_Bus_8_1.gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[76] = data->localData[0]->realVars[85] /* gen_Bus_6_1.gENROU.PSIkq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[77] = data->localData[0]->realVars[84] /* gen_Bus_6_1.gENROU.PSIkd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[78] = data->localData[0]->realVars[633] /* gen_Bus_6_1.gENROU.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[79] = data->localData[0]->realVars[634] /* gen_Bus_6_1.gENROU.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[80] = data->localData[0]->realVars[641] /* gen_Bus_6_1.gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[81] = data->localData[0]->realVars[642] /* gen_Bus_6_1.gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[82] = data->localData[0]->realVars[710] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[83] = data->localData[0]->realVars[709] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[84] = data->localData[0]->realVars[0] /* gen_Bus_1_1.gENROU.Epd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[85] = data->localData[0]->realVars[2] /* gen_Bus_1_1.gENROU.PSIkd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[86] = data->localData[0]->realVars[399] /* gen_Bus_1_1.gENROU.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[87] = data->localData[0]->realVars[400] /* gen_Bus_1_1.gENROU.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[88] = data->localData[0]->realVars[408] /* gen_Bus_1_1.gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[89] = data->localData[0]->realVars[407] /* gen_Bus_1_1.gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[90] = data->localData[0]->realVars[39] /* gen_Bus_2_1.gENROU.PSIkq STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[91] = data->localData[0]->realVars[38] /* gen_Bus_2_1.gENROU.PSIkd STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[92] = data->localData[0]->realVars[499] /* gen_Bus_2_1.gENROU.PSIppd variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[93] = data->localData[0]->realVars[500] /* gen_Bus_2_1.gENROU.PSIppq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[94] = data->localData[0]->realVars[508] /* gen_Bus_2_1.gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[95] = data->localData[0]->realVars[507] /* gen_Bus_2_1.gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[96] = data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[97] = data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[98] = data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[99] = data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[100] = data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[101] = data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[102] = data->localData[0]->realVars[258] /* Bus_05.p[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[103] = data->localData[0]->realVars[266] /* Bus_06.p[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[104] = data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[105] = data->localData[0]->realVars[250] /* Bus_04.p[3].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[106] = data->localData[0]->realVars[289] /* Bus_09.n[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[107] = data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[108] = data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[109] = data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[110] = data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[111] = data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[112] = data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[113] = data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[114] = data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[115] = data->localData[0]->realVars[341] /* LOAD_04.v variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[116] = data->localData[0]->realVars[359] /* LOAD_09.v variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[117] = data->localData[0]->realVars[389] /* LOAD_14.v variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[118] = data->localData[0]->realVars[347] /* LOAD_05.v variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[119] = data->localData[0]->realVars[329] /* LOAD_02.v variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[120] = data->localData[0]->realVars[335] /* LOAD_03.v variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[121] = data->localData[0]->realVars[353] /* LOAD_06.v variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[122] = data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[123] = data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[124] = data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[125] = data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[126] = data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[127] = data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[128] = data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[129] = data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,556};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 556 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[796] /* pwLine6.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[772] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[731] /* pwLine12.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[755] /* pwLine15.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[740] /* pwLine13.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[756] /* pwLine15.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[822] /* pwLine9.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[724] /* pwLine11.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[757] /* pwLine15.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[723] /* pwLine11.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[782] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[790] /* pwLine5.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[771] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[787] /* pwLine5.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[788] /* pwLine5.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[766] /* pwLine2.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[781] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[765] /* pwLine2.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[795] /* pwLine6.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[701] /* pwLine.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[780] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[774] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[779] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[773] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[805] /* pwLine7.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[811] /* pwLine8.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  data->localData[0]->realVars[806] /* pwLine7.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  data->localData[0]->realVars[812] /* pwLine8.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  data->localData[0]->realVars[764] /* pwLine2.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  data->localData[0]->realVars[237] /* Bus_03.n[1].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[29];
  data->localData[0]->realVars[245] /* Bus_04.n[2].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[30];
  data->localData[0]->realVars[244] /* Bus_04.n[2].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[31];
  data->localData[0]->realVars[316] /* Bus_13.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[32];
  data->localData[0]->realVars[317] /* Bus_13.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[33];
  data->localData[0]->realVars[734] /* pwLine12.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[34];
  data->localData[0]->realVars[309] /* Bus_12.n[1].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[35];
  data->localData[0]->realVars[725] /* pwLine11.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[36];
  data->localData[0]->realVars[308] /* Bus_12.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[37];
  data->localData[0]->realVars[718] /* pwLine10.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[38];
  data->localData[0]->realVars[303] /* Bus_11.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[39];
  data->localData[0]->realVars[819] /* pwLine9.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[40];
  data->localData[0]->realVars[302] /* Bus_11.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[41];
  data->localData[0]->realVars[716] /* pwLine10.ir.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[42];
  data->localData[0]->realVars[299] /* Bus_10.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[43];
  data->localData[0]->realVars[715] /* pwLine10.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[44];
  data->localData[0]->realVars[298] /* Bus_10.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[45];
  data->localData[0]->realVars[264] /* Bus_06.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[46];
  data->localData[0]->realVars[265] /* Bus_06.n[1].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[47];
  data->localData[0]->realVars[763] /* pwLine2.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[48];
  data->localData[0]->realVars[236] /* Bus_03.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[49];
  data->localData[0]->realVars[230] /* Bus_02.n[1].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[50];
  data->localData[0]->realVars[228] /* Bus_02.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[51];
  data->localData[0]->realVars[256] /* Bus_05.n[3].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[52];
  data->localData[0]->realVars[257] /* Bus_05.n[3].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[53];
  data->localData[0]->realVars[813] /* pwLine8.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[54];
  data->localData[0]->realVars[320] /* Bus_14.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[55];
  data->localData[0]->realVars[814] /* pwLine8.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[56];
  data->localData[0]->realVars[321] /* Bus_14.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[57];
  data->localData[0]->realVars[291] /* Bus_09.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[58];
  data->localData[0]->realVars[290] /* Bus_09.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[59];
  data->localData[0]->realVars[73] /* gen_Bus_3_1.gENROU.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[60];
  data->localData[0]->realVars[72] /* gen_Bus_3_1.gENROU.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[61];
  data->localData[0]->realVars[598] /* gen_Bus_3_1.gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[62];
  data->localData[0]->realVars[599] /* gen_Bus_3_1.gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[63];
  data->localData[0]->realVars[606] /* gen_Bus_3_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[64];
  data->localData[0]->realVars[607] /* gen_Bus_3_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[65];
  data->localData[0]->realVars[249] /* Bus_04.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[66];
  data->localData[0]->realVars[747] /* pwLine14.ir.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[67];
  data->localData[0]->realVars[274] /* Bus_07.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[68];
  data->localData[0]->realVars[279] /* Bus_07.p[2].vr variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[69];
  data->localData[0]->realVars[92] /* gen_Bus_8_1.gENROU.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[70];
  data->localData[0]->realVars[94] /* gen_Bus_8_1.gENROU.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[71];
  data->localData[0]->realVars[678] /* gen_Bus_8_1.gENROU.ud variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[72];
  data->localData[0]->realVars[668] /* gen_Bus_8_1.gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[73];
  data->localData[0]->realVars[677] /* gen_Bus_8_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[74];
  data->localData[0]->realVars[676] /* gen_Bus_8_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[75];
  data->localData[0]->realVars[85] /* gen_Bus_6_1.gENROU.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[76];
  data->localData[0]->realVars[84] /* gen_Bus_6_1.gENROU.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[77];
  data->localData[0]->realVars[633] /* gen_Bus_6_1.gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[78];
  data->localData[0]->realVars[634] /* gen_Bus_6_1.gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[79];
  data->localData[0]->realVars[641] /* gen_Bus_6_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[80];
  data->localData[0]->realVars[642] /* gen_Bus_6_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[81];
  data->localData[0]->realVars[710] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[82];
  data->localData[0]->realVars[709] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[83];
  data->localData[0]->realVars[0] /* gen_Bus_1_1.gENROU.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[84];
  data->localData[0]->realVars[2] /* gen_Bus_1_1.gENROU.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[85];
  data->localData[0]->realVars[399] /* gen_Bus_1_1.gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[86];
  data->localData[0]->realVars[400] /* gen_Bus_1_1.gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[87];
  data->localData[0]->realVars[408] /* gen_Bus_1_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[88];
  data->localData[0]->realVars[407] /* gen_Bus_1_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[89];
  data->localData[0]->realVars[39] /* gen_Bus_2_1.gENROU.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[90];
  data->localData[0]->realVars[38] /* gen_Bus_2_1.gENROU.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[91];
  data->localData[0]->realVars[499] /* gen_Bus_2_1.gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[92];
  data->localData[0]->realVars[500] /* gen_Bus_2_1.gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[93];
  data->localData[0]->realVars[508] /* gen_Bus_2_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[94];
  data->localData[0]->realVars[507] /* gen_Bus_2_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[95];
  data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[96];
  data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[97];
  data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[98];
  data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[99];
  data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[100];
  data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[101];
  data->localData[0]->realVars[258] /* Bus_05.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[102];
  data->localData[0]->realVars[266] /* Bus_06.p[1].ii variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[103];
  data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[104];
  data->localData[0]->realVars[250] /* Bus_04.p[3].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[105];
  data->localData[0]->realVars[289] /* Bus_09.n[2].ir variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[106];
  data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[107];
  data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[108];
  data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[109];
  data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[110];
  data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[111];
  data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[112];
  data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[113];
  data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[114];
  data->localData[0]->realVars[341] /* LOAD_04.v variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[115];
  data->localData[0]->realVars[359] /* LOAD_09.v variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[116];
  data->localData[0]->realVars[389] /* LOAD_14.v variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[117];
  data->localData[0]->realVars[347] /* LOAD_05.v variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[118];
  data->localData[0]->realVars[329] /* LOAD_02.v variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[119];
  data->localData[0]->realVars[335] /* LOAD_03.v variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[120];
  data->localData[0]->realVars[353] /* LOAD_06.v variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[121];
  data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[122];
  data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[123];
  data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[124];
  data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[125];
  data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[126];
  data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[127];
  data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[128];
  data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[129];
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
Bus_04.angle = 57.29577951308232 * atan2(Bus_04.p[4].vi, Bus_04.p[4].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->localData[0]->realVars[243] /* Bus_04.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */, data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2640(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2639(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2514(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2641(DATA *data, threadData_t *threadData);


/*
equation index: 562
type: SIMPLE_ASSIGN
Bus_09.angle = 57.29577951308232 * atan2(Bus_09.p[3].vi, Bus_09.p[3].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->localData[0]->realVars[287] /* Bus_09.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */, data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2633(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2550(DATA *data, threadData_t *threadData);


/*
equation index: 565
type: SIMPLE_ASSIGN
shunt1.v = Bus_09.V
*/
void IEEE14_IEEE14_Base_Case_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->localData[0]->realVars[832] /* shunt1.v variable */ = data->localData[0]->realVars[286] /* Bus_09.V variable */;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2632(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2631(DATA *data, threadData_t *threadData);


/*
equation index: 568
type: SIMPLE_ASSIGN
Bus_14.angle = 57.29577951308232 * atan2(Bus_14.p[3].vi, Bus_14.p[3].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->localData[0]->realVars[319] /* Bus_14.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */, data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2628(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2627(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2630(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2629(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2623(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2619(DATA *data, threadData_t *threadData);


/*
equation index: 575
type: SIMPLE_ASSIGN
shunt.v = Bus_14.V
*/
void IEEE14_IEEE14_Base_Case_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->localData[0]->realVars[827] /* shunt.v variable */ = data->localData[0]->realVars[318] /* Bus_14.V variable */;
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
Bus_13.angle = 57.29577951308232 * atan2(Bus_13.n[2].vi, Bus_13.n[2].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->localData[0]->realVars[313] /* Bus_13.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */, data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2618(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2617(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2586(DATA *data, threadData_t *threadData);


/*
equation index: 580
type: SIMPLE_ASSIGN
Bus_12.angle = 57.29577951308232 * atan2(Bus_12.n[1].vi, Bus_12.n[1].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->localData[0]->realVars[307] /* Bus_12.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */, data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2588(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2587(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2584(DATA *data, threadData_t *threadData);


/*
equation index: 584
type: SIMPLE_ASSIGN
Bus_06.angle = 57.29577951308232 * atan2(Bus_06.p[3].vi, Bus_06.p[3].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->localData[0]->realVars[263] /* Bus_06.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */, data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2870(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2871(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2798(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2866(DATA *data, threadData_t *threadData);


/*
equation index: 589
type: SIMPLE_ASSIGN
Bus_05.angle = 57.29577951308232 * atan2(Bus_05.p[2].vi, Bus_05.p[2].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->localData[0]->realVars[255] /* Bus_05.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */, data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2698(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2697(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2701(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2696(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2704(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2703(DATA *data, threadData_t *threadData);


/*
equation index: 596
type: SIMPLE_ASSIGN
Bus_02.angle = 57.29577951308232 * atan2(Bus_02.n[2].vi, Bus_02.n[2].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->localData[0]->realVars[227] /* Bus_02.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */, data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2710(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2711(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2705(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2706(DATA *data, threadData_t *threadData);


/*
equation index: 601
type: SIMPLE_ASSIGN
Bus_01.angle = 57.29577951308232 * atan2(Bus_01.n[1].vi, Bus_01.n[1].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->localData[0]->realVars[221] /* Bus_01.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */, data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2789(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2788(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2700(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2699(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2793(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2792(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2720(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2721(DATA *data, threadData_t *threadData);


/*
equation index: 610
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag2.TF.x[1] = (gen_Bus_1_1.pSS2A.derivativeLag2.TF.d * gen_Bus_1_1.gENROU.PELEC - gen_Bus_1_1.pSS2A.derivativeLag2.TF.y) / (gen_Bus_1_1.pSS2A.derivativeLag2.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag2.TF.d - gen_Bus_1_1.pSS2A.derivativeLag2.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->localData[0]->realVars[446] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[824] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.d PARAM */) * (data->localData[0]->realVars[395] /* gen_Bus_1_1.gENROU.PELEC variable */) - data->localData[0]->realVars[447] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.y variable */,(data->simulationInfo->realParameter[818] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[824] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.d PARAM */) - data->simulationInfo->realParameter[823] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.derivativeLag2.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag2.TF.d - gen_Bus_1_1.pSS2A.derivativeLag2.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag2.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.derivativeLag2.TF.x[1] * gen_Bus_1_1.pSS2A.derivativeLag2.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->localData[0]->realVars[16] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[446] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.x[1] variable */) * (data->simulationInfo->realParameter[819] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2787(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2723(DATA *data, threadData_t *threadData);


/*
equation index: 614
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag3.TF.x[1] = (gen_Bus_1_1.pSS2A.derivativeLag3.TF.d * gen_Bus_1_1.pSS2A.derivativeLag2.y - gen_Bus_1_1.pSS2A.derivativeLag3.TF.y) / (gen_Bus_1_1.pSS2A.derivativeLag3.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag3.TF.d - gen_Bus_1_1.pSS2A.derivativeLag3.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->localData[0]->realVars[449] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[841] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.d PARAM */) * (data->localData[0]->realVars[448] /* gen_Bus_1_1.pSS2A.derivativeLag2.y variable */) - data->localData[0]->realVars[450] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.y variable */,(data->simulationInfo->realParameter[835] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[841] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.d PARAM */) - data->simulationInfo->realParameter[840] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.derivativeLag3.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag3.TF.d - gen_Bus_1_1.pSS2A.derivativeLag3.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag3.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.derivativeLag3.TF.x[1] * gen_Bus_1_1.pSS2A.derivativeLag3.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->localData[0]->realVars[17] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[449] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.x[1] variable */) * (data->simulationInfo->realParameter[836] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2786(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2725(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2785(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2726(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2727(DATA *data, threadData_t *threadData);


/*
equation index: 621
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.d * gen_Bus_1_1.pSS2A.add.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.y) / (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->localData[0]->realVars[451] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[862] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.d PARAM */) * (data->localData[0]->realVars[438] /* gen_Bus_1_1.pSS2A.add.y variable */) - data->localData[0]->realVars[452] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.y variable */,(data->simulationInfo->realParameter[856] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[862] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.d PARAM */) - data->simulationInfo->realParameter[861] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->localData[0]->realVars[18] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[451] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] variable */) * (data->simulationInfo->realParameter[857] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2767(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2729(DATA *data, threadData_t *threadData);


/*
equation index: 625
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.y) / (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->localData[0]->realVars[454] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[880] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.d PARAM */) * (data->localData[0]->realVars[453] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y variable */) - data->localData[0]->realVars[455] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.y variable */,(data->simulationInfo->realParameter[874] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[880] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.d PARAM */) - data->simulationInfo->realParameter[879] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->localData[0]->realVars[19] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[454] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] variable */) * (data->simulationInfo->realParameter[875] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2766(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2747(DATA *data, threadData_t *threadData);


/*
equation index: 629
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.y) / (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->localData[0]->realVars[457] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[898] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.d PARAM */) * (data->localData[0]->realVars[456] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.y variable */) - data->localData[0]->realVars[458] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.y variable */,(data->simulationInfo->realParameter[892] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[898] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.d PARAM */) - data->simulationInfo->realParameter[897] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->localData[0]->realVars[20] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[457] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] variable */) * (data->simulationInfo->realParameter[893] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2765(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2749(DATA *data, threadData_t *threadData);


/*
equation index: 633
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.y) / (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->localData[0]->realVars[460] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[916] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.d PARAM */) * (data->localData[0]->realVars[459] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.y variable */) - data->localData[0]->realVars[461] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.y variable */,(data->simulationInfo->realParameter[910] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[916] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.d PARAM */) - data->simulationInfo->realParameter[915] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->localData[0]->realVars[21] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[460] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] variable */) * (data->simulationInfo->realParameter[911] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2764(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2751(DATA *data, threadData_t *threadData);


/*
equation index: 637
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.y) / (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->localData[0]->realVars[463] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[934] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.d PARAM */) * (data->localData[0]->realVars[462] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.y variable */) - data->localData[0]->realVars[464] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.y variable */,(data->simulationInfo->realParameter[928] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[934] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.d PARAM */) - data->simulationInfo->realParameter[933] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->localData[0]->realVars[22] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[463] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] variable */) * (data->simulationInfo->realParameter[929] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2763(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2753(DATA *data, threadData_t *threadData);


/*
equation index: 641
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.y) / (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->localData[0]->realVars[466] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[952] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.d PARAM */) * (data->localData[0]->realVars[465] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.y variable */) - data->localData[0]->realVars[467] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.y variable */,(data->simulationInfo->realParameter[946] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[952] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.d PARAM */) - data->simulationInfo->realParameter[951] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->localData[0]->realVars[23] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[466] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] variable */) * (data->simulationInfo->realParameter[947] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2762(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2755(DATA *data, threadData_t *threadData);


/*
equation index: 645
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.y) / (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->localData[0]->realVars[469] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[970] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.d PARAM */) * (data->localData[0]->realVars[468] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.y variable */) - data->localData[0]->realVars[470] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.y variable */,(data->simulationInfo->realParameter[964] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[970] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.d PARAM */) - data->simulationInfo->realParameter[969] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->localData[0]->realVars[24] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[469] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] variable */) * (data->simulationInfo->realParameter[965] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2761(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2757(DATA *data, threadData_t *threadData);


/*
equation index: 649
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.y) / (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->localData[0]->realVars[472] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[988] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.d PARAM */) * (data->localData[0]->realVars[471] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.y variable */) - data->localData[0]->realVars[473] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.y variable */,(data->simulationInfo->realParameter[982] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[988] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.d PARAM */) - data->simulationInfo->realParameter[987] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.d - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->localData[0]->realVars[25] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[472] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] variable */) * (data->simulationInfo->realParameter[983] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2760(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2759(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2745(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2730(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2744(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2731(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2743(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2732(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2742(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2733(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2741(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2734(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2740(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2735(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2739(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2736(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2738(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2737(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2768(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2769(DATA *data, threadData_t *threadData);


/*
equation index: 671
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag1.TF.x[1] = (gen_Bus_1_1.pSS2A.Leadlag1.TF.d * gen_Bus_1_1.pSS2A.Leadlag1.u - gen_Bus_1_1.pSS2A.Leadlag1.TF.y) / (gen_Bus_1_1.pSS2A.Leadlag1.TF.a[2] * gen_Bus_1_1.pSS2A.Leadlag1.TF.d - gen_Bus_1_1.pSS2A.Leadlag1.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->localData[0]->realVars[427] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[725] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.d PARAM */) * (data->localData[0]->realVars[429] /* gen_Bus_1_1.pSS2A.Leadlag1.u variable */) - data->localData[0]->realVars[428] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.y variable */,(data->simulationInfo->realParameter[719] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[725] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.d PARAM */) - data->simulationInfo->realParameter[724] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.Leadlag1.TF.a[2] * gen_Bus_1_1.pSS2A.Leadlag1.TF.d - gen_Bus_1_1.pSS2A.Leadlag1.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag1.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.Leadlag1.TF.x[1] * gen_Bus_1_1.pSS2A.Leadlag1.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->localData[0]->realVars[10] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[427] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.x[1] variable */) * (data->simulationInfo->realParameter[720] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2784(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2771(DATA *data, threadData_t *threadData);


/*
equation index: 675
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag2.TF.x[1] = (gen_Bus_1_1.pSS2A.Leadlag2.TF.d * gen_Bus_1_1.pSS2A.Leadlag1.y - gen_Bus_1_1.pSS2A.Leadlag2.TF.y) / (gen_Bus_1_1.pSS2A.Leadlag2.TF.a[2] * gen_Bus_1_1.pSS2A.Leadlag2.TF.d - gen_Bus_1_1.pSS2A.Leadlag2.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->localData[0]->realVars[431] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[743] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.d PARAM */) * (data->localData[0]->realVars[430] /* gen_Bus_1_1.pSS2A.Leadlag1.y variable */) - data->localData[0]->realVars[432] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.y variable */,(data->simulationInfo->realParameter[737] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[743] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.d PARAM */) - data->simulationInfo->realParameter[742] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.bb[2] PARAM */,"gen_Bus_1_1.pSS2A.Leadlag2.TF.a[2] * gen_Bus_1_1.pSS2A.Leadlag2.TF.d - gen_Bus_1_1.pSS2A.Leadlag2.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag2.TF.x_scaled[1] = gen_Bus_1_1.pSS2A.Leadlag2.TF.x[1] * gen_Bus_1_1.pSS2A.Leadlag2.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->localData[0]->realVars[11] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[431] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.x[1] variable */) * (data->simulationInfo->realParameter[738] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2783(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2773(DATA *data, threadData_t *threadData);


/*
equation index: 679
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.VOTHSG = homotopy(smooth(0, if gen_Bus_1_1.pSS2A.Leadlag2.y > gen_Bus_1_1.pSS2A.limiter.uMax then gen_Bus_1_1.pSS2A.limiter.uMax else if gen_Bus_1_1.pSS2A.Leadlag2.y < gen_Bus_1_1.pSS2A.limiter.uMin then gen_Bus_1_1.pSS2A.limiter.uMin else gen_Bus_1_1.pSS2A.Leadlag2.y), gen_Bus_1_1.pSS2A.Leadlag2.y)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[433] /* gen_Bus_1_1.pSS2A.Leadlag2.y variable */,data->simulationInfo->realParameter[849] /* gen_Bus_1_1.pSS2A.limiter.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[849] /* gen_Bus_1_1.pSS2A.limiter.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[433] /* gen_Bus_1_1.pSS2A.Leadlag2.y variable */,data->simulationInfo->realParameter[850] /* gen_Bus_1_1.pSS2A.limiter.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[850] /* gen_Bus_1_1.pSS2A.limiter.uMin PARAM */:data->localData[0]->realVars[433] /* gen_Bus_1_1.pSS2A.Leadlag2.y variable */);
  }
  data->localData[0]->realVars[416] /* gen_Bus_1_1.iEEET1_1.VOTHSG variable */ = homotopy(tmp3, data->localData[0]->realVars[433] /* gen_Bus_1_1.pSS2A.Leadlag2.y variable */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2719(DATA *data, threadData_t *threadData);


/*
equation index: 681
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.ECOMP = sqrt(Bus_01.n[1].vr ^ 2.0 + Bus_01.n[1].vi ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */;
  tmp5 = data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */;
  data->localData[0]->realVars[414] /* gen_Bus_1_1.iEEET1_1.ECOMP variable */ = sqrt((tmp4 * tmp4) + (tmp5 * tmp5));
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.ECOMP0 = gen_Bus_1_1.iEEET1_1.ECOMP
*/
void IEEE14_IEEE14_Base_Case_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->simulationInfo->realParameter[649] /* gen_Bus_1_1.iEEET1_1.ECOMP0 PARAM */ = data->localData[0]->realVars[414] /* gen_Bus_1_1.iEEET1_1.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 683
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.V_REF = gen_Bus_1_1.iEEET1_1.VR0 / gen_Bus_1_1.iEEET1_1.K_A + gen_Bus_1_1.iEEET1_1.ECOMP0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  data->simulationInfo->realParameter[674] /* gen_Bus_1_1.iEEET1_1.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[670] /* gen_Bus_1_1.iEEET1_1.VR0 PARAM */,data->simulationInfo->realParameter[654] /* gen_Bus_1_1.iEEET1_1.K_A PARAM */,"gen_Bus_1_1.iEEET1_1.K_A",equationIndexes) + data->simulationInfo->realParameter[649] /* gen_Bus_1_1.iEEET1_1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.VoltageReference.k = gen_Bus_1_1.iEEET1_1.V_REF
*/
void IEEE14_IEEE14_Base_Case_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->simulationInfo->realParameter[677] /* gen_Bus_1_1.iEEET1_1.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[674] /* gen_Bus_1_1.iEEET1_1.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.DiffV.u1 = gen_Bus_1_1.iEEET1_1.VoltageReference.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->simulationInfo->realParameter[644] /* gen_Bus_1_1.iEEET1_1.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[677] /* gen_Bus_1_1.iEEET1_1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.VoltageReference.y = gen_Bus_1_1.iEEET1_1.VoltageReference.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->simulationInfo->realParameter[678] /* gen_Bus_1_1.iEEET1_1.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[677] /* gen_Bus_1_1.iEEET1_1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.TransducerDelay.y_start = gen_Bus_1_1.iEEET1_1.ECOMP0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->simulationInfo->realParameter[668] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[649] /* gen_Bus_1_1.iEEET1_1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 688
type: SIMPLE_ASSIGN
$START.gen_Bus_1_1.iEEET1_1.TransducerDelay.state = gen_Bus_1_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->modelData->realVarsData[6].attribute /* gen_Bus_1_1.iEEET1_1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[668] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[6] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[6].attribute /* gen_Bus_1_1.iEEET1_1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* gen_Bus_1_1.iEEET1_1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[6] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 689
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.TransducerDelay.state = gen_Bus_1_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->localData[0]->realVars[6] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[668] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 690
type: SIMPLE_ASSIGN
$START.gen_Bus_1_1.iEEET1_1.DiffV.u2 = gen_Bus_1_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->modelData->realVarsData[411].attribute /* gen_Bus_1_1.iEEET1_1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[668] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[411] /* gen_Bus_1_1.iEEET1_1.DiffV.u2 variable */ = data->modelData->realVarsData[411].attribute /* gen_Bus_1_1.iEEET1_1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[411].info /* gen_Bus_1_1.iEEET1_1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[411] /* gen_Bus_1_1.iEEET1_1.DiffV.u2 variable */);
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
Bus_01.V = gen_Bus_1_1.iEEET1_1.ECOMP
*/
void IEEE14_IEEE14_Base_Case_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->localData[0]->realVars[220] /* Bus_01.V variable */ = data->localData[0]->realVars[414] /* gen_Bus_1_1.iEEET1_1.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.iEEET1_1.TransducerDelay.state = (gen_Bus_1_1.iEEET1_1.TransducerDelay.K * gen_Bus_1_1.iEEET1_1.ECOMP - gen_Bus_1_1.iEEET1_1.TransducerDelay.state) / gen_Bus_1_1.iEEET1_1.TransducerDelay.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->localData[0]->realVars[108] /* der(gen_Bus_1_1.iEEET1_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[664] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[414] /* gen_Bus_1_1.iEEET1_1.ECOMP variable */) - data->localData[0]->realVars[6] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[666] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.T_mod PARAM */,"gen_Bus_1_1.iEEET1_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}

/*
equation index: 693
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.DiffV.u2 = if abs(gen_Bus_1_1.iEEET1_1.TransducerDelay.T) <= 1e-015 then gen_Bus_1_1.iEEET1_1.ECOMP * gen_Bus_1_1.iEEET1_1.TransducerDelay.K else gen_Bus_1_1.iEEET1_1.TransducerDelay.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  modelica_boolean tmp6;
  tmp6 = LessEq(fabs(data->simulationInfo->realParameter[665] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.T PARAM */),1e-015);
  data->localData[0]->realVars[411] /* gen_Bus_1_1.iEEET1_1.DiffV.u2 variable */ = (tmp6?(data->localData[0]->realVars[414] /* gen_Bus_1_1.iEEET1_1.ECOMP variable */) * (data->simulationInfo->realParameter[664] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.K PARAM */):data->localData[0]->realVars[6] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2714(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2775(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2776(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2782(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2781(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2780(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2777(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2778(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2779(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2790(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2718(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2717(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2795(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2794(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2689(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2691(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2647(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2646(DATA *data, threadData_t *threadData);


/*
equation index: 712
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.ECOMP0 = gen_Bus_2_1.iEEET1_1.ECOMP
*/
void IEEE14_IEEE14_Base_Case_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->simulationInfo->realParameter[1184] /* gen_Bus_2_1.iEEET1_1.ECOMP0 PARAM */ = data->localData[0]->realVars[514] /* gen_Bus_2_1.iEEET1_1.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.V_REF = gen_Bus_2_1.iEEET1_1.VR0 / gen_Bus_2_1.iEEET1_1.K_A + gen_Bus_2_1.iEEET1_1.ECOMP0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  data->simulationInfo->realParameter[1209] /* gen_Bus_2_1.iEEET1_1.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[1205] /* gen_Bus_2_1.iEEET1_1.VR0 PARAM */,data->simulationInfo->realParameter[1189] /* gen_Bus_2_1.iEEET1_1.K_A PARAM */,"gen_Bus_2_1.iEEET1_1.K_A",equationIndexes) + data->simulationInfo->realParameter[1184] /* gen_Bus_2_1.iEEET1_1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 714
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.VoltageReference.k = gen_Bus_2_1.iEEET1_1.V_REF
*/
void IEEE14_IEEE14_Base_Case_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  data->simulationInfo->realParameter[1212] /* gen_Bus_2_1.iEEET1_1.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[1209] /* gen_Bus_2_1.iEEET1_1.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.DiffV.u1 = gen_Bus_2_1.iEEET1_1.VoltageReference.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  data->simulationInfo->realParameter[1179] /* gen_Bus_2_1.iEEET1_1.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[1212] /* gen_Bus_2_1.iEEET1_1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.VoltageReference.y = gen_Bus_2_1.iEEET1_1.VoltageReference.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  data->simulationInfo->realParameter[1213] /* gen_Bus_2_1.iEEET1_1.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[1212] /* gen_Bus_2_1.iEEET1_1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.TransducerDelay.y_start = gen_Bus_2_1.iEEET1_1.ECOMP0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  data->simulationInfo->realParameter[1203] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[1184] /* gen_Bus_2_1.iEEET1_1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
$START.gen_Bus_2_1.iEEET1_1.TransducerDelay.state = gen_Bus_2_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  data->modelData->realVarsData[42].attribute /* gen_Bus_2_1.iEEET1_1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[1203] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[42] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[42].attribute /* gen_Bus_2_1.iEEET1_1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[42].info /* gen_Bus_2_1.iEEET1_1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[42] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.TransducerDelay.state = gen_Bus_2_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  data->localData[0]->realVars[42] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[1203] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
$START.gen_Bus_2_1.iEEET1_1.DiffV.u2 = gen_Bus_2_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  data->modelData->realVarsData[511].attribute /* gen_Bus_2_1.iEEET1_1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[1203] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[511] /* gen_Bus_2_1.iEEET1_1.DiffV.u2 variable */ = data->modelData->realVarsData[511].attribute /* gen_Bus_2_1.iEEET1_1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[511].info /* gen_Bus_2_1.iEEET1_1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[511] /* gen_Bus_2_1.iEEET1_1.DiffV.u2 variable */);
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.iEEET1_1.TransducerDelay.state = (gen_Bus_2_1.iEEET1_1.TransducerDelay.K * gen_Bus_2_1.iEEET1_1.ECOMP - gen_Bus_2_1.iEEET1_1.TransducerDelay.state) / gen_Bus_2_1.iEEET1_1.TransducerDelay.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  data->localData[0]->realVars[144] /* der(gen_Bus_2_1.iEEET1_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1199] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[514] /* gen_Bus_2_1.iEEET1_1.ECOMP variable */) - data->localData[0]->realVars[42] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[1201] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.T_mod PARAM */,"gen_Bus_2_1.iEEET1_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.DiffV.u2 = if abs(gen_Bus_2_1.iEEET1_1.TransducerDelay.T) <= 1e-015 then gen_Bus_2_1.iEEET1_1.ECOMP * gen_Bus_2_1.iEEET1_1.TransducerDelay.K else gen_Bus_2_1.iEEET1_1.TransducerDelay.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  modelica_boolean tmp7;
  tmp7 = LessEq(fabs(data->simulationInfo->realParameter[1200] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.T PARAM */),1e-015);
  data->localData[0]->realVars[511] /* gen_Bus_2_1.iEEET1_1.DiffV.u2 variable */ = (tmp7?(data->localData[0]->realVars[514] /* gen_Bus_2_1.iEEET1_1.ECOMP variable */) * (data->simulationInfo->realParameter[1199] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.K PARAM */):data->localData[0]->realVars[42] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2644(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2676(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2675(DATA *data, threadData_t *threadData);


/*
equation index: 726
type: SIMPLE_ASSIGN
Bus_03.angle = 57.29577951308232 * atan2(Bus_03.p[2].vi, Bus_03.p[2].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  data->localData[0]->realVars[235] /* Bus_03.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */, data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2677(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2679(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2660(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2659(DATA *data, threadData_t *threadData);


/*
equation index: 731
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.ECOMP0 = gen_Bus_3_1.iEEET1_1.ECOMP
*/
void IEEE14_IEEE14_Base_Case_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->simulationInfo->realParameter[1720] /* gen_Bus_3_1.iEEET1_1.ECOMP0 PARAM */ = data->localData[0]->realVars[613] /* gen_Bus_3_1.iEEET1_1.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.V_REF = gen_Bus_3_1.iEEET1_1.VR0 / gen_Bus_3_1.iEEET1_1.K_A + gen_Bus_3_1.iEEET1_1.ECOMP0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  data->simulationInfo->realParameter[1746] /* gen_Bus_3_1.iEEET1_1.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[1742] /* gen_Bus_3_1.iEEET1_1.VR0 PARAM */,data->simulationInfo->realParameter[1725] /* gen_Bus_3_1.iEEET1_1.K_A PARAM */,"gen_Bus_3_1.iEEET1_1.K_A",equationIndexes) + data->simulationInfo->realParameter[1720] /* gen_Bus_3_1.iEEET1_1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.VoltageReference.k = gen_Bus_3_1.iEEET1_1.V_REF
*/
void IEEE14_IEEE14_Base_Case_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  data->simulationInfo->realParameter[1749] /* gen_Bus_3_1.iEEET1_1.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[1746] /* gen_Bus_3_1.iEEET1_1.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 734
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.DiffV.u1 = gen_Bus_3_1.iEEET1_1.VoltageReference.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  data->simulationInfo->realParameter[1715] /* gen_Bus_3_1.iEEET1_1.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[1749] /* gen_Bus_3_1.iEEET1_1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 735
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.VoltageReference.y = gen_Bus_3_1.iEEET1_1.VoltageReference.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  data->simulationInfo->realParameter[1750] /* gen_Bus_3_1.iEEET1_1.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[1749] /* gen_Bus_3_1.iEEET1_1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 736
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.TransducerDelay.y_start = gen_Bus_3_1.iEEET1_1.ECOMP0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  data->simulationInfo->realParameter[1739] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[1720] /* gen_Bus_3_1.iEEET1_1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
$START.gen_Bus_3_1.iEEET1_1.TransducerDelay.state = gen_Bus_3_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  data->modelData->realVarsData[78].attribute /* gen_Bus_3_1.iEEET1_1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[1739] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[78] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[78].attribute /* gen_Bus_3_1.iEEET1_1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* gen_Bus_3_1.iEEET1_1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[78] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.TransducerDelay.state = gen_Bus_3_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  data->localData[0]->realVars[78] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[1739] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
$START.gen_Bus_3_1.iEEET1_1.DiffV.u2 = gen_Bus_3_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  data->modelData->realVarsData[610].attribute /* gen_Bus_3_1.iEEET1_1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[1739] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[610] /* gen_Bus_3_1.iEEET1_1.DiffV.u2 variable */ = data->modelData->realVarsData[610].attribute /* gen_Bus_3_1.iEEET1_1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[610].info /* gen_Bus_3_1.iEEET1_1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[610] /* gen_Bus_3_1.iEEET1_1.DiffV.u2 variable */);
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.iEEET1_1.TransducerDelay.state = (gen_Bus_3_1.iEEET1_1.TransducerDelay.K * gen_Bus_3_1.iEEET1_1.ECOMP - gen_Bus_3_1.iEEET1_1.TransducerDelay.state) / gen_Bus_3_1.iEEET1_1.TransducerDelay.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->localData[0]->realVars[180] /* der(gen_Bus_3_1.iEEET1_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1735] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[613] /* gen_Bus_3_1.iEEET1_1.ECOMP variable */) - data->localData[0]->realVars[78] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[1737] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.T_mod PARAM */,"gen_Bus_3_1.iEEET1_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.DiffV.u2 = if abs(gen_Bus_3_1.iEEET1_1.TransducerDelay.T) <= 1e-015 then gen_Bus_3_1.iEEET1_1.ECOMP * gen_Bus_3_1.iEEET1_1.TransducerDelay.K else gen_Bus_3_1.iEEET1_1.TransducerDelay.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  modelica_boolean tmp8;
  tmp8 = LessEq(fabs(data->simulationInfo->realParameter[1736] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.T PARAM */),1e-015);
  data->localData[0]->realVars[610] /* gen_Bus_3_1.iEEET1_1.DiffV.u2 variable */ = (tmp8?(data->localData[0]->realVars[613] /* gen_Bus_3_1.iEEET1_1.ECOMP variable */) * (data->simulationInfo->realParameter[1735] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.K PARAM */):data->localData[0]->realVars[78] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2649(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2650(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2651(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2657(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2656(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2655(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2652(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2653(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2654(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2681(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2680(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2693(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2692(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2695(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2694(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2683(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2682(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2688(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2687(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2800(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2801(DATA *data, threadData_t *threadData);


/*
equation index: 763
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag2.TF.x[1] = (gen_Bus_2_1.pSS2A.derivativeLag2.TF.d * gen_Bus_2_1.gENROU.PELEC - gen_Bus_2_1.pSS2A.derivativeLag2.TF.y) / (gen_Bus_2_1.pSS2A.derivativeLag2.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag2.TF.d - gen_Bus_2_1.pSS2A.derivativeLag2.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->localData[0]->realVars[546] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1359] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.d PARAM */) * (data->localData[0]->realVars[495] /* gen_Bus_2_1.gENROU.PELEC variable */) - data->localData[0]->realVars[547] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.y variable */,(data->simulationInfo->realParameter[1353] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1359] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.d PARAM */) - data->simulationInfo->realParameter[1358] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.derivativeLag2.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag2.TF.d - gen_Bus_2_1.pSS2A.derivativeLag2.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 764
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag2.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.derivativeLag2.TF.x[1] * gen_Bus_2_1.pSS2A.derivativeLag2.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->localData[0]->realVars[52] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[546] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.x[1] variable */) * (data->simulationInfo->realParameter[1354] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2865(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2803(DATA *data, threadData_t *threadData);


/*
equation index: 767
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag3.TF.x[1] = (gen_Bus_2_1.pSS2A.derivativeLag3.TF.d * gen_Bus_2_1.pSS2A.derivativeLag2.y - gen_Bus_2_1.pSS2A.derivativeLag3.TF.y) / (gen_Bus_2_1.pSS2A.derivativeLag3.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag3.TF.d - gen_Bus_2_1.pSS2A.derivativeLag3.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->localData[0]->realVars[549] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1376] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.d PARAM */) * (data->localData[0]->realVars[548] /* gen_Bus_2_1.pSS2A.derivativeLag2.y variable */) - data->localData[0]->realVars[550] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.y variable */,(data->simulationInfo->realParameter[1370] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1376] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.d PARAM */) - data->simulationInfo->realParameter[1375] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.derivativeLag3.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag3.TF.d - gen_Bus_2_1.pSS2A.derivativeLag3.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag3.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.derivativeLag3.TF.x[1] * gen_Bus_2_1.pSS2A.derivativeLag3.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->localData[0]->realVars[53] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[549] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.x[1] variable */) * (data->simulationInfo->realParameter[1371] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2864(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2805(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2863(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2806(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2807(DATA *data, threadData_t *threadData);


/*
equation index: 774
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.d * gen_Bus_2_1.pSS2A.add.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.y) / (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->localData[0]->realVars[551] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1397] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.d PARAM */) * (data->localData[0]->realVars[538] /* gen_Bus_2_1.pSS2A.add.y variable */) - data->localData[0]->realVars[552] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.y variable */,(data->simulationInfo->realParameter[1391] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1397] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.d PARAM */) - data->simulationInfo->realParameter[1396] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  data->localData[0]->realVars[54] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[551] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] variable */) * (data->simulationInfo->realParameter[1392] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2847(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2809(DATA *data, threadData_t *threadData);


/*
equation index: 778
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.y) / (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->localData[0]->realVars[554] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1415] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.d PARAM */) * (data->localData[0]->realVars[553] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y variable */) - data->localData[0]->realVars[555] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.y variable */,(data->simulationInfo->realParameter[1409] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1415] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.d PARAM */) - data->simulationInfo->realParameter[1414] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 779
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->localData[0]->realVars[55] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[554] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] variable */) * (data->simulationInfo->realParameter[1410] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2846(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2827(DATA *data, threadData_t *threadData);


/*
equation index: 782
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.y) / (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->localData[0]->realVars[557] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1433] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.d PARAM */) * (data->localData[0]->realVars[556] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.y variable */) - data->localData[0]->realVars[558] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.y variable */,(data->simulationInfo->realParameter[1427] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1433] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.d PARAM */) - data->simulationInfo->realParameter[1432] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 783
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->localData[0]->realVars[56] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[557] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] variable */) * (data->simulationInfo->realParameter[1428] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2845(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2829(DATA *data, threadData_t *threadData);


/*
equation index: 786
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.y) / (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  data->localData[0]->realVars[560] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1451] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.d PARAM */) * (data->localData[0]->realVars[559] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.y variable */) - data->localData[0]->realVars[561] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.y variable */,(data->simulationInfo->realParameter[1445] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1451] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.d PARAM */) - data->simulationInfo->realParameter[1450] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 787
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->localData[0]->realVars[57] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[560] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] variable */) * (data->simulationInfo->realParameter[1446] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2844(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2831(DATA *data, threadData_t *threadData);


/*
equation index: 790
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.y) / (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->localData[0]->realVars[563] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1469] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.d PARAM */) * (data->localData[0]->realVars[562] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.y variable */) - data->localData[0]->realVars[564] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.y variable */,(data->simulationInfo->realParameter[1463] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1469] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.d PARAM */) - data->simulationInfo->realParameter[1468] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 791
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  data->localData[0]->realVars[58] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[563] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] variable */) * (data->simulationInfo->realParameter[1464] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2843(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2833(DATA *data, threadData_t *threadData);


/*
equation index: 794
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.y) / (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  data->localData[0]->realVars[566] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1487] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.d PARAM */) * (data->localData[0]->realVars[565] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.y variable */) - data->localData[0]->realVars[567] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.y variable */,(data->simulationInfo->realParameter[1481] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1487] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.d PARAM */) - data->simulationInfo->realParameter[1486] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 795
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  data->localData[0]->realVars[59] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[566] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] variable */) * (data->simulationInfo->realParameter[1482] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2842(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2835(DATA *data, threadData_t *threadData);


/*
equation index: 798
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.y) / (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  data->localData[0]->realVars[569] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1505] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.d PARAM */) * (data->localData[0]->realVars[568] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.y variable */) - data->localData[0]->realVars[570] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.y variable */,(data->simulationInfo->realParameter[1499] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1505] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.d PARAM */) - data->simulationInfo->realParameter[1504] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 799
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  data->localData[0]->realVars[60] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[569] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] variable */) * (data->simulationInfo->realParameter[1500] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2841(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2837(DATA *data, threadData_t *threadData);


/*
equation index: 802
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.y) / (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  data->localData[0]->realVars[572] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1523] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.d PARAM */) * (data->localData[0]->realVars[571] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.y variable */) - data->localData[0]->realVars[573] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.y variable */,(data->simulationInfo->realParameter[1517] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1523] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.d PARAM */) - data->simulationInfo->realParameter[1522] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.d - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 803
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  data->localData[0]->realVars[61] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[572] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] variable */) * (data->simulationInfo->realParameter[1518] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2840(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2839(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2825(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2810(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2824(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2811(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2823(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2812(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2822(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2813(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2821(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2814(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2820(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2815(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2819(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2816(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2818(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2817(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2848(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2849(DATA *data, threadData_t *threadData);


/*
equation index: 824
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag1.TF.x[1] = (gen_Bus_2_1.pSS2A.Leadlag1.TF.d * gen_Bus_2_1.pSS2A.Leadlag1.u - gen_Bus_2_1.pSS2A.Leadlag1.TF.y) / (gen_Bus_2_1.pSS2A.Leadlag1.TF.a[2] * gen_Bus_2_1.pSS2A.Leadlag1.TF.d - gen_Bus_2_1.pSS2A.Leadlag1.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,824};
  data->localData[0]->realVars[527] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1260] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.d PARAM */) * (data->localData[0]->realVars[529] /* gen_Bus_2_1.pSS2A.Leadlag1.u variable */) - data->localData[0]->realVars[528] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.y variable */,(data->simulationInfo->realParameter[1254] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1260] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.d PARAM */) - data->simulationInfo->realParameter[1259] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.Leadlag1.TF.a[2] * gen_Bus_2_1.pSS2A.Leadlag1.TF.d - gen_Bus_2_1.pSS2A.Leadlag1.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag1.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.Leadlag1.TF.x[1] * gen_Bus_2_1.pSS2A.Leadlag1.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  data->localData[0]->realVars[46] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[527] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.x[1] variable */) * (data->simulationInfo->realParameter[1255] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2862(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2851(DATA *data, threadData_t *threadData);


/*
equation index: 828
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag2.TF.x[1] = (gen_Bus_2_1.pSS2A.Leadlag2.TF.d * gen_Bus_2_1.pSS2A.Leadlag1.y - gen_Bus_2_1.pSS2A.Leadlag2.TF.y) / (gen_Bus_2_1.pSS2A.Leadlag2.TF.a[2] * gen_Bus_2_1.pSS2A.Leadlag2.TF.d - gen_Bus_2_1.pSS2A.Leadlag2.TF.bb[2])
*/
void IEEE14_IEEE14_Base_Case_eqFunction_828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,828};
  data->localData[0]->realVars[531] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.x[1] variable */ = DIVISION_SIM((data->simulationInfo->realParameter[1278] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.d PARAM */) * (data->localData[0]->realVars[530] /* gen_Bus_2_1.pSS2A.Leadlag1.y variable */) - data->localData[0]->realVars[532] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.y variable */,(data->simulationInfo->realParameter[1272] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1278] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.d PARAM */) - data->simulationInfo->realParameter[1277] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.bb[2] PARAM */,"gen_Bus_2_1.pSS2A.Leadlag2.TF.a[2] * gen_Bus_2_1.pSS2A.Leadlag2.TF.d - gen_Bus_2_1.pSS2A.Leadlag2.TF.bb[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 829
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag2.TF.x_scaled[1] = gen_Bus_2_1.pSS2A.Leadlag2.TF.x[1] * gen_Bus_2_1.pSS2A.Leadlag2.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,829};
  data->localData[0]->realVars[47] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.x_scaled[1] STATE(1) */ = (data->localData[0]->realVars[531] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.x[1] variable */) * (data->simulationInfo->realParameter[1273] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.a_end PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2861(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2853(DATA *data, threadData_t *threadData);


/*
equation index: 832
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.VOTHSG = homotopy(smooth(0, if gen_Bus_2_1.pSS2A.Leadlag2.y > gen_Bus_2_1.pSS2A.limiter.uMax then gen_Bus_2_1.pSS2A.limiter.uMax else if gen_Bus_2_1.pSS2A.Leadlag2.y < gen_Bus_2_1.pSS2A.limiter.uMin then gen_Bus_2_1.pSS2A.limiter.uMin else gen_Bus_2_1.pSS2A.Leadlag2.y), gen_Bus_2_1.pSS2A.Leadlag2.y)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,832};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = Greater(data->localData[0]->realVars[533] /* gen_Bus_2_1.pSS2A.Leadlag2.y variable */,data->simulationInfo->realParameter[1384] /* gen_Bus_2_1.pSS2A.limiter.uMax PARAM */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = data->simulationInfo->realParameter[1384] /* gen_Bus_2_1.pSS2A.limiter.uMax PARAM */;
  }
  else
  {
    tmp10 = Less(data->localData[0]->realVars[533] /* gen_Bus_2_1.pSS2A.Leadlag2.y variable */,data->simulationInfo->realParameter[1385] /* gen_Bus_2_1.pSS2A.limiter.uMin PARAM */);
    tmp12 = (tmp10?data->simulationInfo->realParameter[1385] /* gen_Bus_2_1.pSS2A.limiter.uMin PARAM */:data->localData[0]->realVars[533] /* gen_Bus_2_1.pSS2A.Leadlag2.y variable */);
  }
  data->localData[0]->realVars[516] /* gen_Bus_2_1.iEEET1_1.VOTHSG variable */ = homotopy(tmp12, data->localData[0]->realVars[533] /* gen_Bus_2_1.pSS2A.Leadlag2.y variable */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2855(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2856(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2860(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2859(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2858(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2857(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2875(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2876(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2799(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2797(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2796(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2592(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2594(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2581(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2580(DATA *data, threadData_t *threadData);


/*
equation index: 848
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.ECOMP0 = gen_Bus_6_1.iEEET1_1.ECOMP
*/
void IEEE14_IEEE14_Base_Case_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  data->simulationInfo->realParameter[1886] /* gen_Bus_6_1.iEEET1_1.ECOMP0 PARAM */ = data->localData[0]->realVars[648] /* gen_Bus_6_1.iEEET1_1.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.V_REF = gen_Bus_6_1.iEEET1_1.VR0 / gen_Bus_6_1.iEEET1_1.K_A + gen_Bus_6_1.iEEET1_1.ECOMP0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,849};
  data->simulationInfo->realParameter[1912] /* gen_Bus_6_1.iEEET1_1.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[1908] /* gen_Bus_6_1.iEEET1_1.VR0 PARAM */,data->simulationInfo->realParameter[1891] /* gen_Bus_6_1.iEEET1_1.K_A PARAM */,"gen_Bus_6_1.iEEET1_1.K_A",equationIndexes) + data->simulationInfo->realParameter[1886] /* gen_Bus_6_1.iEEET1_1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 850
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.VoltageReference.k = gen_Bus_6_1.iEEET1_1.V_REF
*/
void IEEE14_IEEE14_Base_Case_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  data->simulationInfo->realParameter[1915] /* gen_Bus_6_1.iEEET1_1.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[1912] /* gen_Bus_6_1.iEEET1_1.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.DiffV.u1 = gen_Bus_6_1.iEEET1_1.VoltageReference.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  data->simulationInfo->realParameter[1881] /* gen_Bus_6_1.iEEET1_1.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[1915] /* gen_Bus_6_1.iEEET1_1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.VoltageReference.y = gen_Bus_6_1.iEEET1_1.VoltageReference.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,852};
  data->simulationInfo->realParameter[1916] /* gen_Bus_6_1.iEEET1_1.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[1915] /* gen_Bus_6_1.iEEET1_1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 853
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.TransducerDelay.y_start = gen_Bus_6_1.iEEET1_1.ECOMP0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  data->simulationInfo->realParameter[1905] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[1886] /* gen_Bus_6_1.iEEET1_1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 854
type: SIMPLE_ASSIGN
$START.gen_Bus_6_1.iEEET1_1.TransducerDelay.state = gen_Bus_6_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  data->modelData->realVarsData[88].attribute /* gen_Bus_6_1.iEEET1_1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[1905] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[88] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[88].attribute /* gen_Bus_6_1.iEEET1_1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* gen_Bus_6_1.iEEET1_1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[88] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.TransducerDelay.state = gen_Bus_6_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  data->localData[0]->realVars[88] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[1905] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
$START.gen_Bus_6_1.iEEET1_1.DiffV.u2 = gen_Bus_6_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  data->modelData->realVarsData[645].attribute /* gen_Bus_6_1.iEEET1_1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[1905] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[645] /* gen_Bus_6_1.iEEET1_1.DiffV.u2 variable */ = data->modelData->realVarsData[645].attribute /* gen_Bus_6_1.iEEET1_1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[645].info /* gen_Bus_6_1.iEEET1_1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[645] /* gen_Bus_6_1.iEEET1_1.DiffV.u2 variable */);
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.iEEET1_1.TransducerDelay.state = (gen_Bus_6_1.iEEET1_1.TransducerDelay.K * gen_Bus_6_1.iEEET1_1.ECOMP - gen_Bus_6_1.iEEET1_1.TransducerDelay.state) / gen_Bus_6_1.iEEET1_1.TransducerDelay.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  data->localData[0]->realVars[190] /* der(gen_Bus_6_1.iEEET1_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1901] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[648] /* gen_Bus_6_1.iEEET1_1.ECOMP variable */) - data->localData[0]->realVars[88] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[1903] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.T_mod PARAM */,"gen_Bus_6_1.iEEET1_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.DiffV.u2 = if abs(gen_Bus_6_1.iEEET1_1.TransducerDelay.T) <= 1e-015 then gen_Bus_6_1.iEEET1_1.ECOMP * gen_Bus_6_1.iEEET1_1.TransducerDelay.K else gen_Bus_6_1.iEEET1_1.TransducerDelay.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  modelica_boolean tmp13;
  tmp13 = LessEq(fabs(data->simulationInfo->realParameter[1902] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.T PARAM */),1e-015);
  data->localData[0]->realVars[645] /* gen_Bus_6_1.iEEET1_1.DiffV.u2 variable */ = (tmp13?(data->localData[0]->realVars[648] /* gen_Bus_6_1.iEEET1_1.ECOMP variable */) * (data->simulationInfo->realParameter[1901] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.K PARAM */):data->localData[0]->realVars[88] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2570(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2571(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2572(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2578(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2577(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2576(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2573(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2574(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2575(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2591(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2590(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2562(DATA *data, threadData_t *threadData);


/*
equation index: 871
type: SIMPLE_ASSIGN
Bus_10.angle = 57.29577951308232 * atan2(Bus_10.n[1].vi, Bus_10.n[1].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  data->localData[0]->realVars[295] /* Bus_10.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */, data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2561(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2560(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2558(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2555(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2557(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2556(DATA *data, threadData_t *threadData);


/*
equation index: 878
type: SIMPLE_ASSIGN
Bus_11.angle = 57.29577951308232 * atan2(Bus_11.p[2].vi, Bus_11.p[2].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  data->localData[0]->realVars[301] /* Bus_11.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */, data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2568(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2567(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2566(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2565(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2563(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2583(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2582(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2596(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2595(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2610(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2609(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2600(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2601(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2602(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2608(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2606(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2607(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2605(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2604(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2603(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2614(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2613(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2615(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2589(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2612(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2611(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2626(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2625(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2622(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2621(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2523(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2524(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2547(DATA *data, threadData_t *threadData);


/*
equation index: 912
type: SIMPLE_ASSIGN
Bus_07.angle = 57.29577951308232 * atan2(Bus_07.p[2].vi, Bus_07.p[2].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  data->localData[0]->realVars[273] /* Bus_07.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[278] /* Bus_07.p[2].vi variable */, data->localData[0]->realVars[279] /* Bus_07.p[2].vr variable */));
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2546(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2545(DATA *data, threadData_t *threadData);


/*
equation index: 915
type: SIMPLE_ASSIGN
Bus_08.angle = 57.29577951308232 * atan2(Bus_08.p[1].vi, Bus_08.p[1].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  data->localData[0]->realVars[281] /* Bus_08.angle variable */ = (57.29577951308232) * (atan2(data->localData[0]->realVars[284] /* Bus_08.p[1].vi variable */, data->localData[0]->realVars[285] /* Bus_08.p[1].vr variable */));
  TRACE_POP
}

/*
equation index: 916
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.ECOMP = sqrt(Bus_08.p[1].vr ^ 2.0 + Bus_08.p[1].vi ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  modelica_real tmp14;
  modelica_real tmp15;
  tmp14 = data->localData[0]->realVars[285] /* Bus_08.p[1].vr variable */;
  tmp15 = data->localData[0]->realVars[284] /* Bus_08.p[1].vi variable */;
  data->localData[0]->realVars[683] /* gen_Bus_8_1.iEEET1_1.ECOMP variable */ = sqrt((tmp14 * tmp14) + (tmp15 * tmp15));
  TRACE_POP
}

/*
equation index: 917
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.ECOMP0 = gen_Bus_8_1.iEEET1_1.ECOMP
*/
void IEEE14_IEEE14_Base_Case_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->simulationInfo->realParameter[2052] /* gen_Bus_8_1.iEEET1_1.ECOMP0 PARAM */ = data->localData[0]->realVars[683] /* gen_Bus_8_1.iEEET1_1.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 918
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.V_REF = gen_Bus_8_1.iEEET1_1.VR0 / gen_Bus_8_1.iEEET1_1.K_A + gen_Bus_8_1.iEEET1_1.ECOMP0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  data->simulationInfo->realParameter[2078] /* gen_Bus_8_1.iEEET1_1.V_REF PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[2074] /* gen_Bus_8_1.iEEET1_1.VR0 PARAM */,data->simulationInfo->realParameter[2057] /* gen_Bus_8_1.iEEET1_1.K_A PARAM */,"gen_Bus_8_1.iEEET1_1.K_A",equationIndexes) + data->simulationInfo->realParameter[2052] /* gen_Bus_8_1.iEEET1_1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 919
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.VoltageReference.k = gen_Bus_8_1.iEEET1_1.V_REF
*/
void IEEE14_IEEE14_Base_Case_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  data->simulationInfo->realParameter[2081] /* gen_Bus_8_1.iEEET1_1.VoltageReference.k PARAM */ = data->simulationInfo->realParameter[2078] /* gen_Bus_8_1.iEEET1_1.V_REF PARAM */;
  TRACE_POP
}

/*
equation index: 920
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.DiffV.u1 = gen_Bus_8_1.iEEET1_1.VoltageReference.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  data->simulationInfo->realParameter[2047] /* gen_Bus_8_1.iEEET1_1.DiffV.u1 PARAM */ = data->simulationInfo->realParameter[2081] /* gen_Bus_8_1.iEEET1_1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 921
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.VoltageReference.y = gen_Bus_8_1.iEEET1_1.VoltageReference.k
*/
void IEEE14_IEEE14_Base_Case_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  data->simulationInfo->realParameter[2082] /* gen_Bus_8_1.iEEET1_1.VoltageReference.y PARAM */ = data->simulationInfo->realParameter[2081] /* gen_Bus_8_1.iEEET1_1.VoltageReference.k PARAM */;
  TRACE_POP
}

/*
equation index: 922
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.TransducerDelay.y_start = gen_Bus_8_1.iEEET1_1.ECOMP0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  data->simulationInfo->realParameter[2071] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.y_start PARAM */ = data->simulationInfo->realParameter[2052] /* gen_Bus_8_1.iEEET1_1.ECOMP0 PARAM */;
  TRACE_POP
}

/*
equation index: 923
type: SIMPLE_ASSIGN
$START.gen_Bus_8_1.iEEET1_1.TransducerDelay.state = gen_Bus_8_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  data->modelData->realVarsData[98].attribute /* gen_Bus_8_1.iEEET1_1.TransducerDelay.state STATE(1) */.start = data->simulationInfo->realParameter[2071] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[98] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.state STATE(1) */ = data->modelData->realVarsData[98].attribute /* gen_Bus_8_1.iEEET1_1.TransducerDelay.state STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* gen_Bus_8_1.iEEET1_1.TransducerDelay.state */.name, (modelica_real) data->localData[0]->realVars[98] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}

/*
equation index: 924
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.TransducerDelay.state = gen_Bus_8_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  data->localData[0]->realVars[98] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.state STATE(1) */ = data->simulationInfo->realParameter[2071] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.y_start PARAM */;
  TRACE_POP
}

/*
equation index: 925
type: SIMPLE_ASSIGN
$START.gen_Bus_8_1.iEEET1_1.DiffV.u2 = gen_Bus_8_1.iEEET1_1.TransducerDelay.y_start
*/
void IEEE14_IEEE14_Base_Case_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  data->modelData->realVarsData[680].attribute /* gen_Bus_8_1.iEEET1_1.DiffV.u2 variable */.start = data->simulationInfo->realParameter[2071] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.y_start PARAM */;
    data->localData[0]->realVars[680] /* gen_Bus_8_1.iEEET1_1.DiffV.u2 variable */ = data->modelData->realVarsData[680].attribute /* gen_Bus_8_1.iEEET1_1.DiffV.u2 variable */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[680].info /* gen_Bus_8_1.iEEET1_1.DiffV.u2 */.name, (modelica_real) data->localData[0]->realVars[680] /* gen_Bus_8_1.iEEET1_1.DiffV.u2 variable */);
  TRACE_POP
}

/*
equation index: 926
type: SIMPLE_ASSIGN
Bus_08.V = gen_Bus_8_1.iEEET1_1.ECOMP
*/
void IEEE14_IEEE14_Base_Case_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  data->localData[0]->realVars[280] /* Bus_08.V variable */ = data->localData[0]->realVars[683] /* gen_Bus_8_1.iEEET1_1.ECOMP variable */;
  TRACE_POP
}

/*
equation index: 927
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.iEEET1_1.TransducerDelay.state = (gen_Bus_8_1.iEEET1_1.TransducerDelay.K * gen_Bus_8_1.iEEET1_1.ECOMP - gen_Bus_8_1.iEEET1_1.TransducerDelay.state) / gen_Bus_8_1.iEEET1_1.TransducerDelay.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  data->localData[0]->realVars[200] /* der(gen_Bus_8_1.iEEET1_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[2067] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[683] /* gen_Bus_8_1.iEEET1_1.ECOMP variable */) - data->localData[0]->realVars[98] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[2069] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.T_mod PARAM */,"gen_Bus_8_1.iEEET1_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}

/*
equation index: 928
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.DiffV.u2 = if abs(gen_Bus_8_1.iEEET1_1.TransducerDelay.T) <= 1e-015 then gen_Bus_8_1.iEEET1_1.ECOMP * gen_Bus_8_1.iEEET1_1.TransducerDelay.K else gen_Bus_8_1.iEEET1_1.TransducerDelay.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  modelica_boolean tmp16;
  tmp16 = LessEq(fabs(data->simulationInfo->realParameter[2068] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.T PARAM */),1e-015);
  data->localData[0]->realVars[680] /* gen_Bus_8_1.iEEET1_1.DiffV.u2 variable */ = (tmp16?(data->localData[0]->realVars[683] /* gen_Bus_8_1.iEEET1_1.ECOMP variable */) * (data->simulationInfo->realParameter[2067] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.K PARAM */):data->localData[0]->realVars[98] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2529(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2530(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2531(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2537(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2536(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2535(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2532(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2533(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2534(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2543(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2541(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2542(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2540(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2518(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2519(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2526(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2525(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2636(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2635(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2638(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2637(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2674(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2673(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2666(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2667(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2661(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2662(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2671(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2672(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2670(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2669(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2668(DATA *data, threadData_t *threadData);


/*
equation index: 962
type: ALGORITHM

  assert(gen_Bus_1_1.pSS2A.limiter.uMax >= gen_Bus_1_1.pSS2A.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(gen_Bus_1_1.pSS2A.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(gen_Bus_1_1.pSS2A.limiter.uMin, 6, 0, true) + ")");
*/
void IEEE14_IEEE14_Base_Case_eqFunction_962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,962};
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,11,") < uMin (=");
  modelica_string tmp21;
  static int tmp22 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp17 = GreaterEq(data->simulationInfo->realParameter[849] /* gen_Bus_1_1.pSS2A.limiter.uMax PARAM */,data->simulationInfo->realParameter[850] /* gen_Bus_1_1.pSS2A.limiter.uMin PARAM */);
    if(!tmp17)
    {
      tmp19 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[849] /* gen_Bus_1_1.pSS2A.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp18),tmp19);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp20));
      tmp21 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[850] /* gen_Bus_1_1.pSS2A.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp21);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.16.2-64bit/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngen_Bus_1_1.pSS2A.limiter.uMax >= gen_Bus_1_1.pSS2A.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 961
type: ALGORITHM

  assert(gen_Bus_2_1.pSS2A.limiter.uMax >= gen_Bus_2_1.pSS2A.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(gen_Bus_2_1.pSS2A.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(gen_Bus_2_1.pSS2A.limiter.uMin, 6, 0, true) + ")");
*/
void IEEE14_IEEE14_Base_Case_eqFunction_961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,961};
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,11,") < uMin (=");
  modelica_string tmp27;
  static int tmp28 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp23 = GreaterEq(data->simulationInfo->realParameter[1384] /* gen_Bus_2_1.pSS2A.limiter.uMax PARAM */,data->simulationInfo->realParameter[1385] /* gen_Bus_2_1.pSS2A.limiter.uMin PARAM */);
    if(!tmp23)
    {
      tmp25 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[1384] /* gen_Bus_2_1.pSS2A.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp26));
      tmp27 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[1385] /* gen_Bus_2_1.pSS2A.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp27);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.16.2-64bit/lib/omlibrary/Modelica 3.2.3/Blocks/Nonlinear.mo",22,9,23,65,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ngen_Bus_2_1.pSS2A.limiter.uMax >= gen_Bus_2_1.pSS2A.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void IEEE14_IEEE14_Base_Case_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  IEEE14_IEEE14_Base_Case_eqFunction_1(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_3(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_4(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_5(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_6(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_7(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_8(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_9(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_10(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_11(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_12(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_13(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_14(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_15(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1923(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1924(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1925(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1926(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1927(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1928(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1929(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_23(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_24(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_25(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_26(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_27(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_28(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_29(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_30(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_31(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_32(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_33(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_34(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_35(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_36(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1930(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2872(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2873(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2874(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_41(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_42(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_43(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1932(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_45(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_46(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_47(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_48(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_49(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_50(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_51(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_52(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_53(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_54(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_55(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_56(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_57(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_58(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_59(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_60(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_61(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_62(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_63(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_64(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_65(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_66(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_67(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_68(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_69(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_70(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_71(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_72(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_73(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_74(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_75(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_76(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_77(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_78(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_79(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_80(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1967(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1962(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1955(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1956(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1958(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1957(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1959(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1960(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_89(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_90(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1961(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1965(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1966(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_94(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_95(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1944(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1938(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_98(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_99(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1939(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1941(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1943(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1942(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_104(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_105(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_106(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_107(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_108(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_109(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_110(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_111(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_112(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_113(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_114(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_115(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_116(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_117(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_118(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_119(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_120(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_121(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_122(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_123(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_124(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1972(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2055(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2056(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2057(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_129(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_130(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_131(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1974(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_133(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_134(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_135(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_136(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_137(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_138(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_139(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_140(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_141(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_142(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_143(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_144(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_145(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_146(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_147(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_148(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_149(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_150(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_151(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_152(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_153(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_154(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_155(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_156(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_157(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_158(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_159(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_160(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_161(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_162(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_163(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_164(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_165(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_166(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_167(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_168(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2009(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2004(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1997(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1998(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2000(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1999(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2001(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2002(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_177(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_178(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2003(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2007(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2008(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_182(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_183(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1986(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1980(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_186(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_187(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1981(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1983(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1985(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1984(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_192(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_193(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_194(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_195(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_196(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_197(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_198(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_199(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_200(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_201(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_202(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_203(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_204(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_205(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_206(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_207(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_208(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_209(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_210(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_211(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_212(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2014(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2050(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2051(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2052(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_217(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_218(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_219(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2016(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_221(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2017(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_223(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_224(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_225(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_226(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_227(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_228(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_229(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_230(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_231(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_232(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_233(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_234(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_235(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_236(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_237(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_238(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_239(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_240(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_241(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_242(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_243(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2022(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2045(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2046(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2047(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_248(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_249(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_250(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2024(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_252(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2025(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_254(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_255(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_256(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_257(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_258(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_259(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_260(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_261(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_262(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_263(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_264(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_265(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_266(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_267(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_268(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_269(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_270(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_271(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_272(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_273(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_274(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2030(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2040(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2041(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2042(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_279(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_280(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_281(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2032(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_283(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2033(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_285(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_286(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_287(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_288(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_289(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_290(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_291(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_556(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_557(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2640(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2639(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2514(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2641(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_562(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2633(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2550(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_565(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2632(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2631(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_568(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2628(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2627(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2630(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2629(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2623(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2619(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_575(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_576(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2618(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2617(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2586(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_580(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2588(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2587(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2584(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_584(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2870(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2871(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2798(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2866(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_589(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2698(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2697(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2701(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2696(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2704(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2703(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_596(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2710(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2711(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2705(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2706(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_601(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2789(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2788(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2700(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2699(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2793(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2792(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2720(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2721(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_610(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_611(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2787(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2723(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_614(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_615(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2786(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2725(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2785(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2726(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2727(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_621(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_622(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2767(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2729(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_625(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_626(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2766(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2747(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_629(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_630(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2765(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2749(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_633(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_634(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2764(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2751(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_637(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_638(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2763(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2753(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_641(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_642(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2762(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2755(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_645(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_646(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2761(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2757(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_649(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_650(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2760(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2759(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2745(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2730(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2744(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2731(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2743(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2732(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2742(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2733(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2741(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2734(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2740(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2735(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2739(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2736(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2738(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2737(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2768(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2769(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_671(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_672(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2784(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2771(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_675(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_676(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2783(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2773(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_679(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2719(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_681(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_682(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_683(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_684(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_685(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_686(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_687(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_688(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_689(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_690(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_691(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_692(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_693(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2714(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2775(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2776(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2782(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2781(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2780(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2777(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2778(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2779(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2790(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2718(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2717(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2795(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2794(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2689(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2691(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2647(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2646(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_712(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_713(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_714(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_715(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_716(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_717(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_718(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_719(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_720(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_721(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_722(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2644(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2676(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2675(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_726(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2677(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2679(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2660(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2659(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_731(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_732(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_733(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_734(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_735(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_736(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_737(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_738(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_739(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_740(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_741(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2649(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2650(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2651(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2657(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2656(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2655(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2652(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2653(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2654(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2681(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2680(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2693(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2692(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2695(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2694(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2683(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2682(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2688(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2687(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2800(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2801(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_763(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_764(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2865(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2803(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_767(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_768(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2864(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2805(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2863(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2806(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2807(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_774(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_775(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2847(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2809(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_778(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_779(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2846(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2827(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_782(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_783(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2845(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2829(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_786(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_787(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2844(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2831(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_790(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_791(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2843(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2833(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_794(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_795(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2842(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2835(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_798(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_799(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2841(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2837(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_802(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_803(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2840(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2839(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2825(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2810(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2824(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2811(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2823(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2812(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2822(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2813(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2821(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2814(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2820(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2815(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2819(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2816(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2818(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2817(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2848(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2849(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_824(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_825(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2862(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2851(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_828(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_829(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2861(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2853(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_832(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2855(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2856(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2860(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2859(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2858(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2857(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2875(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2876(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2799(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2797(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2796(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2592(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2594(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2581(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2580(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_848(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_849(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_850(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_851(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_852(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_853(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_854(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_855(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_856(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_857(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_858(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2570(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2571(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2572(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2578(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2577(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2576(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2573(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2574(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2575(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2591(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2590(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2562(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_871(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2561(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2560(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2558(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2555(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2557(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2556(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_878(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2568(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2567(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2566(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2565(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2563(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2583(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2582(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2596(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2595(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2610(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2609(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2600(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2601(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2602(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2608(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2606(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2607(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2605(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2604(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2603(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2614(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2613(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2615(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2589(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2612(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2611(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2626(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2625(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2622(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2621(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2523(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2524(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2547(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_912(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2546(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2545(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_915(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_916(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_917(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_918(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_919(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_920(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_921(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_922(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_923(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_924(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_925(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_926(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_927(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_928(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2529(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2530(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2531(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2537(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2536(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2535(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2532(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2533(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2534(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2543(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2541(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2542(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2540(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2518(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2519(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2526(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2525(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2636(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2635(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2638(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2637(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2674(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2673(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2666(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2667(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2661(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2662(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2671(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2672(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2670(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2669(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_2668(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_962(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_961(data, threadData);
  TRACE_POP
}


int IEEE14_IEEE14_Base_Case_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  IEEE14_IEEE14_Base_Case_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_1(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_3(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_4(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_5(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_6(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_7(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_8(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_9(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_10(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_11(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_12(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_13(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_14(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_15(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1923(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1924(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1925(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1926(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1927(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1928(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1929(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_23(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_24(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_25(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_26(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_27(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_28(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_29(DATA *data, threadData_t *threadData);


/*
equation index: 992
type: ALGORITHM

  (gen_Bus_2_1.iEEET1_1.VRMAX0, gen_Bus_2_1.iEEET1_1.VRMIN0, gen_Bus_2_1.iEEET1_1.KE0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(gen_Bus_2_1.iEEET1_1.V_RMAX, gen_Bus_2_1.iEEET1_1.V_RMIN, gen_Bus_2_1.iEEET1_1.K_E, gen_Bus_2_1.iEEET1_1.E_2, gen_Bus_2_1.iEEET1_1.S_EE_2, gen_Bus_2_1.iEEET1_1.Efd0, gen_Bus_2_1.iEEET1_1.SE_Efd0);
*/
void IEEE14_IEEE14_Base_Case_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  data->simulationInfo->realParameter[1206] /* gen_Bus_2_1.iEEET1_1.VRMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[1210] /* gen_Bus_2_1.iEEET1_1.V_RMAX PARAM */, data->simulationInfo->realParameter[1211] /* gen_Bus_2_1.iEEET1_1.V_RMIN PARAM */, data->simulationInfo->realParameter[1190] /* gen_Bus_2_1.iEEET1_1.K_E PARAM */, data->simulationInfo->realParameter[1186] /* gen_Bus_2_1.iEEET1_1.E_2 PARAM */, data->simulationInfo->realParameter[1194] /* gen_Bus_2_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[1187] /* gen_Bus_2_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[1192] /* gen_Bus_2_1.iEEET1_1.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[1207] /* gen_Bus_2_1.iEEET1_1.VRMIN0 PARAM */ ,&data->simulationInfo->realParameter[1188] /* gen_Bus_2_1.iEEET1_1.KE0 PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_31(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_32(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_33(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_34(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_35(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_36(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1930(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2872(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2873(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2874(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_41(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_42(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_43(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1932(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_45(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_46(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_47(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_48(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_49(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_50(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_51(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_52(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_53(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_54(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_55(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_56(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_57(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_58(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_59(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_60(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_61(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_62(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_63(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_64(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_65(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_66(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_67(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_68(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_69(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_70(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_71(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_72(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_73(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_74(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_75(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_76(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_77(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_78(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_79(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_80(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1967(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1962(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1955(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1956(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1958(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1957(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1959(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1960(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_89(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_90(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1961(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1965(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1966(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_94(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_95(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1944(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1938(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_98(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_99(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1939(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1941(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1943(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1942(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_104(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_105(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_106(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_107(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_108(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_109(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_110(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_111(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_112(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_113(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_114(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_115(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_116(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_117(DATA *data, threadData_t *threadData);


/*
equation index: 1080
type: ALGORITHM

  (gen_Bus_1_1.iEEET1_1.VRMAX0, gen_Bus_1_1.iEEET1_1.VRMIN0, gen_Bus_1_1.iEEET1_1.KE0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(gen_Bus_1_1.iEEET1_1.V_RMAX, gen_Bus_1_1.iEEET1_1.V_RMIN, gen_Bus_1_1.iEEET1_1.K_E, gen_Bus_1_1.iEEET1_1.E_2, gen_Bus_1_1.iEEET1_1.S_EE_2, gen_Bus_1_1.iEEET1_1.Efd0, gen_Bus_1_1.iEEET1_1.SE_Efd0);
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1080};
  data->simulationInfo->realParameter[671] /* gen_Bus_1_1.iEEET1_1.VRMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[675] /* gen_Bus_1_1.iEEET1_1.V_RMAX PARAM */, data->simulationInfo->realParameter[676] /* gen_Bus_1_1.iEEET1_1.V_RMIN PARAM */, data->simulationInfo->realParameter[655] /* gen_Bus_1_1.iEEET1_1.K_E PARAM */, data->simulationInfo->realParameter[651] /* gen_Bus_1_1.iEEET1_1.E_2 PARAM */, data->simulationInfo->realParameter[659] /* gen_Bus_1_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[652] /* gen_Bus_1_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[657] /* gen_Bus_1_1.iEEET1_1.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[672] /* gen_Bus_1_1.iEEET1_1.VRMIN0 PARAM */ ,&data->simulationInfo->realParameter[653] /* gen_Bus_1_1.iEEET1_1.KE0 PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_119(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_120(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_121(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_122(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_123(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_124(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1972(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2055(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2056(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2057(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_129(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_130(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_131(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1974(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_133(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_134(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_135(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_136(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_137(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_138(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_139(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_140(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_141(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_142(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_143(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_144(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_145(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_146(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_147(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_148(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_149(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_150(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_151(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_152(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_153(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_154(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_155(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_156(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_157(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_158(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_159(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_160(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_161(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_162(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_163(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_164(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_165(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_166(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_167(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_168(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2009(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2004(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1997(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1998(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2000(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1999(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2001(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2002(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_177(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_178(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2003(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2007(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2008(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_182(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_183(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1986(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1980(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_186(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_187(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1981(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1983(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1985(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_1984(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_192(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_193(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_194(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_195(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_196(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_197(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_198(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_199(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_200(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_201(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_202(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_203(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_204(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_205(DATA *data, threadData_t *threadData);


/*
equation index: 1168
type: ALGORITHM

  (gen_Bus_8_1.iEEET1_1.VRMAX0, gen_Bus_8_1.iEEET1_1.VRMIN0, gen_Bus_8_1.iEEET1_1.KE0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(gen_Bus_8_1.iEEET1_1.V_RMAX, gen_Bus_8_1.iEEET1_1.V_RMIN, gen_Bus_8_1.iEEET1_1.K_E, gen_Bus_8_1.iEEET1_1.E_2, gen_Bus_8_1.iEEET1_1.S_EE_2, gen_Bus_8_1.iEEET1_1.Efd0, gen_Bus_8_1.iEEET1_1.SE_Efd0);
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1168};
  data->simulationInfo->realParameter[2075] /* gen_Bus_8_1.iEEET1_1.VRMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[2079] /* gen_Bus_8_1.iEEET1_1.V_RMAX PARAM */, data->simulationInfo->realParameter[2080] /* gen_Bus_8_1.iEEET1_1.V_RMIN PARAM */, data->simulationInfo->realParameter[2058] /* gen_Bus_8_1.iEEET1_1.K_E PARAM */, data->simulationInfo->realParameter[2054] /* gen_Bus_8_1.iEEET1_1.E_2 PARAM */, data->simulationInfo->realParameter[2062] /* gen_Bus_8_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[2055] /* gen_Bus_8_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[2060] /* gen_Bus_8_1.iEEET1_1.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[2076] /* gen_Bus_8_1.iEEET1_1.VRMIN0 PARAM */ ,&data->simulationInfo->realParameter[2056] /* gen_Bus_8_1.iEEET1_1.KE0 PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_207(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_208(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_209(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_210(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_211(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_212(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2014(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2050(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2051(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2052(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_217(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_218(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_219(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2016(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_221(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2017(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_223(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_224(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_225(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_226(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_227(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_228(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_229(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_230(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_231(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_232(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_233(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_234(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_235(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_236(DATA *data, threadData_t *threadData);


/*
equation index: 1199
type: ALGORITHM

  (gen_Bus_6_1.iEEET1_1.VRMAX0, gen_Bus_6_1.iEEET1_1.VRMIN0, gen_Bus_6_1.iEEET1_1.KE0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(gen_Bus_6_1.iEEET1_1.V_RMAX, gen_Bus_6_1.iEEET1_1.V_RMIN, gen_Bus_6_1.iEEET1_1.K_E, gen_Bus_6_1.iEEET1_1.E_2, gen_Bus_6_1.iEEET1_1.S_EE_2, gen_Bus_6_1.iEEET1_1.Efd0, gen_Bus_6_1.iEEET1_1.SE_Efd0);
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1199};
  data->simulationInfo->realParameter[1909] /* gen_Bus_6_1.iEEET1_1.VRMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[1913] /* gen_Bus_6_1.iEEET1_1.V_RMAX PARAM */, data->simulationInfo->realParameter[1914] /* gen_Bus_6_1.iEEET1_1.V_RMIN PARAM */, data->simulationInfo->realParameter[1892] /* gen_Bus_6_1.iEEET1_1.K_E PARAM */, data->simulationInfo->realParameter[1888] /* gen_Bus_6_1.iEEET1_1.E_2 PARAM */, data->simulationInfo->realParameter[1896] /* gen_Bus_6_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[1889] /* gen_Bus_6_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[1894] /* gen_Bus_6_1.iEEET1_1.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[1910] /* gen_Bus_6_1.iEEET1_1.VRMIN0 PARAM */ ,&data->simulationInfo->realParameter[1890] /* gen_Bus_6_1.iEEET1_1.KE0 PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_238(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_239(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_240(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_241(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_242(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_243(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2022(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2045(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2046(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2047(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_248(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_249(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_250(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2024(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_252(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2025(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_254(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_255(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_256(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_257(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_258(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_259(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_260(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_261(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_262(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_263(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_264(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_265(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_266(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_267(DATA *data, threadData_t *threadData);


/*
equation index: 1230
type: ALGORITHM

  (gen_Bus_3_1.iEEET1_1.VRMAX0, gen_Bus_3_1.iEEET1_1.VRMIN0, gen_Bus_3_1.iEEET1_1.KE0) := OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.calculate_dc_exciter_params(gen_Bus_3_1.iEEET1_1.V_RMAX, gen_Bus_3_1.iEEET1_1.V_RMIN, gen_Bus_3_1.iEEET1_1.K_E, gen_Bus_3_1.iEEET1_1.E_2, gen_Bus_3_1.iEEET1_1.S_EE_2, gen_Bus_3_1.iEEET1_1.Efd0, gen_Bus_3_1.iEEET1_1.SE_Efd0);
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1230};
  data->simulationInfo->realParameter[1743] /* gen_Bus_3_1.iEEET1_1.VRMAX0 PARAM */ = omc_OpenIPSL_Electrical_Controls_PSSE_ES_BaseClasses_calculate__dc__exciter__params(threadData, data->simulationInfo->realParameter[1747] /* gen_Bus_3_1.iEEET1_1.V_RMAX PARAM */, data->simulationInfo->realParameter[1748] /* gen_Bus_3_1.iEEET1_1.V_RMIN PARAM */, data->simulationInfo->realParameter[1726] /* gen_Bus_3_1.iEEET1_1.K_E PARAM */, data->simulationInfo->realParameter[1722] /* gen_Bus_3_1.iEEET1_1.E_2 PARAM */, data->simulationInfo->realParameter[1730] /* gen_Bus_3_1.iEEET1_1.S_EE_2 PARAM */, data->simulationInfo->realParameter[1723] /* gen_Bus_3_1.iEEET1_1.Efd0 PARAM */, data->simulationInfo->realParameter[1728] /* gen_Bus_3_1.iEEET1_1.SE_Efd0 PARAM */ ,&data->simulationInfo->realParameter[1744] /* gen_Bus_3_1.iEEET1_1.VRMIN0 PARAM */ ,&data->simulationInfo->realParameter[1724] /* gen_Bus_3_1.iEEET1_1.KE0 PARAM */);
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_269(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_270(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_271(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_272(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_273(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_274(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2030(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2040(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2041(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2042(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_279(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_280(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_281(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2032(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_283(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2033(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_285(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_286(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_287(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_288(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_289(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_290(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_291(DATA *data, threadData_t *threadData);


void IEEE14_IEEE14_Base_Case_eqFunction_1254(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1255(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1256(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1257(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1258(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1259(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1260(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1261(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1262(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1263(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1264(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1265(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1266(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1267(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1268(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1269(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1270(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1271(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1272(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1273(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1274(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1275(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1276(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1277(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1278(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1279(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1280(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1281(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1282(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1283(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1284(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1285(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1286(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1287(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1288(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1289(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1290(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1291(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1292(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1293(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1294(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1295(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1296(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1297(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1298(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1299(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1300(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1301(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1302(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1303(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1304(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1305(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1306(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1307(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1308(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1309(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1310(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1311(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1312(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1313(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1314(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1315(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1316(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1317(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1318(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1319(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1320(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1321(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1322(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1323(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1324(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1325(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1326(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1327(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1328(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1329(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1330(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1331(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1332(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1333(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1334(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1335(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1336(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1337(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1338(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1339(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1340(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1341(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1342(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1343(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1344(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1345(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1346(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1347(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1348(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1349(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1350(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1351(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1352(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1353(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1354(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1355(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1356(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1357(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1358(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1359(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1360(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1361(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1362(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1363(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1364(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1365(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1366(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1367(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1368(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1369(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1370(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1371(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1372(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1373(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1374(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1375(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1376(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1377(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1378(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1379(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1380(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1381(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1382(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1383(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1384(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1385(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1386(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1387(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1517(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1516(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1515(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1514(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1513(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1512(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1511(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1510(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1509(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1508(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1507(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1506(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1505(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1504(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1503(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1502(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1501(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1500(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1499(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1498(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1497(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1496(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1495(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1494(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1493(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1492(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1491(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1490(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1489(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1488(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1487(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1486(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1485(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1484(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1483(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1482(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1481(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1480(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1479(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1478(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1477(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1476(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1475(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1474(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1473(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1472(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1471(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1470(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1469(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1468(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1467(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1466(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1465(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1464(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1463(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1462(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1461(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1460(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1459(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1458(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1457(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1456(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1455(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1454(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1453(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1452(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1451(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1450(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1449(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1448(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1447(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1446(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1445(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1444(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1443(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1442(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1441(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1440(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1439(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1438(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1437(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1436(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1435(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1434(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1433(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1432(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1431(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1430(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1429(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1428(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1427(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1426(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1425(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1424(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1423(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1422(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1421(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1420(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1419(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1418(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1417(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1416(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1415(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1414(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1413(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1412(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1411(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1410(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1409(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1408(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1407(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1406(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1405(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1404(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1403(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1402(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1401(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1400(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1399(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1398(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1397(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1396(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1395(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1394(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1393(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1392(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1391(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1390(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1389(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_1388(DATA*, threadData_t*);
/*
equation index: 1518
indexNonlinear: 1
type: NONLINEAR

vars: {pwLine6.ir.re, pwLine3.ir.re, pwLine12.ir.im, pwLine15.ir.im, pwLine13.ir.re, pwLine15.ir.re, pwLine9.is.re, pwLine11.ir.re, pwLine15.is.im, pwLine11.ir.im, pwLine4.is.re, pwLine5.is.re, pwLine3.ir.im, pwLine5.ir.im, pwLine5.ir.re, pwLine2.is.re, pwLine4.is.im, pwLine2.is.im, pwLine6.ir.im, pwLine.is.im, pwLine4.ir.re, pwLine3.is.re, pwLine4.ir.im, pwLine3.is.im, pwLine7.is.im, pwLine8.ir.im, pwLine7.is.re, pwLine8.ir.re, pwLine2.ir.re, Bus_03.n[1].ir, Bus_04.n[2].ir, Bus_04.n[2].ii, Bus_13.p[2].ii, Bus_13.p[2].ir, pwLine12.is.re, Bus_12.n[1].ir, pwLine11.is.im, Bus_12.n[1].ii, pwLine10.is.re, Bus_11.p[2].ir, pwLine9.ir.im, Bus_11.p[2].ii, pwLine10.ir.re, Bus_10.p[2].ir, pwLine10.ir.im, Bus_10.p[2].ii, Bus_06.n[1].ii, Bus_06.n[1].ir, pwLine2.ir.im, Bus_03.n[1].ii, Bus_02.n[1].ir, Bus_02.n[1].ii, Bus_05.n[3].ii, Bus_05.n[3].ir, pwLine8.is.im, Bus_14.p[2].ii, pwLine8.is.re, Bus_14.p[2].ir, Bus_09.p[2].ir, Bus_09.p[2].ii, gen_Bus_3_1.gENROU.Epq, gen_Bus_3_1.gENROU.Epd, gen_Bus_3_1.gENROU.PSIppd, gen_Bus_3_1.gENROU.PSIppq, gen_Bus_3_1.gENROU.id, gen_Bus_3_1.gENROU.iq, Bus_04.p[2].ir, pwLine14.ir.im, Bus_07.n[1].ii, Bus_07.p[2].vr, gen_Bus_8_1.gENROU.Epd, gen_Bus_8_1.gENROU.PSIkd, gen_Bus_8_1.gENROU.ud, gen_Bus_8_1.gENROU.PSIppd, gen_Bus_8_1.gENROU.iq, gen_Bus_8_1.gENROU.id, gen_Bus_6_1.gENROU.PSIkq, gen_Bus_6_1.gENROU.PSIkd, gen_Bus_6_1.gENROU.PSIppd, gen_Bus_6_1.gENROU.PSIppq, gen_Bus_6_1.gENROU.id, gen_Bus_6_1.gENROU.iq, pwLine1.is.re, pwLine1.is.im, gen_Bus_1_1.gENROU.Epd, gen_Bus_1_1.gENROU.PSIkd, gen_Bus_1_1.gENROU.PSIppd, gen_Bus_1_1.gENROU.PSIppq, gen_Bus_1_1.gENROU.iq, gen_Bus_1_1.gENROU.id, gen_Bus_2_1.gENROU.PSIkq, gen_Bus_2_1.gENROU.PSIkd, gen_Bus_2_1.gENROU.PSIppd, gen_Bus_2_1.gENROU.PSIppq, gen_Bus_2_1.gENROU.iq, gen_Bus_2_1.gENROU.id, Bus_01.n[1].vr, Bus_01.n[1].vi, Bus_03.p[2].vr, Bus_03.p[2].vi, Bus_14.p[3].vi, Bus_14.p[3].vr, Bus_05.p[2].ii, Bus_06.p[1].ii, Bus_06.p[3].vi, Bus_04.p[3].ir, Bus_09.n[2].ir, Bus_09.p[3].vi, Bus_09.p[3].vr, Bus_05.p[2].vr, Bus_05.p[2].vi, Bus_02.n[2].vr, Bus_02.n[2].vi, Bus_04.p[4].vr, Bus_04.p[4].vi, LOAD_04.v, LOAD_09.v, LOAD_14.v, LOAD_05.v, LOAD_02.v, LOAD_03.v, LOAD_06.v, Bus_13.n[2].vr, Bus_13.n[2].vi, Bus_11.p[2].vr, Bus_10.n[1].vi, Bus_10.n[1].vr, Bus_11.p[2].vi, Bus_12.n[1].vr, Bus_12.n[1].vi}
eqns: {1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1517, 1516, 1515, 1514, 1513, 1512, 1511, 1510, 1509, 1508, 1507, 1506, 1505, 1504, 1503, 1502, 1501, 1500, 1499, 1498, 1497, 1496, 1495, 1494, 1493, 1492, 1491, 1490, 1489, 1488, 1487, 1486, 1485, 1484, 1483, 1482, 1481, 1480, 1479, 1478, 1477, 1476, 1475, 1474, 1473, 1472, 1471, 1470, 1469, 1468, 1467, 1466, 1465, 1464, 1463, 1462, 1461, 1460, 1459, 1458, 1457, 1456, 1455, 1454, 1453, 1452, 1451, 1450, 1449, 1448, 1447, 1446, 1445, 1444, 1443, 1442, 1441, 1440, 1439, 1438, 1437, 1436, 1435, 1434, 1433, 1432, 1431, 1430, 1429, 1428, 1427, 1426, 1425, 1424, 1423, 1422, 1421, 1420, 1419, 1418, 1417, 1416, 1415, 1414, 1413, 1412, 1411, 1410, 1409, 1408, 1407, 1406, 1405, 1404, 1403, 1402, 1401, 1400, 1399, 1398, 1397, 1396, 1395, 1394, 1393, 1392, 1391, 1390, 1389, 1388}
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1518};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1518 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[796] /* pwLine6.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[772] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[731] /* pwLine12.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[755] /* pwLine15.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[740] /* pwLine13.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[756] /* pwLine15.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[822] /* pwLine9.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[724] /* pwLine11.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[757] /* pwLine15.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[723] /* pwLine11.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[782] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[790] /* pwLine5.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[771] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[787] /* pwLine5.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[788] /* pwLine5.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[766] /* pwLine2.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[781] /* pwLine4.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[765] /* pwLine2.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[795] /* pwLine6.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[701] /* pwLine.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[780] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[774] /* pwLine3.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[22] = data->localData[0]->realVars[779] /* pwLine4.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[23] = data->localData[0]->realVars[773] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[24] = data->localData[0]->realVars[805] /* pwLine7.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[25] = data->localData[0]->realVars[811] /* pwLine8.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[26] = data->localData[0]->realVars[806] /* pwLine7.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[27] = data->localData[0]->realVars[812] /* pwLine8.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[28] = data->localData[0]->realVars[764] /* pwLine2.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[29] = (-data->simulationInfo->realParameter[161] /* LOAD_03.ir0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[30] = (-data->simulationInfo->realParameter[203] /* LOAD_04.ir0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[31] = (-data->simulationInfo->realParameter[202] /* LOAD_04.ii0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[32] = (-data->simulationInfo->realParameter[496] /* LOAD_13.ii0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[33] = (-data->simulationInfo->realParameter[497] /* LOAD_13.ir0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[34] = data->localData[0]->realVars[734] /* pwLine12.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[35] = (-data->simulationInfo->realParameter[455] /* LOAD_12.ir0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[36] = data->localData[0]->realVars[725] /* pwLine11.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[37] = (-data->simulationInfo->realParameter[454] /* LOAD_12.ii0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[38] = data->localData[0]->realVars[718] /* pwLine10.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[39] = (-data->simulationInfo->realParameter[413] /* LOAD_11.ir0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[40] = data->localData[0]->realVars[819] /* pwLine9.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[41] = (-data->simulationInfo->realParameter[412] /* LOAD_11.ii0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[42] = data->localData[0]->realVars[716] /* pwLine10.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[43] = (-data->simulationInfo->realParameter[371] /* LOAD_10.ir0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[44] = data->localData[0]->realVars[715] /* pwLine10.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[45] = (-data->simulationInfo->realParameter[370] /* LOAD_10.ii0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[46] = (-data->simulationInfo->realParameter[286] /* LOAD_06.ii0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[47] = (-data->simulationInfo->realParameter[287] /* LOAD_06.ir0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[48] = data->localData[0]->realVars[763] /* pwLine2.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[49] = (-data->simulationInfo->realParameter[160] /* LOAD_03.ii0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[50] = (-data->simulationInfo->realParameter[119] /* LOAD_02.ir0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[51] = (-data->simulationInfo->realParameter[118] /* LOAD_02.ii0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[52] = (-data->simulationInfo->realParameter[244] /* LOAD_05.ii0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[53] = (-data->simulationInfo->realParameter[245] /* LOAD_05.ir0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[54] = data->localData[0]->realVars[813] /* pwLine8.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[55] = (-data->simulationInfo->realParameter[538] /* LOAD_14.ii0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[56] = data->localData[0]->realVars[814] /* pwLine8.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[57] = (-data->simulationInfo->realParameter[539] /* LOAD_14.ir0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[58] = (-data->simulationInfo->realParameter[329] /* LOAD_09.ir0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[59] = (-data->simulationInfo->realParameter[328] /* LOAD_09.ii0 PARAM */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[60] = data->simulationInfo->realParameter[1633] /* gen_Bus_3_1.gENROU.Epq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[61] = data->simulationInfo->realParameter[1632] /* gen_Bus_3_1.gENROU.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[62] = data->simulationInfo->realParameter[1659] /* gen_Bus_3_1.gENROU.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[63] = data->simulationInfo->realParameter[1660] /* gen_Bus_3_1.gENROU.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[64] = data->simulationInfo->realParameter[1701] /* gen_Bus_3_1.gENROU.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[65] = data->simulationInfo->realParameter[1703] /* gen_Bus_3_1.gENROU.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[66] = data->localData[0]->realVars[249] /* Bus_04.p[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[67] = data->localData[0]->realVars[747] /* pwLine14.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[68] = data->localData[0]->realVars[274] /* Bus_07.n[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[69] = data->localData[0]->realVars[279] /* Bus_07.p[2].vr variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[70] = data->simulationInfo->realParameter[1964] /* gen_Bus_8_1.gENROU.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[71] = data->simulationInfo->realParameter[1985] /* gen_Bus_8_1.gENROU.PSIkd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[72] = data->simulationInfo->realParameter[2040] /* gen_Bus_8_1.gENROU.ud0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[73] = data->simulationInfo->realParameter[1991] /* gen_Bus_8_1.gENROU.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[74] = data->simulationInfo->realParameter[2035] /* gen_Bus_8_1.gENROU.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[75] = data->simulationInfo->realParameter[2033] /* gen_Bus_8_1.gENROU.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[76] = data->simulationInfo->realParameter[1820] /* gen_Bus_6_1.gENROU.PSIkq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[77] = data->simulationInfo->realParameter[1819] /* gen_Bus_6_1.gENROU.PSIkd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[78] = data->simulationInfo->realParameter[1825] /* gen_Bus_6_1.gENROU.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[79] = data->simulationInfo->realParameter[1826] /* gen_Bus_6_1.gENROU.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[80] = data->simulationInfo->realParameter[1867] /* gen_Bus_6_1.gENROU.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[81] = data->simulationInfo->realParameter[1869] /* gen_Bus_6_1.gENROU.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[82] = data->localData[0]->realVars[710] /* pwLine1.is.re variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[83] = data->localData[0]->realVars[709] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[84] = data->simulationInfo->realParameter[562] /* gen_Bus_1_1.gENROU.Epd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[85] = data->simulationInfo->realParameter[582] /* gen_Bus_1_1.gENROU.PSIkd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[86] = data->simulationInfo->realParameter[588] /* gen_Bus_1_1.gENROU.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[87] = data->simulationInfo->realParameter[589] /* gen_Bus_1_1.gENROU.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[88] = data->simulationInfo->realParameter[632] /* gen_Bus_1_1.gENROU.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[89] = data->simulationInfo->realParameter[630] /* gen_Bus_1_1.gENROU.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[90] = data->simulationInfo->realParameter[1118] /* gen_Bus_2_1.gENROU.PSIkq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[91] = data->simulationInfo->realParameter[1117] /* gen_Bus_2_1.gENROU.PSIkd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[92] = data->simulationInfo->realParameter[1123] /* gen_Bus_2_1.gENROU.PSIppd0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[93] = data->simulationInfo->realParameter[1124] /* gen_Bus_2_1.gENROU.PSIppq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[94] = data->simulationInfo->realParameter[1167] /* gen_Bus_2_1.gENROU.iq0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[95] = data->simulationInfo->realParameter[1165] /* gen_Bus_2_1.gENROU.id0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[96] = data->simulationInfo->realParameter[640] /* gen_Bus_1_1.gENROU.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[97] = data->simulationInfo->realParameter[639] /* gen_Bus_1_1.gENROU.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[98] = data->simulationInfo->realParameter[166] /* LOAD_03.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[99] = data->simulationInfo->realParameter[165] /* LOAD_03.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[100] = data->simulationInfo->realParameter[543] /* LOAD_14.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[101] = data->simulationInfo->realParameter[544] /* LOAD_14.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[102] = data->localData[0]->realVars[258] /* Bus_05.p[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[103] = data->localData[0]->realVars[266] /* Bus_06.p[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[104] = data->simulationInfo->realParameter[291] /* LOAD_06.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[105] = data->localData[0]->realVars[250] /* Bus_04.p[3].ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[106] = data->localData[0]->realVars[289] /* Bus_09.n[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[107] = data->simulationInfo->realParameter[333] /* LOAD_09.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[108] = data->simulationInfo->realParameter[334] /* LOAD_09.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[109] = data->simulationInfo->realParameter[250] /* LOAD_05.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[110] = data->simulationInfo->realParameter[249] /* LOAD_05.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[111] = data->simulationInfo->realParameter[124] /* LOAD_02.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[112] = data->simulationInfo->realParameter[123] /* LOAD_02.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[113] = data->simulationInfo->realParameter[208] /* LOAD_04.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[114] = data->simulationInfo->realParameter[207] /* LOAD_04.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[115] = data->simulationInfo->realParameter[19] /* Bus_04.V_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[116] = data->simulationInfo->realParameter[49] /* Bus_09.V_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[117] = data->simulationInfo->realParameter[79] /* Bus_14.V_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[118] = data->simulationInfo->realParameter[25] /* Bus_05.V_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[119] = data->simulationInfo->realParameter[7] /* Bus_02.V_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[120] = data->simulationInfo->realParameter[13] /* Bus_03.V_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[121] = data->simulationInfo->realParameter[31] /* Bus_06.V_0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[122] = data->simulationInfo->realParameter[502] /* LOAD_13.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[123] = data->simulationInfo->realParameter[501] /* LOAD_13.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[124] = data->simulationInfo->realParameter[418] /* LOAD_11.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[125] = data->simulationInfo->realParameter[375] /* LOAD_10.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[126] = data->simulationInfo->realParameter[376] /* LOAD_10.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[127] = data->simulationInfo->realParameter[417] /* LOAD_11.vi0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[128] = data->simulationInfo->realParameter[460] /* LOAD_12.vr0 PARAM */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[129] = data->simulationInfo->realParameter[459] /* LOAD_12.vi0 PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1518};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1518 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[796] /* pwLine6.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[772] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[731] /* pwLine12.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[755] /* pwLine15.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[740] /* pwLine13.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[756] /* pwLine15.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[822] /* pwLine9.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[724] /* pwLine11.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[757] /* pwLine15.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[723] /* pwLine11.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[782] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[790] /* pwLine5.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[771] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[787] /* pwLine5.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[788] /* pwLine5.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[766] /* pwLine2.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[781] /* pwLine4.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[765] /* pwLine2.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[795] /* pwLine6.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[701] /* pwLine.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[780] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[774] /* pwLine3.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  data->localData[0]->realVars[779] /* pwLine4.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[22];
  data->localData[0]->realVars[773] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[23];
  data->localData[0]->realVars[805] /* pwLine7.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[24];
  data->localData[0]->realVars[811] /* pwLine8.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[25];
  data->localData[0]->realVars[806] /* pwLine7.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[26];
  data->localData[0]->realVars[812] /* pwLine8.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[27];
  data->localData[0]->realVars[764] /* pwLine2.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[28];
  data->localData[0]->realVars[237] /* Bus_03.n[1].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[29];
  data->localData[0]->realVars[245] /* Bus_04.n[2].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[30];
  data->localData[0]->realVars[244] /* Bus_04.n[2].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[31];
  data->localData[0]->realVars[316] /* Bus_13.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[32];
  data->localData[0]->realVars[317] /* Bus_13.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[33];
  data->localData[0]->realVars[734] /* pwLine12.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[34];
  data->localData[0]->realVars[309] /* Bus_12.n[1].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[35];
  data->localData[0]->realVars[725] /* pwLine11.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[36];
  data->localData[0]->realVars[308] /* Bus_12.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[37];
  data->localData[0]->realVars[718] /* pwLine10.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[38];
  data->localData[0]->realVars[303] /* Bus_11.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[39];
  data->localData[0]->realVars[819] /* pwLine9.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[40];
  data->localData[0]->realVars[302] /* Bus_11.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[41];
  data->localData[0]->realVars[716] /* pwLine10.ir.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[42];
  data->localData[0]->realVars[299] /* Bus_10.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[43];
  data->localData[0]->realVars[715] /* pwLine10.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[44];
  data->localData[0]->realVars[298] /* Bus_10.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[45];
  data->localData[0]->realVars[264] /* Bus_06.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[46];
  data->localData[0]->realVars[265] /* Bus_06.n[1].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[47];
  data->localData[0]->realVars[763] /* pwLine2.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[48];
  data->localData[0]->realVars[236] /* Bus_03.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[49];
  data->localData[0]->realVars[230] /* Bus_02.n[1].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[50];
  data->localData[0]->realVars[228] /* Bus_02.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[51];
  data->localData[0]->realVars[256] /* Bus_05.n[3].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[52];
  data->localData[0]->realVars[257] /* Bus_05.n[3].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[53];
  data->localData[0]->realVars[813] /* pwLine8.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[54];
  data->localData[0]->realVars[320] /* Bus_14.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[55];
  data->localData[0]->realVars[814] /* pwLine8.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[56];
  data->localData[0]->realVars[321] /* Bus_14.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[57];
  data->localData[0]->realVars[291] /* Bus_09.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[58];
  data->localData[0]->realVars[290] /* Bus_09.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[59];
  data->localData[0]->realVars[73] /* gen_Bus_3_1.gENROU.Epq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[60];
  data->localData[0]->realVars[72] /* gen_Bus_3_1.gENROU.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[61];
  data->localData[0]->realVars[598] /* gen_Bus_3_1.gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[62];
  data->localData[0]->realVars[599] /* gen_Bus_3_1.gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[63];
  data->localData[0]->realVars[606] /* gen_Bus_3_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[64];
  data->localData[0]->realVars[607] /* gen_Bus_3_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[65];
  data->localData[0]->realVars[249] /* Bus_04.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[66];
  data->localData[0]->realVars[747] /* pwLine14.ir.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[67];
  data->localData[0]->realVars[274] /* Bus_07.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[68];
  data->localData[0]->realVars[279] /* Bus_07.p[2].vr variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[69];
  data->localData[0]->realVars[92] /* gen_Bus_8_1.gENROU.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[70];
  data->localData[0]->realVars[94] /* gen_Bus_8_1.gENROU.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[71];
  data->localData[0]->realVars[678] /* gen_Bus_8_1.gENROU.ud variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[72];
  data->localData[0]->realVars[668] /* gen_Bus_8_1.gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[73];
  data->localData[0]->realVars[677] /* gen_Bus_8_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[74];
  data->localData[0]->realVars[676] /* gen_Bus_8_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[75];
  data->localData[0]->realVars[85] /* gen_Bus_6_1.gENROU.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[76];
  data->localData[0]->realVars[84] /* gen_Bus_6_1.gENROU.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[77];
  data->localData[0]->realVars[633] /* gen_Bus_6_1.gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[78];
  data->localData[0]->realVars[634] /* gen_Bus_6_1.gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[79];
  data->localData[0]->realVars[641] /* gen_Bus_6_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[80];
  data->localData[0]->realVars[642] /* gen_Bus_6_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[81];
  data->localData[0]->realVars[710] /* pwLine1.is.re variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[82];
  data->localData[0]->realVars[709] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[83];
  data->localData[0]->realVars[0] /* gen_Bus_1_1.gENROU.Epd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[84];
  data->localData[0]->realVars[2] /* gen_Bus_1_1.gENROU.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[85];
  data->localData[0]->realVars[399] /* gen_Bus_1_1.gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[86];
  data->localData[0]->realVars[400] /* gen_Bus_1_1.gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[87];
  data->localData[0]->realVars[408] /* gen_Bus_1_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[88];
  data->localData[0]->realVars[407] /* gen_Bus_1_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[89];
  data->localData[0]->realVars[39] /* gen_Bus_2_1.gENROU.PSIkq STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[90];
  data->localData[0]->realVars[38] /* gen_Bus_2_1.gENROU.PSIkd STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[91];
  data->localData[0]->realVars[499] /* gen_Bus_2_1.gENROU.PSIppd variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[92];
  data->localData[0]->realVars[500] /* gen_Bus_2_1.gENROU.PSIppq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[93];
  data->localData[0]->realVars[508] /* gen_Bus_2_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[94];
  data->localData[0]->realVars[507] /* gen_Bus_2_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[95];
  data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[96];
  data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[97];
  data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[98];
  data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[99];
  data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[100];
  data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[101];
  data->localData[0]->realVars[258] /* Bus_05.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[102];
  data->localData[0]->realVars[266] /* Bus_06.p[1].ii variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[103];
  data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[104];
  data->localData[0]->realVars[250] /* Bus_04.p[3].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[105];
  data->localData[0]->realVars[289] /* Bus_09.n[2].ir variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[106];
  data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[107];
  data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[108];
  data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[109];
  data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[110];
  data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[111];
  data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[112];
  data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[113];
  data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[114];
  data->localData[0]->realVars[341] /* LOAD_04.v variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[115];
  data->localData[0]->realVars[359] /* LOAD_09.v variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[116];
  data->localData[0]->realVars[389] /* LOAD_14.v variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[117];
  data->localData[0]->realVars[347] /* LOAD_05.v variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[118];
  data->localData[0]->realVars[329] /* LOAD_02.v variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[119];
  data->localData[0]->realVars[335] /* LOAD_03.v variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[120];
  data->localData[0]->realVars[353] /* LOAD_06.v variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[121];
  data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[122];
  data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[123];
  data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[124];
  data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[125];
  data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[126];
  data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[127];
  data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[128];
  data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[129];
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_557(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2640(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2639(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2514(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2641(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_562(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2633(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2550(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_565(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2632(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2631(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_568(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2628(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2627(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2630(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2629(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2623(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2619(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_575(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_576(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2618(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2617(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2586(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_580(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2588(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2587(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2584(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_584(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2870(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2871(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2798(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2866(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_589(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2698(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2697(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2701(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2696(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2704(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2703(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_596(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2710(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2711(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2705(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2706(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_601(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2789(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2788(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2700(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2699(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2793(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2792(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2720(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2721(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_610(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_611(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2787(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2723(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_614(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_615(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2786(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2725(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2785(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2726(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2727(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_621(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_622(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2767(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2729(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_625(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_626(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2766(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2747(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_629(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_630(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2765(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2749(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_633(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_634(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2764(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2751(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_637(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_638(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2763(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2753(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_641(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_642(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2762(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2755(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_645(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_646(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2761(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2757(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_649(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_650(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2760(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2759(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2745(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2730(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2744(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2731(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2743(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2732(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2742(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2733(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2741(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2734(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2740(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2735(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2739(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2736(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2738(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2737(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2768(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2769(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_671(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_672(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2784(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2771(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_675(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_676(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2783(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2773(DATA *data, threadData_t *threadData);


/*
equation index: 1641
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.VOTHSG = gen_Bus_1_1.pSS2A.Leadlag2.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1641};
  data->localData[0]->realVars[416] /* gen_Bus_1_1.iEEET1_1.VOTHSG variable */ = data->localData[0]->realVars[433] /* gen_Bus_1_1.pSS2A.Leadlag2.y variable */;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2719(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_681(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_682(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_683(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_684(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_685(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_686(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_687(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_688(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_689(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_690(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_691(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_692(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_693(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2714(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2775(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2776(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2782(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2781(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2780(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2777(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2778(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2779(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2790(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2718(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2717(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2795(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2794(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2689(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2691(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2647(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2646(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_712(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_713(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_714(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_715(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_716(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_717(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_718(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_719(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_720(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_721(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_722(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2644(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2676(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2675(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_726(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2677(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2679(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2660(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2659(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_731(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_732(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_733(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_734(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_735(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_736(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_737(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_738(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_739(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_740(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_741(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2649(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2650(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2651(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2657(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2656(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2655(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2652(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2653(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2654(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2681(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2680(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2693(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2692(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2695(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2694(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2683(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2682(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2688(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2687(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2800(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2801(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_763(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_764(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2865(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2803(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_767(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_768(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2864(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2805(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2863(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2806(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2807(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_774(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_775(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2847(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2809(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_778(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_779(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2846(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2827(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_782(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_783(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2845(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2829(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_786(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_787(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2844(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2831(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_790(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_791(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2843(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2833(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_794(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_795(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2842(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2835(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_798(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_799(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2841(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2837(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_802(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_803(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2840(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2839(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2825(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2810(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2824(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2811(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2823(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2812(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2822(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2813(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2821(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2814(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2820(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2815(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2819(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2816(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2818(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2817(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2848(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2849(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_824(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_825(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2862(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2851(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_828(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_829(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2861(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2853(DATA *data, threadData_t *threadData);


/*
equation index: 1794
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.VOTHSG = gen_Bus_2_1.pSS2A.Leadlag2.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1794};
  data->localData[0]->realVars[516] /* gen_Bus_2_1.iEEET1_1.VOTHSG variable */ = data->localData[0]->realVars[533] /* gen_Bus_2_1.pSS2A.Leadlag2.y variable */;
  TRACE_POP
}
extern void IEEE14_IEEE14_Base_Case_eqFunction_2855(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2856(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2860(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2859(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2858(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2857(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2875(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2876(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2799(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2797(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2796(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2592(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2594(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2581(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2580(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_848(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_849(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_850(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_851(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_852(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_853(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_854(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_855(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_856(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_857(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_858(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2570(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2571(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2572(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2578(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2577(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2576(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2573(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2574(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2575(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2591(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2590(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2562(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_871(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2561(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2560(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2558(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2555(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2557(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2556(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_878(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2568(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2567(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2566(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2565(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2563(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2583(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2582(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2596(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2595(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2610(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2609(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2600(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2601(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2602(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2608(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2606(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2607(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2605(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2604(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2603(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2614(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2613(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2615(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2589(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2612(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2611(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2626(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2625(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2622(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2621(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2523(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2524(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2547(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_912(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2546(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2545(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_915(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_916(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_917(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_918(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_919(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_920(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_921(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_922(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_923(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_924(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_925(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_926(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_927(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_928(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2529(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2530(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2531(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2537(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2536(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2535(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2532(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2533(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2534(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2543(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2541(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2542(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2540(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2518(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2519(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2526(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2525(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2636(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2635(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2638(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2637(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2674(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2673(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2666(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2667(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2661(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2662(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2671(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2672(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2670(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2669(DATA *data, threadData_t *threadData);

extern void IEEE14_IEEE14_Base_Case_eqFunction_2668(DATA *data, threadData_t *threadData);


int IEEE14_IEEE14_Base_Case_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  IEEE14_IEEE14_Base_Case_eqFunction_1(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_3(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_4(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_5(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_6(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_7(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_8(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_9(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_10(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_11(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_12(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_13(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_14(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_15(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1923(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1924(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1925(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1926(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1927(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1928(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1929(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_23(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_24(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_25(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_26(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_27(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_28(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_29(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_992(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_31(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_32(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_33(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_34(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_35(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_36(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1930(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2872(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2873(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2874(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_41(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_42(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_43(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1932(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_45(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_46(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_47(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_48(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_49(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_50(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_51(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_52(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_53(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_54(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_55(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_56(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_57(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_58(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_59(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_60(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_61(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_62(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_63(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_64(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_65(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_66(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_67(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_68(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_69(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_70(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_71(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_72(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_73(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_74(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_75(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_76(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_77(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_78(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_79(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_80(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1967(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1962(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1955(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1956(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1958(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1957(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1959(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1960(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_89(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_90(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1961(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1965(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1966(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_94(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_95(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1944(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1938(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_98(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_99(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1939(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1941(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1943(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1942(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_104(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_105(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_106(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_107(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_108(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_109(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_110(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_111(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_112(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_113(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_114(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_115(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_116(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_117(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1080(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_119(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_120(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_121(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_122(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_123(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_124(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1972(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2055(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2056(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2057(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_129(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_130(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_131(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1974(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_133(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_134(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_135(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_136(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_137(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_138(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_139(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_140(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_141(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_142(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_143(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_144(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_145(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_146(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_147(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_148(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_149(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_150(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_151(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_152(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_153(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_154(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_155(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_156(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_157(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_158(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_159(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_160(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_161(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_162(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_163(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_164(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_165(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_166(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_167(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_168(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2009(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2004(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1997(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1998(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2000(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1999(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2001(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2002(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_177(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_178(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2003(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2007(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2008(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_182(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_183(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1986(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1980(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_186(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_187(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1981(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1983(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1985(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1984(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_192(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_193(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_194(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_195(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_196(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_197(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_198(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_199(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_200(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_201(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_202(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_203(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_204(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_205(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1168(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_207(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_208(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_209(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_210(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_211(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_212(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2014(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2050(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2051(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2052(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_217(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_218(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_219(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2016(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_221(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2017(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_223(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_224(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_225(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_226(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_227(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_228(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_229(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_230(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_231(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_232(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_233(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_234(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_235(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_236(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1199(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_238(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_239(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_240(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_241(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_242(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_243(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2022(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2045(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2046(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2047(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_248(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_249(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_250(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2024(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_252(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2025(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_254(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_255(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_256(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_257(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_258(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_259(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_260(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_261(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_262(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_263(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_264(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_265(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_266(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_267(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1230(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_269(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_270(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_271(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_272(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_273(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_274(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2030(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2040(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2041(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2042(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_279(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_280(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_281(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2032(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_283(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2033(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_285(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_286(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_287(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_288(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_289(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_290(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_291(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1518(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_557(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2640(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2639(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2514(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2641(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_562(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2633(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2550(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_565(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2632(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2631(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_568(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2628(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2627(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2630(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2629(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2623(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2619(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_575(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_576(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2618(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2617(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2586(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_580(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2588(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2587(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2584(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_584(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2870(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2871(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2798(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2866(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_589(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2698(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2697(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2701(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2696(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2704(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2703(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_596(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2710(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2711(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2705(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2706(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_601(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2789(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2788(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2700(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2699(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2793(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2792(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2720(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2721(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_610(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_611(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2787(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2723(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_614(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_615(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2786(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2725(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2785(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2726(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2727(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_621(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_622(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2767(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2729(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_625(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_626(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2766(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2747(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_629(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_630(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2765(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2749(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_633(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_634(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2764(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2751(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_637(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_638(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2763(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2753(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_641(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_642(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2762(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2755(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_645(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_646(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2761(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2757(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_649(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_650(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2760(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2759(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2745(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2730(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2744(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2731(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2743(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2732(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2742(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2733(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2741(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2734(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2740(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2735(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2739(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2736(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2738(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2737(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2768(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2769(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_671(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_672(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2784(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2771(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_675(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_676(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2783(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2773(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1641(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2719(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_681(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_682(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_683(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_684(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_685(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_686(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_687(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_688(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_689(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_690(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_691(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_692(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_693(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2714(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2775(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2776(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2782(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2781(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2780(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2777(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2778(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2779(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2790(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2718(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2717(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2795(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2794(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2689(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2691(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2647(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2646(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_712(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_713(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_714(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_715(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_716(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_717(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_718(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_719(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_720(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_721(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_722(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2644(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2676(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2675(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_726(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2677(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2679(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2660(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2659(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_731(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_732(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_733(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_734(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_735(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_736(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_737(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_738(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_739(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_740(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_741(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2649(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2650(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2651(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2657(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2656(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2655(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2652(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2653(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2654(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2681(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2680(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2693(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2692(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2695(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2694(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2683(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2682(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2688(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2687(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2800(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2801(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_763(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_764(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2865(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2803(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_767(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_768(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2864(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2805(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2863(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2806(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2807(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_774(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_775(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2847(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2809(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_778(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_779(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2846(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2827(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_782(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_783(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2845(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2829(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_786(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_787(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2844(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2831(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_790(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_791(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2843(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2833(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_794(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_795(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2842(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2835(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_798(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_799(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2841(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2837(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_802(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_803(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2840(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2839(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2825(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2810(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2824(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2811(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2823(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2812(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2822(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2813(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2821(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2814(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2820(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2815(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2819(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2816(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2818(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2817(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2848(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2849(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_824(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_825(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2862(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2851(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_828(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_829(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2861(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2853(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1794(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2855(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2856(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2860(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2859(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2858(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2857(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2875(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2876(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2799(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2797(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2796(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2592(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2594(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2581(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2580(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_848(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_849(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_850(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_851(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_852(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_853(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_854(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_855(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_856(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_857(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_858(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2570(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2571(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2572(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2578(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2577(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2576(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2573(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2574(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2575(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2591(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2590(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2562(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_871(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2561(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2560(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2558(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2555(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2557(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2556(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_878(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2568(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2567(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2566(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2565(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2563(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2583(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2582(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2596(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2595(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2610(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2609(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2600(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2601(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2602(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2608(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2606(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2607(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2605(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2604(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2603(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2614(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2613(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2615(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2589(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2612(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2611(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2626(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2625(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2622(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2621(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2523(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2524(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2547(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_912(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2546(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2545(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_915(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_916(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_917(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_918(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_919(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_920(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_921(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_922(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_923(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_924(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_925(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_926(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_927(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_928(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2529(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2530(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2531(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2537(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2536(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2535(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2532(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2533(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2534(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2543(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2541(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2542(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2540(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2518(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2519(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2526(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2525(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2636(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2635(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2638(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2637(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2674(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2673(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2666(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2667(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2661(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2662(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2671(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2672(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2670(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2669(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2668(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int IEEE14_IEEE14_Base_Case_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

