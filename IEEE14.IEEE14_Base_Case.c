/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "IEEE14.IEEE14_Base_Case_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation IEEE14_IEEE14_Base_Case_performSimulation
#define prefixedName_updateContinuousSystem IEEE14_IEEE14_Base_Case_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation IEEE14_IEEE14_Base_Case_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int IEEE14_IEEE14_Base_Case_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int IEEE14_IEEE14_Base_Case_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int IEEE14_IEEE14_Base_Case_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int IEEE14_IEEE14_Base_Case_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int IEEE14_IEEE14_Base_Case_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int IEEE14_IEEE14_Base_Case_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int IEEE14_IEEE14_Base_Case_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 1923
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.EFD0 = gen_Bus_3_1.gENROU.efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1923};
  data->localData[0]->realVars[614] /* gen_Bus_3_1.iEEET1_1.EFD0 variable */ = data->simulationInfo->realParameter[1699] /* gen_Bus_3_1.gENROU.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 1924
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.EFD0 = gen_Bus_6_1.gENROU.efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1924};
  data->localData[0]->realVars[649] /* gen_Bus_6_1.iEEET1_1.EFD0 variable */ = data->simulationInfo->realParameter[1865] /* gen_Bus_6_1.gENROU.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 1925
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.EFD0 = gen_Bus_8_1.gENROU.efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1925};
  data->localData[0]->realVars[684] /* gen_Bus_8_1.iEEET1_1.EFD0 variable */ = data->simulationInfo->realParameter[2031] /* gen_Bus_8_1.gENROU.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 1926
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.PMECH0 = gen_Bus_1_1.gENROU.pm0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1926};
  data->localData[0]->realVars[482] /* gen_Bus_1_1.tGOV1_1.PMECH0 variable */ = data->simulationInfo->realParameter[635] /* gen_Bus_1_1.gENROU.pm0 PARAM */;
  TRACE_POP
}
/*
equation index: 1927
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.EFD0 = gen_Bus_1_1.gENROU.efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1927};
  data->localData[0]->realVars[415] /* gen_Bus_1_1.iEEET1_1.EFD0 variable */ = data->simulationInfo->realParameter[628] /* gen_Bus_1_1.gENROU.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 1928
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.PMECH0 = gen_Bus_2_1.gENROU.pm0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1928};
  data->localData[0]->realVars[582] /* gen_Bus_2_1.tGOV1_1.PMECH0 variable */ = data->simulationInfo->realParameter[1170] /* gen_Bus_2_1.gENROU.pm0 PARAM */;
  TRACE_POP
}
/*
equation index: 1929
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.EFD0 = gen_Bus_2_1.gENROU.efd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1929};
  data->localData[0]->realVars[515] /* gen_Bus_2_1.iEEET1_1.EFD0 variable */ = data->simulationInfo->realParameter[1163] /* gen_Bus_2_1.gENROU.efd0 PARAM */;
  TRACE_POP
}
/*
equation index: 1930
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.u2 = gen_Bus_2_1.iEEET1_1.rotatingExciter.gain.k * gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1930};
  data->localData[0]->realVars[520] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.u2 variable */ = (data->simulationInfo->realParameter[1227] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.gain.k PARAM */) * (data->localData[0]->realVars[44] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 1931
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.derivativeLag.y = 0.1 * (gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_2_1.iEEET1_1.derivativeLag.x) / gen_Bus_2_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1931};
  data->localData[0]->realVars[517] /* gen_Bus_2_1.iEEET1_1.derivativeLag.y variable */ = (0.1) * (DIVISION_SIM(data->localData[0]->realVars[44] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[43] /* gen_Bus_2_1.iEEET1_1.derivativeLag.x STATE(1) */,data->simulationInfo->realParameter[1214] /* gen_Bus_2_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_2_1.iEEET1_1.derivativeLag.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 1932
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.iEEET1_1.derivativeLag.x = (gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_2_1.iEEET1_1.derivativeLag.x) / gen_Bus_2_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1932};
  data->localData[0]->realVars[145] /* der(gen_Bus_2_1.iEEET1_1.derivativeLag.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[44] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[43] /* gen_Bus_2_1.iEEET1_1.derivativeLag.x STATE(1) */,data->simulationInfo->realParameter[1214] /* gen_Bus_2_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_2_1.iEEET1_1.derivativeLag.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 1933
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag3.TF.x[1] = gen_Bus_2_1.pSS2A.derivativeLag3.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.derivativeLag3.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1933};
  data->localData[0]->realVars[549] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[53] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1371] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.derivativeLag3.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1934
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag2.TF.x[1] = gen_Bus_2_1.pSS2A.derivativeLag2.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.derivativeLag2.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1934};
  data->localData[0]->realVars[546] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[52] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1354] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.derivativeLag2.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1935
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag1.TF.x[1] = gen_Bus_2_1.pSS2A.derivativeLag1.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.derivativeLag1.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1935};
  data->localData[0]->realVars[544] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[51] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1337] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.derivativeLag1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1936
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag.TF.x[1] = gen_Bus_2_1.pSS2A.derivativeLag.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.derivativeLag.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1936};
  data->localData[0]->realVars[541] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[50] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1320] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.derivativeLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1937
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag.TF.y = (gen_Bus_2_1.pSS2A.derivativeLag.TF.bb[2] - gen_Bus_2_1.pSS2A.derivativeLag.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag.TF.d) * gen_Bus_2_1.pSS2A.derivativeLag.TF.x[1] + gen_Bus_2_1.pSS2A.derivativeLag.TF.d * gen_Bus_2_1.gENROU.w
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1937};
  data->localData[0]->realVars[542] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.y variable */ = (data->simulationInfo->realParameter[1324] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1319] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1325] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.d PARAM */))) * (data->localData[0]->realVars[541] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[1325] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.d PARAM */) * (data->localData[0]->realVars[41] /* gen_Bus_2_1.gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1938
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag.y = if abs(gen_Bus_2_1.pSS2A.derivativeLag.T) < 1e-015 then gen_Bus_2_1.gENROU.w else gen_Bus_2_1.pSS2A.derivativeLag.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1938};
  modelica_boolean tmp6;
  tmp6 = Less(fabs(data->simulationInfo->realParameter[1317] /* gen_Bus_2_1.pSS2A.derivativeLag.T PARAM */),1e-015);
  data->localData[0]->realVars[543] /* gen_Bus_2_1.pSS2A.derivativeLag.y variable */ = (tmp6?data->localData[0]->realVars[41] /* gen_Bus_2_1.gENROU.w STATE(1) */:data->localData[0]->realVars[542] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1939
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.derivativeLag1.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.derivativeLag1.TF.a_end * gen_Bus_2_1.pSS2A.derivativeLag.y - gen_Bus_2_1.pSS2A.derivativeLag1.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag1.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.derivativeLag1.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1939};
  data->localData[0]->realVars[153] /* der(gen_Bus_2_1.pSS2A.derivativeLag1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1337] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.a_end PARAM */) * (data->localData[0]->realVars[543] /* gen_Bus_2_1.pSS2A.derivativeLag.y variable */) - ((data->simulationInfo->realParameter[1336] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.a[2] PARAM */) * (data->localData[0]->realVars[51] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1335] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.derivativeLag1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1940
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag1.TF.y = (gen_Bus_2_1.pSS2A.derivativeLag1.TF.bb[2] - gen_Bus_2_1.pSS2A.derivativeLag1.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag1.TF.d) * gen_Bus_2_1.pSS2A.derivativeLag1.TF.x[1] + gen_Bus_2_1.pSS2A.derivativeLag1.TF.d * gen_Bus_2_1.pSS2A.derivativeLag.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1940};
  data->localData[0]->realVars[545] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.y variable */ = (data->simulationInfo->realParameter[1341] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1336] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1342] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.d PARAM */))) * (data->localData[0]->realVars[544] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.x[1] variable */) + (data->simulationInfo->realParameter[1342] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.d PARAM */) * (data->localData[0]->realVars[543] /* gen_Bus_2_1.pSS2A.derivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 1941
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.SimpleLag1.u = if abs(gen_Bus_2_1.pSS2A.derivativeLag1.T) < 1e-015 then gen_Bus_2_1.pSS2A.derivativeLag.y else gen_Bus_2_1.pSS2A.derivativeLag1.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1941};
  modelica_boolean tmp7;
  tmp7 = Less(fabs(data->simulationInfo->realParameter[1334] /* gen_Bus_2_1.pSS2A.derivativeLag1.T PARAM */),1e-015);
  data->localData[0]->realVars[534] /* gen_Bus_2_1.pSS2A.SimpleLag1.u variable */ = (tmp7?data->localData[0]->realVars[543] /* gen_Bus_2_1.pSS2A.derivativeLag.y variable */:data->localData[0]->realVars[545] /* gen_Bus_2_1.pSS2A.derivativeLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1942
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.SimpleLag1.y = if abs(gen_Bus_2_1.pSS2A.SimpleLag1.T) <= 1e-015 then gen_Bus_2_1.pSS2A.SimpleLag1.u * gen_Bus_2_1.pSS2A.SimpleLag1.K else gen_Bus_2_1.pSS2A.SimpleLag1.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1942};
  modelica_boolean tmp8;
  tmp8 = LessEq(fabs(data->simulationInfo->realParameter[1288] /* gen_Bus_2_1.pSS2A.SimpleLag1.T PARAM */),1e-015);
  data->localData[0]->realVars[535] /* gen_Bus_2_1.pSS2A.SimpleLag1.y variable */ = (tmp8?(data->localData[0]->realVars[534] /* gen_Bus_2_1.pSS2A.SimpleLag1.u variable */) * (data->simulationInfo->realParameter[1287] /* gen_Bus_2_1.pSS2A.SimpleLag1.K PARAM */):data->localData[0]->realVars[48] /* gen_Bus_2_1.pSS2A.SimpleLag1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 1943
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.SimpleLag1.state = (gen_Bus_2_1.pSS2A.SimpleLag1.K * gen_Bus_2_1.pSS2A.SimpleLag1.u - gen_Bus_2_1.pSS2A.SimpleLag1.state) / gen_Bus_2_1.pSS2A.SimpleLag1.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1943};
  data->localData[0]->realVars[150] /* der(gen_Bus_2_1.pSS2A.SimpleLag1.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1287] /* gen_Bus_2_1.pSS2A.SimpleLag1.K PARAM */) * (data->localData[0]->realVars[534] /* gen_Bus_2_1.pSS2A.SimpleLag1.u variable */) - data->localData[0]->realVars[48] /* gen_Bus_2_1.pSS2A.SimpleLag1.state STATE(1) */,data->simulationInfo->realParameter[1289] /* gen_Bus_2_1.pSS2A.SimpleLag1.T_mod PARAM */,"gen_Bus_2_1.pSS2A.SimpleLag1.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 1944
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.derivativeLag.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.derivativeLag.TF.a_end * gen_Bus_2_1.gENROU.w - gen_Bus_2_1.pSS2A.derivativeLag.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.derivativeLag.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1944};
  data->localData[0]->realVars[152] /* der(gen_Bus_2_1.pSS2A.derivativeLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1320] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.a_end PARAM */) * (data->localData[0]->realVars[41] /* gen_Bus_2_1.gENROU.w STATE(1) */) - ((data->simulationInfo->realParameter[1319] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[50] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1318] /* gen_Bus_2_1.pSS2A.derivativeLag.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.derivativeLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1945
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1945};
  data->localData[0]->realVars[572] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[61] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1518] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1946
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1946};
  data->localData[0]->realVars[569] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[60] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1500] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1947
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1947};
  data->localData[0]->realVars[566] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[59] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1482] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1948
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1948};
  data->localData[0]->realVars[563] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[58] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1464] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1949
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1949};
  data->localData[0]->realVars[560] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[57] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1446] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1950
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1950};
  data->localData[0]->realVars[557] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[56] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1428] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1951
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1951};
  data->localData[0]->realVars[554] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[55] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1410] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1952
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] = gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1952};
  data->localData[0]->realVars[551] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[54] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1392] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1953
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag2.TF.x[1] = gen_Bus_2_1.pSS2A.Leadlag2.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.Leadlag2.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1953};
  data->localData[0]->realVars[531] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[47] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1273] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.Leadlag2.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1954
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag1.TF.x[1] = gen_Bus_2_1.pSS2A.Leadlag1.TF.x_scaled[1] / gen_Bus_2_1.pSS2A.Leadlag1.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1954};
  data->localData[0]->realVars[527] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[46] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1255] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.a_end PARAM */,"gen_Bus_2_1.pSS2A.Leadlag1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1955
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.add.y = gen_Bus_2_1.tGOV1_1.add.k1 * gen_Bus_2_1.tGOV1_1.REF.k + gen_Bus_2_1.tGOV1_1.add.k2 * gen_Bus_2_1.gENROU.w
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1955};
  data->localData[0]->realVars[583] /* gen_Bus_2_1.tGOV1_1.add.y variable */ = (data->simulationInfo->realParameter[1586] /* gen_Bus_2_1.tGOV1_1.add.k1 PARAM */) * (data->simulationInfo->realParameter[1579] /* gen_Bus_2_1.tGOV1_1.REF.k PARAM */) + (data->simulationInfo->realParameter[1587] /* gen_Bus_2_1.tGOV1_1.add.k2 PARAM */) * (data->localData[0]->realVars[41] /* gen_Bus_2_1.gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1956
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.imGain9.y = gen_Bus_2_1.tGOV1_1.imGain9.k * gen_Bus_2_1.tGOV1_1.add.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1956};
  data->localData[0]->realVars[586] /* gen_Bus_2_1.tGOV1_1.imGain9.y variable */ = (data->simulationInfo->realParameter[1592] /* gen_Bus_2_1.tGOV1_1.imGain9.k PARAM */) * (data->localData[0]->realVars[583] /* gen_Bus_2_1.tGOV1_1.add.y variable */);
  TRACE_POP
}
/*
equation index: 1957
type: SIMPLE_ASSIGN
$whenCondition12 = gen_Bus_2_1.tGOV1_1.simpleLagLim.state > gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax and gen_Bus_2_1.tGOV1_1.simpleLagLim.K * gen_Bus_2_1.tGOV1_1.imGain9.y - gen_Bus_2_1.tGOV1_1.simpleLagLim.state < 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1957};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1615] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax PARAM */, 4, Greater);
  RELATIONHYSTERESIS(tmp10, (data->simulationInfo->realParameter[1611] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[586] /* gen_Bus_2_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */, 0.0, 5, Less);
  data->localData[0]->booleanVars[3] /* $whenCondition12 DISCRETE */ = (tmp9 && tmp10);
  TRACE_POP
}
/*
equation index: 1958
type: SIMPLE_ASSIGN
$whenCondition11 = gen_Bus_2_1.tGOV1_1.simpleLagLim.state < gen_Bus_2_1.tGOV1_1.simpleLagLim.outMin and gen_Bus_2_1.tGOV1_1.simpleLagLim.K * gen_Bus_2_1.tGOV1_1.imGain9.y - gen_Bus_2_1.tGOV1_1.simpleLagLim.state > 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1958};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  RELATIONHYSTERESIS(tmp11, data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1616] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMin PARAM */, 6, Less);
  RELATIONHYSTERESIS(tmp12, (data->simulationInfo->realParameter[1611] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[586] /* gen_Bus_2_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */, 0.0, 7, Greater);
  data->localData[0]->booleanVars[2] /* $whenCondition11 DISCRETE */ = (tmp11 && tmp12);
  TRACE_POP
}
/*
equation index: 1959
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.tGOV1_1.simpleLagLim.state = (gen_Bus_2_1.tGOV1_1.simpleLagLim.K * gen_Bus_2_1.tGOV1_1.imGain9.y - gen_Bus_2_1.tGOV1_1.simpleLagLim.state) / gen_Bus_2_1.tGOV1_1.simpleLagLim.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1959};
  data->localData[0]->realVars[173] /* der(gen_Bus_2_1.tGOV1_1.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1611] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[586] /* gen_Bus_2_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[1613] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.T_mod PARAM */,"gen_Bus_2_1.tGOV1_1.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 1960
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.imLeadLag.u = if abs(gen_Bus_2_1.tGOV1_1.simpleLagLim.T) <= 1e-015 then max(min(gen_Bus_2_1.tGOV1_1.imGain9.y * gen_Bus_2_1.tGOV1_1.simpleLagLim.K, gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax), gen_Bus_2_1.tGOV1_1.simpleLagLim.outMin) else max(min(gen_Bus_2_1.tGOV1_1.simpleLagLim.state, gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax), gen_Bus_2_1.tGOV1_1.simpleLagLim.outMin)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1960};
  modelica_boolean tmp13;
  tmp13 = LessEq(fabs(data->simulationInfo->realParameter[1612] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.T PARAM */),1e-015);
  data->localData[0]->realVars[589] /* gen_Bus_2_1.tGOV1_1.imLeadLag.u variable */ = (tmp13?fmax(fmin((data->localData[0]->realVars[586] /* gen_Bus_2_1.tGOV1_1.imGain9.y variable */) * (data->simulationInfo->realParameter[1611] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[1615] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[1616] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[1615] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[1616] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 1961
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x_scaled[1] = (gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a_end * gen_Bus_2_1.tGOV1_1.imLeadLag.u - gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a[2] * gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x_scaled[1]) / gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1961};
  data->localData[0]->realVars[172] /* der(gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1599] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[589] /* gen_Bus_2_1.tGOV1_1.imLeadLag.u variable */) - ((data->simulationInfo->realParameter[1598] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[70] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1597] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a[1] PARAM */,"gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1962
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.add1.u2 = gen_Bus_2_1.tGOV1_1.imGain1.k * gen_Bus_2_1.gENROU.w
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1962};
  data->localData[0]->realVars[585] /* gen_Bus_2_1.tGOV1_1.add1.u2 variable */ = (data->simulationInfo->realParameter[1591] /* gen_Bus_2_1.tGOV1_1.imGain1.k PARAM */) * (data->localData[0]->realVars[41] /* gen_Bus_2_1.gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1963
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x[1] = gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x_scaled[1] / gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1963};
  data->localData[0]->realVars[587] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[70] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1599] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a_end PARAM */,"gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1964
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.imLeadLag.TF.y = (gen_Bus_2_1.tGOV1_1.imLeadLag.TF.bb[2] - gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a[2] * gen_Bus_2_1.tGOV1_1.imLeadLag.TF.d) * gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x[1] + gen_Bus_2_1.tGOV1_1.imLeadLag.TF.d * gen_Bus_2_1.tGOV1_1.imLeadLag.u
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1964};
  data->localData[0]->realVars[588] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[1603] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1598] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1604] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.d PARAM */))) * (data->localData[0]->realVars[587] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[1604] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[589] /* gen_Bus_2_1.tGOV1_1.imLeadLag.u variable */);
  TRACE_POP
}
/*
equation index: 1965
type: SIMPLE_ASSIGN
gen_Bus_2_1.tGOV1_1.add1.u1 = if abs(gen_Bus_2_1.tGOV1_1.imLeadLag.T1 - gen_Bus_2_1.tGOV1_1.imLeadLag.T2) < 1e-015 then gen_Bus_2_1.tGOV1_1.imLeadLag.K * gen_Bus_2_1.tGOV1_1.imLeadLag.u else gen_Bus_2_1.tGOV1_1.imLeadLag.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1965};
  modelica_boolean tmp14;
  tmp14 = Less(fabs(data->simulationInfo->realParameter[1594] /* gen_Bus_2_1.tGOV1_1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[1595] /* gen_Bus_2_1.tGOV1_1.imLeadLag.T2 PARAM */),1e-015);
  data->localData[0]->realVars[584] /* gen_Bus_2_1.tGOV1_1.add1.u1 variable */ = (tmp14?(data->simulationInfo->realParameter[1593] /* gen_Bus_2_1.tGOV1_1.imLeadLag.K PARAM */) * (data->localData[0]->realVars[589] /* gen_Bus_2_1.tGOV1_1.imLeadLag.u variable */):data->localData[0]->realVars[588] /* gen_Bus_2_1.tGOV1_1.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1966
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.PMECH = gen_Bus_2_1.tGOV1_1.add1.k1 * gen_Bus_2_1.tGOV1_1.add1.u1 + gen_Bus_2_1.tGOV1_1.add1.k2 * gen_Bus_2_1.tGOV1_1.add1.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1966};
  data->localData[0]->realVars[496] /* gen_Bus_2_1.gENROU.PMECH variable */ = (data->simulationInfo->realParameter[1589] /* gen_Bus_2_1.tGOV1_1.add1.k1 PARAM */) * (data->localData[0]->realVars[584] /* gen_Bus_2_1.tGOV1_1.add1.u1 variable */) + (data->simulationInfo->realParameter[1590] /* gen_Bus_2_1.tGOV1_1.add1.k2 PARAM */) * (data->localData[0]->realVars[585] /* gen_Bus_2_1.tGOV1_1.add1.u2 variable */);
  TRACE_POP
}
/*
equation index: 1967
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.gENROU.delta = gen_Bus_2_1.gENROU.w_b * gen_Bus_2_1.gENROU.w
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1967};
  data->localData[0]->realVars[142] /* der(gen_Bus_2_1.gENROU.delta) STATE_DER */ = (data->simulationInfo->realParameter[1176] /* gen_Bus_2_1.gENROU.w_b PARAM */) * (data->localData[0]->realVars[41] /* gen_Bus_2_1.gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1968
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.PSIppq = gen_Bus_2_1.gENROU.PSIkq * gen_Bus_2_1.gENROU.K4q + gen_Bus_2_1.gENROU.Epd * gen_Bus_2_1.gENROU.K3q
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1968};
  data->localData[0]->realVars[500] /* gen_Bus_2_1.gENROU.PSIppq variable */ = (data->localData[0]->realVars[39] /* gen_Bus_2_1.gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[1113] /* gen_Bus_2_1.gENROU.K4q PARAM */) + (data->localData[0]->realVars[36] /* gen_Bus_2_1.gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[1111] /* gen_Bus_2_1.gENROU.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 1969
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.PSIppd = gen_Bus_2_1.gENROU.Epq * gen_Bus_2_1.gENROU.K3d + gen_Bus_2_1.gENROU.PSIkd * gen_Bus_2_1.gENROU.K4d
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1969};
  data->localData[0]->realVars[499] /* gen_Bus_2_1.gENROU.PSIppd variable */ = (data->localData[0]->realVars[37] /* gen_Bus_2_1.gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[1110] /* gen_Bus_2_1.gENROU.K3d PARAM */) + (data->localData[0]->realVars[38] /* gen_Bus_2_1.gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[1112] /* gen_Bus_2_1.gENROU.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 1970
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.PSIpp = sqrt(gen_Bus_2_1.gENROU.PSIppd ^ 2.0 + gen_Bus_2_1.gENROU.PSIppq ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1970};
  modelica_real tmp15;
  modelica_real tmp16;
  tmp15 = data->localData[0]->realVars[499] /* gen_Bus_2_1.gENROU.PSIppd variable */;
  tmp16 = data->localData[0]->realVars[500] /* gen_Bus_2_1.gENROU.PSIppq variable */;
  data->localData[0]->realVars[498] /* gen_Bus_2_1.gENROU.PSIpp variable */ = sqrt((tmp15 * tmp15) + (tmp16 * tmp16));
  TRACE_POP
}
/*
equation index: 1971
type: SIMPLE_ASSIGN
$cse3 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_2_1.gENROU.PSIpp, gen_Bus_2_1.gENROU.S10, gen_Bus_2_1.gENROU.S12, 1.0, 1.2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1971};
  data->localData[0]->realVars[213] /* $cse3 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[498] /* gen_Bus_2_1.gENROU.PSIpp variable */, data->simulationInfo->realParameter[1131] /* gen_Bus_2_1.gENROU.S10 PARAM */, data->simulationInfo->realParameter[1132] /* gen_Bus_2_1.gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 1972
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.u2 = gen_Bus_1_1.iEEET1_1.rotatingExciter.gain.k * gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1972};
  data->localData[0]->realVars[420] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.u2 variable */ = (data->simulationInfo->realParameter[692] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.gain.k PARAM */) * (data->localData[0]->realVars[8] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 1973
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.derivativeLag.y = 0.08599999999999999 * (gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_1_1.iEEET1_1.derivativeLag.x) / gen_Bus_1_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1973};
  data->localData[0]->realVars[417] /* gen_Bus_1_1.iEEET1_1.derivativeLag.y variable */ = (0.08599999999999999) * (DIVISION_SIM(data->localData[0]->realVars[8] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[7] /* gen_Bus_1_1.iEEET1_1.derivativeLag.x STATE(1) */,data->simulationInfo->realParameter[679] /* gen_Bus_1_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_1_1.iEEET1_1.derivativeLag.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 1974
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.iEEET1_1.derivativeLag.x = (gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_1_1.iEEET1_1.derivativeLag.x) / gen_Bus_1_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1974};
  data->localData[0]->realVars[109] /* der(gen_Bus_1_1.iEEET1_1.derivativeLag.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[7] /* gen_Bus_1_1.iEEET1_1.derivativeLag.x STATE(1) */,data->simulationInfo->realParameter[679] /* gen_Bus_1_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_1_1.iEEET1_1.derivativeLag.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 1975
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag3.TF.x[1] = gen_Bus_1_1.pSS2A.derivativeLag3.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.derivativeLag3.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1975};
  data->localData[0]->realVars[449] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[17] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[836] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.derivativeLag3.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1976
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag2.TF.x[1] = gen_Bus_1_1.pSS2A.derivativeLag2.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.derivativeLag2.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1976};
  data->localData[0]->realVars[446] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[16] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[819] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.derivativeLag2.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1977
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag1.TF.x[1] = gen_Bus_1_1.pSS2A.derivativeLag1.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.derivativeLag1.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1977};
  data->localData[0]->realVars[444] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[15] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[802] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.derivativeLag1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1978
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag.TF.x[1] = gen_Bus_1_1.pSS2A.derivativeLag.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.derivativeLag.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1978};
  data->localData[0]->realVars[441] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[14] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[785] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.derivativeLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1979
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag.TF.y = (gen_Bus_1_1.pSS2A.derivativeLag.TF.bb[2] - gen_Bus_1_1.pSS2A.derivativeLag.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag.TF.d) * gen_Bus_1_1.pSS2A.derivativeLag.TF.x[1] + gen_Bus_1_1.pSS2A.derivativeLag.TF.d * gen_Bus_1_1.gENROU.w
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1979};
  data->localData[0]->realVars[442] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.y variable */ = (data->simulationInfo->realParameter[789] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[784] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[790] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.d PARAM */))) * (data->localData[0]->realVars[441] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[790] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.d PARAM */) * (data->localData[0]->realVars[5] /* gen_Bus_1_1.gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1980
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag.y = if abs(gen_Bus_1_1.pSS2A.derivativeLag.T) < 1e-015 then gen_Bus_1_1.gENROU.w else gen_Bus_1_1.pSS2A.derivativeLag.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1980};
  modelica_boolean tmp17;
  tmp17 = Less(fabs(data->simulationInfo->realParameter[782] /* gen_Bus_1_1.pSS2A.derivativeLag.T PARAM */),1e-015);
  data->localData[0]->realVars[443] /* gen_Bus_1_1.pSS2A.derivativeLag.y variable */ = (tmp17?data->localData[0]->realVars[5] /* gen_Bus_1_1.gENROU.w STATE(1) */:data->localData[0]->realVars[442] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1981
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.derivativeLag1.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.derivativeLag1.TF.a_end * gen_Bus_1_1.pSS2A.derivativeLag.y - gen_Bus_1_1.pSS2A.derivativeLag1.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag1.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.derivativeLag1.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1981};
  data->localData[0]->realVars[117] /* der(gen_Bus_1_1.pSS2A.derivativeLag1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[802] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.a_end PARAM */) * (data->localData[0]->realVars[443] /* gen_Bus_1_1.pSS2A.derivativeLag.y variable */) - ((data->simulationInfo->realParameter[801] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.a[2] PARAM */) * (data->localData[0]->realVars[15] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[800] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.derivativeLag1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1982
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag1.TF.y = (gen_Bus_1_1.pSS2A.derivativeLag1.TF.bb[2] - gen_Bus_1_1.pSS2A.derivativeLag1.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag1.TF.d) * gen_Bus_1_1.pSS2A.derivativeLag1.TF.x[1] + gen_Bus_1_1.pSS2A.derivativeLag1.TF.d * gen_Bus_1_1.pSS2A.derivativeLag.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1982};
  data->localData[0]->realVars[445] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.y variable */ = (data->simulationInfo->realParameter[806] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[801] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[807] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.d PARAM */))) * (data->localData[0]->realVars[444] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.x[1] variable */) + (data->simulationInfo->realParameter[807] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.d PARAM */) * (data->localData[0]->realVars[443] /* gen_Bus_1_1.pSS2A.derivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 1983
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.SimpleLag1.u = if abs(gen_Bus_1_1.pSS2A.derivativeLag1.T) < 1e-015 then gen_Bus_1_1.pSS2A.derivativeLag.y else gen_Bus_1_1.pSS2A.derivativeLag1.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1983};
  modelica_boolean tmp18;
  tmp18 = Less(fabs(data->simulationInfo->realParameter[799] /* gen_Bus_1_1.pSS2A.derivativeLag1.T PARAM */),1e-015);
  data->localData[0]->realVars[434] /* gen_Bus_1_1.pSS2A.SimpleLag1.u variable */ = (tmp18?data->localData[0]->realVars[443] /* gen_Bus_1_1.pSS2A.derivativeLag.y variable */:data->localData[0]->realVars[445] /* gen_Bus_1_1.pSS2A.derivativeLag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 1984
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.SimpleLag1.y = if abs(gen_Bus_1_1.pSS2A.SimpleLag1.T) <= 1e-015 then gen_Bus_1_1.pSS2A.SimpleLag1.u * gen_Bus_1_1.pSS2A.SimpleLag1.K else gen_Bus_1_1.pSS2A.SimpleLag1.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1984};
  modelica_boolean tmp19;
  tmp19 = LessEq(fabs(data->simulationInfo->realParameter[753] /* gen_Bus_1_1.pSS2A.SimpleLag1.T PARAM */),1e-015);
  data->localData[0]->realVars[435] /* gen_Bus_1_1.pSS2A.SimpleLag1.y variable */ = (tmp19?(data->localData[0]->realVars[434] /* gen_Bus_1_1.pSS2A.SimpleLag1.u variable */) * (data->simulationInfo->realParameter[752] /* gen_Bus_1_1.pSS2A.SimpleLag1.K PARAM */):data->localData[0]->realVars[12] /* gen_Bus_1_1.pSS2A.SimpleLag1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 1985
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.SimpleLag1.state = (gen_Bus_1_1.pSS2A.SimpleLag1.K * gen_Bus_1_1.pSS2A.SimpleLag1.u - gen_Bus_1_1.pSS2A.SimpleLag1.state) / gen_Bus_1_1.pSS2A.SimpleLag1.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1985};
  data->localData[0]->realVars[114] /* der(gen_Bus_1_1.pSS2A.SimpleLag1.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[752] /* gen_Bus_1_1.pSS2A.SimpleLag1.K PARAM */) * (data->localData[0]->realVars[434] /* gen_Bus_1_1.pSS2A.SimpleLag1.u variable */) - data->localData[0]->realVars[12] /* gen_Bus_1_1.pSS2A.SimpleLag1.state STATE(1) */,data->simulationInfo->realParameter[754] /* gen_Bus_1_1.pSS2A.SimpleLag1.T_mod PARAM */,"gen_Bus_1_1.pSS2A.SimpleLag1.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 1986
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.derivativeLag.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.derivativeLag.TF.a_end * gen_Bus_1_1.gENROU.w - gen_Bus_1_1.pSS2A.derivativeLag.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.derivativeLag.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1986};
  data->localData[0]->realVars[116] /* der(gen_Bus_1_1.pSS2A.derivativeLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[785] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.a_end PARAM */) * (data->localData[0]->realVars[5] /* gen_Bus_1_1.gENROU.w STATE(1) */) - ((data->simulationInfo->realParameter[784] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[14] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[783] /* gen_Bus_1_1.pSS2A.derivativeLag.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.derivativeLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 1987
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1987};
  data->localData[0]->realVars[472] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[25] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[983] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1988
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1988};
  data->localData[0]->realVars[469] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[24] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[965] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1989
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1989};
  data->localData[0]->realVars[466] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[23] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[947] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1990
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1990};
  data->localData[0]->realVars[463] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[22] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[929] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1991
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1991};
  data->localData[0]->realVars[460] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[21] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[911] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1992
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1992};
  data->localData[0]->realVars[457] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[20] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[893] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1993
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1993};
  data->localData[0]->realVars[454] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[19] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[875] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1994
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] = gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1994};
  data->localData[0]->realVars[451] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[18] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[857] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1995
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag2.TF.x[1] = gen_Bus_1_1.pSS2A.Leadlag2.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.Leadlag2.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1995};
  data->localData[0]->realVars[431] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[11] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[738] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.Leadlag2.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1996
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag1.TF.x[1] = gen_Bus_1_1.pSS2A.Leadlag1.TF.x_scaled[1] / gen_Bus_1_1.pSS2A.Leadlag1.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1996};
  data->localData[0]->realVars[427] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[10] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[720] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.a_end PARAM */,"gen_Bus_1_1.pSS2A.Leadlag1.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 1997
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.add.y = gen_Bus_1_1.tGOV1_1.add.k1 * gen_Bus_1_1.tGOV1_1.REF.k + gen_Bus_1_1.tGOV1_1.add.k2 * gen_Bus_1_1.gENROU.w
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1997};
  data->localData[0]->realVars[483] /* gen_Bus_1_1.tGOV1_1.add.y variable */ = (data->simulationInfo->realParameter[1051] /* gen_Bus_1_1.tGOV1_1.add.k1 PARAM */) * (data->simulationInfo->realParameter[1044] /* gen_Bus_1_1.tGOV1_1.REF.k PARAM */) + (data->simulationInfo->realParameter[1052] /* gen_Bus_1_1.tGOV1_1.add.k2 PARAM */) * (data->localData[0]->realVars[5] /* gen_Bus_1_1.gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 1998
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.imGain9.y = gen_Bus_1_1.tGOV1_1.imGain9.k * gen_Bus_1_1.tGOV1_1.add.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1998};
  data->localData[0]->realVars[486] /* gen_Bus_1_1.tGOV1_1.imGain9.y variable */ = (data->simulationInfo->realParameter[1057] /* gen_Bus_1_1.tGOV1_1.imGain9.k PARAM */) * (data->localData[0]->realVars[483] /* gen_Bus_1_1.tGOV1_1.add.y variable */);
  TRACE_POP
}
/*
equation index: 1999
type: SIMPLE_ASSIGN
$whenCondition8 = gen_Bus_1_1.tGOV1_1.simpleLagLim.state > gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax and gen_Bus_1_1.tGOV1_1.simpleLagLim.K * gen_Bus_1_1.tGOV1_1.imGain9.y - gen_Bus_1_1.tGOV1_1.simpleLagLim.state < 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_1999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1999};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  RELATIONHYSTERESIS(tmp20, data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1080] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax PARAM */, 0, Greater);
  RELATIONHYSTERESIS(tmp21, (data->simulationInfo->realParameter[1076] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[486] /* gen_Bus_1_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */, 0.0, 1, Less);
  data->localData[0]->booleanVars[12] /* $whenCondition8 DISCRETE */ = (tmp20 && tmp21);
  TRACE_POP
}
/*
equation index: 2000
type: SIMPLE_ASSIGN
$whenCondition7 = gen_Bus_1_1.tGOV1_1.simpleLagLim.state < gen_Bus_1_1.tGOV1_1.simpleLagLim.outMin and gen_Bus_1_1.tGOV1_1.simpleLagLim.K * gen_Bus_1_1.tGOV1_1.imGain9.y - gen_Bus_1_1.tGOV1_1.simpleLagLim.state > 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2000};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  RELATIONHYSTERESIS(tmp22, data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1081] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMin PARAM */, 2, Less);
  RELATIONHYSTERESIS(tmp23, (data->simulationInfo->realParameter[1076] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[486] /* gen_Bus_1_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */, 0.0, 3, Greater);
  data->localData[0]->booleanVars[11] /* $whenCondition7 DISCRETE */ = (tmp22 && tmp23);
  TRACE_POP
}
/*
equation index: 2001
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.tGOV1_1.simpleLagLim.state = (gen_Bus_1_1.tGOV1_1.simpleLagLim.K * gen_Bus_1_1.tGOV1_1.imGain9.y - gen_Bus_1_1.tGOV1_1.simpleLagLim.state) / gen_Bus_1_1.tGOV1_1.simpleLagLim.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2001};
  data->localData[0]->realVars[137] /* der(gen_Bus_1_1.tGOV1_1.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1076] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[486] /* gen_Bus_1_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[1078] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.T_mod PARAM */,"gen_Bus_1_1.tGOV1_1.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2002
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.imLeadLag.u = if abs(gen_Bus_1_1.tGOV1_1.simpleLagLim.T) <= 1e-015 then max(min(gen_Bus_1_1.tGOV1_1.imGain9.y * gen_Bus_1_1.tGOV1_1.simpleLagLim.K, gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax), gen_Bus_1_1.tGOV1_1.simpleLagLim.outMin) else max(min(gen_Bus_1_1.tGOV1_1.simpleLagLim.state, gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax), gen_Bus_1_1.tGOV1_1.simpleLagLim.outMin)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2002};
  modelica_boolean tmp24;
  tmp24 = LessEq(fabs(data->simulationInfo->realParameter[1077] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.T PARAM */),1e-015);
  data->localData[0]->realVars[489] /* gen_Bus_1_1.tGOV1_1.imLeadLag.u variable */ = (tmp24?fmax(fmin((data->localData[0]->realVars[486] /* gen_Bus_1_1.tGOV1_1.imGain9.y variable */) * (data->simulationInfo->realParameter[1076] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[1080] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[1081] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[1080] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[1081] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 2003
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x_scaled[1] = (gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a_end * gen_Bus_1_1.tGOV1_1.imLeadLag.u - gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a[2] * gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x_scaled[1]) / gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2003};
  data->localData[0]->realVars[136] /* der(gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1064] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a_end PARAM */) * (data->localData[0]->realVars[489] /* gen_Bus_1_1.tGOV1_1.imLeadLag.u variable */) - ((data->simulationInfo->realParameter[1063] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a[2] PARAM */) * (data->localData[0]->realVars[34] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1062] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a[1] PARAM */,"gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2004
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.add1.u2 = gen_Bus_1_1.tGOV1_1.imGain1.k * gen_Bus_1_1.gENROU.w
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2004};
  data->localData[0]->realVars[485] /* gen_Bus_1_1.tGOV1_1.add1.u2 variable */ = (data->simulationInfo->realParameter[1056] /* gen_Bus_1_1.tGOV1_1.imGain1.k PARAM */) * (data->localData[0]->realVars[5] /* gen_Bus_1_1.gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 2005
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x[1] = gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x_scaled[1] / gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a_end
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2005};
  data->localData[0]->realVars[487] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[34] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x_scaled[1] STATE(1) */,data->simulationInfo->realParameter[1064] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a_end PARAM */,"gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a_end",equationIndexes);
  TRACE_POP
}
/*
equation index: 2006
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.imLeadLag.TF.y = (gen_Bus_1_1.tGOV1_1.imLeadLag.TF.bb[2] - gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a[2] * gen_Bus_1_1.tGOV1_1.imLeadLag.TF.d) * gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x[1] + gen_Bus_1_1.tGOV1_1.imLeadLag.TF.d * gen_Bus_1_1.tGOV1_1.imLeadLag.u
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2006};
  data->localData[0]->realVars[488] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.y variable */ = (data->simulationInfo->realParameter[1068] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1063] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1069] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.d PARAM */))) * (data->localData[0]->realVars[487] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.x[1] variable */) + (data->simulationInfo->realParameter[1069] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.d PARAM */) * (data->localData[0]->realVars[489] /* gen_Bus_1_1.tGOV1_1.imLeadLag.u variable */);
  TRACE_POP
}
/*
equation index: 2007
type: SIMPLE_ASSIGN
gen_Bus_1_1.tGOV1_1.add1.u1 = if abs(gen_Bus_1_1.tGOV1_1.imLeadLag.T1 - gen_Bus_1_1.tGOV1_1.imLeadLag.T2) < 1e-015 then gen_Bus_1_1.tGOV1_1.imLeadLag.K * gen_Bus_1_1.tGOV1_1.imLeadLag.u else gen_Bus_1_1.tGOV1_1.imLeadLag.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2007};
  modelica_boolean tmp25;
  tmp25 = Less(fabs(data->simulationInfo->realParameter[1059] /* gen_Bus_1_1.tGOV1_1.imLeadLag.T1 PARAM */ - data->simulationInfo->realParameter[1060] /* gen_Bus_1_1.tGOV1_1.imLeadLag.T2 PARAM */),1e-015);
  data->localData[0]->realVars[484] /* gen_Bus_1_1.tGOV1_1.add1.u1 variable */ = (tmp25?(data->simulationInfo->realParameter[1058] /* gen_Bus_1_1.tGOV1_1.imLeadLag.K PARAM */) * (data->localData[0]->realVars[489] /* gen_Bus_1_1.tGOV1_1.imLeadLag.u variable */):data->localData[0]->realVars[488] /* gen_Bus_1_1.tGOV1_1.imLeadLag.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2008
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.PMECH = gen_Bus_1_1.tGOV1_1.add1.k1 * gen_Bus_1_1.tGOV1_1.add1.u1 + gen_Bus_1_1.tGOV1_1.add1.k2 * gen_Bus_1_1.tGOV1_1.add1.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2008};
  data->localData[0]->realVars[396] /* gen_Bus_1_1.gENROU.PMECH variable */ = (data->simulationInfo->realParameter[1054] /* gen_Bus_1_1.tGOV1_1.add1.k1 PARAM */) * (data->localData[0]->realVars[484] /* gen_Bus_1_1.tGOV1_1.add1.u1 variable */) + (data->simulationInfo->realParameter[1055] /* gen_Bus_1_1.tGOV1_1.add1.k2 PARAM */) * (data->localData[0]->realVars[485] /* gen_Bus_1_1.tGOV1_1.add1.u2 variable */);
  TRACE_POP
}
/*
equation index: 2009
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.gENROU.delta = gen_Bus_1_1.gENROU.w_b * gen_Bus_1_1.gENROU.w
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2009};
  data->localData[0]->realVars[106] /* der(gen_Bus_1_1.gENROU.delta) STATE_DER */ = (data->simulationInfo->realParameter[641] /* gen_Bus_1_1.gENROU.w_b PARAM */) * (data->localData[0]->realVars[5] /* gen_Bus_1_1.gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 2010
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.PSIppq = gen_Bus_1_1.gENROU.PSIkq * gen_Bus_1_1.gENROU.K4q + gen_Bus_1_1.gENROU.Epd * gen_Bus_1_1.gENROU.K3q
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2010};
  data->localData[0]->realVars[400] /* gen_Bus_1_1.gENROU.PSIppq variable */ = (data->localData[0]->realVars[3] /* gen_Bus_1_1.gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[578] /* gen_Bus_1_1.gENROU.K4q PARAM */) + (data->localData[0]->realVars[0] /* gen_Bus_1_1.gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[576] /* gen_Bus_1_1.gENROU.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 2011
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.PSIppd = gen_Bus_1_1.gENROU.Epq * gen_Bus_1_1.gENROU.K3d + gen_Bus_1_1.gENROU.PSIkd * gen_Bus_1_1.gENROU.K4d
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2011};
  data->localData[0]->realVars[399] /* gen_Bus_1_1.gENROU.PSIppd variable */ = (data->localData[0]->realVars[1] /* gen_Bus_1_1.gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[575] /* gen_Bus_1_1.gENROU.K3d PARAM */) + (data->localData[0]->realVars[2] /* gen_Bus_1_1.gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[577] /* gen_Bus_1_1.gENROU.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 2012
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.PSIpp = sqrt(gen_Bus_1_1.gENROU.PSIppd ^ 2.0 + gen_Bus_1_1.gENROU.PSIppq ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2012};
  modelica_real tmp26;
  modelica_real tmp27;
  tmp26 = data->localData[0]->realVars[399] /* gen_Bus_1_1.gENROU.PSIppd variable */;
  tmp27 = data->localData[0]->realVars[400] /* gen_Bus_1_1.gENROU.PSIppq variable */;
  data->localData[0]->realVars[398] /* gen_Bus_1_1.gENROU.PSIpp variable */ = sqrt((tmp26 * tmp26) + (tmp27 * tmp27));
  TRACE_POP
}
/*
equation index: 2013
type: SIMPLE_ASSIGN
$cse6 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_1_1.gENROU.PSIpp, gen_Bus_1_1.gENROU.S10, gen_Bus_1_1.gENROU.S12, 1.0, 1.2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2013};
  data->localData[0]->realVars[216] /* $cse6 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[398] /* gen_Bus_1_1.gENROU.PSIpp variable */, data->simulationInfo->realParameter[596] /* gen_Bus_1_1.gENROU.S10 PARAM */, data->simulationInfo->realParameter[597] /* gen_Bus_1_1.gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 2014
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.u2 = gen_Bus_8_1.iEEET1_1.rotatingExciter.gain.k * gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2014};
  data->localData[0]->realVars[688] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.u2 variable */ = (data->simulationInfo->realParameter[2096] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.gain.k PARAM */) * (data->localData[0]->realVars[100] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 2015
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.derivativeLag.y = 0.1 * (gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_8_1.iEEET1_1.derivativeLag.x) / gen_Bus_8_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2015};
  data->localData[0]->realVars[685] /* gen_Bus_8_1.iEEET1_1.derivativeLag.y variable */ = (0.1) * (DIVISION_SIM(data->localData[0]->realVars[100] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[99] /* gen_Bus_8_1.iEEET1_1.derivativeLag.x STATE(1) */,data->simulationInfo->realParameter[2083] /* gen_Bus_8_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_8_1.iEEET1_1.derivativeLag.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 2016
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.iEEET1_1.derivativeLag.x = (gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_8_1.iEEET1_1.derivativeLag.x) / gen_Bus_8_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2016};
  data->localData[0]->realVars[201] /* der(gen_Bus_8_1.iEEET1_1.derivativeLag.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[100] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[99] /* gen_Bus_8_1.iEEET1_1.derivativeLag.x STATE(1) */,data->simulationInfo->realParameter[2083] /* gen_Bus_8_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_8_1.iEEET1_1.derivativeLag.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 2017
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.gENROU.delta = gen_Bus_8_1.gENROU.w_b * gen_Bus_8_1.gENROU.w
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2017};
  data->localData[0]->realVars[198] /* der(gen_Bus_8_1.gENROU.delta) STATE_DER */ = (data->simulationInfo->realParameter[2044] /* gen_Bus_8_1.gENROU.w_b PARAM */) * (data->localData[0]->realVars[97] /* gen_Bus_8_1.gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 2018
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.PSIppq = gen_Bus_8_1.gENROU.PSIkq * gen_Bus_8_1.gENROU.K4q + gen_Bus_8_1.gENROU.Epd * gen_Bus_8_1.gENROU.K3q
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2018};
  data->localData[0]->realVars[669] /* gen_Bus_8_1.gENROU.PSIppq variable */ = (data->localData[0]->realVars[95] /* gen_Bus_8_1.gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[1980] /* gen_Bus_8_1.gENROU.K4q PARAM */) + (data->localData[0]->realVars[92] /* gen_Bus_8_1.gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[1978] /* gen_Bus_8_1.gENROU.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 2019
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.PSIppd = gen_Bus_8_1.gENROU.Epq * gen_Bus_8_1.gENROU.K3d + gen_Bus_8_1.gENROU.PSIkd * gen_Bus_8_1.gENROU.K4d
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2019};
  data->localData[0]->realVars[668] /* gen_Bus_8_1.gENROU.PSIppd variable */ = (data->localData[0]->realVars[93] /* gen_Bus_8_1.gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[1977] /* gen_Bus_8_1.gENROU.K3d PARAM */) + (data->localData[0]->realVars[94] /* gen_Bus_8_1.gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[1979] /* gen_Bus_8_1.gENROU.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 2020
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.PSIpp = sqrt(gen_Bus_8_1.gENROU.PSIppd ^ 2.0 + gen_Bus_8_1.gENROU.PSIppq ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2020};
  modelica_real tmp28;
  modelica_real tmp29;
  tmp28 = data->localData[0]->realVars[668] /* gen_Bus_8_1.gENROU.PSIppd variable */;
  tmp29 = data->localData[0]->realVars[669] /* gen_Bus_8_1.gENROU.PSIppq variable */;
  data->localData[0]->realVars[667] /* gen_Bus_8_1.gENROU.PSIpp variable */ = sqrt((tmp28 * tmp28) + (tmp29 * tmp29));
  TRACE_POP
}
/*
equation index: 2021
type: SIMPLE_ASSIGN
$cse9 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_8_1.gENROU.PSIpp, gen_Bus_8_1.gENROU.S10, gen_Bus_8_1.gENROU.S12, 1.0, 1.2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2021};
  data->localData[0]->realVars[219] /* $cse9 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[667] /* gen_Bus_8_1.gENROU.PSIpp variable */, data->simulationInfo->realParameter[1999] /* gen_Bus_8_1.gENROU.S10 PARAM */, data->simulationInfo->realParameter[2000] /* gen_Bus_8_1.gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 2022
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.u2 = gen_Bus_6_1.iEEET1_1.rotatingExciter.gain.k * gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2022};
  data->localData[0]->realVars[653] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.u2 variable */ = (data->simulationInfo->realParameter[1930] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.gain.k PARAM */) * (data->localData[0]->realVars[90] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 2023
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.derivativeLag.y = 0.1 * (gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_6_1.iEEET1_1.derivativeLag.x) / gen_Bus_6_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2023};
  data->localData[0]->realVars[650] /* gen_Bus_6_1.iEEET1_1.derivativeLag.y variable */ = (0.1) * (DIVISION_SIM(data->localData[0]->realVars[90] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[89] /* gen_Bus_6_1.iEEET1_1.derivativeLag.x STATE(1) */,data->simulationInfo->realParameter[1917] /* gen_Bus_6_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_6_1.iEEET1_1.derivativeLag.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 2024
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.iEEET1_1.derivativeLag.x = (gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_6_1.iEEET1_1.derivativeLag.x) / gen_Bus_6_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2024};
  data->localData[0]->realVars[191] /* der(gen_Bus_6_1.iEEET1_1.derivativeLag.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[90] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[89] /* gen_Bus_6_1.iEEET1_1.derivativeLag.x STATE(1) */,data->simulationInfo->realParameter[1917] /* gen_Bus_6_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_6_1.iEEET1_1.derivativeLag.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 2025
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.gENROU.delta = gen_Bus_6_1.gENROU.w_b * gen_Bus_6_1.gENROU.w
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2025};
  data->localData[0]->realVars[188] /* der(gen_Bus_6_1.gENROU.delta) STATE_DER */ = (data->simulationInfo->realParameter[1878] /* gen_Bus_6_1.gENROU.w_b PARAM */) * (data->localData[0]->realVars[87] /* gen_Bus_6_1.gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 2026
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.PSIppq = gen_Bus_6_1.gENROU.PSIkq * gen_Bus_6_1.gENROU.K4q + gen_Bus_6_1.gENROU.Epd * gen_Bus_6_1.gENROU.K3q
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2026};
  data->localData[0]->realVars[634] /* gen_Bus_6_1.gENROU.PSIppq variable */ = (data->localData[0]->realVars[85] /* gen_Bus_6_1.gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[1814] /* gen_Bus_6_1.gENROU.K4q PARAM */) + (data->localData[0]->realVars[82] /* gen_Bus_6_1.gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[1812] /* gen_Bus_6_1.gENROU.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 2027
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.PSIppd = gen_Bus_6_1.gENROU.Epq * gen_Bus_6_1.gENROU.K3d + gen_Bus_6_1.gENROU.PSIkd * gen_Bus_6_1.gENROU.K4d
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2027};
  data->localData[0]->realVars[633] /* gen_Bus_6_1.gENROU.PSIppd variable */ = (data->localData[0]->realVars[83] /* gen_Bus_6_1.gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[1811] /* gen_Bus_6_1.gENROU.K3d PARAM */) + (data->localData[0]->realVars[84] /* gen_Bus_6_1.gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[1813] /* gen_Bus_6_1.gENROU.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 2028
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.PSIpp = sqrt(gen_Bus_6_1.gENROU.PSIppd ^ 2.0 + gen_Bus_6_1.gENROU.PSIppq ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2028};
  modelica_real tmp30;
  modelica_real tmp31;
  tmp30 = data->localData[0]->realVars[633] /* gen_Bus_6_1.gENROU.PSIppd variable */;
  tmp31 = data->localData[0]->realVars[634] /* gen_Bus_6_1.gENROU.PSIppq variable */;
  data->localData[0]->realVars[632] /* gen_Bus_6_1.gENROU.PSIpp variable */ = sqrt((tmp30 * tmp30) + (tmp31 * tmp31));
  TRACE_POP
}
/*
equation index: 2029
type: SIMPLE_ASSIGN
$cse12 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_6_1.gENROU.PSIpp, gen_Bus_6_1.gENROU.S10, gen_Bus_6_1.gENROU.S12, 1.0, 1.2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2029};
  data->localData[0]->realVars[207] /* $cse12 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[632] /* gen_Bus_6_1.gENROU.PSIpp variable */, data->simulationInfo->realParameter[1833] /* gen_Bus_6_1.gENROU.S10 PARAM */, data->simulationInfo->realParameter[1834] /* gen_Bus_6_1.gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 2030
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.u2 = gen_Bus_3_1.iEEET1_1.rotatingExciter.gain.k * gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2030};
  data->localData[0]->realVars[618] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.u2 variable */ = (data->simulationInfo->realParameter[1764] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.gain.k PARAM */) * (data->localData[0]->realVars[80] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */);
  TRACE_POP
}
/*
equation index: 2031
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.derivativeLag.y = 0.1 * (gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_3_1.iEEET1_1.derivativeLag.x) / gen_Bus_3_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2031};
  data->localData[0]->realVars[615] /* gen_Bus_3_1.iEEET1_1.derivativeLag.y variable */ = (0.1) * (DIVISION_SIM(data->localData[0]->realVars[80] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[79] /* gen_Bus_3_1.iEEET1_1.derivativeLag.x STATE(1) */,data->simulationInfo->realParameter[1751] /* gen_Bus_3_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_3_1.iEEET1_1.derivativeLag.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 2032
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.iEEET1_1.derivativeLag.x = (gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_3_1.iEEET1_1.derivativeLag.x) / gen_Bus_3_1.iEEET1_1.derivativeLag.T
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2032};
  data->localData[0]->realVars[181] /* der(gen_Bus_3_1.iEEET1_1.derivativeLag.x) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[80] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[79] /* gen_Bus_3_1.iEEET1_1.derivativeLag.x STATE(1) */,data->simulationInfo->realParameter[1751] /* gen_Bus_3_1.iEEET1_1.derivativeLag.T PARAM */,"gen_Bus_3_1.iEEET1_1.derivativeLag.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 2033
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.gENROU.delta = gen_Bus_3_1.gENROU.w_b * gen_Bus_3_1.gENROU.w
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2033};
  data->localData[0]->realVars[178] /* der(gen_Bus_3_1.gENROU.delta) STATE_DER */ = (data->simulationInfo->realParameter[1712] /* gen_Bus_3_1.gENROU.w_b PARAM */) * (data->localData[0]->realVars[77] /* gen_Bus_3_1.gENROU.w STATE(1) */);
  TRACE_POP
}
/*
equation index: 2034
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.PSIppq = gen_Bus_3_1.gENROU.PSIkq * gen_Bus_3_1.gENROU.K4q + gen_Bus_3_1.gENROU.Epd * gen_Bus_3_1.gENROU.K3q
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2034};
  data->localData[0]->realVars[599] /* gen_Bus_3_1.gENROU.PSIppq variable */ = (data->localData[0]->realVars[75] /* gen_Bus_3_1.gENROU.PSIkq STATE(1) */) * (data->simulationInfo->realParameter[1648] /* gen_Bus_3_1.gENROU.K4q PARAM */) + (data->localData[0]->realVars[72] /* gen_Bus_3_1.gENROU.Epd STATE(1) */) * (data->simulationInfo->realParameter[1646] /* gen_Bus_3_1.gENROU.K3q PARAM */);
  TRACE_POP
}
/*
equation index: 2035
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.PSIppd = gen_Bus_3_1.gENROU.Epq * gen_Bus_3_1.gENROU.K3d + gen_Bus_3_1.gENROU.PSIkd * gen_Bus_3_1.gENROU.K4d
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2035};
  data->localData[0]->realVars[598] /* gen_Bus_3_1.gENROU.PSIppd variable */ = (data->localData[0]->realVars[73] /* gen_Bus_3_1.gENROU.Epq STATE(1) */) * (data->simulationInfo->realParameter[1645] /* gen_Bus_3_1.gENROU.K3d PARAM */) + (data->localData[0]->realVars[74] /* gen_Bus_3_1.gENROU.PSIkd STATE(1) */) * (data->simulationInfo->realParameter[1647] /* gen_Bus_3_1.gENROU.K4d PARAM */);
  TRACE_POP
}
/*
equation index: 2036
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.PSIpp = sqrt(gen_Bus_3_1.gENROU.PSIppd ^ 2.0 + gen_Bus_3_1.gENROU.PSIppq ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2036};
  modelica_real tmp32;
  modelica_real tmp33;
  tmp32 = data->localData[0]->realVars[598] /* gen_Bus_3_1.gENROU.PSIppd variable */;
  tmp33 = data->localData[0]->realVars[599] /* gen_Bus_3_1.gENROU.PSIppq variable */;
  data->localData[0]->realVars[597] /* gen_Bus_3_1.gENROU.PSIpp variable */ = sqrt((tmp32 * tmp32) + (tmp33 * tmp33));
  TRACE_POP
}
/*
equation index: 2037
type: SIMPLE_ASSIGN
$cse15 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_3_1.gENROU.PSIpp, gen_Bus_3_1.gENROU.S10, gen_Bus_3_1.gENROU.S12, 1.0, 1.2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2037};
  data->localData[0]->realVars[210] /* $cse15 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[597] /* gen_Bus_3_1.gENROU.PSIpp variable */, data->simulationInfo->realParameter[1667] /* gen_Bus_3_1.gENROU.S10 PARAM */, data->simulationInfo->realParameter[1668] /* gen_Bus_3_1.gENROU.S12 PARAM */, 1.0, 1.2);
  TRACE_POP
}
/*
equation index: 2038
type: SIMPLE_ASSIGN
$cse14 = cos(gen_Bus_3_1.gENROU.delta)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2038};
  data->localData[0]->realVars[209] /* $cse14 variable */ = cos(data->localData[0]->realVars[76] /* gen_Bus_3_1.gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 2039
type: SIMPLE_ASSIGN
$cse13 = sin(gen_Bus_3_1.gENROU.delta)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2039};
  data->localData[0]->realVars[208] /* $cse13 variable */ = sin(data->localData[0]->realVars[76] /* gen_Bus_3_1.gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 2040
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.VE.u2 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y, gen_Bus_3_1.iEEET1_1.rotatingExciter.se1.SE1, gen_Bus_3_1.iEEET1_1.rotatingExciter.se1.SE2, gen_Bus_3_1.iEEET1_1.rotatingExciter.se1.E1, gen_Bus_3_1.iEEET1_1.rotatingExciter.se1.E2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2040};
  data->localData[0]->realVars[620] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[80] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */, data->simulationInfo->realParameter[1769] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.se1.SE1 PARAM */, data->simulationInfo->realParameter[1770] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.se1.SE2 PARAM */, data->simulationInfo->realParameter[1767] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.se1.E1 PARAM */, data->simulationInfo->realParameter[1768] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 2041
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.u1 = gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y * gen_Bus_3_1.iEEET1_1.rotatingExciter.VE.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2041};
  data->localData[0]->realVars[617] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.u1 variable */ = (data->localData[0]->realVars[80] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */) * (data->localData[0]->realVars[620] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 2042
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.y = gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.k1 * gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.u1 + gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.k2 * gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2042};
  data->localData[0]->realVars[619] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.y variable */ = (data->simulationInfo->realParameter[1761] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.k1 PARAM */) * (data->localData[0]->realVars[617] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.u1 variable */) + (data->simulationInfo->realParameter[1762] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.k2 PARAM */) * (data->localData[0]->realVars[618] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.u2 variable */);
  TRACE_POP
}
/*
equation index: 2043
type: SIMPLE_ASSIGN
$cse11 = cos(gen_Bus_6_1.gENROU.delta)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2043};
  data->localData[0]->realVars[206] /* $cse11 variable */ = cos(data->localData[0]->realVars[86] /* gen_Bus_6_1.gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 2044
type: SIMPLE_ASSIGN
$cse10 = sin(gen_Bus_6_1.gENROU.delta)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2044};
  data->localData[0]->realVars[205] /* $cse10 variable */ = sin(data->localData[0]->realVars[86] /* gen_Bus_6_1.gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 2045
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.VE.u2 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y, gen_Bus_6_1.iEEET1_1.rotatingExciter.se1.SE1, gen_Bus_6_1.iEEET1_1.rotatingExciter.se1.SE2, gen_Bus_6_1.iEEET1_1.rotatingExciter.se1.E1, gen_Bus_6_1.iEEET1_1.rotatingExciter.se1.E2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2045};
  data->localData[0]->realVars[655] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[90] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */, data->simulationInfo->realParameter[1935] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.se1.SE1 PARAM */, data->simulationInfo->realParameter[1936] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.se1.SE2 PARAM */, data->simulationInfo->realParameter[1933] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.se1.E1 PARAM */, data->simulationInfo->realParameter[1934] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 2046
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.u1 = gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y * gen_Bus_6_1.iEEET1_1.rotatingExciter.VE.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2046};
  data->localData[0]->realVars[652] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.u1 variable */ = (data->localData[0]->realVars[90] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */) * (data->localData[0]->realVars[655] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 2047
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.y = gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.k1 * gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.u1 + gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.k2 * gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2047};
  data->localData[0]->realVars[654] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.y variable */ = (data->simulationInfo->realParameter[1927] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.k1 PARAM */) * (data->localData[0]->realVars[652] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.u1 variable */) + (data->simulationInfo->realParameter[1928] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.k2 PARAM */) * (data->localData[0]->realVars[653] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.u2 variable */);
  TRACE_POP
}
/*
equation index: 2048
type: SIMPLE_ASSIGN
$cse8 = cos(gen_Bus_8_1.gENROU.delta)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2048};
  data->localData[0]->realVars[218] /* $cse8 variable */ = cos(data->localData[0]->realVars[96] /* gen_Bus_8_1.gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 2049
type: SIMPLE_ASSIGN
$cse7 = sin(gen_Bus_8_1.gENROU.delta)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2049};
  data->localData[0]->realVars[217] /* $cse7 variable */ = sin(data->localData[0]->realVars[96] /* gen_Bus_8_1.gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 2050
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.VE.u2 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y, gen_Bus_8_1.iEEET1_1.rotatingExciter.se1.SE1, gen_Bus_8_1.iEEET1_1.rotatingExciter.se1.SE2, gen_Bus_8_1.iEEET1_1.rotatingExciter.se1.E1, gen_Bus_8_1.iEEET1_1.rotatingExciter.se1.E2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2050};
  data->localData[0]->realVars[690] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[100] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */, data->simulationInfo->realParameter[2101] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.se1.SE1 PARAM */, data->simulationInfo->realParameter[2102] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.se1.SE2 PARAM */, data->simulationInfo->realParameter[2099] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.se1.E1 PARAM */, data->simulationInfo->realParameter[2100] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 2051
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.u1 = gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y * gen_Bus_8_1.iEEET1_1.rotatingExciter.VE.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2051};
  data->localData[0]->realVars[687] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.u1 variable */ = (data->localData[0]->realVars[100] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */) * (data->localData[0]->realVars[690] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 2052
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.y = gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.k1 * gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.u1 + gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.k2 * gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2052};
  data->localData[0]->realVars[689] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.y variable */ = (data->simulationInfo->realParameter[2093] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.k1 PARAM */) * (data->localData[0]->realVars[687] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.u1 variable */) + (data->simulationInfo->realParameter[2094] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.k2 PARAM */) * (data->localData[0]->realVars[688] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.u2 variable */);
  TRACE_POP
}
/*
equation index: 2053
type: SIMPLE_ASSIGN
$cse5 = cos(gen_Bus_1_1.gENROU.delta)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2053};
  data->localData[0]->realVars[215] /* $cse5 variable */ = cos(data->localData[0]->realVars[4] /* gen_Bus_1_1.gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 2054
type: SIMPLE_ASSIGN
$cse4 = sin(gen_Bus_1_1.gENROU.delta)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2054};
  data->localData[0]->realVars[214] /* $cse4 variable */ = sin(data->localData[0]->realVars[4] /* gen_Bus_1_1.gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 2055
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.VE.u2 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y, gen_Bus_1_1.iEEET1_1.rotatingExciter.se1.SE1, gen_Bus_1_1.iEEET1_1.rotatingExciter.se1.SE2, gen_Bus_1_1.iEEET1_1.rotatingExciter.se1.E1, gen_Bus_1_1.iEEET1_1.rotatingExciter.se1.E2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2055};
  data->localData[0]->realVars[422] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[8] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */, data->simulationInfo->realParameter[697] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.se1.SE1 PARAM */, data->simulationInfo->realParameter[698] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.se1.SE2 PARAM */, data->simulationInfo->realParameter[695] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.se1.E1 PARAM */, data->simulationInfo->realParameter[696] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 2056
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.u1 = gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y * gen_Bus_1_1.iEEET1_1.rotatingExciter.VE.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2056};
  data->localData[0]->realVars[419] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.u1 variable */ = (data->localData[0]->realVars[8] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */) * (data->localData[0]->realVars[422] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 2057
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.y = gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.k1 * gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.u1 + gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.k2 * gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2057};
  data->localData[0]->realVars[421] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.y variable */ = (data->simulationInfo->realParameter[689] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.k1 PARAM */) * (data->localData[0]->realVars[419] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.u1 variable */) + (data->simulationInfo->realParameter[690] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.k2 PARAM */) * (data->localData[0]->realVars[420] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.u2 variable */);
  TRACE_POP
}
/*
equation index: 2058
type: SIMPLE_ASSIGN
$cse2 = cos(gen_Bus_2_1.gENROU.delta)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2058};
  data->localData[0]->realVars[212] /* $cse2 variable */ = cos(data->localData[0]->realVars[40] /* gen_Bus_2_1.gENROU.delta STATE(1) */);
  TRACE_POP
}
/*
equation index: 2059
type: SIMPLE_ASSIGN
$cse1 = sin(gen_Bus_2_1.gENROU.delta)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2059};
  data->localData[0]->realVars[204] /* $cse1 variable */ = sin(data->localData[0]->realVars[40] /* gen_Bus_2_1.gENROU.delta STATE(1) */);
  TRACE_POP
}
void IEEE14_IEEE14_Base_Case_eqFunction_2060(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2061(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2062(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2063(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2064(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2065(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2066(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2067(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2068(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2069(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2070(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2071(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2072(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2073(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2074(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2075(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2076(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2077(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2078(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2079(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2080(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2081(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2082(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2083(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2084(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2085(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2086(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2087(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2088(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2089(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2090(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2091(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2092(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2093(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2094(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2095(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2096(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2097(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2098(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2099(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2100(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2101(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2102(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2103(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2104(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2105(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2106(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2107(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2108(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2109(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2110(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2111(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2112(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2113(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2114(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2115(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2116(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2117(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2118(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2119(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2120(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2121(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2122(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2123(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2124(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2125(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2126(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2127(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2128(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2129(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2130(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2131(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2132(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2133(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2134(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2135(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2136(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2137(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2138(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2139(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2140(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2141(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2142(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2143(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2144(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2145(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2146(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2147(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2148(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2149(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2150(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2151(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2152(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2153(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2154(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2155(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2156(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2157(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2158(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2159(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2160(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2161(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2162(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2163(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2164(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2165(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2166(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2167(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2168(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2169(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2170(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2171(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2172(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2173(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2174(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2175(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2176(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2177(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2178(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2179(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2180(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2181(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2182(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2183(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2184(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2185(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2288(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2287(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2286(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2285(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2284(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2283(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2282(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2281(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2280(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2279(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2278(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2277(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2276(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2275(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2274(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2273(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2272(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2271(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2270(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2269(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2268(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2267(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2266(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2265(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2264(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2263(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2262(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2261(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2260(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2259(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2258(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2257(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2256(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2255(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2254(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2253(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2252(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2251(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2250(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2249(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2248(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2247(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2246(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2245(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2244(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2243(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2242(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2241(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2240(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2239(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2238(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2237(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2236(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2235(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2234(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2233(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2232(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2231(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2230(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2229(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2228(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2227(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2226(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2225(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2224(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2223(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2222(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2221(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2220(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2219(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2218(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2217(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2216(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2215(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2214(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2213(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2212(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2211(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2210(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2209(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2208(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2207(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2206(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2205(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2204(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2203(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2202(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2201(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2200(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2199(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2198(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2197(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2196(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2195(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2194(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2193(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2192(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2191(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2190(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2189(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2188(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2187(DATA*, threadData_t*);
void IEEE14_IEEE14_Base_Case_eqFunction_2186(DATA*, threadData_t*);
/*
equation index: 2507
indexNonlinear: 2
type: NONLINEAR

vars: {pwLine.is.im, pwLine2.is.im, pwLine5.ir.im, pwLine6.ir.im, Bus_02.n[1].ii, pwLine4.is.re, Bus_02.n[1].ir, pwLine5.is.im, pwLine5.is.re, pwLine.is.re, Bus_05.n[3].ir, pwLine4.ir.re, Bus_05.n[3].ii, pwLine3.is.im, pwLine8.is.re, pwLine13.is.re, pwLine8.is.im, pwLine13.is.im, pwLine15.ir.re, Bus_13.p[2].ir, pwLine15.ir.im, Bus_13.p[2].ii, pwLine12.is.re, pwLine11.is.re, Bus_12.n[1].ii, pwLine11.is.im, pwLine12.ir.im, pwLine12.ir.re, pwLine11.ir.re, Bus_06.n[1].ir, pwLine15.is.im, Bus_06.n[1].ii, pwLine9.is.re, pwLine9.is.im, Bus_11.p[2].ii, pwLine10.is.im, pwLine9.ir.re, Bus_11.p[2].ir, pwLine10.ir.re, Bus_10.p[2].ir, pwLine7.ir.im, Bus_10.p[2].ii, pwLine14.is.im, pwLine7.is.im, pwLine14.is.re, pwLine7.is.re, Bus_09.p[2].ir, Bus_09.p[2].ii, pwLine5.ir.re, Bus_04.n[2].ir, Bus_04.n[2].ii, Bus_03.n[1].ii, pwLine6.is.im, Bus_03.n[1].ir, pwLine6.is.re, pwLine6.ir.re, pwLine3.ir.im, pwLine3.ir.re, pwLine1.ir.re, pwLine1.ir.im, Bus_14.p[3].vr, Bus_14.p[3].vi, Bus_04.p[3].ir, Bus_09.n[2].ii, Bus_09.p[3].vi, Bus_09.p[3].vr, Bus_05.p[2].ii, Bus_06.p[1].ii, Bus_05.p[2].vr, Bus_05.p[2].vi, Bus_04.p[2].ir, Bus_04.p[4].vi, pwLine14.ir.im, pwLine14.ir.re, Bus_07.p[1].ii, pwLine.ir.re, pwLine1.is.im, Bus_07.p[2].vi, gen_Bus_8_1.gENROU.id, gen_Bus_8_1.gENROU.iq, gen_Bus_6_1.gENROU.id, gen_Bus_6_1.gENROU.iq, gen_Bus_3_1.gENROU.iq, gen_Bus_3_1.gENROU.id, gen_Bus_1_1.gENROU.iq, gen_Bus_1_1.gENROU.id, gen_Bus_2_1.gENROU.id, gen_Bus_2_1.gENROU.iq, LOAD_04.v, LOAD_09.v, LOAD_06.v, LOAD_14.v, LOAD_02.v, LOAD_03.v, LOAD_05.v, Bus_13.n[2].vr, Bus_13.n[2].vi, Bus_12.n[1].vr, Bus_12.n[1].vi, Bus_11.p[2].vr, Bus_11.p[2].vi, Bus_10.n[1].vr, Bus_10.n[1].vi}
eqns: {2060, 2061, 2062, 2063, 2064, 2065, 2066, 2067, 2068, 2069, 2070, 2071, 2072, 2073, 2074, 2075, 2076, 2077, 2078, 2079, 2080, 2081, 2082, 2083, 2084, 2085, 2086, 2087, 2088, 2089, 2090, 2091, 2092, 2093, 2094, 2095, 2096, 2097, 2098, 2099, 2100, 2101, 2102, 2103, 2104, 2105, 2106, 2107, 2108, 2109, 2110, 2111, 2112, 2113, 2114, 2115, 2116, 2117, 2118, 2119, 2120, 2121, 2122, 2123, 2124, 2125, 2126, 2127, 2128, 2129, 2130, 2131, 2132, 2133, 2134, 2135, 2136, 2137, 2138, 2139, 2140, 2141, 2142, 2143, 2144, 2145, 2146, 2147, 2148, 2149, 2150, 2151, 2152, 2153, 2154, 2155, 2156, 2157, 2158, 2159, 2160, 2161, 2162, 2163, 2164, 2165, 2166, 2167, 2168, 2169, 2170, 2171, 2172, 2173, 2174, 2175, 2176, 2177, 2178, 2179, 2180, 2181, 2182, 2183, 2184, 2185, 2288, 2287, 2286, 2285, 2284, 2283, 2282, 2281, 2280, 2279, 2278, 2277, 2276, 2275, 2274, 2273, 2272, 2271, 2270, 2269, 2268, 2267, 2266, 2265, 2264, 2263, 2262, 2261, 2260, 2259, 2258, 2257, 2256, 2255, 2254, 2253, 2252, 2251, 2250, 2249, 2248, 2247, 2246, 2245, 2244, 2243, 2242, 2241, 2240, 2239, 2238, 2237, 2236, 2235, 2234, 2233, 2232, 2231, 2230, 2229, 2228, 2227, 2226, 2225, 2224, 2223, 2222, 2221, 2220, 2219, 2218, 2217, 2216, 2215, 2214, 2213, 2212, 2211, 2210, 2209, 2208, 2207, 2206, 2205, 2204, 2203, 2202, 2201, 2200, 2199, 2198, 2197, 2196, 2195, 2194, 2193, 2192, 2191, 2190, 2189, 2188, 2187, 2186}
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2507};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 2507 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[701] /* pwLine.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[765] /* pwLine2.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[787] /* pwLine5.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[795] /* pwLine6.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[228] /* Bus_02.n[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[782] /* pwLine4.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[230] /* Bus_02.n[1].ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[789] /* pwLine5.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[8] = data->localData[0]->realVars[790] /* pwLine5.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[9] = data->localData[0]->realVars[702] /* pwLine.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[10] = data->localData[0]->realVars[257] /* Bus_05.n[3].ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[11] = data->localData[0]->realVars[780] /* pwLine4.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[12] = data->localData[0]->realVars[256] /* Bus_05.n[3].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[13] = data->localData[0]->realVars[773] /* pwLine3.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[14] = data->localData[0]->realVars[814] /* pwLine8.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[15] = data->localData[0]->realVars[742] /* pwLine13.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[16] = data->localData[0]->realVars[813] /* pwLine8.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[17] = data->localData[0]->realVars[741] /* pwLine13.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[18] = data->localData[0]->realVars[756] /* pwLine15.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[19] = data->localData[0]->realVars[317] /* Bus_13.p[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[20] = data->localData[0]->realVars[755] /* pwLine15.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[21] = data->localData[0]->realVars[316] /* Bus_13.p[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[22] = data->localData[0]->realVars[734] /* pwLine12.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[23] = data->localData[0]->realVars[726] /* pwLine11.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[24] = data->localData[0]->realVars[308] /* Bus_12.n[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[25] = data->localData[0]->realVars[725] /* pwLine11.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[26] = data->localData[0]->realVars[731] /* pwLine12.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[27] = data->localData[0]->realVars[732] /* pwLine12.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[28] = data->localData[0]->realVars[724] /* pwLine11.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[29] = data->localData[0]->realVars[265] /* Bus_06.n[1].ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[30] = data->localData[0]->realVars[757] /* pwLine15.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[31] = data->localData[0]->realVars[264] /* Bus_06.n[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[32] = data->localData[0]->realVars[822] /* pwLine9.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[33] = data->localData[0]->realVars[821] /* pwLine9.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[34] = data->localData[0]->realVars[302] /* Bus_11.p[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[35] = data->localData[0]->realVars[717] /* pwLine10.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[36] = data->localData[0]->realVars[820] /* pwLine9.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[37] = data->localData[0]->realVars[303] /* Bus_11.p[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[38] = data->localData[0]->realVars[716] /* pwLine10.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[39] = data->localData[0]->realVars[299] /* Bus_10.p[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[40] = data->localData[0]->realVars[803] /* pwLine7.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[41] = data->localData[0]->realVars[298] /* Bus_10.p[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[42] = data->localData[0]->realVars[749] /* pwLine14.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[43] = data->localData[0]->realVars[805] /* pwLine7.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[44] = data->localData[0]->realVars[750] /* pwLine14.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[45] = data->localData[0]->realVars[806] /* pwLine7.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[46] = data->localData[0]->realVars[291] /* Bus_09.p[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[47] = data->localData[0]->realVars[290] /* Bus_09.p[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[48] = data->localData[0]->realVars[788] /* pwLine5.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[49] = data->localData[0]->realVars[245] /* Bus_04.n[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[50] = data->localData[0]->realVars[244] /* Bus_04.n[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[51] = data->localData[0]->realVars[236] /* Bus_03.n[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[52] = data->localData[0]->realVars[797] /* pwLine6.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[53] = data->localData[0]->realVars[237] /* Bus_03.n[1].ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[54] = data->localData[0]->realVars[798] /* pwLine6.is.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[55] = data->localData[0]->realVars[796] /* pwLine6.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[56] = data->localData[0]->realVars[771] /* pwLine3.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[57] = data->localData[0]->realVars[772] /* pwLine3.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[58] = data->localData[0]->realVars[708] /* pwLine1.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[59] = data->localData[0]->realVars[707] /* pwLine1.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[60] = data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[61] = data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[62] = data->localData[0]->realVars[250] /* Bus_04.p[3].ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[63] = data->localData[0]->realVars[288] /* Bus_09.n[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[64] = data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[65] = data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[66] = data->localData[0]->realVars[258] /* Bus_05.p[2].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[67] = data->localData[0]->realVars[266] /* Bus_06.p[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[68] = data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[69] = data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[70] = data->localData[0]->realVars[249] /* Bus_04.p[2].ir variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[71] = data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[72] = data->localData[0]->realVars[747] /* pwLine14.ir.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[73] = data->localData[0]->realVars[748] /* pwLine14.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[74] = data->localData[0]->realVars[276] /* Bus_07.p[1].ii variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[75] = data->localData[0]->realVars[700] /* pwLine.ir.re variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[76] = data->localData[0]->realVars[709] /* pwLine1.is.im variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[77] = data->localData[0]->realVars[278] /* Bus_07.p[2].vi variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[78] = data->localData[0]->realVars[676] /* gen_Bus_8_1.gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[79] = data->localData[0]->realVars[677] /* gen_Bus_8_1.gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[80] = data->localData[0]->realVars[641] /* gen_Bus_6_1.gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[81] = data->localData[0]->realVars[642] /* gen_Bus_6_1.gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[82] = data->localData[0]->realVars[607] /* gen_Bus_3_1.gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[83] = data->localData[0]->realVars[606] /* gen_Bus_3_1.gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[84] = data->localData[0]->realVars[408] /* gen_Bus_1_1.gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[85] = data->localData[0]->realVars[407] /* gen_Bus_1_1.gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[86] = data->localData[0]->realVars[507] /* gen_Bus_2_1.gENROU.id variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[87] = data->localData[0]->realVars[508] /* gen_Bus_2_1.gENROU.iq variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[88] = data->localData[0]->realVars[341] /* LOAD_04.v variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[89] = data->localData[0]->realVars[359] /* LOAD_09.v variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[90] = data->localData[0]->realVars[353] /* LOAD_06.v variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[91] = data->localData[0]->realVars[389] /* LOAD_14.v variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[92] = data->localData[0]->realVars[329] /* LOAD_02.v variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[93] = data->localData[0]->realVars[335] /* LOAD_03.v variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[94] = data->localData[0]->realVars[347] /* LOAD_05.v variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[95] = data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[96] = data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[97] = data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[98] = data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[99] = data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[100] = data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[101] = data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[102] = data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2507};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 2507 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[701] /* pwLine.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[765] /* pwLine2.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[787] /* pwLine5.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[795] /* pwLine6.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[228] /* Bus_02.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[782] /* pwLine4.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[230] /* Bus_02.n[1].ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[789] /* pwLine5.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  data->localData[0]->realVars[790] /* pwLine5.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[8];
  data->localData[0]->realVars[702] /* pwLine.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[9];
  data->localData[0]->realVars[257] /* Bus_05.n[3].ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[10];
  data->localData[0]->realVars[780] /* pwLine4.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[11];
  data->localData[0]->realVars[256] /* Bus_05.n[3].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[12];
  data->localData[0]->realVars[773] /* pwLine3.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[13];
  data->localData[0]->realVars[814] /* pwLine8.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[14];
  data->localData[0]->realVars[742] /* pwLine13.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[15];
  data->localData[0]->realVars[813] /* pwLine8.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[16];
  data->localData[0]->realVars[741] /* pwLine13.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[17];
  data->localData[0]->realVars[756] /* pwLine15.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[18];
  data->localData[0]->realVars[317] /* Bus_13.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[19];
  data->localData[0]->realVars[755] /* pwLine15.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[20];
  data->localData[0]->realVars[316] /* Bus_13.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[21];
  data->localData[0]->realVars[734] /* pwLine12.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[22];
  data->localData[0]->realVars[726] /* pwLine11.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[23];
  data->localData[0]->realVars[308] /* Bus_12.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[24];
  data->localData[0]->realVars[725] /* pwLine11.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[25];
  data->localData[0]->realVars[731] /* pwLine12.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[26];
  data->localData[0]->realVars[732] /* pwLine12.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[27];
  data->localData[0]->realVars[724] /* pwLine11.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[28];
  data->localData[0]->realVars[265] /* Bus_06.n[1].ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[29];
  data->localData[0]->realVars[757] /* pwLine15.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[30];
  data->localData[0]->realVars[264] /* Bus_06.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[31];
  data->localData[0]->realVars[822] /* pwLine9.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[32];
  data->localData[0]->realVars[821] /* pwLine9.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[33];
  data->localData[0]->realVars[302] /* Bus_11.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[34];
  data->localData[0]->realVars[717] /* pwLine10.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[35];
  data->localData[0]->realVars[820] /* pwLine9.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[36];
  data->localData[0]->realVars[303] /* Bus_11.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[37];
  data->localData[0]->realVars[716] /* pwLine10.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[38];
  data->localData[0]->realVars[299] /* Bus_10.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[39];
  data->localData[0]->realVars[803] /* pwLine7.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[40];
  data->localData[0]->realVars[298] /* Bus_10.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[41];
  data->localData[0]->realVars[749] /* pwLine14.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[42];
  data->localData[0]->realVars[805] /* pwLine7.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[43];
  data->localData[0]->realVars[750] /* pwLine14.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[44];
  data->localData[0]->realVars[806] /* pwLine7.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[45];
  data->localData[0]->realVars[291] /* Bus_09.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[46];
  data->localData[0]->realVars[290] /* Bus_09.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[47];
  data->localData[0]->realVars[788] /* pwLine5.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[48];
  data->localData[0]->realVars[245] /* Bus_04.n[2].ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[49];
  data->localData[0]->realVars[244] /* Bus_04.n[2].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[50];
  data->localData[0]->realVars[236] /* Bus_03.n[1].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[51];
  data->localData[0]->realVars[797] /* pwLine6.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[52];
  data->localData[0]->realVars[237] /* Bus_03.n[1].ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[53];
  data->localData[0]->realVars[798] /* pwLine6.is.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[54];
  data->localData[0]->realVars[796] /* pwLine6.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[55];
  data->localData[0]->realVars[771] /* pwLine3.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[56];
  data->localData[0]->realVars[772] /* pwLine3.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[57];
  data->localData[0]->realVars[708] /* pwLine1.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[58];
  data->localData[0]->realVars[707] /* pwLine1.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[59];
  data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[60];
  data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[61];
  data->localData[0]->realVars[250] /* Bus_04.p[3].ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[62];
  data->localData[0]->realVars[288] /* Bus_09.n[2].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[63];
  data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[64];
  data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[65];
  data->localData[0]->realVars[258] /* Bus_05.p[2].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[66];
  data->localData[0]->realVars[266] /* Bus_06.p[1].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[67];
  data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[68];
  data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[69];
  data->localData[0]->realVars[249] /* Bus_04.p[2].ir variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[70];
  data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[71];
  data->localData[0]->realVars[747] /* pwLine14.ir.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[72];
  data->localData[0]->realVars[748] /* pwLine14.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[73];
  data->localData[0]->realVars[276] /* Bus_07.p[1].ii variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[74];
  data->localData[0]->realVars[700] /* pwLine.ir.re variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[75];
  data->localData[0]->realVars[709] /* pwLine1.is.im variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[76];
  data->localData[0]->realVars[278] /* Bus_07.p[2].vi variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[77];
  data->localData[0]->realVars[676] /* gen_Bus_8_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[78];
  data->localData[0]->realVars[677] /* gen_Bus_8_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[79];
  data->localData[0]->realVars[641] /* gen_Bus_6_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[80];
  data->localData[0]->realVars[642] /* gen_Bus_6_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[81];
  data->localData[0]->realVars[607] /* gen_Bus_3_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[82];
  data->localData[0]->realVars[606] /* gen_Bus_3_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[83];
  data->localData[0]->realVars[408] /* gen_Bus_1_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[84];
  data->localData[0]->realVars[407] /* gen_Bus_1_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[85];
  data->localData[0]->realVars[507] /* gen_Bus_2_1.gENROU.id variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[86];
  data->localData[0]->realVars[508] /* gen_Bus_2_1.gENROU.iq variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[87];
  data->localData[0]->realVars[341] /* LOAD_04.v variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[88];
  data->localData[0]->realVars[359] /* LOAD_09.v variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[89];
  data->localData[0]->realVars[353] /* LOAD_06.v variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[90];
  data->localData[0]->realVars[389] /* LOAD_14.v variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[91];
  data->localData[0]->realVars[329] /* LOAD_02.v variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[92];
  data->localData[0]->realVars[335] /* LOAD_03.v variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[93];
  data->localData[0]->realVars[347] /* LOAD_05.v variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[94];
  data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[95];
  data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[96];
  data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[97];
  data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[98];
  data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[99];
  data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[100];
  data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[101];
  data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[102];
  TRACE_POP
}
/*
equation index: 2508
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.XaqIlq = gen_Bus_1_1.gENROU.K1q * (gen_Bus_1_1.gENROU.Epd + (gen_Bus_1_1.gENROU.Xpq - gen_Bus_1_1.gENROU.Xl) * gen_Bus_1_1.gENROU.iq - gen_Bus_1_1.gENROU.PSIkq) + gen_Bus_1_1.gENROU.Epd + gen_Bus_1_1.gENROU.iq * (gen_Bus_1_1.gENROU.Xpq - gen_Bus_1_1.gENROU.Xq) + $cse6 * gen_Bus_1_1.gENROU.PSIppq * (gen_Bus_1_1.gENROU.Xq - gen_Bus_1_1.gENROU.Xl) / (gen_Bus_1_1.gENROU.Xd - gen_Bus_1_1.gENROU.Xl)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2508};
  data->localData[0]->realVars[404] /* gen_Bus_1_1.gENROU.XaqIlq variable */ = (data->simulationInfo->realParameter[572] /* gen_Bus_1_1.gENROU.K1q PARAM */) * (data->localData[0]->realVars[0] /* gen_Bus_1_1.gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[613] /* gen_Bus_1_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[608] /* gen_Bus_1_1.gENROU.Xl PARAM */) * (data->localData[0]->realVars[408] /* gen_Bus_1_1.gENROU.iq variable */) - data->localData[0]->realVars[3] /* gen_Bus_1_1.gENROU.PSIkq STATE(1) */) + data->localData[0]->realVars[0] /* gen_Bus_1_1.gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[408] /* gen_Bus_1_1.gENROU.iq variable */) * (data->simulationInfo->realParameter[613] /* gen_Bus_1_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[614] /* gen_Bus_1_1.gENROU.Xq PARAM */) + (data->localData[0]->realVars[216] /* $cse6 variable */) * ((data->localData[0]->realVars[400] /* gen_Bus_1_1.gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[614] /* gen_Bus_1_1.gENROU.Xq PARAM */ - data->simulationInfo->realParameter[608] /* gen_Bus_1_1.gENROU.Xl PARAM */,data->simulationInfo->realParameter[607] /* gen_Bus_1_1.gENROU.Xd PARAM */ - data->simulationInfo->realParameter[608] /* gen_Bus_1_1.gENROU.Xl PARAM */,"gen_Bus_1_1.gENROU.Xd - gen_Bus_1_1.gENROU.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2509
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.gENROU.Epd = (-gen_Bus_1_1.gENROU.XaqIlq) / gen_Bus_1_1.gENROU.Tpq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2509};
  data->localData[0]->realVars[102] /* der(gen_Bus_1_1.gENROU.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[404] /* gen_Bus_1_1.gENROU.XaqIlq variable */),data->simulationInfo->realParameter[602] /* gen_Bus_1_1.gENROU.Tpq0 PARAM */,"gen_Bus_1_1.gENROU.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2510
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.gENROU.PSIkq = (gen_Bus_1_1.gENROU.Epd + (gen_Bus_1_1.gENROU.Xpq - gen_Bus_1_1.gENROU.Xl) * gen_Bus_1_1.gENROU.iq - gen_Bus_1_1.gENROU.PSIkq) / gen_Bus_1_1.gENROU.Tppq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2510};
  data->localData[0]->realVars[105] /* der(gen_Bus_1_1.gENROU.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[0] /* gen_Bus_1_1.gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[613] /* gen_Bus_1_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[608] /* gen_Bus_1_1.gENROU.Xl PARAM */) * (data->localData[0]->realVars[408] /* gen_Bus_1_1.gENROU.iq variable */) - data->localData[0]->realVars[3] /* gen_Bus_1_1.gENROU.PSIkq STATE(1) */,data->simulationInfo->realParameter[601] /* gen_Bus_1_1.gENROU.Tppq0 PARAM */,"gen_Bus_1_1.gENROU.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2511
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.XaqIlq = gen_Bus_3_1.gENROU.K1q * (gen_Bus_3_1.gENROU.Epd + (gen_Bus_3_1.gENROU.Xpq - gen_Bus_3_1.gENROU.Xl) * gen_Bus_3_1.gENROU.iq - gen_Bus_3_1.gENROU.PSIkq) + gen_Bus_3_1.gENROU.Epd + gen_Bus_3_1.gENROU.iq * (gen_Bus_3_1.gENROU.Xpq - gen_Bus_3_1.gENROU.Xq) + $cse15 * gen_Bus_3_1.gENROU.PSIppq * (gen_Bus_3_1.gENROU.Xq - gen_Bus_3_1.gENROU.Xl) / (gen_Bus_3_1.gENROU.Xd - gen_Bus_3_1.gENROU.Xl)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2511};
  data->localData[0]->realVars[603] /* gen_Bus_3_1.gENROU.XaqIlq variable */ = (data->simulationInfo->realParameter[1642] /* gen_Bus_3_1.gENROU.K1q PARAM */) * (data->localData[0]->realVars[72] /* gen_Bus_3_1.gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[1684] /* gen_Bus_3_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[1679] /* gen_Bus_3_1.gENROU.Xl PARAM */) * (data->localData[0]->realVars[607] /* gen_Bus_3_1.gENROU.iq variable */) - data->localData[0]->realVars[75] /* gen_Bus_3_1.gENROU.PSIkq STATE(1) */) + data->localData[0]->realVars[72] /* gen_Bus_3_1.gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[607] /* gen_Bus_3_1.gENROU.iq variable */) * (data->simulationInfo->realParameter[1684] /* gen_Bus_3_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[1685] /* gen_Bus_3_1.gENROU.Xq PARAM */) + (data->localData[0]->realVars[210] /* $cse15 variable */) * ((data->localData[0]->realVars[599] /* gen_Bus_3_1.gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[1685] /* gen_Bus_3_1.gENROU.Xq PARAM */ - data->simulationInfo->realParameter[1679] /* gen_Bus_3_1.gENROU.Xl PARAM */,data->simulationInfo->realParameter[1678] /* gen_Bus_3_1.gENROU.Xd PARAM */ - data->simulationInfo->realParameter[1679] /* gen_Bus_3_1.gENROU.Xl PARAM */,"gen_Bus_3_1.gENROU.Xd - gen_Bus_3_1.gENROU.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2512
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.gENROU.Epd = (-gen_Bus_3_1.gENROU.XaqIlq) / gen_Bus_3_1.gENROU.Tpq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2512};
  data->localData[0]->realVars[174] /* der(gen_Bus_3_1.gENROU.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[603] /* gen_Bus_3_1.gENROU.XaqIlq variable */),data->simulationInfo->realParameter[1673] /* gen_Bus_3_1.gENROU.Tpq0 PARAM */,"gen_Bus_3_1.gENROU.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2513
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.gENROU.PSIkq = (gen_Bus_3_1.gENROU.Epd + (gen_Bus_3_1.gENROU.Xpq - gen_Bus_3_1.gENROU.Xl) * gen_Bus_3_1.gENROU.iq - gen_Bus_3_1.gENROU.PSIkq) / gen_Bus_3_1.gENROU.Tppq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2513};
  data->localData[0]->realVars[177] /* der(gen_Bus_3_1.gENROU.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[72] /* gen_Bus_3_1.gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[1684] /* gen_Bus_3_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[1679] /* gen_Bus_3_1.gENROU.Xl PARAM */) * (data->localData[0]->realVars[607] /* gen_Bus_3_1.gENROU.iq variable */) - data->localData[0]->realVars[75] /* gen_Bus_3_1.gENROU.PSIkq STATE(1) */,data->simulationInfo->realParameter[1672] /* gen_Bus_3_1.gENROU.Tppq0 PARAM */,"gen_Bus_3_1.gENROU.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2514
type: SIMPLE_ASSIGN
Bus_04.V = LOAD_04.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2514};
  data->localData[0]->realVars[242] /* Bus_04.V variable */ = data->localData[0]->realVars[341] /* LOAD_04.v variable */;
  TRACE_POP
}
/*
equation index: 2515
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.ISORCE = gen_Bus_8_1.gENROU.K1d * (gen_Bus_8_1.gENROU.Epq + (gen_Bus_8_1.gENROU.Xl - gen_Bus_8_1.gENROU.Xpd) * gen_Bus_8_1.gENROU.id - gen_Bus_8_1.gENROU.PSIkd) + gen_Bus_8_1.gENROU.Epq + gen_Bus_8_1.gENROU.id * (gen_Bus_8_1.gENROU.Xd - gen_Bus_8_1.gENROU.Xpd) + $cse9 * gen_Bus_8_1.gENROU.PSIppd
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2515};
  data->localData[0]->realVars[663] /* gen_Bus_8_1.gENROU.ISORCE variable */ = (data->simulationInfo->realParameter[1973] /* gen_Bus_8_1.gENROU.K1d PARAM */) * (data->localData[0]->realVars[93] /* gen_Bus_8_1.gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[2011] /* gen_Bus_8_1.gENROU.Xl PARAM */ - data->simulationInfo->realParameter[2012] /* gen_Bus_8_1.gENROU.Xpd PARAM */) * (data->localData[0]->realVars[676] /* gen_Bus_8_1.gENROU.id variable */) - data->localData[0]->realVars[94] /* gen_Bus_8_1.gENROU.PSIkd STATE(1) */) + data->localData[0]->realVars[93] /* gen_Bus_8_1.gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[676] /* gen_Bus_8_1.gENROU.id variable */) * (data->simulationInfo->realParameter[2010] /* gen_Bus_8_1.gENROU.Xd PARAM */ - data->simulationInfo->realParameter[2012] /* gen_Bus_8_1.gENROU.Xpd PARAM */) + (data->localData[0]->realVars[219] /* $cse9 variable */) * (data->localData[0]->realVars[668] /* gen_Bus_8_1.gENROU.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 2516
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.gENROU.Epq = (gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_8_1.gENROU.ISORCE) / gen_Bus_8_1.gENROU.Tpd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2516};
  data->localData[0]->realVars[195] /* der(gen_Bus_8_1.gENROU.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[100] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[663] /* gen_Bus_8_1.gENROU.ISORCE variable */,data->simulationInfo->realParameter[2002] /* gen_Bus_8_1.gENROU.Tpd0 PARAM */,"gen_Bus_8_1.gENROU.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2517
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.gENROU.PSIkd = (gen_Bus_8_1.gENROU.Epq + (gen_Bus_8_1.gENROU.Xl - gen_Bus_8_1.gENROU.Xpd) * gen_Bus_8_1.gENROU.id - gen_Bus_8_1.gENROU.PSIkd) / gen_Bus_8_1.gENROU.Tppd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2517};
  data->localData[0]->realVars[196] /* der(gen_Bus_8_1.gENROU.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[93] /* gen_Bus_8_1.gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[2011] /* gen_Bus_8_1.gENROU.Xl PARAM */ - data->simulationInfo->realParameter[2012] /* gen_Bus_8_1.gENROU.Xpd PARAM */) * (data->localData[0]->realVars[676] /* gen_Bus_8_1.gENROU.id variable */) - data->localData[0]->realVars[94] /* gen_Bus_8_1.gENROU.PSIkd STATE(1) */,data->simulationInfo->realParameter[2003] /* gen_Bus_8_1.gENROU.Tppd0 PARAM */,"gen_Bus_8_1.gENROU.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2518
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.I = sqrt(Bus_08.p[1].ii ^ 2.0 + Bus_08.p[1].ir ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2518};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[282] /* Bus_08.p[1].ii variable */;
  tmp1 = data->localData[0]->realVars[283] /* Bus_08.p[1].ir variable */;
  data->localData[0]->realVars[662] /* gen_Bus_8_1.gENROU.I variable */ = sqrt((tmp0 * tmp0) + (tmp1 * tmp1));
  TRACE_POP
}
/*
equation index: 2519
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.anglei = atan2(-Bus_08.p[1].ii, -Bus_08.p[1].ir)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2519};
  data->localData[0]->realVars[674] /* gen_Bus_8_1.gENROU.anglei variable */ = atan2((-data->localData[0]->realVars[282] /* Bus_08.p[1].ii variable */), (-data->localData[0]->realVars[283] /* Bus_08.p[1].ir variable */));
  TRACE_POP
}
/*
equation index: 2520
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.XaqIlq = gen_Bus_8_1.gENROU.K1q * (gen_Bus_8_1.gENROU.Epd + (gen_Bus_8_1.gENROU.Xpq - gen_Bus_8_1.gENROU.Xl) * gen_Bus_8_1.gENROU.iq - gen_Bus_8_1.gENROU.PSIkq) + gen_Bus_8_1.gENROU.Epd + gen_Bus_8_1.gENROU.iq * (gen_Bus_8_1.gENROU.Xpq - gen_Bus_8_1.gENROU.Xq) + $cse9 * gen_Bus_8_1.gENROU.PSIppq * (gen_Bus_8_1.gENROU.Xq - gen_Bus_8_1.gENROU.Xl) / (gen_Bus_8_1.gENROU.Xd - gen_Bus_8_1.gENROU.Xl)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2520};
  data->localData[0]->realVars[673] /* gen_Bus_8_1.gENROU.XaqIlq variable */ = (data->simulationInfo->realParameter[1974] /* gen_Bus_8_1.gENROU.K1q PARAM */) * (data->localData[0]->realVars[92] /* gen_Bus_8_1.gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[2016] /* gen_Bus_8_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[2011] /* gen_Bus_8_1.gENROU.Xl PARAM */) * (data->localData[0]->realVars[677] /* gen_Bus_8_1.gENROU.iq variable */) - data->localData[0]->realVars[95] /* gen_Bus_8_1.gENROU.PSIkq STATE(1) */) + data->localData[0]->realVars[92] /* gen_Bus_8_1.gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[677] /* gen_Bus_8_1.gENROU.iq variable */) * (data->simulationInfo->realParameter[2016] /* gen_Bus_8_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[2017] /* gen_Bus_8_1.gENROU.Xq PARAM */) + (data->localData[0]->realVars[219] /* $cse9 variable */) * ((data->localData[0]->realVars[669] /* gen_Bus_8_1.gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[2017] /* gen_Bus_8_1.gENROU.Xq PARAM */ - data->simulationInfo->realParameter[2011] /* gen_Bus_8_1.gENROU.Xl PARAM */,data->simulationInfo->realParameter[2010] /* gen_Bus_8_1.gENROU.Xd PARAM */ - data->simulationInfo->realParameter[2011] /* gen_Bus_8_1.gENROU.Xl PARAM */,"gen_Bus_8_1.gENROU.Xd - gen_Bus_8_1.gENROU.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2521
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.gENROU.Epd = (-gen_Bus_8_1.gENROU.XaqIlq) / gen_Bus_8_1.gENROU.Tpq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2521};
  data->localData[0]->realVars[194] /* der(gen_Bus_8_1.gENROU.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[673] /* gen_Bus_8_1.gENROU.XaqIlq variable */),data->simulationInfo->realParameter[2005] /* gen_Bus_8_1.gENROU.Tpq0 PARAM */,"gen_Bus_8_1.gENROU.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2522
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.gENROU.PSIkq = (gen_Bus_8_1.gENROU.Epd + (gen_Bus_8_1.gENROU.Xpq - gen_Bus_8_1.gENROU.Xl) * gen_Bus_8_1.gENROU.iq - gen_Bus_8_1.gENROU.PSIkq) / gen_Bus_8_1.gENROU.Tppq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2522};
  data->localData[0]->realVars[197] /* der(gen_Bus_8_1.gENROU.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[92] /* gen_Bus_8_1.gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[2016] /* gen_Bus_8_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[2011] /* gen_Bus_8_1.gENROU.Xl PARAM */) * (data->localData[0]->realVars[677] /* gen_Bus_8_1.gENROU.iq variable */) - data->localData[0]->realVars[95] /* gen_Bus_8_1.gENROU.PSIkq STATE(1) */,data->simulationInfo->realParameter[2004] /* gen_Bus_8_1.gENROU.Tppq0 PARAM */,"gen_Bus_8_1.gENROU.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2523
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.Te = gen_Bus_8_1.gENROU.PSId * gen_Bus_8_1.gENROU.iq - gen_Bus_8_1.gENROU.PSIq * gen_Bus_8_1.gENROU.id
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2523};
  data->localData[0]->realVars[672] /* gen_Bus_8_1.gENROU.Te variable */ = (data->localData[0]->realVars[666] /* gen_Bus_8_1.gENROU.PSId variable */) * (data->localData[0]->realVars[677] /* gen_Bus_8_1.gENROU.iq variable */) - ((data->localData[0]->realVars[670] /* gen_Bus_8_1.gENROU.PSIq variable */) * (data->localData[0]->realVars[676] /* gen_Bus_8_1.gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 2524
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.gENROU.w = 0.5 * ((gen_Bus_8_1.gENROU.pm0 - gen_Bus_8_1.gENROU.D * gen_Bus_8_1.gENROU.w) / (1.0 + gen_Bus_8_1.gENROU.w) - gen_Bus_8_1.gENROU.Te) / gen_Bus_8_1.gENROU.H
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2524};
  data->localData[0]->realVars[199] /* der(gen_Bus_8_1.gENROU.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[2038] /* gen_Bus_8_1.gENROU.pm0 PARAM */ - ((data->simulationInfo->realParameter[1960] /* gen_Bus_8_1.gENROU.D PARAM */) * (data->localData[0]->realVars[97] /* gen_Bus_8_1.gENROU.w STATE(1) */)),1.0 + data->localData[0]->realVars[97] /* gen_Bus_8_1.gENROU.w STATE(1) */,"1.0 + gen_Bus_8_1.gENROU.w",equationIndexes) - data->localData[0]->realVars[672] /* gen_Bus_8_1.gENROU.Te variable */,data->simulationInfo->realParameter[1966] /* gen_Bus_8_1.gENROU.H PARAM */,"gen_Bus_8_1.gENROU.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 2525
type: SIMPLE_ASSIGN
gen_Bus_8_1.Q = (Bus_08.p[1].vi * Bus_08.p[1].ir - Bus_08.p[1].vr * Bus_08.p[1].ii) * gen_Bus_8_1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2525};
  data->localData[0]->realVars[661] /* gen_Bus_8_1.Q variable */ = ((data->localData[0]->realVars[284] /* Bus_08.p[1].vi variable */) * (data->localData[0]->realVars[283] /* Bus_08.p[1].ir variable */) - ((data->localData[0]->realVars[285] /* Bus_08.p[1].vr variable */) * (data->localData[0]->realVars[282] /* Bus_08.p[1].ii variable */))) * (data->simulationInfo->realParameter[1952] /* gen_Bus_8_1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2526
type: SIMPLE_ASSIGN
gen_Bus_8_1.P = (Bus_08.p[1].vi * Bus_08.p[1].ii + Bus_08.p[1].vr * Bus_08.p[1].ir) * gen_Bus_8_1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2526};
  data->localData[0]->realVars[660] /* gen_Bus_8_1.P variable */ = ((data->localData[0]->realVars[284] /* Bus_08.p[1].vi variable */) * (data->localData[0]->realVars[282] /* Bus_08.p[1].ii variable */) + (data->localData[0]->realVars[285] /* Bus_08.p[1].vr variable */) * (data->localData[0]->realVars[283] /* Bus_08.p[1].ir variable */)) * (data->simulationInfo->realParameter[1952] /* gen_Bus_8_1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2527
type: SIMPLE_ASSIGN
Bus_08.V = sqrt(Bus_08.p[1].vr ^ 2.0 + Bus_08.p[1].vi ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2527};
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = data->localData[0]->realVars[285] /* Bus_08.p[1].vr variable */;
  tmp3 = data->localData[0]->realVars[284] /* Bus_08.p[1].vi variable */;
  data->localData[0]->realVars[280] /* Bus_08.V variable */ = sqrt((tmp2 * tmp2) + (tmp3 * tmp3));
  TRACE_POP
}
/*
equation index: 2528
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.DiffV.u2 = if abs(gen_Bus_8_1.iEEET1_1.TransducerDelay.T) <= 1e-015 then Bus_08.V * gen_Bus_8_1.iEEET1_1.TransducerDelay.K else gen_Bus_8_1.iEEET1_1.TransducerDelay.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2528};
  modelica_boolean tmp4;
  tmp4 = LessEq(fabs(data->simulationInfo->realParameter[2068] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.T PARAM */),1e-015);
  data->localData[0]->realVars[680] /* gen_Bus_8_1.iEEET1_1.DiffV.u2 variable */ = (tmp4?(data->localData[0]->realVars[280] /* Bus_08.V variable */) * (data->simulationInfo->realParameter[2067] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.K PARAM */):data->localData[0]->realVars[98] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2529
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.DiffV.y = gen_Bus_8_1.iEEET1_1.DiffV.k1 * gen_Bus_8_1.iEEET1_1.VoltageReference.k + gen_Bus_8_1.iEEET1_1.DiffV.k2 * gen_Bus_8_1.iEEET1_1.DiffV.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2529};
  data->localData[0]->realVars[681] /* gen_Bus_8_1.iEEET1_1.DiffV.y variable */ = (data->simulationInfo->realParameter[2045] /* gen_Bus_8_1.iEEET1_1.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[2081] /* gen_Bus_8_1.iEEET1_1.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[2046] /* gen_Bus_8_1.iEEET1_1.DiffV.k2 PARAM */) * (data->localData[0]->realVars[680] /* gen_Bus_8_1.iEEET1_1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 2530
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.sum2.y = gen_Bus_8_1.iEEET1_1.sum2.k1 * gen_Bus_8_1.const.k + gen_Bus_8_1.iEEET1_1.sum2.k2 * gen_Bus_8_1.iEEET1_1.DiffV.y + gen_Bus_8_1.iEEET1_1.sum2.k3 * gen_Bus_8_1.iEEET1_1.DiffV1.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2530};
  data->localData[0]->realVars[694] /* gen_Bus_8_1.iEEET1_1.sum2.y variable */ = (data->simulationInfo->realParameter[2110] /* gen_Bus_8_1.iEEET1_1.sum2.k1 PARAM */) * (data->simulationInfo->realParameter[1956] /* gen_Bus_8_1.const.k PARAM */) + (data->simulationInfo->realParameter[2111] /* gen_Bus_8_1.iEEET1_1.sum2.k2 PARAM */) * (data->localData[0]->realVars[681] /* gen_Bus_8_1.iEEET1_1.DiffV.y variable */) + (data->simulationInfo->realParameter[2112] /* gen_Bus_8_1.iEEET1_1.sum2.k3 PARAM */) * (data->localData[0]->realVars[682] /* gen_Bus_8_1.iEEET1_1.DiffV1.y variable */);
  TRACE_POP
}
/*
equation index: 2531
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.simpleLagLim.u = gen_Bus_8_1.iEEET1_1.sum3.k1 * gen_Bus_8_1.iEEET1_1.sum2.y + gen_Bus_8_1.iEEET1_1.sum3.k2 * gen_Bus_8_1.iEEET1_1.derivativeLag.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2531};
  data->localData[0]->realVars[693] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.u variable */ = (data->simulationInfo->realParameter[2114] /* gen_Bus_8_1.iEEET1_1.sum3.k1 PARAM */) * (data->localData[0]->realVars[694] /* gen_Bus_8_1.iEEET1_1.sum2.y variable */) + (data->simulationInfo->realParameter[2115] /* gen_Bus_8_1.iEEET1_1.sum3.k2 PARAM */) * (data->localData[0]->realVars[685] /* gen_Bus_8_1.iEEET1_1.derivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 2532
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.I_C = if abs(gen_Bus_8_1.iEEET1_1.simpleLagLim.T) <= 1e-015 then max(min(gen_Bus_8_1.iEEET1_1.simpleLagLim.u * gen_Bus_8_1.iEEET1_1.simpleLagLim.K, gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax), gen_Bus_8_1.iEEET1_1.simpleLagLim.outMin) else max(min(gen_Bus_8_1.iEEET1_1.simpleLagLim.state, gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax), gen_Bus_8_1.iEEET1_1.simpleLagLim.outMin)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2532};
  modelica_boolean tmp5;
  tmp5 = LessEq(fabs(data->simulationInfo->realParameter[2104] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.T PARAM */),1e-015);
  data->localData[0]->realVars[686] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.I_C variable */ = (tmp5?fmax(fmin((data->localData[0]->realVars[693] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.u variable */) * (data->simulationInfo->realParameter[2103] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[2107] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[2108] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[2107] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[2108] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 2533
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.rotatingExciter.feedback.y = gen_Bus_8_1.iEEET1_1.rotatingExciter.I_C - gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2533};
  data->localData[0]->realVars[691] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.feedback.y variable */ = data->localData[0]->realVars[686] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.I_C variable */ - data->localData[0]->realVars[689] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.Sum.y variable */;
  TRACE_POP
}
/*
equation index: 2534
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.k * gen_Bus_8_1.iEEET1_1.rotatingExciter.feedback.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2534};
  data->localData[0]->realVars[202] /* der(gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.y) STATE_DER */ = (data->simulationInfo->realParameter[2097] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.sISO.k PARAM */) * (data->localData[0]->realVars[691] /* gen_Bus_8_1.iEEET1_1.rotatingExciter.feedback.y variable */);
  TRACE_POP
}
/*
equation index: 2535
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.iEEET1_1.simpleLagLim.state = (gen_Bus_8_1.iEEET1_1.simpleLagLim.K * gen_Bus_8_1.iEEET1_1.simpleLagLim.u - gen_Bus_8_1.iEEET1_1.simpleLagLim.state) / gen_Bus_8_1.iEEET1_1.simpleLagLim.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2535};
  data->localData[0]->realVars[203] /* der(gen_Bus_8_1.iEEET1_1.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[2103] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[693] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[2105] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.T_mod PARAM */,"gen_Bus_8_1.iEEET1_1.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2536
type: SIMPLE_ASSIGN
$whenCondition6 = gen_Bus_8_1.iEEET1_1.simpleLagLim.state > gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax and gen_Bus_8_1.iEEET1_1.simpleLagLim.K * gen_Bus_8_1.iEEET1_1.simpleLagLim.u - gen_Bus_8_1.iEEET1_1.simpleLagLim.state < 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2536};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[2107] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax PARAM */, 112, Greater);
  RELATIONHYSTERESIS(tmp7, (data->simulationInfo->realParameter[2103] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[693] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, 113, Less);
  data->localData[0]->booleanVars[10] /* $whenCondition6 DISCRETE */ = (tmp6 && tmp7);
  TRACE_POP
}
/*
equation index: 2537
type: SIMPLE_ASSIGN
$whenCondition5 = gen_Bus_8_1.iEEET1_1.simpleLagLim.state < gen_Bus_8_1.iEEET1_1.simpleLagLim.outMin and gen_Bus_8_1.iEEET1_1.simpleLagLim.K * gen_Bus_8_1.iEEET1_1.simpleLagLim.u - gen_Bus_8_1.iEEET1_1.simpleLagLim.state > 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2537};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[2108] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMin PARAM */, 114, Less);
  RELATIONHYSTERESIS(tmp9, (data->simulationInfo->realParameter[2103] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[693] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, 115, Greater);
  data->localData[0]->booleanVars[9] /* $whenCondition5 DISCRETE */ = (tmp8 && tmp9);
  TRACE_POP
}
/*
equation index: 2538
type: SIMPLE_ASSIGN
$DER.gen_Bus_8_1.iEEET1_1.TransducerDelay.state = (gen_Bus_8_1.iEEET1_1.TransducerDelay.K * Bus_08.V - gen_Bus_8_1.iEEET1_1.TransducerDelay.state) / gen_Bus_8_1.iEEET1_1.TransducerDelay.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2538};
  data->localData[0]->realVars[200] /* der(gen_Bus_8_1.iEEET1_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[2067] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[280] /* Bus_08.V variable */) - data->localData[0]->realVars[98] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[2069] /* gen_Bus_8_1.iEEET1_1.TransducerDelay.T_mod PARAM */,"gen_Bus_8_1.iEEET1_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2539
type: SIMPLE_ASSIGN
gen_Bus_8_1.iEEET1_1.ECOMP = Bus_08.V
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2539};
  data->localData[0]->realVars[683] /* gen_Bus_8_1.iEEET1_1.ECOMP variable */ = data->localData[0]->realVars[280] /* Bus_08.V variable */;
  TRACE_POP
}
/*
equation index: 2540
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.Q = Bus_08.p[1].vi * Bus_08.p[1].ir - Bus_08.p[1].vr * Bus_08.p[1].ii
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2540};
  data->localData[0]->realVars[671] /* gen_Bus_8_1.gENROU.Q variable */ = (data->localData[0]->realVars[284] /* Bus_08.p[1].vi variable */) * (data->localData[0]->realVars[283] /* Bus_08.p[1].ir variable */) - ((data->localData[0]->realVars[285] /* Bus_08.p[1].vr variable */) * (data->localData[0]->realVars[282] /* Bus_08.p[1].ii variable */));
  TRACE_POP
}
/*
equation index: 2541
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.P = Bus_08.p[1].vi * Bus_08.p[1].ii + Bus_08.p[1].vr * Bus_08.p[1].ir
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2541};
  data->localData[0]->realVars[664] /* gen_Bus_8_1.gENROU.P variable */ = (data->localData[0]->realVars[284] /* Bus_08.p[1].vi variable */) * (data->localData[0]->realVars[282] /* Bus_08.p[1].ii variable */) + (data->localData[0]->realVars[285] /* Bus_08.p[1].vr variable */) * (data->localData[0]->realVars[283] /* Bus_08.p[1].ir variable */);
  TRACE_POP
}
/*
equation index: 2542
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.PELEC = gen_Bus_8_1.gENROU.P / gen_Bus_8_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2542};
  data->localData[0]->realVars[665] /* gen_Bus_8_1.gENROU.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[664] /* gen_Bus_8_1.gENROU.P variable */,data->simulationInfo->realParameter[1959] /* gen_Bus_8_1.gENROU.CoB PARAM */,"gen_Bus_8_1.gENROU.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 2543
type: SIMPLE_ASSIGN
gen_Bus_8_1.gENROU.anglev = atan2(Bus_08.p[1].vi, Bus_08.p[1].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2543};
  data->localData[0]->realVars[675] /* gen_Bus_8_1.gENROU.anglev variable */ = atan2(data->localData[0]->realVars[284] /* Bus_08.p[1].vi variable */, data->localData[0]->realVars[285] /* Bus_08.p[1].vr variable */);
  TRACE_POP
}
/*
equation index: 2544
type: SIMPLE_ASSIGN
Bus_08.angle = 57.29577951308232 * gen_Bus_8_1.gENROU.anglev
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2544};
  data->localData[0]->realVars[281] /* Bus_08.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[675] /* gen_Bus_8_1.gENROU.anglev variable */);
  TRACE_POP
}
/*
equation index: 2545
type: SIMPLE_ASSIGN
pwLine14.Q21 = (Bus_07.p[2].vr * pwLine14.ir.im - Bus_07.p[2].vi * pwLine14.ir.re) * pwLine14.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2545};
  data->localData[0]->realVars[746] /* pwLine14.Q21 variable */ = ((data->localData[0]->realVars[279] /* Bus_07.p[2].vr variable */) * (data->localData[0]->realVars[747] /* pwLine14.ir.im variable */) - ((data->localData[0]->realVars[278] /* Bus_07.p[2].vi variable */) * (data->localData[0]->realVars[748] /* pwLine14.ir.re variable */))) * (data->simulationInfo->realParameter[2257] /* pwLine14.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2546
type: SIMPLE_ASSIGN
pwLine14.P21 = ((-Bus_07.p[2].vr) * pwLine14.ir.re - Bus_07.p[2].vi * pwLine14.ir.im) * pwLine14.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2546};
  data->localData[0]->realVars[744] /* pwLine14.P21 variable */ = (((-data->localData[0]->realVars[279] /* Bus_07.p[2].vr variable */)) * (data->localData[0]->realVars[748] /* pwLine14.ir.re variable */) - ((data->localData[0]->realVars[278] /* Bus_07.p[2].vi variable */) * (data->localData[0]->realVars[747] /* pwLine14.ir.im variable */))) * (data->simulationInfo->realParameter[2257] /* pwLine14.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2547
type: SIMPLE_ASSIGN
Bus_07.V = sqrt(Bus_07.p[2].vr ^ 2.0 + Bus_07.p[2].vi ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2547};
  modelica_real tmp10;
  modelica_real tmp11;
  tmp10 = data->localData[0]->realVars[279] /* Bus_07.p[2].vr variable */;
  tmp11 = data->localData[0]->realVars[278] /* Bus_07.p[2].vi variable */;
  data->localData[0]->realVars[272] /* Bus_07.V variable */ = sqrt((tmp10 * tmp10) + (tmp11 * tmp11));
  TRACE_POP
}
/*
equation index: 2548
type: SIMPLE_ASSIGN
$cse16 = atan2(Bus_07.p[2].vi, Bus_07.p[2].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2548};
  data->localData[0]->realVars[211] /* $cse16 variable */ = atan2(data->localData[0]->realVars[278] /* Bus_07.p[2].vi variable */, data->localData[0]->realVars[279] /* Bus_07.p[2].vr variable */);
  TRACE_POP
}
/*
equation index: 2549
type: SIMPLE_ASSIGN
Bus_07.angle = 57.29577951308232 * $cse16
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2549};
  data->localData[0]->realVars[273] /* Bus_07.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[211] /* $cse16 variable */);
  TRACE_POP
}
/*
equation index: 2550
type: SIMPLE_ASSIGN
Bus_09.V = LOAD_09.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2550};
  data->localData[0]->realVars[286] /* Bus_09.V variable */ = data->localData[0]->realVars[359] /* LOAD_09.v variable */;
  TRACE_POP
}
/*
equation index: 2551
type: SIMPLE_ASSIGN
shunt1.v = LOAD_09.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2551};
  data->localData[0]->realVars[832] /* shunt1.v variable */ = data->localData[0]->realVars[359] /* LOAD_09.v variable */;
  TRACE_POP
}
/*
equation index: 2552
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.ISORCE = gen_Bus_6_1.gENROU.K1d * (gen_Bus_6_1.gENROU.Epq + (gen_Bus_6_1.gENROU.Xl - gen_Bus_6_1.gENROU.Xpd) * gen_Bus_6_1.gENROU.id - gen_Bus_6_1.gENROU.PSIkd) + gen_Bus_6_1.gENROU.Epq + gen_Bus_6_1.gENROU.id * (gen_Bus_6_1.gENROU.Xd - gen_Bus_6_1.gENROU.Xpd) + $cse12 * gen_Bus_6_1.gENROU.PSIppd
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2552};
  data->localData[0]->realVars[628] /* gen_Bus_6_1.gENROU.ISORCE variable */ = (data->simulationInfo->realParameter[1807] /* gen_Bus_6_1.gENROU.K1d PARAM */) * (data->localData[0]->realVars[83] /* gen_Bus_6_1.gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[1845] /* gen_Bus_6_1.gENROU.Xl PARAM */ - data->simulationInfo->realParameter[1846] /* gen_Bus_6_1.gENROU.Xpd PARAM */) * (data->localData[0]->realVars[641] /* gen_Bus_6_1.gENROU.id variable */) - data->localData[0]->realVars[84] /* gen_Bus_6_1.gENROU.PSIkd STATE(1) */) + data->localData[0]->realVars[83] /* gen_Bus_6_1.gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[641] /* gen_Bus_6_1.gENROU.id variable */) * (data->simulationInfo->realParameter[1844] /* gen_Bus_6_1.gENROU.Xd PARAM */ - data->simulationInfo->realParameter[1846] /* gen_Bus_6_1.gENROU.Xpd PARAM */) + (data->localData[0]->realVars[207] /* $cse12 variable */) * (data->localData[0]->realVars[633] /* gen_Bus_6_1.gENROU.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 2553
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.gENROU.Epq = (gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_6_1.gENROU.ISORCE) / gen_Bus_6_1.gENROU.Tpd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2553};
  data->localData[0]->realVars[185] /* der(gen_Bus_6_1.gENROU.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[90] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[628] /* gen_Bus_6_1.gENROU.ISORCE variable */,data->simulationInfo->realParameter[1836] /* gen_Bus_6_1.gENROU.Tpd0 PARAM */,"gen_Bus_6_1.gENROU.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2554
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.gENROU.PSIkd = (gen_Bus_6_1.gENROU.Epq + (gen_Bus_6_1.gENROU.Xl - gen_Bus_6_1.gENROU.Xpd) * gen_Bus_6_1.gENROU.id - gen_Bus_6_1.gENROU.PSIkd) / gen_Bus_6_1.gENROU.Tppd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2554};
  data->localData[0]->realVars[186] /* der(gen_Bus_6_1.gENROU.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[83] /* gen_Bus_6_1.gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[1845] /* gen_Bus_6_1.gENROU.Xl PARAM */ - data->simulationInfo->realParameter[1846] /* gen_Bus_6_1.gENROU.Xpd PARAM */) * (data->localData[0]->realVars[641] /* gen_Bus_6_1.gENROU.id variable */) - data->localData[0]->realVars[84] /* gen_Bus_6_1.gENROU.PSIkd STATE(1) */,data->simulationInfo->realParameter[1837] /* gen_Bus_6_1.gENROU.Tppd0 PARAM */,"gen_Bus_6_1.gENROU.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2555
type: SIMPLE_ASSIGN
Bus_10.V = LOAD_10.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2555};
  data->localData[0]->realVars[294] /* Bus_10.V variable */ = data->localData[0]->realVars[365] /* LOAD_10.v variable */;
  TRACE_POP
}
/*
equation index: 2556
type: SIMPLE_ASSIGN
pwLine10.Q21 = (Bus_10.n[1].vr * pwLine10.ir.im - Bus_10.n[1].vi * pwLine10.ir.re) * pwLine10.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2556};
  data->localData[0]->realVars[714] /* pwLine10.Q21 variable */ = ((data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */) * (data->localData[0]->realVars[715] /* pwLine10.ir.im variable */) - ((data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */) * (data->localData[0]->realVars[716] /* pwLine10.ir.re variable */))) * (data->simulationInfo->realParameter[2213] /* pwLine10.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2557
type: SIMPLE_ASSIGN
pwLine10.P21 = ((-Bus_10.n[1].vr) * pwLine10.ir.re - Bus_10.n[1].vi * pwLine10.ir.im) * pwLine10.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2557};
  data->localData[0]->realVars[712] /* pwLine10.P21 variable */ = (((-data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */)) * (data->localData[0]->realVars[716] /* pwLine10.ir.re variable */) - ((data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */) * (data->localData[0]->realVars[715] /* pwLine10.ir.im variable */))) * (data->simulationInfo->realParameter[2213] /* pwLine10.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2558
type: SIMPLE_ASSIGN
LOAD_10.angle = atan2(Bus_10.n[1].vi, Bus_10.n[1].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2558};
  data->localData[0]->realVars[362] /* LOAD_10.angle variable */ = atan2(data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */, data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */);
  TRACE_POP
}
/*
equation index: 2559
type: SIMPLE_ASSIGN
Bus_10.angle = 57.29577951308232 * LOAD_10.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2559};
  data->localData[0]->realVars[295] /* Bus_10.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[362] /* LOAD_10.angle variable */);
  TRACE_POP
}
/*
equation index: 2560
type: SIMPLE_ASSIGN
pwLine7.Q21 = (Bus_10.n[1].vr * pwLine7.ir.im - Bus_10.n[1].vi * pwLine7.ir.re) * pwLine7.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2560};
  data->localData[0]->realVars[802] /* pwLine7.Q21 variable */ = ((data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */) * (data->localData[0]->realVars[803] /* pwLine7.ir.im variable */) - ((data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */) * (data->localData[0]->realVars[804] /* pwLine7.ir.re variable */))) * (data->simulationInfo->realParameter[2334] /* pwLine7.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2561
type: SIMPLE_ASSIGN
pwLine7.P21 = ((-Bus_10.n[1].vr) * pwLine7.ir.re - Bus_10.n[1].vi * pwLine7.ir.im) * pwLine7.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2561};
  data->localData[0]->realVars[800] /* pwLine7.P21 variable */ = (((-data->localData[0]->realVars[297] /* Bus_10.n[1].vr variable */)) * (data->localData[0]->realVars[804] /* pwLine7.ir.re variable */) - ((data->localData[0]->realVars[296] /* Bus_10.n[1].vi variable */) * (data->localData[0]->realVars[803] /* pwLine7.ir.im variable */))) * (data->simulationInfo->realParameter[2334] /* pwLine7.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2562
type: SIMPLE_ASSIGN
Bus_11.V = LOAD_11.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2562};
  data->localData[0]->realVars[300] /* Bus_11.V variable */ = data->localData[0]->realVars[371] /* LOAD_11.v variable */;
  TRACE_POP
}
/*
equation index: 2563
type: SIMPLE_ASSIGN
LOAD_11.angle = atan2(Bus_11.p[2].vi, Bus_11.p[2].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2563};
  data->localData[0]->realVars[368] /* LOAD_11.angle variable */ = atan2(data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */, data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */);
  TRACE_POP
}
/*
equation index: 2564
type: SIMPLE_ASSIGN
Bus_11.angle = 57.29577951308232 * LOAD_11.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2564};
  data->localData[0]->realVars[301] /* Bus_11.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[368] /* LOAD_11.angle variable */);
  TRACE_POP
}
/*
equation index: 2565
type: SIMPLE_ASSIGN
pwLine10.Q12 = (Bus_11.p[2].vi * pwLine10.is.re - Bus_11.p[2].vr * pwLine10.is.im) * pwLine10.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2565};
  data->localData[0]->realVars[713] /* pwLine10.Q12 variable */ = ((data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */) * (data->localData[0]->realVars[718] /* pwLine10.is.re variable */) - ((data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */) * (data->localData[0]->realVars[717] /* pwLine10.is.im variable */))) * (data->simulationInfo->realParameter[2213] /* pwLine10.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2566
type: SIMPLE_ASSIGN
pwLine10.P12 = (Bus_11.p[2].vr * pwLine10.is.re + Bus_11.p[2].vi * pwLine10.is.im) * pwLine10.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2566};
  data->localData[0]->realVars[711] /* pwLine10.P12 variable */ = ((data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */) * (data->localData[0]->realVars[718] /* pwLine10.is.re variable */) + (data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */) * (data->localData[0]->realVars[717] /* pwLine10.is.im variable */)) * (data->simulationInfo->realParameter[2213] /* pwLine10.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2567
type: SIMPLE_ASSIGN
pwLine9.Q21 = (Bus_11.p[2].vr * pwLine9.ir.im - Bus_11.p[2].vi * pwLine9.ir.re) * pwLine9.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2567};
  data->localData[0]->realVars[818] /* pwLine9.Q21 variable */ = ((data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */) * (data->localData[0]->realVars[819] /* pwLine9.ir.im variable */) - ((data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */) * (data->localData[0]->realVars[820] /* pwLine9.ir.re variable */))) * (data->simulationInfo->realParameter[2356] /* pwLine9.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2568
type: SIMPLE_ASSIGN
pwLine9.P21 = ((-Bus_11.p[2].vr) * pwLine9.ir.re - Bus_11.p[2].vi * pwLine9.ir.im) * pwLine9.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2568};
  data->localData[0]->realVars[816] /* pwLine9.P21 variable */ = (((-data->localData[0]->realVars[305] /* Bus_11.p[2].vr variable */)) * (data->localData[0]->realVars[820] /* pwLine9.ir.re variable */) - ((data->localData[0]->realVars[304] /* Bus_11.p[2].vi variable */) * (data->localData[0]->realVars[819] /* pwLine9.ir.im variable */))) * (data->simulationInfo->realParameter[2356] /* pwLine9.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2569
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.DiffV.u2 = if abs(gen_Bus_6_1.iEEET1_1.TransducerDelay.T) <= 1e-015 then LOAD_06.v * gen_Bus_6_1.iEEET1_1.TransducerDelay.K else gen_Bus_6_1.iEEET1_1.TransducerDelay.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2569};
  modelica_boolean tmp12;
  tmp12 = LessEq(fabs(data->simulationInfo->realParameter[1902] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.T PARAM */),1e-015);
  data->localData[0]->realVars[645] /* gen_Bus_6_1.iEEET1_1.DiffV.u2 variable */ = (tmp12?(data->localData[0]->realVars[353] /* LOAD_06.v variable */) * (data->simulationInfo->realParameter[1901] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.K PARAM */):data->localData[0]->realVars[88] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2570
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.DiffV.y = gen_Bus_6_1.iEEET1_1.DiffV.k1 * gen_Bus_6_1.iEEET1_1.VoltageReference.k + gen_Bus_6_1.iEEET1_1.DiffV.k2 * gen_Bus_6_1.iEEET1_1.DiffV.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2570};
  data->localData[0]->realVars[646] /* gen_Bus_6_1.iEEET1_1.DiffV.y variable */ = (data->simulationInfo->realParameter[1879] /* gen_Bus_6_1.iEEET1_1.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[1915] /* gen_Bus_6_1.iEEET1_1.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[1880] /* gen_Bus_6_1.iEEET1_1.DiffV.k2 PARAM */) * (data->localData[0]->realVars[645] /* gen_Bus_6_1.iEEET1_1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 2571
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.sum2.y = gen_Bus_6_1.iEEET1_1.sum2.k1 * gen_Bus_6_1.const.k + gen_Bus_6_1.iEEET1_1.sum2.k2 * gen_Bus_6_1.iEEET1_1.DiffV.y + gen_Bus_6_1.iEEET1_1.sum2.k3 * gen_Bus_6_1.iEEET1_1.DiffV1.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2571};
  data->localData[0]->realVars[659] /* gen_Bus_6_1.iEEET1_1.sum2.y variable */ = (data->simulationInfo->realParameter[1944] /* gen_Bus_6_1.iEEET1_1.sum2.k1 PARAM */) * (data->simulationInfo->realParameter[1790] /* gen_Bus_6_1.const.k PARAM */) + (data->simulationInfo->realParameter[1945] /* gen_Bus_6_1.iEEET1_1.sum2.k2 PARAM */) * (data->localData[0]->realVars[646] /* gen_Bus_6_1.iEEET1_1.DiffV.y variable */) + (data->simulationInfo->realParameter[1946] /* gen_Bus_6_1.iEEET1_1.sum2.k3 PARAM */) * (data->localData[0]->realVars[647] /* gen_Bus_6_1.iEEET1_1.DiffV1.y variable */);
  TRACE_POP
}
/*
equation index: 2572
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.simpleLagLim.u = gen_Bus_6_1.iEEET1_1.sum3.k1 * gen_Bus_6_1.iEEET1_1.sum2.y + gen_Bus_6_1.iEEET1_1.sum3.k2 * gen_Bus_6_1.iEEET1_1.derivativeLag.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2572};
  data->localData[0]->realVars[658] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.u variable */ = (data->simulationInfo->realParameter[1948] /* gen_Bus_6_1.iEEET1_1.sum3.k1 PARAM */) * (data->localData[0]->realVars[659] /* gen_Bus_6_1.iEEET1_1.sum2.y variable */) + (data->simulationInfo->realParameter[1949] /* gen_Bus_6_1.iEEET1_1.sum3.k2 PARAM */) * (data->localData[0]->realVars[650] /* gen_Bus_6_1.iEEET1_1.derivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 2573
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.I_C = if abs(gen_Bus_6_1.iEEET1_1.simpleLagLim.T) <= 1e-015 then max(min(gen_Bus_6_1.iEEET1_1.simpleLagLim.u * gen_Bus_6_1.iEEET1_1.simpleLagLim.K, gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax), gen_Bus_6_1.iEEET1_1.simpleLagLim.outMin) else max(min(gen_Bus_6_1.iEEET1_1.simpleLagLim.state, gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax), gen_Bus_6_1.iEEET1_1.simpleLagLim.outMin)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2573};
  modelica_boolean tmp13;
  tmp13 = LessEq(fabs(data->simulationInfo->realParameter[1938] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.T PARAM */),1e-015);
  data->localData[0]->realVars[651] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.I_C variable */ = (tmp13?fmax(fmin((data->localData[0]->realVars[658] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.u variable */) * (data->simulationInfo->realParameter[1937] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[1941] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[1942] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[1941] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[1942] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 2574
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.rotatingExciter.feedback.y = gen_Bus_6_1.iEEET1_1.rotatingExciter.I_C - gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2574};
  data->localData[0]->realVars[656] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.feedback.y variable */ = data->localData[0]->realVars[651] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.I_C variable */ - data->localData[0]->realVars[654] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.Sum.y variable */;
  TRACE_POP
}
/*
equation index: 2575
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.k * gen_Bus_6_1.iEEET1_1.rotatingExciter.feedback.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2575};
  data->localData[0]->realVars[192] /* der(gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.y) STATE_DER */ = (data->simulationInfo->realParameter[1931] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.sISO.k PARAM */) * (data->localData[0]->realVars[656] /* gen_Bus_6_1.iEEET1_1.rotatingExciter.feedback.y variable */);
  TRACE_POP
}
/*
equation index: 2576
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.iEEET1_1.simpleLagLim.state = (gen_Bus_6_1.iEEET1_1.simpleLagLim.K * gen_Bus_6_1.iEEET1_1.simpleLagLim.u - gen_Bus_6_1.iEEET1_1.simpleLagLim.state) / gen_Bus_6_1.iEEET1_1.simpleLagLim.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2576};
  data->localData[0]->realVars[193] /* der(gen_Bus_6_1.iEEET1_1.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1937] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[658] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[1939] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.T_mod PARAM */,"gen_Bus_6_1.iEEET1_1.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2577
type: SIMPLE_ASSIGN
$whenCondition4 = gen_Bus_6_1.iEEET1_1.simpleLagLim.state > gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax and gen_Bus_6_1.iEEET1_1.simpleLagLim.K * gen_Bus_6_1.iEEET1_1.simpleLagLim.u - gen_Bus_6_1.iEEET1_1.simpleLagLim.state < 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2577};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  RELATIONHYSTERESIS(tmp14, data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1941] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax PARAM */, 108, Greater);
  RELATIONHYSTERESIS(tmp15, (data->simulationInfo->realParameter[1937] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[658] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, 109, Less);
  data->localData[0]->booleanVars[8] /* $whenCondition4 DISCRETE */ = (tmp14 && tmp15);
  TRACE_POP
}
/*
equation index: 2578
type: SIMPLE_ASSIGN
$whenCondition3 = gen_Bus_6_1.iEEET1_1.simpleLagLim.state < gen_Bus_6_1.iEEET1_1.simpleLagLim.outMin and gen_Bus_6_1.iEEET1_1.simpleLagLim.K * gen_Bus_6_1.iEEET1_1.simpleLagLim.u - gen_Bus_6_1.iEEET1_1.simpleLagLim.state > 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2578};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  RELATIONHYSTERESIS(tmp16, data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1942] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMin PARAM */, 110, Less);
  RELATIONHYSTERESIS(tmp17, (data->simulationInfo->realParameter[1937] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[658] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, 111, Greater);
  data->localData[0]->booleanVars[7] /* $whenCondition3 DISCRETE */ = (tmp16 && tmp17);
  TRACE_POP
}
/*
equation index: 2579
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.iEEET1_1.TransducerDelay.state = (gen_Bus_6_1.iEEET1_1.TransducerDelay.K * LOAD_06.v - gen_Bus_6_1.iEEET1_1.TransducerDelay.state) / gen_Bus_6_1.iEEET1_1.TransducerDelay.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2579};
  data->localData[0]->realVars[190] /* der(gen_Bus_6_1.iEEET1_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1901] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[353] /* LOAD_06.v variable */) - data->localData[0]->realVars[88] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[1903] /* gen_Bus_6_1.iEEET1_1.TransducerDelay.T_mod PARAM */,"gen_Bus_6_1.iEEET1_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2580
type: SIMPLE_ASSIGN
gen_Bus_6_1.iEEET1_1.ECOMP = LOAD_06.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2580};
  data->localData[0]->realVars[648] /* gen_Bus_6_1.iEEET1_1.ECOMP variable */ = data->localData[0]->realVars[353] /* LOAD_06.v variable */;
  TRACE_POP
}
/*
equation index: 2581
type: SIMPLE_ASSIGN
Bus_06.V = LOAD_06.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2581};
  data->localData[0]->realVars[262] /* Bus_06.V variable */ = data->localData[0]->realVars[353] /* LOAD_06.v variable */;
  TRACE_POP
}
/*
equation index: 2582
type: SIMPLE_ASSIGN
pwLine11.Q12 = (Bus_12.n[1].vi * pwLine11.is.re - Bus_12.n[1].vr * pwLine11.is.im) * pwLine11.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2582};
  data->localData[0]->realVars[721] /* pwLine11.Q12 variable */ = ((data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */) * (data->localData[0]->realVars[726] /* pwLine11.is.re variable */) - ((data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */) * (data->localData[0]->realVars[725] /* pwLine11.is.im variable */))) * (data->simulationInfo->realParameter[2224] /* pwLine11.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2583
type: SIMPLE_ASSIGN
pwLine11.P12 = (Bus_12.n[1].vr * pwLine11.is.re + Bus_12.n[1].vi * pwLine11.is.im) * pwLine11.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2583};
  data->localData[0]->realVars[719] /* pwLine11.P12 variable */ = ((data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */) * (data->localData[0]->realVars[726] /* pwLine11.is.re variable */) + (data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */) * (data->localData[0]->realVars[725] /* pwLine11.is.im variable */)) * (data->simulationInfo->realParameter[2224] /* pwLine11.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2584
type: SIMPLE_ASSIGN
LOAD_12.angle = atan2(Bus_12.n[1].vi, Bus_12.n[1].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2584};
  data->localData[0]->realVars[374] /* LOAD_12.angle variable */ = atan2(data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */, data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */);
  TRACE_POP
}
/*
equation index: 2585
type: SIMPLE_ASSIGN
Bus_12.angle = 57.29577951308232 * LOAD_12.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2585};
  data->localData[0]->realVars[307] /* Bus_12.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[374] /* LOAD_12.angle variable */);
  TRACE_POP
}
/*
equation index: 2586
type: SIMPLE_ASSIGN
Bus_12.V = LOAD_12.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2586};
  data->localData[0]->realVars[306] /* Bus_12.V variable */ = data->localData[0]->realVars[377] /* LOAD_12.v variable */;
  TRACE_POP
}
/*
equation index: 2587
type: SIMPLE_ASSIGN
pwLine12.Q12 = (Bus_12.n[1].vi * pwLine12.is.re - Bus_12.n[1].vr * pwLine12.is.im) * pwLine12.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2587};
  data->localData[0]->realVars[729] /* pwLine12.Q12 variable */ = ((data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */) * (data->localData[0]->realVars[734] /* pwLine12.is.re variable */) - ((data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */) * (data->localData[0]->realVars[733] /* pwLine12.is.im variable */))) * (data->simulationInfo->realParameter[2235] /* pwLine12.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2588
type: SIMPLE_ASSIGN
pwLine12.P12 = (Bus_12.n[1].vr * pwLine12.is.re + Bus_12.n[1].vi * pwLine12.is.im) * pwLine12.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2588};
  data->localData[0]->realVars[727] /* pwLine12.P12 variable */ = ((data->localData[0]->realVars[311] /* Bus_12.n[1].vr variable */) * (data->localData[0]->realVars[734] /* pwLine12.is.re variable */) + (data->localData[0]->realVars[310] /* Bus_12.n[1].vi variable */) * (data->localData[0]->realVars[733] /* pwLine12.is.im variable */)) * (data->simulationInfo->realParameter[2235] /* pwLine12.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2589
type: SIMPLE_ASSIGN
Bus_13.V = LOAD_13.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2589};
  data->localData[0]->realVars[312] /* Bus_13.V variable */ = data->localData[0]->realVars[383] /* LOAD_13.v variable */;
  TRACE_POP
}
/*
equation index: 2590
type: SIMPLE_ASSIGN
pwLine9.Q12 = (Bus_06.p[3].vi * pwLine9.is.re - Bus_06.p[3].vr * pwLine9.is.im) * pwLine9.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2590};
  data->localData[0]->realVars[817] /* pwLine9.Q12 variable */ = ((data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */) * (data->localData[0]->realVars[822] /* pwLine9.is.re variable */) - ((data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */) * (data->localData[0]->realVars[821] /* pwLine9.is.im variable */))) * (data->simulationInfo->realParameter[2356] /* pwLine9.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2591
type: SIMPLE_ASSIGN
pwLine9.P12 = (Bus_06.p[3].vr * pwLine9.is.re + Bus_06.p[3].vi * pwLine9.is.im) * pwLine9.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2591};
  data->localData[0]->realVars[815] /* pwLine9.P12 variable */ = ((data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */) * (data->localData[0]->realVars[822] /* pwLine9.is.re variable */) + (data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */) * (data->localData[0]->realVars[821] /* pwLine9.is.im variable */)) * (data->simulationInfo->realParameter[2356] /* pwLine9.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2592
type: SIMPLE_ASSIGN
LOAD_06.angle = atan2(Bus_06.p[3].vi, Bus_06.p[3].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2592};
  data->localData[0]->realVars[350] /* LOAD_06.angle variable */ = atan2(data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */, data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */);
  TRACE_POP
}
/*
equation index: 2593
type: SIMPLE_ASSIGN
Bus_06.angle = 57.29577951308232 * LOAD_06.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2593};
  data->localData[0]->realVars[263] /* Bus_06.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[350] /* LOAD_06.angle variable */);
  TRACE_POP
}
/*
equation index: 2594
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.anglev = LOAD_06.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2594};
  data->localData[0]->realVars[640] /* gen_Bus_6_1.gENROU.anglev variable */ = data->localData[0]->realVars[350] /* LOAD_06.angle variable */;
  TRACE_POP
}
/*
equation index: 2595
type: SIMPLE_ASSIGN
pwLine11.Q21 = (Bus_06.p[3].vr * pwLine11.ir.im - Bus_06.p[3].vi * pwLine11.ir.re) * pwLine11.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2595};
  data->localData[0]->realVars[722] /* pwLine11.Q21 variable */ = ((data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */) * (data->localData[0]->realVars[723] /* pwLine11.ir.im variable */) - ((data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */) * (data->localData[0]->realVars[724] /* pwLine11.ir.re variable */))) * (data->simulationInfo->realParameter[2224] /* pwLine11.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2596
type: SIMPLE_ASSIGN
pwLine11.P21 = ((-Bus_06.p[3].vr) * pwLine11.ir.re - Bus_06.p[3].vi * pwLine11.ir.im) * pwLine11.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2596};
  data->localData[0]->realVars[720] /* pwLine11.P21 variable */ = (((-data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */)) * (data->localData[0]->realVars[724] /* pwLine11.ir.re variable */) - ((data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */) * (data->localData[0]->realVars[723] /* pwLine11.ir.im variable */))) * (data->simulationInfo->realParameter[2224] /* pwLine11.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2597
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.XaqIlq = gen_Bus_6_1.gENROU.K1q * (gen_Bus_6_1.gENROU.Epd + (gen_Bus_6_1.gENROU.Xpq - gen_Bus_6_1.gENROU.Xl) * gen_Bus_6_1.gENROU.iq - gen_Bus_6_1.gENROU.PSIkq) + gen_Bus_6_1.gENROU.Epd + gen_Bus_6_1.gENROU.iq * (gen_Bus_6_1.gENROU.Xpq - gen_Bus_6_1.gENROU.Xq) + $cse12 * gen_Bus_6_1.gENROU.PSIppq * (gen_Bus_6_1.gENROU.Xq - gen_Bus_6_1.gENROU.Xl) / (gen_Bus_6_1.gENROU.Xd - gen_Bus_6_1.gENROU.Xl)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2597};
  data->localData[0]->realVars[638] /* gen_Bus_6_1.gENROU.XaqIlq variable */ = (data->simulationInfo->realParameter[1808] /* gen_Bus_6_1.gENROU.K1q PARAM */) * (data->localData[0]->realVars[82] /* gen_Bus_6_1.gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[1850] /* gen_Bus_6_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[1845] /* gen_Bus_6_1.gENROU.Xl PARAM */) * (data->localData[0]->realVars[642] /* gen_Bus_6_1.gENROU.iq variable */) - data->localData[0]->realVars[85] /* gen_Bus_6_1.gENROU.PSIkq STATE(1) */) + data->localData[0]->realVars[82] /* gen_Bus_6_1.gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[642] /* gen_Bus_6_1.gENROU.iq variable */) * (data->simulationInfo->realParameter[1850] /* gen_Bus_6_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[1851] /* gen_Bus_6_1.gENROU.Xq PARAM */) + (data->localData[0]->realVars[207] /* $cse12 variable */) * ((data->localData[0]->realVars[634] /* gen_Bus_6_1.gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[1851] /* gen_Bus_6_1.gENROU.Xq PARAM */ - data->simulationInfo->realParameter[1845] /* gen_Bus_6_1.gENROU.Xl PARAM */,data->simulationInfo->realParameter[1844] /* gen_Bus_6_1.gENROU.Xd PARAM */ - data->simulationInfo->realParameter[1845] /* gen_Bus_6_1.gENROU.Xl PARAM */,"gen_Bus_6_1.gENROU.Xd - gen_Bus_6_1.gENROU.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2598
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.gENROU.Epd = (-gen_Bus_6_1.gENROU.XaqIlq) / gen_Bus_6_1.gENROU.Tpq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2598};
  data->localData[0]->realVars[184] /* der(gen_Bus_6_1.gENROU.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[638] /* gen_Bus_6_1.gENROU.XaqIlq variable */),data->simulationInfo->realParameter[1839] /* gen_Bus_6_1.gENROU.Tpq0 PARAM */,"gen_Bus_6_1.gENROU.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2599
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.gENROU.PSIkq = (gen_Bus_6_1.gENROU.Epd + (gen_Bus_6_1.gENROU.Xpq - gen_Bus_6_1.gENROU.Xl) * gen_Bus_6_1.gENROU.iq - gen_Bus_6_1.gENROU.PSIkq) / gen_Bus_6_1.gENROU.Tppq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2599};
  data->localData[0]->realVars[187] /* der(gen_Bus_6_1.gENROU.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[82] /* gen_Bus_6_1.gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[1850] /* gen_Bus_6_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[1845] /* gen_Bus_6_1.gENROU.Xl PARAM */) * (data->localData[0]->realVars[642] /* gen_Bus_6_1.gENROU.iq variable */) - data->localData[0]->realVars[85] /* gen_Bus_6_1.gENROU.PSIkq STATE(1) */,data->simulationInfo->realParameter[1838] /* gen_Bus_6_1.gENROU.Tppq0 PARAM */,"gen_Bus_6_1.gENROU.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2600
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.Te = gen_Bus_6_1.gENROU.PSId * gen_Bus_6_1.gENROU.iq - gen_Bus_6_1.gENROU.PSIq * gen_Bus_6_1.gENROU.id
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2600};
  data->localData[0]->realVars[637] /* gen_Bus_6_1.gENROU.Te variable */ = (data->localData[0]->realVars[631] /* gen_Bus_6_1.gENROU.PSId variable */) * (data->localData[0]->realVars[642] /* gen_Bus_6_1.gENROU.iq variable */) - ((data->localData[0]->realVars[635] /* gen_Bus_6_1.gENROU.PSIq variable */) * (data->localData[0]->realVars[641] /* gen_Bus_6_1.gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 2601
type: SIMPLE_ASSIGN
$DER.gen_Bus_6_1.gENROU.w = 0.5 * ((gen_Bus_6_1.gENROU.pm0 - gen_Bus_6_1.gENROU.D * gen_Bus_6_1.gENROU.w) / (1.0 + gen_Bus_6_1.gENROU.w) - gen_Bus_6_1.gENROU.Te) / gen_Bus_6_1.gENROU.H
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2601};
  data->localData[0]->realVars[189] /* der(gen_Bus_6_1.gENROU.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[1872] /* gen_Bus_6_1.gENROU.pm0 PARAM */ - ((data->simulationInfo->realParameter[1794] /* gen_Bus_6_1.gENROU.D PARAM */) * (data->localData[0]->realVars[87] /* gen_Bus_6_1.gENROU.w STATE(1) */)),1.0 + data->localData[0]->realVars[87] /* gen_Bus_6_1.gENROU.w STATE(1) */,"1.0 + gen_Bus_6_1.gENROU.w",equationIndexes) - data->localData[0]->realVars[637] /* gen_Bus_6_1.gENROU.Te variable */,data->simulationInfo->realParameter[1800] /* gen_Bus_6_1.gENROU.H PARAM */,"gen_Bus_6_1.gENROU.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 2602
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.I = sqrt(Bus_06.p[3].ii ^ 2.0 + Bus_06.p[3].ir ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2602};
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = data->localData[0]->realVars[267] /* Bus_06.p[3].ii variable */;
  tmp19 = data->localData[0]->realVars[269] /* Bus_06.p[3].ir variable */;
  data->localData[0]->realVars[627] /* gen_Bus_6_1.gENROU.I variable */ = sqrt((tmp18 * tmp18) + (tmp19 * tmp19));
  TRACE_POP
}
/*
equation index: 2603
type: SIMPLE_ASSIGN
gen_Bus_6_1.Q = (Bus_06.p[3].vi * Bus_06.p[3].ir - Bus_06.p[3].vr * Bus_06.p[3].ii) * gen_Bus_6_1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2603};
  data->localData[0]->realVars[626] /* gen_Bus_6_1.Q variable */ = ((data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */) * (data->localData[0]->realVars[269] /* Bus_06.p[3].ir variable */) - ((data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */) * (data->localData[0]->realVars[267] /* Bus_06.p[3].ii variable */))) * (data->simulationInfo->realParameter[1786] /* gen_Bus_6_1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2604
type: SIMPLE_ASSIGN
gen_Bus_6_1.P = (Bus_06.p[3].vi * Bus_06.p[3].ii + Bus_06.p[3].vr * Bus_06.p[3].ir) * gen_Bus_6_1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2604};
  data->localData[0]->realVars[625] /* gen_Bus_6_1.P variable */ = ((data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */) * (data->localData[0]->realVars[267] /* Bus_06.p[3].ii variable */) + (data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */) * (data->localData[0]->realVars[269] /* Bus_06.p[3].ir variable */)) * (data->simulationInfo->realParameter[1786] /* gen_Bus_6_1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2605
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.Q = Bus_06.p[3].vi * Bus_06.p[3].ir - Bus_06.p[3].vr * Bus_06.p[3].ii
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2605};
  data->localData[0]->realVars[636] /* gen_Bus_6_1.gENROU.Q variable */ = (data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */) * (data->localData[0]->realVars[269] /* Bus_06.p[3].ir variable */) - ((data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */) * (data->localData[0]->realVars[267] /* Bus_06.p[3].ii variable */));
  TRACE_POP
}
/*
equation index: 2606
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.P = Bus_06.p[3].vi * Bus_06.p[3].ii + Bus_06.p[3].vr * Bus_06.p[3].ir
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2606};
  data->localData[0]->realVars[629] /* gen_Bus_6_1.gENROU.P variable */ = (data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */) * (data->localData[0]->realVars[267] /* Bus_06.p[3].ii variable */) + (data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */) * (data->localData[0]->realVars[269] /* Bus_06.p[3].ir variable */);
  TRACE_POP
}
/*
equation index: 2607
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.PELEC = gen_Bus_6_1.gENROU.P / gen_Bus_6_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2607};
  data->localData[0]->realVars[630] /* gen_Bus_6_1.gENROU.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[629] /* gen_Bus_6_1.gENROU.P variable */,data->simulationInfo->realParameter[1793] /* gen_Bus_6_1.gENROU.CoB PARAM */,"gen_Bus_6_1.gENROU.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 2608
type: SIMPLE_ASSIGN
gen_Bus_6_1.gENROU.anglei = atan2(-Bus_06.p[3].ii, -Bus_06.p[3].ir)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2608};
  data->localData[0]->realVars[639] /* gen_Bus_6_1.gENROU.anglei variable */ = atan2((-data->localData[0]->realVars[267] /* Bus_06.p[3].ii variable */), (-data->localData[0]->realVars[269] /* Bus_06.p[3].ir variable */));
  TRACE_POP
}
/*
equation index: 2609
type: SIMPLE_ASSIGN
pwLine15.Q12 = (Bus_06.p[3].vi * pwLine15.is.re - Bus_06.p[3].vr * pwLine15.is.im) * pwLine15.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2609};
  data->localData[0]->realVars[753] /* pwLine15.Q12 variable */ = ((data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */) * (data->localData[0]->realVars[758] /* pwLine15.is.re variable */) - ((data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */) * (data->localData[0]->realVars[757] /* pwLine15.is.im variable */))) * (data->simulationInfo->realParameter[2268] /* pwLine15.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2610
type: SIMPLE_ASSIGN
pwLine15.P12 = (Bus_06.p[3].vr * pwLine15.is.re + Bus_06.p[3].vi * pwLine15.is.im) * pwLine15.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2610};
  data->localData[0]->realVars[751] /* pwLine15.P12 variable */ = ((data->localData[0]->realVars[271] /* Bus_06.p[3].vr variable */) * (data->localData[0]->realVars[758] /* pwLine15.is.re variable */) + (data->localData[0]->realVars[270] /* Bus_06.p[3].vi variable */) * (data->localData[0]->realVars[757] /* pwLine15.is.im variable */)) * (data->simulationInfo->realParameter[2268] /* pwLine15.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2611
type: SIMPLE_ASSIGN
pwLine15.Q21 = (Bus_13.n[2].vr * pwLine15.ir.im - Bus_13.n[2].vi * pwLine15.ir.re) * pwLine15.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2611};
  data->localData[0]->realVars[754] /* pwLine15.Q21 variable */ = ((data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */) * (data->localData[0]->realVars[755] /* pwLine15.ir.im variable */) - ((data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */) * (data->localData[0]->realVars[756] /* pwLine15.ir.re variable */))) * (data->simulationInfo->realParameter[2268] /* pwLine15.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2612
type: SIMPLE_ASSIGN
pwLine15.P21 = ((-Bus_13.n[2].vr) * pwLine15.ir.re - Bus_13.n[2].vi * pwLine15.ir.im) * pwLine15.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2612};
  data->localData[0]->realVars[752] /* pwLine15.P21 variable */ = (((-data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */)) * (data->localData[0]->realVars[756] /* pwLine15.ir.re variable */) - ((data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */) * (data->localData[0]->realVars[755] /* pwLine15.ir.im variable */))) * (data->simulationInfo->realParameter[2268] /* pwLine15.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2613
type: SIMPLE_ASSIGN
pwLine13.Q21 = (Bus_13.n[2].vr * pwLine13.ir.im - Bus_13.n[2].vi * pwLine13.ir.re) * pwLine13.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2613};
  data->localData[0]->realVars[738] /* pwLine13.Q21 variable */ = ((data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */) * (data->localData[0]->realVars[739] /* pwLine13.ir.im variable */) - ((data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */) * (data->localData[0]->realVars[740] /* pwLine13.ir.re variable */))) * (data->simulationInfo->realParameter[2246] /* pwLine13.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2614
type: SIMPLE_ASSIGN
pwLine13.P21 = ((-Bus_13.n[2].vr) * pwLine13.ir.re - Bus_13.n[2].vi * pwLine13.ir.im) * pwLine13.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2614};
  data->localData[0]->realVars[736] /* pwLine13.P21 variable */ = (((-data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */)) * (data->localData[0]->realVars[740] /* pwLine13.ir.re variable */) - ((data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */) * (data->localData[0]->realVars[739] /* pwLine13.ir.im variable */))) * (data->simulationInfo->realParameter[2246] /* pwLine13.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2615
type: SIMPLE_ASSIGN
LOAD_13.angle = atan2(Bus_13.n[2].vi, Bus_13.n[2].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2615};
  data->localData[0]->realVars[380] /* LOAD_13.angle variable */ = atan2(data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */, data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */);
  TRACE_POP
}
/*
equation index: 2616
type: SIMPLE_ASSIGN
Bus_13.angle = 57.29577951308232 * LOAD_13.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2616};
  data->localData[0]->realVars[313] /* Bus_13.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[380] /* LOAD_13.angle variable */);
  TRACE_POP
}
/*
equation index: 2617
type: SIMPLE_ASSIGN
pwLine12.Q21 = (Bus_13.n[2].vr * pwLine12.ir.im - Bus_13.n[2].vi * pwLine12.ir.re) * pwLine12.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2617};
  data->localData[0]->realVars[730] /* pwLine12.Q21 variable */ = ((data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */) * (data->localData[0]->realVars[731] /* pwLine12.ir.im variable */) - ((data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */) * (data->localData[0]->realVars[732] /* pwLine12.ir.re variable */))) * (data->simulationInfo->realParameter[2235] /* pwLine12.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2618
type: SIMPLE_ASSIGN
pwLine12.P21 = ((-Bus_13.n[2].vr) * pwLine12.ir.re - Bus_13.n[2].vi * pwLine12.ir.im) * pwLine12.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2618};
  data->localData[0]->realVars[728] /* pwLine12.P21 variable */ = (((-data->localData[0]->realVars[315] /* Bus_13.n[2].vr variable */)) * (data->localData[0]->realVars[732] /* pwLine12.ir.re variable */) - ((data->localData[0]->realVars[314] /* Bus_13.n[2].vi variable */) * (data->localData[0]->realVars[731] /* pwLine12.ir.im variable */))) * (data->simulationInfo->realParameter[2235] /* pwLine12.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2619
type: SIMPLE_ASSIGN
Bus_14.V = LOAD_14.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2619};
  data->localData[0]->realVars[318] /* Bus_14.V variable */ = data->localData[0]->realVars[389] /* LOAD_14.v variable */;
  TRACE_POP
}
/*
equation index: 2620
type: SIMPLE_ASSIGN
shunt.v = LOAD_14.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2620};
  data->localData[0]->realVars[827] /* shunt.v variable */ = data->localData[0]->realVars[389] /* LOAD_14.v variable */;
  TRACE_POP
}
/*
equation index: 2621
type: SIMPLE_ASSIGN
shunt.S.re = Bus_14.p[3].vr * shunt.I.re + Bus_14.p[3].vi * shunt.I.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2621};
  data->localData[0]->realVars[826] /* shunt.S.re variable */ = (data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */) * (data->localData[0]->realVars[824] /* shunt.I.re variable */) + (data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */) * (data->localData[0]->realVars[823] /* shunt.I.im variable */);
  TRACE_POP
}
/*
equation index: 2622
type: SIMPLE_ASSIGN
shunt.S.im = Bus_14.p[3].vi * shunt.I.re - Bus_14.p[3].vr * shunt.I.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2622};
  data->localData[0]->realVars[825] /* shunt.S.im variable */ = (data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */) * (data->localData[0]->realVars[824] /* shunt.I.re variable */) - ((data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */) * (data->localData[0]->realVars[823] /* shunt.I.im variable */));
  TRACE_POP
}
/*
equation index: 2623
type: SIMPLE_ASSIGN
LOAD_14.angle = atan2(Bus_14.p[3].vi, Bus_14.p[3].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2623};
  data->localData[0]->realVars[386] /* LOAD_14.angle variable */ = atan2(data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */, data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */);
  TRACE_POP
}
/*
equation index: 2624
type: SIMPLE_ASSIGN
Bus_14.angle = 57.29577951308232 * LOAD_14.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2624};
  data->localData[0]->realVars[319] /* Bus_14.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[386] /* LOAD_14.angle variable */);
  TRACE_POP
}
/*
equation index: 2625
type: SIMPLE_ASSIGN
pwLine13.Q12 = (Bus_14.p[3].vi * pwLine13.is.re - Bus_14.p[3].vr * pwLine13.is.im) * pwLine13.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2625};
  data->localData[0]->realVars[737] /* pwLine13.Q12 variable */ = ((data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */) * (data->localData[0]->realVars[742] /* pwLine13.is.re variable */) - ((data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */) * (data->localData[0]->realVars[741] /* pwLine13.is.im variable */))) * (data->simulationInfo->realParameter[2246] /* pwLine13.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2626
type: SIMPLE_ASSIGN
pwLine13.P12 = (Bus_14.p[3].vr * pwLine13.is.re + Bus_14.p[3].vi * pwLine13.is.im) * pwLine13.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2626};
  data->localData[0]->realVars[735] /* pwLine13.P12 variable */ = ((data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */) * (data->localData[0]->realVars[742] /* pwLine13.is.re variable */) + (data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */) * (data->localData[0]->realVars[741] /* pwLine13.is.im variable */)) * (data->simulationInfo->realParameter[2246] /* pwLine13.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2627
type: SIMPLE_ASSIGN
pwLine8.Q12 = (Bus_14.p[3].vi * pwLine8.is.re - Bus_14.p[3].vr * pwLine8.is.im) * pwLine8.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2627};
  data->localData[0]->realVars[809] /* pwLine8.Q12 variable */ = ((data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */) * (data->localData[0]->realVars[814] /* pwLine8.is.re variable */) - ((data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */) * (data->localData[0]->realVars[813] /* pwLine8.is.im variable */))) * (data->simulationInfo->realParameter[2345] /* pwLine8.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2628
type: SIMPLE_ASSIGN
pwLine8.P12 = (Bus_14.p[3].vr * pwLine8.is.re + Bus_14.p[3].vi * pwLine8.is.im) * pwLine8.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2628};
  data->localData[0]->realVars[807] /* pwLine8.P12 variable */ = ((data->localData[0]->realVars[323] /* Bus_14.p[3].vr variable */) * (data->localData[0]->realVars[814] /* pwLine8.is.re variable */) + (data->localData[0]->realVars[322] /* Bus_14.p[3].vi variable */) * (data->localData[0]->realVars[813] /* pwLine8.is.im variable */)) * (data->simulationInfo->realParameter[2345] /* pwLine8.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2629
type: SIMPLE_ASSIGN
pwLine8.Q21 = (Bus_09.p[3].vr * pwLine8.ir.im - Bus_09.p[3].vi * pwLine8.ir.re) * pwLine8.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2629};
  data->localData[0]->realVars[810] /* pwLine8.Q21 variable */ = ((data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */) * (data->localData[0]->realVars[811] /* pwLine8.ir.im variable */) - ((data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */) * (data->localData[0]->realVars[812] /* pwLine8.ir.re variable */))) * (data->simulationInfo->realParameter[2345] /* pwLine8.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2630
type: SIMPLE_ASSIGN
pwLine8.P21 = ((-Bus_09.p[3].vr) * pwLine8.ir.re - Bus_09.p[3].vi * pwLine8.ir.im) * pwLine8.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2630};
  data->localData[0]->realVars[808] /* pwLine8.P21 variable */ = (((-data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */)) * (data->localData[0]->realVars[812] /* pwLine8.ir.re variable */) - ((data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */) * (data->localData[0]->realVars[811] /* pwLine8.ir.im variable */))) * (data->simulationInfo->realParameter[2345] /* pwLine8.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2631
type: SIMPLE_ASSIGN
pwLine7.Q12 = (Bus_09.p[3].vi * pwLine7.is.re - Bus_09.p[3].vr * pwLine7.is.im) * pwLine7.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2631};
  data->localData[0]->realVars[801] /* pwLine7.Q12 variable */ = ((data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */) * (data->localData[0]->realVars[806] /* pwLine7.is.re variable */) - ((data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */) * (data->localData[0]->realVars[805] /* pwLine7.is.im variable */))) * (data->simulationInfo->realParameter[2334] /* pwLine7.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2632
type: SIMPLE_ASSIGN
pwLine7.P12 = (Bus_09.p[3].vr * pwLine7.is.re + Bus_09.p[3].vi * pwLine7.is.im) * pwLine7.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2632};
  data->localData[0]->realVars[799] /* pwLine7.P12 variable */ = ((data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */) * (data->localData[0]->realVars[806] /* pwLine7.is.re variable */) + (data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */) * (data->localData[0]->realVars[805] /* pwLine7.is.im variable */)) * (data->simulationInfo->realParameter[2334] /* pwLine7.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2633
type: SIMPLE_ASSIGN
LOAD_09.angle = atan2(Bus_09.p[3].vi, Bus_09.p[3].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2633};
  data->localData[0]->realVars[356] /* LOAD_09.angle variable */ = atan2(data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */, data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */);
  TRACE_POP
}
/*
equation index: 2634
type: SIMPLE_ASSIGN
Bus_09.angle = 57.29577951308232 * LOAD_09.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2634};
  data->localData[0]->realVars[287] /* Bus_09.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[356] /* LOAD_09.angle variable */);
  TRACE_POP
}
/*
equation index: 2635
type: SIMPLE_ASSIGN
pwLine14.Q12 = (Bus_09.p[3].vi * pwLine14.is.re - Bus_09.p[3].vr * pwLine14.is.im) * pwLine14.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2635};
  data->localData[0]->realVars[745] /* pwLine14.Q12 variable */ = ((data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */) * (data->localData[0]->realVars[750] /* pwLine14.is.re variable */) - ((data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */) * (data->localData[0]->realVars[749] /* pwLine14.is.im variable */))) * (data->simulationInfo->realParameter[2257] /* pwLine14.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2636
type: SIMPLE_ASSIGN
pwLine14.P12 = (Bus_09.p[3].vr * pwLine14.is.re + Bus_09.p[3].vi * pwLine14.is.im) * pwLine14.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2636};
  data->localData[0]->realVars[743] /* pwLine14.P12 variable */ = ((data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */) * (data->localData[0]->realVars[750] /* pwLine14.is.re variable */) + (data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */) * (data->localData[0]->realVars[749] /* pwLine14.is.im variable */)) * (data->simulationInfo->realParameter[2257] /* pwLine14.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2637
type: SIMPLE_ASSIGN
shunt1.S.re = Bus_09.p[3].vr * shunt1.I.re + Bus_09.p[3].vi * shunt1.I.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2637};
  data->localData[0]->realVars[831] /* shunt1.S.re variable */ = (data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */) * (data->localData[0]->realVars[829] /* shunt1.I.re variable */) + (data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */) * (data->localData[0]->realVars[828] /* shunt1.I.im variable */);
  TRACE_POP
}
/*
equation index: 2638
type: SIMPLE_ASSIGN
shunt1.S.im = Bus_09.p[3].vi * shunt1.I.re - Bus_09.p[3].vr * shunt1.I.im
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2638};
  data->localData[0]->realVars[830] /* shunt1.S.im variable */ = (data->localData[0]->realVars[292] /* Bus_09.p[3].vi variable */) * (data->localData[0]->realVars[829] /* shunt1.I.re variable */) - ((data->localData[0]->realVars[293] /* Bus_09.p[3].vr variable */) * (data->localData[0]->realVars[828] /* shunt1.I.im variable */));
  TRACE_POP
}
/*
equation index: 2639
type: SIMPLE_ASSIGN
pwLine3.Q21 = (Bus_04.p[4].vr * pwLine3.ir.im - Bus_04.p[4].vi * pwLine3.ir.re) * pwLine3.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2639};
  data->localData[0]->realVars[770] /* pwLine3.Q21 variable */ = ((data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */) * (data->localData[0]->realVars[771] /* pwLine3.ir.im variable */) - ((data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */) * (data->localData[0]->realVars[772] /* pwLine3.ir.re variable */))) * (data->simulationInfo->realParameter[2290] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2640
type: SIMPLE_ASSIGN
pwLine3.P21 = ((-Bus_04.p[4].vr) * pwLine3.ir.re - Bus_04.p[4].vi * pwLine3.ir.im) * pwLine3.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2640};
  data->localData[0]->realVars[768] /* pwLine3.P21 variable */ = (((-data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */)) * (data->localData[0]->realVars[772] /* pwLine3.ir.re variable */) - ((data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */) * (data->localData[0]->realVars[771] /* pwLine3.ir.im variable */))) * (data->simulationInfo->realParameter[2290] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2641
type: SIMPLE_ASSIGN
LOAD_04.angle = atan2(Bus_04.p[4].vi, Bus_04.p[4].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2641};
  data->localData[0]->realVars[338] /* LOAD_04.angle variable */ = atan2(data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */, data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */);
  TRACE_POP
}
/*
equation index: 2642
type: SIMPLE_ASSIGN
Bus_04.angle = 57.29577951308232 * LOAD_04.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2642};
  data->localData[0]->realVars[243] /* Bus_04.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[338] /* LOAD_04.angle variable */);
  TRACE_POP
}
/*
equation index: 2643
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.DiffV.u2 = if abs(gen_Bus_2_1.iEEET1_1.TransducerDelay.T) <= 1e-015 then LOAD_02.v * gen_Bus_2_1.iEEET1_1.TransducerDelay.K else gen_Bus_2_1.iEEET1_1.TransducerDelay.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2643};
  modelica_boolean tmp20;
  tmp20 = LessEq(fabs(data->simulationInfo->realParameter[1200] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.T PARAM */),1e-015);
  data->localData[0]->realVars[511] /* gen_Bus_2_1.iEEET1_1.DiffV.u2 variable */ = (tmp20?(data->localData[0]->realVars[329] /* LOAD_02.v variable */) * (data->simulationInfo->realParameter[1199] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.K PARAM */):data->localData[0]->realVars[42] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2644
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.DiffV.y = gen_Bus_2_1.iEEET1_1.DiffV.k1 * gen_Bus_2_1.iEEET1_1.VoltageReference.k + gen_Bus_2_1.iEEET1_1.DiffV.k2 * gen_Bus_2_1.iEEET1_1.DiffV.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2644};
  data->localData[0]->realVars[512] /* gen_Bus_2_1.iEEET1_1.DiffV.y variable */ = (data->simulationInfo->realParameter[1177] /* gen_Bus_2_1.iEEET1_1.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[1212] /* gen_Bus_2_1.iEEET1_1.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[1178] /* gen_Bus_2_1.iEEET1_1.DiffV.k2 PARAM */) * (data->localData[0]->realVars[511] /* gen_Bus_2_1.iEEET1_1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 2645
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.iEEET1_1.TransducerDelay.state = (gen_Bus_2_1.iEEET1_1.TransducerDelay.K * LOAD_02.v - gen_Bus_2_1.iEEET1_1.TransducerDelay.state) / gen_Bus_2_1.iEEET1_1.TransducerDelay.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2645};
  data->localData[0]->realVars[144] /* der(gen_Bus_2_1.iEEET1_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1199] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[329] /* LOAD_02.v variable */) - data->localData[0]->realVars[42] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[1201] /* gen_Bus_2_1.iEEET1_1.TransducerDelay.T_mod PARAM */,"gen_Bus_2_1.iEEET1_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2646
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.ECOMP = LOAD_02.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2646};
  data->localData[0]->realVars[514] /* gen_Bus_2_1.iEEET1_1.ECOMP variable */ = data->localData[0]->realVars[329] /* LOAD_02.v variable */;
  TRACE_POP
}
/*
equation index: 2647
type: SIMPLE_ASSIGN
Bus_02.V = LOAD_02.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2647};
  data->localData[0]->realVars[226] /* Bus_02.V variable */ = data->localData[0]->realVars[329] /* LOAD_02.v variable */;
  TRACE_POP
}
/*
equation index: 2648
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.DiffV.u2 = if abs(gen_Bus_3_1.iEEET1_1.TransducerDelay.T) <= 1e-015 then LOAD_03.v * gen_Bus_3_1.iEEET1_1.TransducerDelay.K else gen_Bus_3_1.iEEET1_1.TransducerDelay.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2648};
  modelica_boolean tmp21;
  tmp21 = LessEq(fabs(data->simulationInfo->realParameter[1736] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.T PARAM */),1e-015);
  data->localData[0]->realVars[610] /* gen_Bus_3_1.iEEET1_1.DiffV.u2 variable */ = (tmp21?(data->localData[0]->realVars[335] /* LOAD_03.v variable */) * (data->simulationInfo->realParameter[1735] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.K PARAM */):data->localData[0]->realVars[78] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2649
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.DiffV.y = gen_Bus_3_1.iEEET1_1.DiffV.k1 * gen_Bus_3_1.iEEET1_1.VoltageReference.k + gen_Bus_3_1.iEEET1_1.DiffV.k2 * gen_Bus_3_1.iEEET1_1.DiffV.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2649};
  data->localData[0]->realVars[611] /* gen_Bus_3_1.iEEET1_1.DiffV.y variable */ = (data->simulationInfo->realParameter[1713] /* gen_Bus_3_1.iEEET1_1.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[1749] /* gen_Bus_3_1.iEEET1_1.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[1714] /* gen_Bus_3_1.iEEET1_1.DiffV.k2 PARAM */) * (data->localData[0]->realVars[610] /* gen_Bus_3_1.iEEET1_1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 2650
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.sum2.y = gen_Bus_3_1.iEEET1_1.sum2.k1 * gen_Bus_3_1.const.k + gen_Bus_3_1.iEEET1_1.sum2.k2 * gen_Bus_3_1.iEEET1_1.DiffV.y + gen_Bus_3_1.iEEET1_1.sum2.k3 * gen_Bus_3_1.iEEET1_1.DiffV1.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2650};
  data->localData[0]->realVars[624] /* gen_Bus_3_1.iEEET1_1.sum2.y variable */ = (data->simulationInfo->realParameter[1778] /* gen_Bus_3_1.iEEET1_1.sum2.k1 PARAM */) * (data->simulationInfo->realParameter[1624] /* gen_Bus_3_1.const.k PARAM */) + (data->simulationInfo->realParameter[1779] /* gen_Bus_3_1.iEEET1_1.sum2.k2 PARAM */) * (data->localData[0]->realVars[611] /* gen_Bus_3_1.iEEET1_1.DiffV.y variable */) + (data->simulationInfo->realParameter[1780] /* gen_Bus_3_1.iEEET1_1.sum2.k3 PARAM */) * (data->localData[0]->realVars[612] /* gen_Bus_3_1.iEEET1_1.DiffV1.y variable */);
  TRACE_POP
}
/*
equation index: 2651
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.simpleLagLim.u = gen_Bus_3_1.iEEET1_1.sum3.k1 * gen_Bus_3_1.iEEET1_1.sum2.y + gen_Bus_3_1.iEEET1_1.sum3.k2 * gen_Bus_3_1.iEEET1_1.derivativeLag.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2651};
  data->localData[0]->realVars[623] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.u variable */ = (data->simulationInfo->realParameter[1782] /* gen_Bus_3_1.iEEET1_1.sum3.k1 PARAM */) * (data->localData[0]->realVars[624] /* gen_Bus_3_1.iEEET1_1.sum2.y variable */) + (data->simulationInfo->realParameter[1783] /* gen_Bus_3_1.iEEET1_1.sum3.k2 PARAM */) * (data->localData[0]->realVars[615] /* gen_Bus_3_1.iEEET1_1.derivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 2652
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.I_C = if abs(gen_Bus_3_1.iEEET1_1.simpleLagLim.T) <= 1e-015 then max(min(gen_Bus_3_1.iEEET1_1.simpleLagLim.u * gen_Bus_3_1.iEEET1_1.simpleLagLim.K, gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax), gen_Bus_3_1.iEEET1_1.simpleLagLim.outMin) else max(min(gen_Bus_3_1.iEEET1_1.simpleLagLim.state, gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax), gen_Bus_3_1.iEEET1_1.simpleLagLim.outMin)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2652};
  modelica_boolean tmp22;
  tmp22 = LessEq(fabs(data->simulationInfo->realParameter[1772] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.T PARAM */),1e-015);
  data->localData[0]->realVars[616] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.I_C variable */ = (tmp22?fmax(fmin((data->localData[0]->realVars[623] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.u variable */) * (data->simulationInfo->realParameter[1771] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[1775] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[1776] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[1775] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[1776] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 2653
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.rotatingExciter.feedback.y = gen_Bus_3_1.iEEET1_1.rotatingExciter.I_C - gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2653};
  data->localData[0]->realVars[621] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.feedback.y variable */ = data->localData[0]->realVars[616] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.I_C variable */ - data->localData[0]->realVars[619] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.Sum.y variable */;
  TRACE_POP
}
/*
equation index: 2654
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.k * gen_Bus_3_1.iEEET1_1.rotatingExciter.feedback.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2654};
  data->localData[0]->realVars[182] /* der(gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y) STATE_DER */ = (data->simulationInfo->realParameter[1765] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.k PARAM */) * (data->localData[0]->realVars[621] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.feedback.y variable */);
  TRACE_POP
}
/*
equation index: 2655
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.iEEET1_1.simpleLagLim.state = (gen_Bus_3_1.iEEET1_1.simpleLagLim.K * gen_Bus_3_1.iEEET1_1.simpleLagLim.u - gen_Bus_3_1.iEEET1_1.simpleLagLim.state) / gen_Bus_3_1.iEEET1_1.simpleLagLim.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2655};
  data->localData[0]->realVars[183] /* der(gen_Bus_3_1.iEEET1_1.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1771] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[623] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[1773] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.T_mod PARAM */,"gen_Bus_3_1.iEEET1_1.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2656
type: SIMPLE_ASSIGN
$whenCondition2 = gen_Bus_3_1.iEEET1_1.simpleLagLim.state > gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax and gen_Bus_3_1.iEEET1_1.simpleLagLim.K * gen_Bus_3_1.iEEET1_1.simpleLagLim.u - gen_Bus_3_1.iEEET1_1.simpleLagLim.state < 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2656};
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  RELATIONHYSTERESIS(tmp23, data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1775] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax PARAM */, 116, Greater);
  RELATIONHYSTERESIS(tmp24, (data->simulationInfo->realParameter[1771] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[623] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, 117, Less);
  data->localData[0]->booleanVars[6] /* $whenCondition2 DISCRETE */ = (tmp23 && tmp24);
  TRACE_POP
}
/*
equation index: 2657
type: SIMPLE_ASSIGN
$whenCondition1 = gen_Bus_3_1.iEEET1_1.simpleLagLim.state < gen_Bus_3_1.iEEET1_1.simpleLagLim.outMin and gen_Bus_3_1.iEEET1_1.simpleLagLim.K * gen_Bus_3_1.iEEET1_1.simpleLagLim.u - gen_Bus_3_1.iEEET1_1.simpleLagLim.state > 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2657};
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  RELATIONHYSTERESIS(tmp25, data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1776] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMin PARAM */, 118, Less);
  RELATIONHYSTERESIS(tmp26, (data->simulationInfo->realParameter[1771] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[623] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, 119, Greater);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = (tmp25 && tmp26);
  TRACE_POP
}
/*
equation index: 2658
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.iEEET1_1.TransducerDelay.state = (gen_Bus_3_1.iEEET1_1.TransducerDelay.K * LOAD_03.v - gen_Bus_3_1.iEEET1_1.TransducerDelay.state) / gen_Bus_3_1.iEEET1_1.TransducerDelay.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2658};
  data->localData[0]->realVars[180] /* der(gen_Bus_3_1.iEEET1_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1735] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[335] /* LOAD_03.v variable */) - data->localData[0]->realVars[78] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[1737] /* gen_Bus_3_1.iEEET1_1.TransducerDelay.T_mod PARAM */,"gen_Bus_3_1.iEEET1_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2659
type: SIMPLE_ASSIGN
gen_Bus_3_1.iEEET1_1.ECOMP = LOAD_03.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2659};
  data->localData[0]->realVars[613] /* gen_Bus_3_1.iEEET1_1.ECOMP variable */ = data->localData[0]->realVars[335] /* LOAD_03.v variable */;
  TRACE_POP
}
/*
equation index: 2660
type: SIMPLE_ASSIGN
Bus_03.V = LOAD_03.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2660};
  data->localData[0]->realVars[234] /* Bus_03.V variable */ = data->localData[0]->realVars[335] /* LOAD_03.v variable */;
  TRACE_POP
}
/*
equation index: 2661
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.I = sqrt(Bus_03.p[2].ii ^ 2.0 + Bus_03.p[2].ir ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2661};
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = data->localData[0]->realVars[238] /* Bus_03.p[2].ii variable */;
  tmp28 = data->localData[0]->realVars[239] /* Bus_03.p[2].ir variable */;
  data->localData[0]->realVars[592] /* gen_Bus_3_1.gENROU.I variable */ = sqrt((tmp27 * tmp27) + (tmp28 * tmp28));
  TRACE_POP
}
/*
equation index: 2662
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.anglei = atan2(-Bus_03.p[2].ii, -Bus_03.p[2].ir)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2662};
  data->localData[0]->realVars[604] /* gen_Bus_3_1.gENROU.anglei variable */ = atan2((-data->localData[0]->realVars[238] /* Bus_03.p[2].ii variable */), (-data->localData[0]->realVars[239] /* Bus_03.p[2].ir variable */));
  TRACE_POP
}
/*
equation index: 2663
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.ISORCE = gen_Bus_3_1.gENROU.K1d * (gen_Bus_3_1.gENROU.Epq + (gen_Bus_3_1.gENROU.Xl - gen_Bus_3_1.gENROU.Xpd) * gen_Bus_3_1.gENROU.id - gen_Bus_3_1.gENROU.PSIkd) + gen_Bus_3_1.gENROU.Epq + gen_Bus_3_1.gENROU.id * (gen_Bus_3_1.gENROU.Xd - gen_Bus_3_1.gENROU.Xpd) + $cse15 * gen_Bus_3_1.gENROU.PSIppd
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2663};
  data->localData[0]->realVars[593] /* gen_Bus_3_1.gENROU.ISORCE variable */ = (data->simulationInfo->realParameter[1641] /* gen_Bus_3_1.gENROU.K1d PARAM */) * (data->localData[0]->realVars[73] /* gen_Bus_3_1.gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[1679] /* gen_Bus_3_1.gENROU.Xl PARAM */ - data->simulationInfo->realParameter[1680] /* gen_Bus_3_1.gENROU.Xpd PARAM */) * (data->localData[0]->realVars[606] /* gen_Bus_3_1.gENROU.id variable */) - data->localData[0]->realVars[74] /* gen_Bus_3_1.gENROU.PSIkd STATE(1) */) + data->localData[0]->realVars[73] /* gen_Bus_3_1.gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[606] /* gen_Bus_3_1.gENROU.id variable */) * (data->simulationInfo->realParameter[1678] /* gen_Bus_3_1.gENROU.Xd PARAM */ - data->simulationInfo->realParameter[1680] /* gen_Bus_3_1.gENROU.Xpd PARAM */) + (data->localData[0]->realVars[210] /* $cse15 variable */) * (data->localData[0]->realVars[598] /* gen_Bus_3_1.gENROU.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 2664
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.gENROU.Epq = (gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_3_1.gENROU.ISORCE) / gen_Bus_3_1.gENROU.Tpd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2664};
  data->localData[0]->realVars[175] /* der(gen_Bus_3_1.gENROU.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[80] /* gen_Bus_3_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[593] /* gen_Bus_3_1.gENROU.ISORCE variable */,data->simulationInfo->realParameter[1670] /* gen_Bus_3_1.gENROU.Tpd0 PARAM */,"gen_Bus_3_1.gENROU.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2665
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.gENROU.PSIkd = (gen_Bus_3_1.gENROU.Epq + (gen_Bus_3_1.gENROU.Xl - gen_Bus_3_1.gENROU.Xpd) * gen_Bus_3_1.gENROU.id - gen_Bus_3_1.gENROU.PSIkd) / gen_Bus_3_1.gENROU.Tppd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2665};
  data->localData[0]->realVars[176] /* der(gen_Bus_3_1.gENROU.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[73] /* gen_Bus_3_1.gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[1679] /* gen_Bus_3_1.gENROU.Xl PARAM */ - data->simulationInfo->realParameter[1680] /* gen_Bus_3_1.gENROU.Xpd PARAM */) * (data->localData[0]->realVars[606] /* gen_Bus_3_1.gENROU.id variable */) - data->localData[0]->realVars[74] /* gen_Bus_3_1.gENROU.PSIkd STATE(1) */,data->simulationInfo->realParameter[1671] /* gen_Bus_3_1.gENROU.Tppd0 PARAM */,"gen_Bus_3_1.gENROU.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2666
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.Te = gen_Bus_3_1.gENROU.PSId * gen_Bus_3_1.gENROU.iq - gen_Bus_3_1.gENROU.PSIq * gen_Bus_3_1.gENROU.id
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2666};
  data->localData[0]->realVars[602] /* gen_Bus_3_1.gENROU.Te variable */ = (data->localData[0]->realVars[596] /* gen_Bus_3_1.gENROU.PSId variable */) * (data->localData[0]->realVars[607] /* gen_Bus_3_1.gENROU.iq variable */) - ((data->localData[0]->realVars[600] /* gen_Bus_3_1.gENROU.PSIq variable */) * (data->localData[0]->realVars[606] /* gen_Bus_3_1.gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 2667
type: SIMPLE_ASSIGN
$DER.gen_Bus_3_1.gENROU.w = 0.5 * ((gen_Bus_3_1.gENROU.pm0 - gen_Bus_3_1.gENROU.D * gen_Bus_3_1.gENROU.w) / (1.0 + gen_Bus_3_1.gENROU.w) - gen_Bus_3_1.gENROU.Te) / gen_Bus_3_1.gENROU.H
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2667};
  data->localData[0]->realVars[179] /* der(gen_Bus_3_1.gENROU.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->simulationInfo->realParameter[1706] /* gen_Bus_3_1.gENROU.pm0 PARAM */ - ((data->simulationInfo->realParameter[1628] /* gen_Bus_3_1.gENROU.D PARAM */) * (data->localData[0]->realVars[77] /* gen_Bus_3_1.gENROU.w STATE(1) */)),1.0 + data->localData[0]->realVars[77] /* gen_Bus_3_1.gENROU.w STATE(1) */,"1.0 + gen_Bus_3_1.gENROU.w",equationIndexes) - data->localData[0]->realVars[602] /* gen_Bus_3_1.gENROU.Te variable */,data->simulationInfo->realParameter[1634] /* gen_Bus_3_1.gENROU.H PARAM */,"gen_Bus_3_1.gENROU.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 2668
type: SIMPLE_ASSIGN
gen_Bus_3_1.Q = (Bus_03.p[2].vi * Bus_03.p[2].ir - Bus_03.p[2].vr * Bus_03.p[2].ii) * gen_Bus_3_1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2668};
  data->localData[0]->realVars[591] /* gen_Bus_3_1.Q variable */ = ((data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */) * (data->localData[0]->realVars[239] /* Bus_03.p[2].ir variable */) - ((data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */) * (data->localData[0]->realVars[238] /* Bus_03.p[2].ii variable */))) * (data->simulationInfo->realParameter[1620] /* gen_Bus_3_1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2669
type: SIMPLE_ASSIGN
gen_Bus_3_1.P = (Bus_03.p[2].vi * Bus_03.p[2].ii + Bus_03.p[2].vr * Bus_03.p[2].ir) * gen_Bus_3_1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2669};
  data->localData[0]->realVars[590] /* gen_Bus_3_1.P variable */ = ((data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */) * (data->localData[0]->realVars[238] /* Bus_03.p[2].ii variable */) + (data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */) * (data->localData[0]->realVars[239] /* Bus_03.p[2].ir variable */)) * (data->simulationInfo->realParameter[1620] /* gen_Bus_3_1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2670
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.Q = Bus_03.p[2].vi * Bus_03.p[2].ir - Bus_03.p[2].vr * Bus_03.p[2].ii
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2670};
  data->localData[0]->realVars[601] /* gen_Bus_3_1.gENROU.Q variable */ = (data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */) * (data->localData[0]->realVars[239] /* Bus_03.p[2].ir variable */) - ((data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */) * (data->localData[0]->realVars[238] /* Bus_03.p[2].ii variable */));
  TRACE_POP
}
/*
equation index: 2671
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.P = Bus_03.p[2].vi * Bus_03.p[2].ii + Bus_03.p[2].vr * Bus_03.p[2].ir
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2671};
  data->localData[0]->realVars[594] /* gen_Bus_3_1.gENROU.P variable */ = (data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */) * (data->localData[0]->realVars[238] /* Bus_03.p[2].ii variable */) + (data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */) * (data->localData[0]->realVars[239] /* Bus_03.p[2].ir variable */);
  TRACE_POP
}
/*
equation index: 2672
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.PELEC = gen_Bus_3_1.gENROU.P / gen_Bus_3_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2672};
  data->localData[0]->realVars[595] /* gen_Bus_3_1.gENROU.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[594] /* gen_Bus_3_1.gENROU.P variable */,data->simulationInfo->realParameter[1627] /* gen_Bus_3_1.gENROU.CoB PARAM */,"gen_Bus_3_1.gENROU.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 2673
type: SIMPLE_ASSIGN
pwLine6.Q12 = (Bus_03.p[2].vi * pwLine6.is.re - Bus_03.p[2].vr * pwLine6.is.im) * pwLine6.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2673};
  data->localData[0]->realVars[793] /* pwLine6.Q12 variable */ = ((data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */) * (data->localData[0]->realVars[798] /* pwLine6.is.re variable */) - ((data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */) * (data->localData[0]->realVars[797] /* pwLine6.is.im variable */))) * (data->simulationInfo->realParameter[2323] /* pwLine6.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2674
type: SIMPLE_ASSIGN
pwLine6.P12 = (Bus_03.p[2].vr * pwLine6.is.re + Bus_03.p[2].vi * pwLine6.is.im) * pwLine6.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2674};
  data->localData[0]->realVars[791] /* pwLine6.P12 variable */ = ((data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */) * (data->localData[0]->realVars[798] /* pwLine6.is.re variable */) + (data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */) * (data->localData[0]->realVars[797] /* pwLine6.is.im variable */)) * (data->simulationInfo->realParameter[2323] /* pwLine6.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2675
type: SIMPLE_ASSIGN
pwLine2.Q21 = (Bus_03.p[2].vr * pwLine2.ir.im - Bus_03.p[2].vi * pwLine2.ir.re) * pwLine2.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2675};
  data->localData[0]->realVars[762] /* pwLine2.Q21 variable */ = ((data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */) * (data->localData[0]->realVars[763] /* pwLine2.ir.im variable */) - ((data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */) * (data->localData[0]->realVars[764] /* pwLine2.ir.re variable */))) * (data->simulationInfo->realParameter[2279] /* pwLine2.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2676
type: SIMPLE_ASSIGN
pwLine2.P21 = ((-Bus_03.p[2].vr) * pwLine2.ir.re - Bus_03.p[2].vi * pwLine2.ir.im) * pwLine2.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2676};
  data->localData[0]->realVars[760] /* pwLine2.P21 variable */ = (((-data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */)) * (data->localData[0]->realVars[764] /* pwLine2.ir.re variable */) - ((data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */) * (data->localData[0]->realVars[763] /* pwLine2.ir.im variable */))) * (data->simulationInfo->realParameter[2279] /* pwLine2.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2677
type: SIMPLE_ASSIGN
LOAD_03.angle = atan2(Bus_03.p[2].vi, Bus_03.p[2].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2677};
  data->localData[0]->realVars[332] /* LOAD_03.angle variable */ = atan2(data->localData[0]->realVars[240] /* Bus_03.p[2].vi variable */, data->localData[0]->realVars[241] /* Bus_03.p[2].vr variable */);
  TRACE_POP
}
/*
equation index: 2678
type: SIMPLE_ASSIGN
Bus_03.angle = 57.29577951308232 * LOAD_03.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2678};
  data->localData[0]->realVars[235] /* Bus_03.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[332] /* LOAD_03.angle variable */);
  TRACE_POP
}
/*
equation index: 2679
type: SIMPLE_ASSIGN
gen_Bus_3_1.gENROU.anglev = LOAD_03.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2679};
  data->localData[0]->realVars[605] /* gen_Bus_3_1.gENROU.anglev variable */ = data->localData[0]->realVars[332] /* LOAD_03.angle variable */;
  TRACE_POP
}
/*
equation index: 2680
type: SIMPLE_ASSIGN
pwLine6.Q21 = (Bus_04.p[4].vr * pwLine6.ir.im - Bus_04.p[4].vi * pwLine6.ir.re) * pwLine6.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2680};
  data->localData[0]->realVars[794] /* pwLine6.Q21 variable */ = ((data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */) * (data->localData[0]->realVars[795] /* pwLine6.ir.im variable */) - ((data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */) * (data->localData[0]->realVars[796] /* pwLine6.ir.re variable */))) * (data->simulationInfo->realParameter[2323] /* pwLine6.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2681
type: SIMPLE_ASSIGN
pwLine6.P21 = ((-Bus_04.p[4].vr) * pwLine6.ir.re - Bus_04.p[4].vi * pwLine6.ir.im) * pwLine6.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2681};
  data->localData[0]->realVars[792] /* pwLine6.P21 variable */ = (((-data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */)) * (data->localData[0]->realVars[796] /* pwLine6.ir.re variable */) - ((data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */) * (data->localData[0]->realVars[795] /* pwLine6.ir.im variable */))) * (data->simulationInfo->realParameter[2323] /* pwLine6.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2682
type: SIMPLE_ASSIGN
pwLine5.Q21 = (Bus_04.p[4].vr * pwLine5.ir.im - Bus_04.p[4].vi * pwLine5.ir.re) * pwLine5.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2682};
  data->localData[0]->realVars[786] /* pwLine5.Q21 variable */ = ((data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */) * (data->localData[0]->realVars[787] /* pwLine5.ir.im variable */) - ((data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */) * (data->localData[0]->realVars[788] /* pwLine5.ir.re variable */))) * (data->simulationInfo->realParameter[2312] /* pwLine5.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2683
type: SIMPLE_ASSIGN
pwLine5.P21 = ((-Bus_04.p[4].vr) * pwLine5.ir.re - Bus_04.p[4].vi * pwLine5.ir.im) * pwLine5.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2683};
  data->localData[0]->realVars[784] /* pwLine5.P21 variable */ = (((-data->localData[0]->realVars[253] /* Bus_04.p[4].vr variable */)) * (data->localData[0]->realVars[788] /* pwLine5.ir.re variable */) - ((data->localData[0]->realVars[252] /* Bus_04.p[4].vi variable */) * (data->localData[0]->realVars[787] /* pwLine5.ir.im variable */))) * (data->simulationInfo->realParameter[2312] /* pwLine5.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2684
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.ISORCE = gen_Bus_2_1.gENROU.K1d * (gen_Bus_2_1.gENROU.Epq + (gen_Bus_2_1.gENROU.Xl - gen_Bus_2_1.gENROU.Xpd) * gen_Bus_2_1.gENROU.id - gen_Bus_2_1.gENROU.PSIkd) + gen_Bus_2_1.gENROU.Epq + gen_Bus_2_1.gENROU.id * (gen_Bus_2_1.gENROU.Xd - gen_Bus_2_1.gENROU.Xpd) + $cse3 * gen_Bus_2_1.gENROU.PSIppd
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2684};
  data->localData[0]->realVars[493] /* gen_Bus_2_1.gENROU.ISORCE variable */ = (data->simulationInfo->realParameter[1106] /* gen_Bus_2_1.gENROU.K1d PARAM */) * (data->localData[0]->realVars[37] /* gen_Bus_2_1.gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[1143] /* gen_Bus_2_1.gENROU.Xl PARAM */ - data->simulationInfo->realParameter[1144] /* gen_Bus_2_1.gENROU.Xpd PARAM */) * (data->localData[0]->realVars[507] /* gen_Bus_2_1.gENROU.id variable */) - data->localData[0]->realVars[38] /* gen_Bus_2_1.gENROU.PSIkd STATE(1) */) + data->localData[0]->realVars[37] /* gen_Bus_2_1.gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[507] /* gen_Bus_2_1.gENROU.id variable */) * (data->simulationInfo->realParameter[1142] /* gen_Bus_2_1.gENROU.Xd PARAM */ - data->simulationInfo->realParameter[1144] /* gen_Bus_2_1.gENROU.Xpd PARAM */) + (data->localData[0]->realVars[213] /* $cse3 variable */) * (data->localData[0]->realVars[499] /* gen_Bus_2_1.gENROU.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 2685
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.gENROU.Epq = (gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_2_1.gENROU.ISORCE) / gen_Bus_2_1.gENROU.Tpd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2685};
  data->localData[0]->realVars[139] /* der(gen_Bus_2_1.gENROU.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[44] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[493] /* gen_Bus_2_1.gENROU.ISORCE variable */,data->simulationInfo->realParameter[1134] /* gen_Bus_2_1.gENROU.Tpd0 PARAM */,"gen_Bus_2_1.gENROU.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2686
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.gENROU.PSIkd = (gen_Bus_2_1.gENROU.Epq + (gen_Bus_2_1.gENROU.Xl - gen_Bus_2_1.gENROU.Xpd) * gen_Bus_2_1.gENROU.id - gen_Bus_2_1.gENROU.PSIkd) / gen_Bus_2_1.gENROU.Tppd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2686};
  data->localData[0]->realVars[140] /* der(gen_Bus_2_1.gENROU.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[37] /* gen_Bus_2_1.gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[1143] /* gen_Bus_2_1.gENROU.Xl PARAM */ - data->simulationInfo->realParameter[1144] /* gen_Bus_2_1.gENROU.Xpd PARAM */) * (data->localData[0]->realVars[507] /* gen_Bus_2_1.gENROU.id variable */) - data->localData[0]->realVars[38] /* gen_Bus_2_1.gENROU.PSIkd STATE(1) */,data->simulationInfo->realParameter[1135] /* gen_Bus_2_1.gENROU.Tppd0 PARAM */,"gen_Bus_2_1.gENROU.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2687
type: SIMPLE_ASSIGN
pwLine5.Q12 = (Bus_02.n[2].vi * pwLine5.is.re - Bus_02.n[2].vr * pwLine5.is.im) * pwLine5.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2687};
  data->localData[0]->realVars[785] /* pwLine5.Q12 variable */ = ((data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (data->localData[0]->realVars[790] /* pwLine5.is.re variable */) - ((data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (data->localData[0]->realVars[789] /* pwLine5.is.im variable */))) * (data->simulationInfo->realParameter[2312] /* pwLine5.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2688
type: SIMPLE_ASSIGN
pwLine5.P12 = (Bus_02.n[2].vr * pwLine5.is.re + Bus_02.n[2].vi * pwLine5.is.im) * pwLine5.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2688};
  data->localData[0]->realVars[783] /* pwLine5.P12 variable */ = ((data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (data->localData[0]->realVars[790] /* pwLine5.is.re variable */) + (data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (data->localData[0]->realVars[789] /* pwLine5.is.im variable */)) * (data->simulationInfo->realParameter[2312] /* pwLine5.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2689
type: SIMPLE_ASSIGN
LOAD_02.angle = atan2(Bus_02.n[2].vi, Bus_02.n[2].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2689};
  data->localData[0]->realVars[326] /* LOAD_02.angle variable */ = atan2(data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */, data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */);
  TRACE_POP
}
/*
equation index: 2690
type: SIMPLE_ASSIGN
Bus_02.angle = 57.29577951308232 * LOAD_02.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2690};
  data->localData[0]->realVars[227] /* Bus_02.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[326] /* LOAD_02.angle variable */);
  TRACE_POP
}
/*
equation index: 2691
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.anglev = LOAD_02.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2691};
  data->localData[0]->realVars[506] /* gen_Bus_2_1.gENROU.anglev variable */ = data->localData[0]->realVars[326] /* LOAD_02.angle variable */;
  TRACE_POP
}
/*
equation index: 2692
type: SIMPLE_ASSIGN
pwLine2.Q12 = (Bus_02.n[2].vi * pwLine2.is.re - Bus_02.n[2].vr * pwLine2.is.im) * pwLine2.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2692};
  data->localData[0]->realVars[761] /* pwLine2.Q12 variable */ = ((data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (data->localData[0]->realVars[766] /* pwLine2.is.re variable */) - ((data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (data->localData[0]->realVars[765] /* pwLine2.is.im variable */))) * (data->simulationInfo->realParameter[2279] /* pwLine2.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2693
type: SIMPLE_ASSIGN
pwLine2.P12 = (Bus_02.n[2].vr * pwLine2.is.re + Bus_02.n[2].vi * pwLine2.is.im) * pwLine2.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2693};
  data->localData[0]->realVars[759] /* pwLine2.P12 variable */ = ((data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (data->localData[0]->realVars[766] /* pwLine2.is.re variable */) + (data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (data->localData[0]->realVars[765] /* pwLine2.is.im variable */)) * (data->simulationInfo->realParameter[2279] /* pwLine2.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2694
type: SIMPLE_ASSIGN
pwLine4.Q12 = (Bus_02.n[2].vi * pwLine4.is.re - Bus_02.n[2].vr * pwLine4.is.im) * pwLine4.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2694};
  data->localData[0]->realVars[777] /* pwLine4.Q12 variable */ = ((data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (data->localData[0]->realVars[782] /* pwLine4.is.re variable */) - ((data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (data->localData[0]->realVars[781] /* pwLine4.is.im variable */))) * (data->simulationInfo->realParameter[2301] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2695
type: SIMPLE_ASSIGN
pwLine4.P12 = (Bus_02.n[2].vr * pwLine4.is.re + Bus_02.n[2].vi * pwLine4.is.im) * pwLine4.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2695};
  data->localData[0]->realVars[775] /* pwLine4.P12 variable */ = ((data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (data->localData[0]->realVars[782] /* pwLine4.is.re variable */) + (data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (data->localData[0]->realVars[781] /* pwLine4.is.im variable */)) * (data->simulationInfo->realParameter[2301] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2696
type: SIMPLE_ASSIGN
Bus_05.V = LOAD_05.v
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2696};
  data->localData[0]->realVars[254] /* Bus_05.V variable */ = data->localData[0]->realVars[347] /* LOAD_05.v variable */;
  TRACE_POP
}
/*
equation index: 2697
type: SIMPLE_ASSIGN
pwLine3.Q12 = (Bus_05.p[2].vi * pwLine3.is.re - Bus_05.p[2].vr * pwLine3.is.im) * pwLine3.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2697};
  data->localData[0]->realVars[769] /* pwLine3.Q12 variable */ = ((data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */) * (data->localData[0]->realVars[774] /* pwLine3.is.re variable */) - ((data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */) * (data->localData[0]->realVars[773] /* pwLine3.is.im variable */))) * (data->simulationInfo->realParameter[2290] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2698
type: SIMPLE_ASSIGN
pwLine3.P12 = (Bus_05.p[2].vr * pwLine3.is.re + Bus_05.p[2].vi * pwLine3.is.im) * pwLine3.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2698};
  data->localData[0]->realVars[767] /* pwLine3.P12 variable */ = ((data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */) * (data->localData[0]->realVars[774] /* pwLine3.is.re variable */) + (data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */) * (data->localData[0]->realVars[773] /* pwLine3.is.im variable */)) * (data->simulationInfo->realParameter[2290] /* pwLine3.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2699
type: SIMPLE_ASSIGN
pwLine1.Q21 = (Bus_05.p[2].vr * pwLine1.ir.im - Bus_05.p[2].vi * pwLine1.ir.re) * pwLine1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2699};
  data->localData[0]->realVars[706] /* pwLine1.Q21 variable */ = ((data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */) * (data->localData[0]->realVars[707] /* pwLine1.ir.im variable */) - ((data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */) * (data->localData[0]->realVars[708] /* pwLine1.ir.re variable */))) * (data->simulationInfo->realParameter[2202] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2700
type: SIMPLE_ASSIGN
pwLine1.P21 = ((-Bus_05.p[2].vr) * pwLine1.ir.re - Bus_05.p[2].vi * pwLine1.ir.im) * pwLine1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2700};
  data->localData[0]->realVars[704] /* pwLine1.P21 variable */ = (((-data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */)) * (data->localData[0]->realVars[708] /* pwLine1.ir.re variable */) - ((data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */) * (data->localData[0]->realVars[707] /* pwLine1.ir.im variable */))) * (data->simulationInfo->realParameter[2202] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2701
type: SIMPLE_ASSIGN
LOAD_05.angle = atan2(Bus_05.p[2].vi, Bus_05.p[2].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2701};
  data->localData[0]->realVars[344] /* LOAD_05.angle variable */ = atan2(data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */, data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */);
  TRACE_POP
}
/*
equation index: 2702
type: SIMPLE_ASSIGN
Bus_05.angle = 57.29577951308232 * LOAD_05.angle
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2702};
  data->localData[0]->realVars[255] /* Bus_05.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[344] /* LOAD_05.angle variable */);
  TRACE_POP
}
/*
equation index: 2703
type: SIMPLE_ASSIGN
pwLine4.Q21 = (Bus_05.p[2].vr * pwLine4.ir.im - Bus_05.p[2].vi * pwLine4.ir.re) * pwLine4.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2703};
  data->localData[0]->realVars[778] /* pwLine4.Q21 variable */ = ((data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */) * (data->localData[0]->realVars[779] /* pwLine4.ir.im variable */) - ((data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */) * (data->localData[0]->realVars[780] /* pwLine4.ir.re variable */))) * (data->simulationInfo->realParameter[2301] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2704
type: SIMPLE_ASSIGN
pwLine4.P21 = ((-Bus_05.p[2].vr) * pwLine4.ir.re - Bus_05.p[2].vi * pwLine4.ir.im) * pwLine4.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2704};
  data->localData[0]->realVars[776] /* pwLine4.P21 variable */ = (((-data->localData[0]->realVars[261] /* Bus_05.p[2].vr variable */)) * (data->localData[0]->realVars[780] /* pwLine4.ir.re variable */) - ((data->localData[0]->realVars[260] /* Bus_05.p[2].vi variable */) * (data->localData[0]->realVars[779] /* pwLine4.ir.im variable */))) * (data->simulationInfo->realParameter[2301] /* pwLine4.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2705
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.I = sqrt(Bus_01.n[1].ii ^ 2.0 + Bus_01.n[1].ir ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2705};
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = data->localData[0]->realVars[222] /* Bus_01.n[1].ii variable */;
  tmp30 = data->localData[0]->realVars[223] /* Bus_01.n[1].ir variable */;
  data->localData[0]->realVars[392] /* gen_Bus_1_1.gENROU.I variable */ = sqrt((tmp29 * tmp29) + (tmp30 * tmp30));
  TRACE_POP
}
/*
equation index: 2706
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.anglei = atan2(-Bus_01.n[1].ii, -Bus_01.n[1].ir)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2706};
  data->localData[0]->realVars[405] /* gen_Bus_1_1.gENROU.anglei variable */ = atan2((-data->localData[0]->realVars[222] /* Bus_01.n[1].ii variable */), (-data->localData[0]->realVars[223] /* Bus_01.n[1].ir variable */));
  TRACE_POP
}
/*
equation index: 2707
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.ISORCE = gen_Bus_1_1.gENROU.K1d * (gen_Bus_1_1.gENROU.Epq + (gen_Bus_1_1.gENROU.Xl - gen_Bus_1_1.gENROU.Xpd) * gen_Bus_1_1.gENROU.id - gen_Bus_1_1.gENROU.PSIkd) + gen_Bus_1_1.gENROU.Epq + gen_Bus_1_1.gENROU.id * (gen_Bus_1_1.gENROU.Xd - gen_Bus_1_1.gENROU.Xpd) + $cse6 * gen_Bus_1_1.gENROU.PSIppd
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2707};
  data->localData[0]->realVars[393] /* gen_Bus_1_1.gENROU.ISORCE variable */ = (data->simulationInfo->realParameter[571] /* gen_Bus_1_1.gENROU.K1d PARAM */) * (data->localData[0]->realVars[1] /* gen_Bus_1_1.gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[608] /* gen_Bus_1_1.gENROU.Xl PARAM */ - data->simulationInfo->realParameter[609] /* gen_Bus_1_1.gENROU.Xpd PARAM */) * (data->localData[0]->realVars[407] /* gen_Bus_1_1.gENROU.id variable */) - data->localData[0]->realVars[2] /* gen_Bus_1_1.gENROU.PSIkd STATE(1) */) + data->localData[0]->realVars[1] /* gen_Bus_1_1.gENROU.Epq STATE(1) */ + (data->localData[0]->realVars[407] /* gen_Bus_1_1.gENROU.id variable */) * (data->simulationInfo->realParameter[607] /* gen_Bus_1_1.gENROU.Xd PARAM */ - data->simulationInfo->realParameter[609] /* gen_Bus_1_1.gENROU.Xpd PARAM */) + (data->localData[0]->realVars[216] /* $cse6 variable */) * (data->localData[0]->realVars[399] /* gen_Bus_1_1.gENROU.PSIppd variable */);
  TRACE_POP
}
/*
equation index: 2708
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.gENROU.Epq = (gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y - gen_Bus_1_1.gENROU.ISORCE) / gen_Bus_1_1.gENROU.Tpd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2708};
  data->localData[0]->realVars[103] /* der(gen_Bus_1_1.gENROU.Epq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[8] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */ - data->localData[0]->realVars[393] /* gen_Bus_1_1.gENROU.ISORCE variable */,data->simulationInfo->realParameter[599] /* gen_Bus_1_1.gENROU.Tpd0 PARAM */,"gen_Bus_1_1.gENROU.Tpd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2709
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.gENROU.PSIkd = (gen_Bus_1_1.gENROU.Epq + (gen_Bus_1_1.gENROU.Xl - gen_Bus_1_1.gENROU.Xpd) * gen_Bus_1_1.gENROU.id - gen_Bus_1_1.gENROU.PSIkd) / gen_Bus_1_1.gENROU.Tppd0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2709};
  data->localData[0]->realVars[104] /* der(gen_Bus_1_1.gENROU.PSIkd) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[1] /* gen_Bus_1_1.gENROU.Epq STATE(1) */ + (data->simulationInfo->realParameter[608] /* gen_Bus_1_1.gENROU.Xl PARAM */ - data->simulationInfo->realParameter[609] /* gen_Bus_1_1.gENROU.Xpd PARAM */) * (data->localData[0]->realVars[407] /* gen_Bus_1_1.gENROU.id variable */) - data->localData[0]->realVars[2] /* gen_Bus_1_1.gENROU.PSIkd STATE(1) */,data->simulationInfo->realParameter[600] /* gen_Bus_1_1.gENROU.Tppd0 PARAM */,"gen_Bus_1_1.gENROU.Tppd0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2710
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.Te = gen_Bus_1_1.gENROU.PSId * gen_Bus_1_1.gENROU.iq - gen_Bus_1_1.gENROU.PSIq * gen_Bus_1_1.gENROU.id
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2710};
  data->localData[0]->realVars[403] /* gen_Bus_1_1.gENROU.Te variable */ = (data->localData[0]->realVars[397] /* gen_Bus_1_1.gENROU.PSId variable */) * (data->localData[0]->realVars[408] /* gen_Bus_1_1.gENROU.iq variable */) - ((data->localData[0]->realVars[401] /* gen_Bus_1_1.gENROU.PSIq variable */) * (data->localData[0]->realVars[407] /* gen_Bus_1_1.gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 2711
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.gENROU.w = 0.5 * ((gen_Bus_1_1.gENROU.PMECH - gen_Bus_1_1.gENROU.D * gen_Bus_1_1.gENROU.w) / (1.0 + gen_Bus_1_1.gENROU.w) - gen_Bus_1_1.gENROU.Te) / gen_Bus_1_1.gENROU.H
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2711};
  data->localData[0]->realVars[107] /* der(gen_Bus_1_1.gENROU.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->localData[0]->realVars[396] /* gen_Bus_1_1.gENROU.PMECH variable */ - ((data->simulationInfo->realParameter[558] /* gen_Bus_1_1.gENROU.D PARAM */) * (data->localData[0]->realVars[5] /* gen_Bus_1_1.gENROU.w STATE(1) */)),1.0 + data->localData[0]->realVars[5] /* gen_Bus_1_1.gENROU.w STATE(1) */,"1.0 + gen_Bus_1_1.gENROU.w",equationIndexes) - data->localData[0]->realVars[403] /* gen_Bus_1_1.gENROU.Te variable */,data->simulationInfo->realParameter[564] /* gen_Bus_1_1.gENROU.H PARAM */,"gen_Bus_1_1.gENROU.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 2712
type: SIMPLE_ASSIGN
Bus_01.V = sqrt(Bus_01.n[1].vr ^ 2.0 + Bus_01.n[1].vi ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2712};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */;
  tmp32 = data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */;
  data->localData[0]->realVars[220] /* Bus_01.V variable */ = sqrt((tmp31 * tmp31) + (tmp32 * tmp32));
  TRACE_POP
}
/*
equation index: 2713
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.DiffV.u2 = if abs(gen_Bus_1_1.iEEET1_1.TransducerDelay.T) <= 1e-015 then Bus_01.V * gen_Bus_1_1.iEEET1_1.TransducerDelay.K else gen_Bus_1_1.iEEET1_1.TransducerDelay.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2713};
  modelica_boolean tmp33;
  tmp33 = LessEq(fabs(data->simulationInfo->realParameter[665] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.T PARAM */),1e-015);
  data->localData[0]->realVars[411] /* gen_Bus_1_1.iEEET1_1.DiffV.u2 variable */ = (tmp33?(data->localData[0]->realVars[220] /* Bus_01.V variable */) * (data->simulationInfo->realParameter[664] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.K PARAM */):data->localData[0]->realVars[6] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2714
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.DiffV.y = gen_Bus_1_1.iEEET1_1.DiffV.k1 * gen_Bus_1_1.iEEET1_1.VoltageReference.k + gen_Bus_1_1.iEEET1_1.DiffV.k2 * gen_Bus_1_1.iEEET1_1.DiffV.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2714};
  data->localData[0]->realVars[412] /* gen_Bus_1_1.iEEET1_1.DiffV.y variable */ = (data->simulationInfo->realParameter[642] /* gen_Bus_1_1.iEEET1_1.DiffV.k1 PARAM */) * (data->simulationInfo->realParameter[677] /* gen_Bus_1_1.iEEET1_1.VoltageReference.k PARAM */) + (data->simulationInfo->realParameter[643] /* gen_Bus_1_1.iEEET1_1.DiffV.k2 PARAM */) * (data->localData[0]->realVars[411] /* gen_Bus_1_1.iEEET1_1.DiffV.u2 variable */);
  TRACE_POP
}
/*
equation index: 2715
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.iEEET1_1.TransducerDelay.state = (gen_Bus_1_1.iEEET1_1.TransducerDelay.K * Bus_01.V - gen_Bus_1_1.iEEET1_1.TransducerDelay.state) / gen_Bus_1_1.iEEET1_1.TransducerDelay.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2715};
  data->localData[0]->realVars[108] /* der(gen_Bus_1_1.iEEET1_1.TransducerDelay.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[664] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.K PARAM */) * (data->localData[0]->realVars[220] /* Bus_01.V variable */) - data->localData[0]->realVars[6] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.state STATE(1) */,data->simulationInfo->realParameter[666] /* gen_Bus_1_1.iEEET1_1.TransducerDelay.T_mod PARAM */,"gen_Bus_1_1.iEEET1_1.TransducerDelay.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2716
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.ECOMP = Bus_01.V
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2716};
  data->localData[0]->realVars[414] /* gen_Bus_1_1.iEEET1_1.ECOMP variable */ = data->localData[0]->realVars[220] /* Bus_01.V variable */;
  TRACE_POP
}
/*
equation index: 2717
type: SIMPLE_ASSIGN
gen_Bus_1_1.Q = (Bus_01.n[1].vi * Bus_01.n[1].ir - Bus_01.n[1].vr * Bus_01.n[1].ii) * gen_Bus_1_1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2717};
  data->localData[0]->realVars[391] /* gen_Bus_1_1.Q variable */ = ((data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */) * (data->localData[0]->realVars[223] /* Bus_01.n[1].ir variable */) - ((data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */) * (data->localData[0]->realVars[222] /* Bus_01.n[1].ii variable */))) * (data->simulationInfo->realParameter[550] /* gen_Bus_1_1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2718
type: SIMPLE_ASSIGN
gen_Bus_1_1.P = (Bus_01.n[1].vi * Bus_01.n[1].ii + Bus_01.n[1].vr * Bus_01.n[1].ir) * gen_Bus_1_1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2718};
  data->localData[0]->realVars[390] /* gen_Bus_1_1.P variable */ = ((data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */) * (data->localData[0]->realVars[222] /* Bus_01.n[1].ii variable */) + (data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */) * (data->localData[0]->realVars[223] /* Bus_01.n[1].ir variable */)) * (data->simulationInfo->realParameter[550] /* gen_Bus_1_1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2719
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.Q = Bus_01.n[1].vi * Bus_01.n[1].ir - Bus_01.n[1].vr * Bus_01.n[1].ii
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2719};
  data->localData[0]->realVars[402] /* gen_Bus_1_1.gENROU.Q variable */ = (data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */) * (data->localData[0]->realVars[223] /* Bus_01.n[1].ir variable */) - ((data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */) * (data->localData[0]->realVars[222] /* Bus_01.n[1].ii variable */));
  TRACE_POP
}
/*
equation index: 2720
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.P = Bus_01.n[1].vi * Bus_01.n[1].ii + Bus_01.n[1].vr * Bus_01.n[1].ir
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2720};
  data->localData[0]->realVars[394] /* gen_Bus_1_1.gENROU.P variable */ = (data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */) * (data->localData[0]->realVars[222] /* Bus_01.n[1].ii variable */) + (data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */) * (data->localData[0]->realVars[223] /* Bus_01.n[1].ir variable */);
  TRACE_POP
}
/*
equation index: 2721
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.PELEC = gen_Bus_1_1.gENROU.P / gen_Bus_1_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2721};
  data->localData[0]->realVars[395] /* gen_Bus_1_1.gENROU.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[394] /* gen_Bus_1_1.gENROU.P variable */,data->simulationInfo->realParameter[557] /* gen_Bus_1_1.gENROU.CoB PARAM */,"gen_Bus_1_1.gENROU.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 2722
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag2.TF.y = (gen_Bus_1_1.pSS2A.derivativeLag2.TF.bb[2] - gen_Bus_1_1.pSS2A.derivativeLag2.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag2.TF.d) * gen_Bus_1_1.pSS2A.derivativeLag2.TF.x[1] + gen_Bus_1_1.pSS2A.derivativeLag2.TF.d * gen_Bus_1_1.gENROU.PELEC
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2722};
  data->localData[0]->realVars[447] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.y variable */ = (data->simulationInfo->realParameter[823] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[818] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[824] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.d PARAM */))) * (data->localData[0]->realVars[446] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.x[1] variable */) + (data->simulationInfo->realParameter[824] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.d PARAM */) * (data->localData[0]->realVars[395] /* gen_Bus_1_1.gENROU.PELEC variable */);
  TRACE_POP
}
/*
equation index: 2723
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag2.y = if abs(gen_Bus_1_1.pSS2A.derivativeLag2.T) < 1e-015 then gen_Bus_1_1.gENROU.PELEC else gen_Bus_1_1.pSS2A.derivativeLag2.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2723};
  modelica_boolean tmp34;
  tmp34 = Less(fabs(data->simulationInfo->realParameter[816] /* gen_Bus_1_1.pSS2A.derivativeLag2.T PARAM */),1e-015);
  data->localData[0]->realVars[448] /* gen_Bus_1_1.pSS2A.derivativeLag2.y variable */ = (tmp34?data->localData[0]->realVars[395] /* gen_Bus_1_1.gENROU.PELEC variable */:data->localData[0]->realVars[447] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2724
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.derivativeLag3.TF.y = (gen_Bus_1_1.pSS2A.derivativeLag3.TF.bb[2] - gen_Bus_1_1.pSS2A.derivativeLag3.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag3.TF.d) * gen_Bus_1_1.pSS2A.derivativeLag3.TF.x[1] + gen_Bus_1_1.pSS2A.derivativeLag3.TF.d * gen_Bus_1_1.pSS2A.derivativeLag2.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2724};
  data->localData[0]->realVars[450] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.y variable */ = (data->simulationInfo->realParameter[840] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[835] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[841] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.d PARAM */))) * (data->localData[0]->realVars[449] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.x[1] variable */) + (data->simulationInfo->realParameter[841] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.d PARAM */) * (data->localData[0]->realVars[448] /* gen_Bus_1_1.pSS2A.derivativeLag2.y variable */);
  TRACE_POP
}
/*
equation index: 2725
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.SimpleLag2.u = if abs(gen_Bus_1_1.pSS2A.derivativeLag3.T) < 1e-015 then gen_Bus_1_1.pSS2A.derivativeLag2.y else gen_Bus_1_1.pSS2A.derivativeLag3.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2725};
  modelica_boolean tmp35;
  tmp35 = Less(fabs(data->simulationInfo->realParameter[833] /* gen_Bus_1_1.pSS2A.derivativeLag3.T PARAM */),1e-015);
  data->localData[0]->realVars[436] /* gen_Bus_1_1.pSS2A.SimpleLag2.u variable */ = (tmp35?data->localData[0]->realVars[448] /* gen_Bus_1_1.pSS2A.derivativeLag2.y variable */:data->localData[0]->realVars[450] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2726
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.SimpleLag2.y = if abs(gen_Bus_1_1.pSS2A.SimpleLag2.T) <= 1e-015 then gen_Bus_1_1.pSS2A.SimpleLag2.u * gen_Bus_1_1.pSS2A.SimpleLag2.K else gen_Bus_1_1.pSS2A.SimpleLag2.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2726};
  modelica_boolean tmp36;
  tmp36 = LessEq(fabs(data->simulationInfo->realParameter[758] /* gen_Bus_1_1.pSS2A.SimpleLag2.T PARAM */),1e-015);
  data->localData[0]->realVars[437] /* gen_Bus_1_1.pSS2A.SimpleLag2.y variable */ = (tmp36?(data->localData[0]->realVars[436] /* gen_Bus_1_1.pSS2A.SimpleLag2.u variable */) * (data->simulationInfo->realParameter[757] /* gen_Bus_1_1.pSS2A.SimpleLag2.K PARAM */):data->localData[0]->realVars[13] /* gen_Bus_1_1.pSS2A.SimpleLag2.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2727
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.add.y = gen_Bus_1_1.pSS2A.add.k1 * gen_Bus_1_1.pSS2A.SimpleLag1.y + gen_Bus_1_1.pSS2A.add.k2 * gen_Bus_1_1.pSS2A.SimpleLag2.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2727};
  data->localData[0]->realVars[438] /* gen_Bus_1_1.pSS2A.add.y variable */ = (data->simulationInfo->realParameter[776] /* gen_Bus_1_1.pSS2A.add.k1 PARAM */) * (data->localData[0]->realVars[435] /* gen_Bus_1_1.pSS2A.SimpleLag1.y variable */) + (data->simulationInfo->realParameter[777] /* gen_Bus_1_1.pSS2A.add.k2 PARAM */) * (data->localData[0]->realVars[437] /* gen_Bus_1_1.pSS2A.SimpleLag2.y variable */);
  TRACE_POP
}
/*
equation index: 2728
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.y = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.bb[2] - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.d) * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] + gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.d * gen_Bus_1_1.pSS2A.add.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2728};
  data->localData[0]->realVars[452] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.y variable */ = (data->simulationInfo->realParameter[861] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[856] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[862] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.d PARAM */))) * (data->localData[0]->realVars[451] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] variable */) + (data->simulationInfo->realParameter[862] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.d PARAM */) * (data->localData[0]->realVars[438] /* gen_Bus_1_1.pSS2A.add.y variable */);
  TRACE_POP
}
/*
equation index: 2729
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.T1 - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.T2) < 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.K * gen_Bus_1_1.pSS2A.add.y else gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2729};
  modelica_boolean tmp37;
  tmp37 = Less(fabs(data->simulationInfo->realParameter[852] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.T1 PARAM */ - data->simulationInfo->realParameter[853] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.T2 PARAM */),1e-015);
  data->localData[0]->realVars[453] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y variable */ = (tmp37?(data->simulationInfo->realParameter[851] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.K PARAM */) * (data->localData[0]->realVars[438] /* gen_Bus_1_1.pSS2A.add.y variable */):data->localData[0]->realVars[452] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2730
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.T) <= 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.K else gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2730};
  modelica_boolean tmp38;
  tmp38 = LessEq(fabs(data->simulationInfo->realParameter[998] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.T PARAM */),1e-015);
  data->localData[0]->realVars[475] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.y variable */ = (tmp38?(data->localData[0]->realVars[453] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y variable */) * (data->simulationInfo->realParameter[997] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.K PARAM */):data->localData[0]->realVars[26] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2731
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.T) <= 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.y * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.K else gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2731};
  modelica_boolean tmp39;
  tmp39 = LessEq(fabs(data->simulationInfo->realParameter[1003] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.T PARAM */),1e-015);
  data->localData[0]->realVars[476] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.y variable */ = (tmp39?(data->localData[0]->realVars[475] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.y variable */) * (data->simulationInfo->realParameter[1002] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.K PARAM */):data->localData[0]->realVars[27] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2732
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.T) <= 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.y * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.K else gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2732};
  modelica_boolean tmp40;
  tmp40 = LessEq(fabs(data->simulationInfo->realParameter[1008] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.T PARAM */),1e-015);
  data->localData[0]->realVars[477] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.y variable */ = (tmp40?(data->localData[0]->realVars[476] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.y variable */) * (data->simulationInfo->realParameter[1007] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.K PARAM */):data->localData[0]->realVars[28] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2733
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.T) <= 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.y * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.K else gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2733};
  modelica_boolean tmp41;
  tmp41 = LessEq(fabs(data->simulationInfo->realParameter[1013] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.T PARAM */),1e-015);
  data->localData[0]->realVars[478] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.y variable */ = (tmp41?(data->localData[0]->realVars[477] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.y variable */) * (data->simulationInfo->realParameter[1012] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.K PARAM */):data->localData[0]->realVars[29] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2734
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.add1.u1 = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.T) <= 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.y * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.K else gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2734};
  modelica_boolean tmp42;
  tmp42 = LessEq(fabs(data->simulationInfo->realParameter[1018] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.T PARAM */),1e-015);
  data->localData[0]->realVars[439] /* gen_Bus_1_1.pSS2A.add1.u1 variable */ = (tmp42?(data->localData[0]->realVars[478] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.y variable */) * (data->simulationInfo->realParameter[1017] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.K PARAM */):data->localData[0]->realVars[30] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2735
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.T) <= 1e-015 then gen_Bus_1_1.pSS2A.add1.u1 * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.K else gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2735};
  modelica_boolean tmp43;
  tmp43 = LessEq(fabs(data->simulationInfo->realParameter[1023] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.T PARAM */),1e-015);
  data->localData[0]->realVars[479] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.y variable */ = (tmp43?(data->localData[0]->realVars[439] /* gen_Bus_1_1.pSS2A.add1.u1 variable */) * (data->simulationInfo->realParameter[1022] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.K PARAM */):data->localData[0]->realVars[31] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2736
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.T) <= 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.y * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.K else gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2736};
  modelica_boolean tmp44;
  tmp44 = LessEq(fabs(data->simulationInfo->realParameter[1028] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.T PARAM */),1e-015);
  data->localData[0]->realVars[480] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.y variable */ = (tmp44?(data->localData[0]->realVars[479] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.y variable */) * (data->simulationInfo->realParameter[1027] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.K PARAM */):data->localData[0]->realVars[32] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2737
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.T) <= 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.y * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.K else gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2737};
  modelica_boolean tmp45;
  tmp45 = LessEq(fabs(data->simulationInfo->realParameter[1033] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.T PARAM */),1e-015);
  data->localData[0]->realVars[481] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.y variable */ = (tmp45?(data->localData[0]->realVars[480] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.y variable */) * (data->simulationInfo->realParameter[1032] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.K PARAM */):data->localData[0]->realVars[33] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2738
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.state = (gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.state) / gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2738};
  data->localData[0]->realVars[135] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1032] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.K PARAM */) * (data->localData[0]->realVars[480] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.y variable */) - data->localData[0]->realVars[33] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.state STATE(1) */,data->simulationInfo->realParameter[1034] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.T_mod PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_8.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2739
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.state = (gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.state) / gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2739};
  data->localData[0]->realVars[134] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1027] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.K PARAM */) * (data->localData[0]->realVars[479] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.y variable */) - data->localData[0]->realVars[32] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.state STATE(1) */,data->simulationInfo->realParameter[1029] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.T_mod PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_7.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2740
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.state = (gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.K * gen_Bus_1_1.pSS2A.add1.u1 - gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.state) / gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2740};
  data->localData[0]->realVars[133] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1022] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.K PARAM */) * (data->localData[0]->realVars[439] /* gen_Bus_1_1.pSS2A.add1.u1 variable */) - data->localData[0]->realVars[31] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.state STATE(1) */,data->simulationInfo->realParameter[1024] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.T_mod PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_6.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2741
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.state = (gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.state) / gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2741};
  data->localData[0]->realVars[132] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1017] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.K PARAM */) * (data->localData[0]->realVars[478] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.y variable */) - data->localData[0]->realVars[30] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.state STATE(1) */,data->simulationInfo->realParameter[1019] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.T_mod PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_5.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2742
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.state = (gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.state) / gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2742};
  data->localData[0]->realVars[131] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1012] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.K PARAM */) * (data->localData[0]->realVars[477] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.y variable */) - data->localData[0]->realVars[29] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.state STATE(1) */,data->simulationInfo->realParameter[1014] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.T_mod PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_4.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2743
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.state = (gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.state) / gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2743};
  data->localData[0]->realVars[130] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1007] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.K PARAM */) * (data->localData[0]->realVars[476] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.y variable */) - data->localData[0]->realVars[28] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.state STATE(1) */,data->simulationInfo->realParameter[1009] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.T_mod PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_3.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2744
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.state = (gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.state) / gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2744};
  data->localData[0]->realVars[129] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1002] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.K PARAM */) * (data->localData[0]->realVars[475] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.y variable */) - data->localData[0]->realVars[27] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.state STATE(1) */,data->simulationInfo->realParameter[1004] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.T_mod PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_2.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2745
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.state = (gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.state) / gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2745};
  data->localData[0]->realVars[128] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[997] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.K PARAM */) * (data->localData[0]->realVars[453] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y variable */) - data->localData[0]->realVars[26] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.state STATE(1) */,data->simulationInfo->realParameter[999] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.T_mod PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.SL_1.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2746
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.y = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.bb[2] - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.d) * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] + gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2746};
  data->localData[0]->realVars[455] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.y variable */ = (data->simulationInfo->realParameter[879] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[874] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[880] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.d PARAM */))) * (data->localData[0]->realVars[454] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] variable */) + (data->simulationInfo->realParameter[880] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.d PARAM */) * (data->localData[0]->realVars[453] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y variable */);
  TRACE_POP
}
/*
equation index: 2747
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.T1 - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.T2) < 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y else gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2747};
  modelica_boolean tmp46;
  tmp46 = Less(fabs(data->simulationInfo->realParameter[870] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.T1 PARAM */ - data->simulationInfo->realParameter[871] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.T2 PARAM */),1e-015);
  data->localData[0]->realVars[456] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.y variable */ = (tmp46?(data->simulationInfo->realParameter[869] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.K PARAM */) * (data->localData[0]->realVars[453] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y variable */):data->localData[0]->realVars[455] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2748
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.y = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.bb[2] - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.d) * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] + gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2748};
  data->localData[0]->realVars[458] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.y variable */ = (data->simulationInfo->realParameter[897] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[892] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[898] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.d PARAM */))) * (data->localData[0]->realVars[457] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] variable */) + (data->simulationInfo->realParameter[898] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.d PARAM */) * (data->localData[0]->realVars[456] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.y variable */);
  TRACE_POP
}
/*
equation index: 2749
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.T1 - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.T2) < 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.y else gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2749};
  modelica_boolean tmp47;
  tmp47 = Less(fabs(data->simulationInfo->realParameter[888] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.T1 PARAM */ - data->simulationInfo->realParameter[889] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.T2 PARAM */),1e-015);
  data->localData[0]->realVars[459] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.y variable */ = (tmp47?(data->simulationInfo->realParameter[887] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.K PARAM */) * (data->localData[0]->realVars[456] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.y variable */):data->localData[0]->realVars[458] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2750
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.y = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.bb[2] - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.d) * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] + gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2750};
  data->localData[0]->realVars[461] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.y variable */ = (data->simulationInfo->realParameter[915] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[910] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[916] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.d PARAM */))) * (data->localData[0]->realVars[460] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] variable */) + (data->simulationInfo->realParameter[916] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.d PARAM */) * (data->localData[0]->realVars[459] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.y variable */);
  TRACE_POP
}
/*
equation index: 2751
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.T1 - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.T2) < 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.y else gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2751};
  modelica_boolean tmp48;
  tmp48 = Less(fabs(data->simulationInfo->realParameter[906] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.T1 PARAM */ - data->simulationInfo->realParameter[907] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.T2 PARAM */),1e-015);
  data->localData[0]->realVars[462] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.y variable */ = (tmp48?(data->simulationInfo->realParameter[905] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.K PARAM */) * (data->localData[0]->realVars[459] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.y variable */):data->localData[0]->realVars[461] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2752
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.y = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.bb[2] - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.d) * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] + gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2752};
  data->localData[0]->realVars[464] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.y variable */ = (data->simulationInfo->realParameter[933] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[928] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[934] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.d PARAM */))) * (data->localData[0]->realVars[463] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] variable */) + (data->simulationInfo->realParameter[934] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.d PARAM */) * (data->localData[0]->realVars[462] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.y variable */);
  TRACE_POP
}
/*
equation index: 2753
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.T1 - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.T2) < 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.y else gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2753};
  modelica_boolean tmp49;
  tmp49 = Less(fabs(data->simulationInfo->realParameter[924] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.T1 PARAM */ - data->simulationInfo->realParameter[925] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.T2 PARAM */),1e-015);
  data->localData[0]->realVars[465] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.y variable */ = (tmp49?(data->simulationInfo->realParameter[923] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.K PARAM */) * (data->localData[0]->realVars[462] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.y variable */):data->localData[0]->realVars[464] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2754
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.y = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.bb[2] - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.d) * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] + gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2754};
  data->localData[0]->realVars[467] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.y variable */ = (data->simulationInfo->realParameter[951] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[946] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[952] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.d PARAM */))) * (data->localData[0]->realVars[466] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] variable */) + (data->simulationInfo->realParameter[952] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.d PARAM */) * (data->localData[0]->realVars[465] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.y variable */);
  TRACE_POP
}
/*
equation index: 2755
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.T1 - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.T2) < 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.y else gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2755};
  modelica_boolean tmp50;
  tmp50 = Less(fabs(data->simulationInfo->realParameter[942] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.T1 PARAM */ - data->simulationInfo->realParameter[943] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.T2 PARAM */),1e-015);
  data->localData[0]->realVars[468] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.y variable */ = (tmp50?(data->simulationInfo->realParameter[941] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.K PARAM */) * (data->localData[0]->realVars[465] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.y variable */):data->localData[0]->realVars[467] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2756
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.y = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.bb[2] - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.d) * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] + gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2756};
  data->localData[0]->realVars[470] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.y variable */ = (data->simulationInfo->realParameter[969] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[964] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[970] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.d PARAM */))) * (data->localData[0]->realVars[469] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] variable */) + (data->simulationInfo->realParameter[970] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.d PARAM */) * (data->localData[0]->realVars[468] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.y variable */);
  TRACE_POP
}
/*
equation index: 2757
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.T1 - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.T2) < 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.y else gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2757};
  modelica_boolean tmp51;
  tmp51 = Less(fabs(data->simulationInfo->realParameter[960] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.T1 PARAM */ - data->simulationInfo->realParameter[961] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.T2 PARAM */),1e-015);
  data->localData[0]->realVars[471] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.y variable */ = (tmp51?(data->simulationInfo->realParameter[959] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.K PARAM */) * (data->localData[0]->realVars[468] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.y variable */):data->localData[0]->realVars[470] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2758
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.y = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.bb[2] - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.d) * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] + gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.d * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2758};
  data->localData[0]->realVars[473] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.y variable */ = (data->simulationInfo->realParameter[987] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[982] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[988] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.d PARAM */))) * (data->localData[0]->realVars[472] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] variable */) + (data->simulationInfo->realParameter[988] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.d PARAM */) * (data->localData[0]->realVars[471] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.y variable */);
  TRACE_POP
}
/*
equation index: 2759
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.y = if abs(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.T1 - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.T2) < 1e-015 then gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.K * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.y else gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2759};
  modelica_boolean tmp52;
  tmp52 = Less(fabs(data->simulationInfo->realParameter[978] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.T1 PARAM */ - data->simulationInfo->realParameter[979] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.T2 PARAM */),1e-015);
  data->localData[0]->realVars[474] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.y variable */ = (tmp52?(data->simulationInfo->realParameter[977] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.K PARAM */) * (data->localData[0]->realVars[471] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.y variable */):data->localData[0]->realVars[473] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2760
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2760};
  data->localData[0]->realVars[127] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[983] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end PARAM */) * (data->localData[0]->realVars[471] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.y variable */) - ((data->simulationInfo->realParameter[982] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] PARAM */) * (data->localData[0]->realVars[25] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[981] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_8.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2761
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2761};
  data->localData[0]->realVars[126] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[965] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end PARAM */) * (data->localData[0]->realVars[468] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.y variable */) - ((data->simulationInfo->realParameter[964] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] PARAM */) * (data->localData[0]->realVars[24] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[963] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_7.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2762
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2762};
  data->localData[0]->realVars[125] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[947] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end PARAM */) * (data->localData[0]->realVars[465] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.y variable */) - ((data->simulationInfo->realParameter[946] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] PARAM */) * (data->localData[0]->realVars[23] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[945] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_6.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2763
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2763};
  data->localData[0]->realVars[124] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[929] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end PARAM */) * (data->localData[0]->realVars[462] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.y variable */) - ((data->simulationInfo->realParameter[928] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] PARAM */) * (data->localData[0]->realVars[22] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[927] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_5.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2764
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2764};
  data->localData[0]->realVars[123] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[911] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end PARAM */) * (data->localData[0]->realVars[459] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.y variable */) - ((data->simulationInfo->realParameter[910] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] PARAM */) * (data->localData[0]->realVars[21] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[909] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_4.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2765
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2765};
  data->localData[0]->realVars[122] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[893] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end PARAM */) * (data->localData[0]->realVars[456] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.y variable */) - ((data->simulationInfo->realParameter[892] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] PARAM */) * (data->localData[0]->realVars[20] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[891] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_3.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2766
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2766};
  data->localData[0]->realVars[121] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[875] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end PARAM */) * (data->localData[0]->realVars[453] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.y variable */) - ((data->simulationInfo->realParameter[874] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] PARAM */) * (data->localData[0]->realVars[19] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[873] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_2.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2767
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end * gen_Bus_1_1.pSS2A.add.y - gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] * gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2767};
  data->localData[0]->realVars[120] /* der(gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[857] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end PARAM */) * (data->localData[0]->realVars[438] /* gen_Bus_1_1.pSS2A.add.y variable */) - ((data->simulationInfo->realParameter[856] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] PARAM */) * (data->localData[0]->realVars[18] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[855] /* gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.rampTrackingFilter.LL_1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2768
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.add1.y = gen_Bus_1_1.pSS2A.add1.k1 * gen_Bus_1_1.pSS2A.add1.u1 + gen_Bus_1_1.pSS2A.add1.k2 * gen_Bus_1_1.pSS2A.SimpleLag2.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2768};
  data->localData[0]->realVars[440] /* gen_Bus_1_1.pSS2A.add1.y variable */ = (data->simulationInfo->realParameter[778] /* gen_Bus_1_1.pSS2A.add1.k1 PARAM */) * (data->localData[0]->realVars[439] /* gen_Bus_1_1.pSS2A.add1.u1 variable */) + (data->simulationInfo->realParameter[779] /* gen_Bus_1_1.pSS2A.add1.k2 PARAM */) * (data->localData[0]->realVars[437] /* gen_Bus_1_1.pSS2A.SimpleLag2.y variable */);
  TRACE_POP
}
/*
equation index: 2769
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag1.u = gen_Bus_1_1.pSS2A.gain.k * gen_Bus_1_1.pSS2A.add1.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2769};
  data->localData[0]->realVars[429] /* gen_Bus_1_1.pSS2A.Leadlag1.u variable */ = (data->simulationInfo->realParameter[848] /* gen_Bus_1_1.pSS2A.gain.k PARAM */) * (data->localData[0]->realVars[440] /* gen_Bus_1_1.pSS2A.add1.y variable */);
  TRACE_POP
}
/*
equation index: 2770
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag1.TF.y = (gen_Bus_1_1.pSS2A.Leadlag1.TF.bb[2] - gen_Bus_1_1.pSS2A.Leadlag1.TF.a[2] * gen_Bus_1_1.pSS2A.Leadlag1.TF.d) * gen_Bus_1_1.pSS2A.Leadlag1.TF.x[1] + gen_Bus_1_1.pSS2A.Leadlag1.TF.d * gen_Bus_1_1.pSS2A.Leadlag1.u
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2770};
  data->localData[0]->realVars[428] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.y variable */ = (data->simulationInfo->realParameter[724] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[719] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[725] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.d PARAM */))) * (data->localData[0]->realVars[427] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.x[1] variable */) + (data->simulationInfo->realParameter[725] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.d PARAM */) * (data->localData[0]->realVars[429] /* gen_Bus_1_1.pSS2A.Leadlag1.u variable */);
  TRACE_POP
}
/*
equation index: 2771
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag1.y = if abs(gen_Bus_1_1.pSS2A.Leadlag1.T1 - gen_Bus_1_1.pSS2A.Leadlag1.T2) < 1e-015 then gen_Bus_1_1.pSS2A.Leadlag1.K * gen_Bus_1_1.pSS2A.Leadlag1.u else gen_Bus_1_1.pSS2A.Leadlag1.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2771};
  modelica_boolean tmp53;
  tmp53 = Less(fabs(data->simulationInfo->realParameter[715] /* gen_Bus_1_1.pSS2A.Leadlag1.T1 PARAM */ - data->simulationInfo->realParameter[716] /* gen_Bus_1_1.pSS2A.Leadlag1.T2 PARAM */),1e-015);
  data->localData[0]->realVars[430] /* gen_Bus_1_1.pSS2A.Leadlag1.y variable */ = (tmp53?(data->simulationInfo->realParameter[714] /* gen_Bus_1_1.pSS2A.Leadlag1.K PARAM */) * (data->localData[0]->realVars[429] /* gen_Bus_1_1.pSS2A.Leadlag1.u variable */):data->localData[0]->realVars[428] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2772
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag2.TF.y = (gen_Bus_1_1.pSS2A.Leadlag2.TF.bb[2] - gen_Bus_1_1.pSS2A.Leadlag2.TF.a[2] * gen_Bus_1_1.pSS2A.Leadlag2.TF.d) * gen_Bus_1_1.pSS2A.Leadlag2.TF.x[1] + gen_Bus_1_1.pSS2A.Leadlag2.TF.d * gen_Bus_1_1.pSS2A.Leadlag1.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2772};
  data->localData[0]->realVars[432] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.y variable */ = (data->simulationInfo->realParameter[742] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[737] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[743] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.d PARAM */))) * (data->localData[0]->realVars[431] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.x[1] variable */) + (data->simulationInfo->realParameter[743] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.d PARAM */) * (data->localData[0]->realVars[430] /* gen_Bus_1_1.pSS2A.Leadlag1.y variable */);
  TRACE_POP
}
/*
equation index: 2773
type: SIMPLE_ASSIGN
gen_Bus_1_1.pSS2A.Leadlag2.y = if abs(gen_Bus_1_1.pSS2A.Leadlag2.T1 - gen_Bus_1_1.pSS2A.Leadlag2.T2) < 1e-015 then gen_Bus_1_1.pSS2A.Leadlag2.K * gen_Bus_1_1.pSS2A.Leadlag1.y else gen_Bus_1_1.pSS2A.Leadlag2.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2773};
  modelica_boolean tmp54;
  tmp54 = Less(fabs(data->simulationInfo->realParameter[733] /* gen_Bus_1_1.pSS2A.Leadlag2.T1 PARAM */ - data->simulationInfo->realParameter[734] /* gen_Bus_1_1.pSS2A.Leadlag2.T2 PARAM */),1e-015);
  data->localData[0]->realVars[433] /* gen_Bus_1_1.pSS2A.Leadlag2.y variable */ = (tmp54?(data->simulationInfo->realParameter[732] /* gen_Bus_1_1.pSS2A.Leadlag2.K PARAM */) * (data->localData[0]->realVars[430] /* gen_Bus_1_1.pSS2A.Leadlag1.y variable */):data->localData[0]->realVars[432] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2774
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.VOTHSG = smooth(0, if gen_Bus_1_1.pSS2A.Leadlag2.y > gen_Bus_1_1.pSS2A.limiter.uMax then gen_Bus_1_1.pSS2A.limiter.uMax else if gen_Bus_1_1.pSS2A.Leadlag2.y < gen_Bus_1_1.pSS2A.limiter.uMin then gen_Bus_1_1.pSS2A.limiter.uMin else gen_Bus_1_1.pSS2A.Leadlag2.y)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2774};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_real tmp58;
  tmp55 = Greater(data->localData[0]->realVars[433] /* gen_Bus_1_1.pSS2A.Leadlag2.y variable */,data->simulationInfo->realParameter[849] /* gen_Bus_1_1.pSS2A.limiter.uMax PARAM */);
  tmp57 = (modelica_boolean)tmp55;
  if(tmp57)
  {
    tmp58 = data->simulationInfo->realParameter[849] /* gen_Bus_1_1.pSS2A.limiter.uMax PARAM */;
  }
  else
  {
    tmp56 = Less(data->localData[0]->realVars[433] /* gen_Bus_1_1.pSS2A.Leadlag2.y variable */,data->simulationInfo->realParameter[850] /* gen_Bus_1_1.pSS2A.limiter.uMin PARAM */);
    tmp58 = (tmp56?data->simulationInfo->realParameter[850] /* gen_Bus_1_1.pSS2A.limiter.uMin PARAM */:data->localData[0]->realVars[433] /* gen_Bus_1_1.pSS2A.Leadlag2.y variable */);
  }
  data->localData[0]->realVars[416] /* gen_Bus_1_1.iEEET1_1.VOTHSG variable */ = tmp58;
  TRACE_POP
}
/*
equation index: 2775
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.sum2.y = gen_Bus_1_1.iEEET1_1.sum2.k1 * gen_Bus_1_1.iEEET1_1.VOTHSG + gen_Bus_1_1.iEEET1_1.sum2.k2 * gen_Bus_1_1.iEEET1_1.DiffV.y + gen_Bus_1_1.iEEET1_1.sum2.k3 * gen_Bus_1_1.iEEET1_1.DiffV1.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2775};
  data->localData[0]->realVars[426] /* gen_Bus_1_1.iEEET1_1.sum2.y variable */ = (data->simulationInfo->realParameter[706] /* gen_Bus_1_1.iEEET1_1.sum2.k1 PARAM */) * (data->localData[0]->realVars[416] /* gen_Bus_1_1.iEEET1_1.VOTHSG variable */) + (data->simulationInfo->realParameter[707] /* gen_Bus_1_1.iEEET1_1.sum2.k2 PARAM */) * (data->localData[0]->realVars[412] /* gen_Bus_1_1.iEEET1_1.DiffV.y variable */) + (data->simulationInfo->realParameter[708] /* gen_Bus_1_1.iEEET1_1.sum2.k3 PARAM */) * (data->localData[0]->realVars[413] /* gen_Bus_1_1.iEEET1_1.DiffV1.y variable */);
  TRACE_POP
}
/*
equation index: 2776
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.simpleLagLim.u = gen_Bus_1_1.iEEET1_1.sum3.k1 * gen_Bus_1_1.iEEET1_1.sum2.y + gen_Bus_1_1.iEEET1_1.sum3.k2 * gen_Bus_1_1.iEEET1_1.derivativeLag.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2776};
  data->localData[0]->realVars[425] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.u variable */ = (data->simulationInfo->realParameter[709] /* gen_Bus_1_1.iEEET1_1.sum3.k1 PARAM */) * (data->localData[0]->realVars[426] /* gen_Bus_1_1.iEEET1_1.sum2.y variable */) + (data->simulationInfo->realParameter[710] /* gen_Bus_1_1.iEEET1_1.sum3.k2 PARAM */) * (data->localData[0]->realVars[417] /* gen_Bus_1_1.iEEET1_1.derivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 2777
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.I_C = if abs(gen_Bus_1_1.iEEET1_1.simpleLagLim.T) <= 1e-015 then max(min(gen_Bus_1_1.iEEET1_1.simpleLagLim.u * gen_Bus_1_1.iEEET1_1.simpleLagLim.K, gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax), gen_Bus_1_1.iEEET1_1.simpleLagLim.outMin) else max(min(gen_Bus_1_1.iEEET1_1.simpleLagLim.state, gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax), gen_Bus_1_1.iEEET1_1.simpleLagLim.outMin)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2777};
  modelica_boolean tmp59;
  tmp59 = LessEq(fabs(data->simulationInfo->realParameter[700] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.T PARAM */),1e-015);
  data->localData[0]->realVars[418] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.I_C variable */ = (tmp59?fmax(fmin((data->localData[0]->realVars[425] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.u variable */) * (data->simulationInfo->realParameter[699] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[703] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[704] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[703] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[704] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 2778
type: SIMPLE_ASSIGN
gen_Bus_1_1.iEEET1_1.rotatingExciter.feedback.y = gen_Bus_1_1.iEEET1_1.rotatingExciter.I_C - gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2778};
  data->localData[0]->realVars[423] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.feedback.y variable */ = data->localData[0]->realVars[418] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.I_C variable */ - data->localData[0]->realVars[421] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.Sum.y variable */;
  TRACE_POP
}
/*
equation index: 2779
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.k * gen_Bus_1_1.iEEET1_1.rotatingExciter.feedback.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2779};
  data->localData[0]->realVars[110] /* der(gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.y) STATE_DER */ = (data->simulationInfo->realParameter[693] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.sISO.k PARAM */) * (data->localData[0]->realVars[423] /* gen_Bus_1_1.iEEET1_1.rotatingExciter.feedback.y variable */);
  TRACE_POP
}
/*
equation index: 2780
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.iEEET1_1.simpleLagLim.state = (gen_Bus_1_1.iEEET1_1.simpleLagLim.K * gen_Bus_1_1.iEEET1_1.simpleLagLim.u - gen_Bus_1_1.iEEET1_1.simpleLagLim.state) / gen_Bus_1_1.iEEET1_1.simpleLagLim.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2780};
  data->localData[0]->realVars[111] /* der(gen_Bus_1_1.iEEET1_1.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[699] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[425] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[701] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.T_mod PARAM */,"gen_Bus_1_1.iEEET1_1.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2781
type: SIMPLE_ASSIGN
$whenCondition10 = gen_Bus_1_1.iEEET1_1.simpleLagLim.state > gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax and gen_Bus_1_1.iEEET1_1.simpleLagLim.K * gen_Bus_1_1.iEEET1_1.simpleLagLim.u - gen_Bus_1_1.iEEET1_1.simpleLagLim.state < 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2781};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  RELATIONHYSTERESIS(tmp60, data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[703] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax PARAM */, 124, Greater);
  RELATIONHYSTERESIS(tmp61, (data->simulationInfo->realParameter[699] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[425] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, 125, Less);
  data->localData[0]->booleanVars[1] /* $whenCondition10 DISCRETE */ = (tmp60 && tmp61);
  TRACE_POP
}
/*
equation index: 2782
type: SIMPLE_ASSIGN
$whenCondition9 = gen_Bus_1_1.iEEET1_1.simpleLagLim.state < gen_Bus_1_1.iEEET1_1.simpleLagLim.outMin and gen_Bus_1_1.iEEET1_1.simpleLagLim.K * gen_Bus_1_1.iEEET1_1.simpleLagLim.u - gen_Bus_1_1.iEEET1_1.simpleLagLim.state > 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2782};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  RELATIONHYSTERESIS(tmp62, data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[704] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMin PARAM */, 126, Less);
  RELATIONHYSTERESIS(tmp63, (data->simulationInfo->realParameter[699] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[425] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, 127, Greater);
  data->localData[0]->booleanVars[13] /* $whenCondition9 DISCRETE */ = (tmp62 && tmp63);
  TRACE_POP
}
/*
equation index: 2783
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.Leadlag2.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.Leadlag2.TF.a_end * gen_Bus_1_1.pSS2A.Leadlag1.y - gen_Bus_1_1.pSS2A.Leadlag2.TF.a[2] * gen_Bus_1_1.pSS2A.Leadlag2.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.Leadlag2.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2783};
  data->localData[0]->realVars[113] /* der(gen_Bus_1_1.pSS2A.Leadlag2.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[738] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.a_end PARAM */) * (data->localData[0]->realVars[430] /* gen_Bus_1_1.pSS2A.Leadlag1.y variable */) - ((data->simulationInfo->realParameter[737] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.a[2] PARAM */) * (data->localData[0]->realVars[11] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[736] /* gen_Bus_1_1.pSS2A.Leadlag2.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.Leadlag2.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2784
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.Leadlag1.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.Leadlag1.TF.a_end * gen_Bus_1_1.pSS2A.Leadlag1.u - gen_Bus_1_1.pSS2A.Leadlag1.TF.a[2] * gen_Bus_1_1.pSS2A.Leadlag1.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.Leadlag1.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2784};
  data->localData[0]->realVars[112] /* der(gen_Bus_1_1.pSS2A.Leadlag1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[720] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.a_end PARAM */) * (data->localData[0]->realVars[429] /* gen_Bus_1_1.pSS2A.Leadlag1.u variable */) - ((data->simulationInfo->realParameter[719] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.a[2] PARAM */) * (data->localData[0]->realVars[10] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[718] /* gen_Bus_1_1.pSS2A.Leadlag1.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.Leadlag1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2785
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.SimpleLag2.state = (gen_Bus_1_1.pSS2A.SimpleLag2.K * gen_Bus_1_1.pSS2A.SimpleLag2.u - gen_Bus_1_1.pSS2A.SimpleLag2.state) / gen_Bus_1_1.pSS2A.SimpleLag2.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2785};
  data->localData[0]->realVars[115] /* der(gen_Bus_1_1.pSS2A.SimpleLag2.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[757] /* gen_Bus_1_1.pSS2A.SimpleLag2.K PARAM */) * (data->localData[0]->realVars[436] /* gen_Bus_1_1.pSS2A.SimpleLag2.u variable */) - data->localData[0]->realVars[13] /* gen_Bus_1_1.pSS2A.SimpleLag2.state STATE(1) */,data->simulationInfo->realParameter[759] /* gen_Bus_1_1.pSS2A.SimpleLag2.T_mod PARAM */,"gen_Bus_1_1.pSS2A.SimpleLag2.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2786
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.derivativeLag3.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.derivativeLag3.TF.a_end * gen_Bus_1_1.pSS2A.derivativeLag2.y - gen_Bus_1_1.pSS2A.derivativeLag3.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag3.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.derivativeLag3.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2786};
  data->localData[0]->realVars[119] /* der(gen_Bus_1_1.pSS2A.derivativeLag3.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[836] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.a_end PARAM */) * (data->localData[0]->realVars[448] /* gen_Bus_1_1.pSS2A.derivativeLag2.y variable */) - ((data->simulationInfo->realParameter[835] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.a[2] PARAM */) * (data->localData[0]->realVars[17] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[834] /* gen_Bus_1_1.pSS2A.derivativeLag3.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.derivativeLag3.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2787
type: SIMPLE_ASSIGN
$DER.gen_Bus_1_1.pSS2A.derivativeLag2.TF.x_scaled[1] = (gen_Bus_1_1.pSS2A.derivativeLag2.TF.a_end * gen_Bus_1_1.gENROU.PELEC - gen_Bus_1_1.pSS2A.derivativeLag2.TF.a[2] * gen_Bus_1_1.pSS2A.derivativeLag2.TF.x_scaled[1]) / gen_Bus_1_1.pSS2A.derivativeLag2.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2787};
  data->localData[0]->realVars[118] /* der(gen_Bus_1_1.pSS2A.derivativeLag2.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[819] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.a_end PARAM */) * (data->localData[0]->realVars[395] /* gen_Bus_1_1.gENROU.PELEC variable */) - ((data->simulationInfo->realParameter[818] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.a[2] PARAM */) * (data->localData[0]->realVars[16] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[817] /* gen_Bus_1_1.pSS2A.derivativeLag2.TF.a[1] PARAM */,"gen_Bus_1_1.pSS2A.derivativeLag2.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2788
type: SIMPLE_ASSIGN
pwLine1.Q12 = (Bus_01.n[1].vi * pwLine1.is.re - Bus_01.n[1].vr * pwLine1.is.im) * pwLine1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2788};
  data->localData[0]->realVars[705] /* pwLine1.Q12 variable */ = ((data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */) * (data->localData[0]->realVars[710] /* pwLine1.is.re variable */) - ((data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */) * (data->localData[0]->realVars[709] /* pwLine1.is.im variable */))) * (data->simulationInfo->realParameter[2202] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2789
type: SIMPLE_ASSIGN
pwLine1.P12 = (Bus_01.n[1].vr * pwLine1.is.re + Bus_01.n[1].vi * pwLine1.is.im) * pwLine1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2789};
  data->localData[0]->realVars[703] /* pwLine1.P12 variable */ = ((data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */) * (data->localData[0]->realVars[710] /* pwLine1.is.re variable */) + (data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */) * (data->localData[0]->realVars[709] /* pwLine1.is.im variable */)) * (data->simulationInfo->realParameter[2202] /* pwLine1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2790
type: SIMPLE_ASSIGN
gen_Bus_1_1.gENROU.anglev = atan2(Bus_01.n[1].vi, Bus_01.n[1].vr)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2790};
  data->localData[0]->realVars[406] /* gen_Bus_1_1.gENROU.anglev variable */ = atan2(data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */, data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */);
  TRACE_POP
}
/*
equation index: 2791
type: SIMPLE_ASSIGN
Bus_01.angle = 57.29577951308232 * gen_Bus_1_1.gENROU.anglev
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2791};
  data->localData[0]->realVars[221] /* Bus_01.angle variable */ = (57.29577951308232) * (data->localData[0]->realVars[406] /* gen_Bus_1_1.gENROU.anglev variable */);
  TRACE_POP
}
/*
equation index: 2792
type: SIMPLE_ASSIGN
pwLine.Q21 = (Bus_01.n[1].vr * pwLine.ir.im - Bus_01.n[1].vi * pwLine.ir.re) * pwLine.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2792};
  data->localData[0]->realVars[698] /* pwLine.Q21 variable */ = ((data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */) * (data->localData[0]->realVars[699] /* pwLine.ir.im variable */) - ((data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */) * (data->localData[0]->realVars[700] /* pwLine.ir.re variable */))) * (data->simulationInfo->realParameter[2191] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2793
type: SIMPLE_ASSIGN
pwLine.P21 = ((-Bus_01.n[1].vr) * pwLine.ir.re - Bus_01.n[1].vi * pwLine.ir.im) * pwLine.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2793};
  data->localData[0]->realVars[696] /* pwLine.P21 variable */ = (((-data->localData[0]->realVars[225] /* Bus_01.n[1].vr variable */)) * (data->localData[0]->realVars[700] /* pwLine.ir.re variable */) - ((data->localData[0]->realVars[224] /* Bus_01.n[1].vi variable */) * (data->localData[0]->realVars[699] /* pwLine.ir.im variable */))) * (data->simulationInfo->realParameter[2191] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2794
type: SIMPLE_ASSIGN
pwLine.Q12 = (Bus_02.n[2].vi * pwLine.is.re - Bus_02.n[2].vr * pwLine.is.im) * pwLine.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2794};
  data->localData[0]->realVars[697] /* pwLine.Q12 variable */ = ((data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (data->localData[0]->realVars[702] /* pwLine.is.re variable */) - ((data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (data->localData[0]->realVars[701] /* pwLine.is.im variable */))) * (data->simulationInfo->realParameter[2191] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2795
type: SIMPLE_ASSIGN
pwLine.P12 = (Bus_02.n[2].vr * pwLine.is.re + Bus_02.n[2].vi * pwLine.is.im) * pwLine.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2795};
  data->localData[0]->realVars[695] /* pwLine.P12 variable */ = ((data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (data->localData[0]->realVars[702] /* pwLine.is.re variable */) + (data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (data->localData[0]->realVars[701] /* pwLine.is.im variable */)) * (data->simulationInfo->realParameter[2191] /* pwLine.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2796
type: SIMPLE_ASSIGN
gen_Bus_2_1.Q = (Bus_02.n[2].vi * Bus_02.n[2].ir - Bus_02.n[2].vr * Bus_02.n[2].ii) * gen_Bus_2_1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2796};
  data->localData[0]->realVars[491] /* gen_Bus_2_1.Q variable */ = ((data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (data->localData[0]->realVars[231] /* Bus_02.n[2].ir variable */) - ((data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (data->localData[0]->realVars[229] /* Bus_02.n[2].ii variable */))) * (data->simulationInfo->realParameter[1085] /* gen_Bus_2_1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2797
type: SIMPLE_ASSIGN
gen_Bus_2_1.P = (Bus_02.n[2].vi * Bus_02.n[2].ii + Bus_02.n[2].vr * Bus_02.n[2].ir) * gen_Bus_2_1.S_b
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2797};
  data->localData[0]->realVars[490] /* gen_Bus_2_1.P variable */ = ((data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (data->localData[0]->realVars[229] /* Bus_02.n[2].ii variable */) + (data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (data->localData[0]->realVars[231] /* Bus_02.n[2].ir variable */)) * (data->simulationInfo->realParameter[1085] /* gen_Bus_2_1.S_b PARAM */);
  TRACE_POP
}
/*
equation index: 2798
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.I = sqrt(Bus_02.n[2].ii ^ 2.0 + Bus_02.n[2].ir ^ 2.0)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2798};
  modelica_real tmp64;
  modelica_real tmp65;
  tmp64 = data->localData[0]->realVars[229] /* Bus_02.n[2].ii variable */;
  tmp65 = data->localData[0]->realVars[231] /* Bus_02.n[2].ir variable */;
  data->localData[0]->realVars[492] /* gen_Bus_2_1.gENROU.I variable */ = sqrt((tmp64 * tmp64) + (tmp65 * tmp65));
  TRACE_POP
}
/*
equation index: 2799
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.Q = Bus_02.n[2].vi * Bus_02.n[2].ir - Bus_02.n[2].vr * Bus_02.n[2].ii
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2799};
  data->localData[0]->realVars[502] /* gen_Bus_2_1.gENROU.Q variable */ = (data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (data->localData[0]->realVars[231] /* Bus_02.n[2].ir variable */) - ((data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (data->localData[0]->realVars[229] /* Bus_02.n[2].ii variable */));
  TRACE_POP
}
/*
equation index: 2800
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.P = Bus_02.n[2].vi * Bus_02.n[2].ii + Bus_02.n[2].vr * Bus_02.n[2].ir
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2800};
  data->localData[0]->realVars[494] /* gen_Bus_2_1.gENROU.P variable */ = (data->localData[0]->realVars[232] /* Bus_02.n[2].vi variable */) * (data->localData[0]->realVars[229] /* Bus_02.n[2].ii variable */) + (data->localData[0]->realVars[233] /* Bus_02.n[2].vr variable */) * (data->localData[0]->realVars[231] /* Bus_02.n[2].ir variable */);
  TRACE_POP
}
/*
equation index: 2801
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.PELEC = gen_Bus_2_1.gENROU.P / gen_Bus_2_1.gENROU.CoB
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2801};
  data->localData[0]->realVars[495] /* gen_Bus_2_1.gENROU.PELEC variable */ = DIVISION_SIM(data->localData[0]->realVars[494] /* gen_Bus_2_1.gENROU.P variable */,data->simulationInfo->realParameter[1092] /* gen_Bus_2_1.gENROU.CoB PARAM */,"gen_Bus_2_1.gENROU.CoB",equationIndexes);
  TRACE_POP
}
/*
equation index: 2802
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag2.TF.y = (gen_Bus_2_1.pSS2A.derivativeLag2.TF.bb[2] - gen_Bus_2_1.pSS2A.derivativeLag2.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag2.TF.d) * gen_Bus_2_1.pSS2A.derivativeLag2.TF.x[1] + gen_Bus_2_1.pSS2A.derivativeLag2.TF.d * gen_Bus_2_1.gENROU.PELEC
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2802};
  data->localData[0]->realVars[547] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.y variable */ = (data->simulationInfo->realParameter[1358] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1353] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1359] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.d PARAM */))) * (data->localData[0]->realVars[546] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.x[1] variable */) + (data->simulationInfo->realParameter[1359] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.d PARAM */) * (data->localData[0]->realVars[495] /* gen_Bus_2_1.gENROU.PELEC variable */);
  TRACE_POP
}
/*
equation index: 2803
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag2.y = if abs(gen_Bus_2_1.pSS2A.derivativeLag2.T) < 1e-015 then gen_Bus_2_1.gENROU.PELEC else gen_Bus_2_1.pSS2A.derivativeLag2.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2803};
  modelica_boolean tmp66;
  tmp66 = Less(fabs(data->simulationInfo->realParameter[1351] /* gen_Bus_2_1.pSS2A.derivativeLag2.T PARAM */),1e-015);
  data->localData[0]->realVars[548] /* gen_Bus_2_1.pSS2A.derivativeLag2.y variable */ = (tmp66?data->localData[0]->realVars[495] /* gen_Bus_2_1.gENROU.PELEC variable */:data->localData[0]->realVars[547] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2804
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.derivativeLag3.TF.y = (gen_Bus_2_1.pSS2A.derivativeLag3.TF.bb[2] - gen_Bus_2_1.pSS2A.derivativeLag3.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag3.TF.d) * gen_Bus_2_1.pSS2A.derivativeLag3.TF.x[1] + gen_Bus_2_1.pSS2A.derivativeLag3.TF.d * gen_Bus_2_1.pSS2A.derivativeLag2.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2804};
  data->localData[0]->realVars[550] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.y variable */ = (data->simulationInfo->realParameter[1375] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1370] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1376] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.d PARAM */))) * (data->localData[0]->realVars[549] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.x[1] variable */) + (data->simulationInfo->realParameter[1376] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.d PARAM */) * (data->localData[0]->realVars[548] /* gen_Bus_2_1.pSS2A.derivativeLag2.y variable */);
  TRACE_POP
}
/*
equation index: 2805
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.SimpleLag2.u = if abs(gen_Bus_2_1.pSS2A.derivativeLag3.T) < 1e-015 then gen_Bus_2_1.pSS2A.derivativeLag2.y else gen_Bus_2_1.pSS2A.derivativeLag3.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2805};
  modelica_boolean tmp67;
  tmp67 = Less(fabs(data->simulationInfo->realParameter[1368] /* gen_Bus_2_1.pSS2A.derivativeLag3.T PARAM */),1e-015);
  data->localData[0]->realVars[536] /* gen_Bus_2_1.pSS2A.SimpleLag2.u variable */ = (tmp67?data->localData[0]->realVars[548] /* gen_Bus_2_1.pSS2A.derivativeLag2.y variable */:data->localData[0]->realVars[550] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2806
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.SimpleLag2.y = if abs(gen_Bus_2_1.pSS2A.SimpleLag2.T) <= 1e-015 then gen_Bus_2_1.pSS2A.SimpleLag2.u * gen_Bus_2_1.pSS2A.SimpleLag2.K else gen_Bus_2_1.pSS2A.SimpleLag2.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2806};
  modelica_boolean tmp68;
  tmp68 = LessEq(fabs(data->simulationInfo->realParameter[1293] /* gen_Bus_2_1.pSS2A.SimpleLag2.T PARAM */),1e-015);
  data->localData[0]->realVars[537] /* gen_Bus_2_1.pSS2A.SimpleLag2.y variable */ = (tmp68?(data->localData[0]->realVars[536] /* gen_Bus_2_1.pSS2A.SimpleLag2.u variable */) * (data->simulationInfo->realParameter[1292] /* gen_Bus_2_1.pSS2A.SimpleLag2.K PARAM */):data->localData[0]->realVars[49] /* gen_Bus_2_1.pSS2A.SimpleLag2.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2807
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.add.y = gen_Bus_2_1.pSS2A.add.k1 * gen_Bus_2_1.pSS2A.SimpleLag1.y + gen_Bus_2_1.pSS2A.add.k2 * gen_Bus_2_1.pSS2A.SimpleLag2.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2807};
  data->localData[0]->realVars[538] /* gen_Bus_2_1.pSS2A.add.y variable */ = (data->simulationInfo->realParameter[1311] /* gen_Bus_2_1.pSS2A.add.k1 PARAM */) * (data->localData[0]->realVars[535] /* gen_Bus_2_1.pSS2A.SimpleLag1.y variable */) + (data->simulationInfo->realParameter[1312] /* gen_Bus_2_1.pSS2A.add.k2 PARAM */) * (data->localData[0]->realVars[537] /* gen_Bus_2_1.pSS2A.SimpleLag2.y variable */);
  TRACE_POP
}
/*
equation index: 2808
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.y = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.bb[2] - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.d) * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] + gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.d * gen_Bus_2_1.pSS2A.add.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2808};
  data->localData[0]->realVars[552] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.y variable */ = (data->simulationInfo->realParameter[1396] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1391] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1397] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.d PARAM */))) * (data->localData[0]->realVars[551] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x[1] variable */) + (data->simulationInfo->realParameter[1397] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.d PARAM */) * (data->localData[0]->realVars[538] /* gen_Bus_2_1.pSS2A.add.y variable */);
  TRACE_POP
}
/*
equation index: 2809
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.T1 - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.T2) < 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.K * gen_Bus_2_1.pSS2A.add.y else gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2809};
  modelica_boolean tmp69;
  tmp69 = Less(fabs(data->simulationInfo->realParameter[1387] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.T1 PARAM */ - data->simulationInfo->realParameter[1388] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.T2 PARAM */),1e-015);
  data->localData[0]->realVars[553] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y variable */ = (tmp69?(data->simulationInfo->realParameter[1386] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.K PARAM */) * (data->localData[0]->realVars[538] /* gen_Bus_2_1.pSS2A.add.y variable */):data->localData[0]->realVars[552] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2810
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.T) <= 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.K else gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2810};
  modelica_boolean tmp70;
  tmp70 = LessEq(fabs(data->simulationInfo->realParameter[1533] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.T PARAM */),1e-015);
  data->localData[0]->realVars[575] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.y variable */ = (tmp70?(data->localData[0]->realVars[553] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y variable */) * (data->simulationInfo->realParameter[1532] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.K PARAM */):data->localData[0]->realVars[62] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2811
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.T) <= 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.y * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.K else gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2811};
  modelica_boolean tmp71;
  tmp71 = LessEq(fabs(data->simulationInfo->realParameter[1538] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.T PARAM */),1e-015);
  data->localData[0]->realVars[576] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.y variable */ = (tmp71?(data->localData[0]->realVars[575] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.y variable */) * (data->simulationInfo->realParameter[1537] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.K PARAM */):data->localData[0]->realVars[63] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2812
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.T) <= 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.y * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.K else gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2812};
  modelica_boolean tmp72;
  tmp72 = LessEq(fabs(data->simulationInfo->realParameter[1543] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.T PARAM */),1e-015);
  data->localData[0]->realVars[577] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.y variable */ = (tmp72?(data->localData[0]->realVars[576] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.y variable */) * (data->simulationInfo->realParameter[1542] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.K PARAM */):data->localData[0]->realVars[64] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2813
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.T) <= 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.y * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.K else gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2813};
  modelica_boolean tmp73;
  tmp73 = LessEq(fabs(data->simulationInfo->realParameter[1548] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.T PARAM */),1e-015);
  data->localData[0]->realVars[578] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.y variable */ = (tmp73?(data->localData[0]->realVars[577] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.y variable */) * (data->simulationInfo->realParameter[1547] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.K PARAM */):data->localData[0]->realVars[65] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2814
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.add1.u1 = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.T) <= 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.y * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.K else gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2814};
  modelica_boolean tmp74;
  tmp74 = LessEq(fabs(data->simulationInfo->realParameter[1553] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.T PARAM */),1e-015);
  data->localData[0]->realVars[539] /* gen_Bus_2_1.pSS2A.add1.u1 variable */ = (tmp74?(data->localData[0]->realVars[578] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.y variable */) * (data->simulationInfo->realParameter[1552] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.K PARAM */):data->localData[0]->realVars[66] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2815
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.T) <= 1e-015 then gen_Bus_2_1.pSS2A.add1.u1 * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.K else gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2815};
  modelica_boolean tmp75;
  tmp75 = LessEq(fabs(data->simulationInfo->realParameter[1558] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.T PARAM */),1e-015);
  data->localData[0]->realVars[579] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.y variable */ = (tmp75?(data->localData[0]->realVars[539] /* gen_Bus_2_1.pSS2A.add1.u1 variable */) * (data->simulationInfo->realParameter[1557] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.K PARAM */):data->localData[0]->realVars[67] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2816
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.T) <= 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.y * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.K else gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2816};
  modelica_boolean tmp76;
  tmp76 = LessEq(fabs(data->simulationInfo->realParameter[1563] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.T PARAM */),1e-015);
  data->localData[0]->realVars[580] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.y variable */ = (tmp76?(data->localData[0]->realVars[579] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.y variable */) * (data->simulationInfo->realParameter[1562] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.K PARAM */):data->localData[0]->realVars[68] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2817
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.T) <= 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.y * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.K else gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.state
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2817};
  modelica_boolean tmp77;
  tmp77 = LessEq(fabs(data->simulationInfo->realParameter[1568] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.T PARAM */),1e-015);
  data->localData[0]->realVars[581] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.y variable */ = (tmp77?(data->localData[0]->realVars[580] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.y variable */) * (data->simulationInfo->realParameter[1567] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.K PARAM */):data->localData[0]->realVars[69] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.state STATE(1) */);
  TRACE_POP
}
/*
equation index: 2818
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.state = (gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.state) / gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2818};
  data->localData[0]->realVars[171] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1567] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.K PARAM */) * (data->localData[0]->realVars[580] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.y variable */) - data->localData[0]->realVars[69] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.state STATE(1) */,data->simulationInfo->realParameter[1569] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.T_mod PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_8.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2819
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.state = (gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.state) / gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2819};
  data->localData[0]->realVars[170] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1562] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.K PARAM */) * (data->localData[0]->realVars[579] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.y variable */) - data->localData[0]->realVars[68] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.state STATE(1) */,data->simulationInfo->realParameter[1564] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.T_mod PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_7.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2820
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.state = (gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.K * gen_Bus_2_1.pSS2A.add1.u1 - gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.state) / gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2820};
  data->localData[0]->realVars[169] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1557] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.K PARAM */) * (data->localData[0]->realVars[539] /* gen_Bus_2_1.pSS2A.add1.u1 variable */) - data->localData[0]->realVars[67] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.state STATE(1) */,data->simulationInfo->realParameter[1559] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.T_mod PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_6.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2821
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.state = (gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.state) / gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2821};
  data->localData[0]->realVars[168] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1552] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.K PARAM */) * (data->localData[0]->realVars[578] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.y variable */) - data->localData[0]->realVars[66] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.state STATE(1) */,data->simulationInfo->realParameter[1554] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.T_mod PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_5.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2822
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.state = (gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.state) / gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2822};
  data->localData[0]->realVars[167] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1547] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.K PARAM */) * (data->localData[0]->realVars[577] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.y variable */) - data->localData[0]->realVars[65] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.state STATE(1) */,data->simulationInfo->realParameter[1549] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.T_mod PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_4.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2823
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.state = (gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.state) / gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2823};
  data->localData[0]->realVars[166] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1542] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.K PARAM */) * (data->localData[0]->realVars[576] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.y variable */) - data->localData[0]->realVars[64] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.state STATE(1) */,data->simulationInfo->realParameter[1544] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.T_mod PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_3.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2824
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.state = (gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.state) / gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2824};
  data->localData[0]->realVars[165] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1537] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.K PARAM */) * (data->localData[0]->realVars[575] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.y variable */) - data->localData[0]->realVars[63] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.state STATE(1) */,data->simulationInfo->realParameter[1539] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.T_mod PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_2.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2825
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.state = (gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.state) / gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2825};
  data->localData[0]->realVars[164] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1532] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.K PARAM */) * (data->localData[0]->realVars[553] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y variable */) - data->localData[0]->realVars[62] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.state STATE(1) */,data->simulationInfo->realParameter[1534] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.T_mod PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.SL_1.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2826
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.y = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.bb[2] - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.d) * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] + gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2826};
  data->localData[0]->realVars[555] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.y variable */ = (data->simulationInfo->realParameter[1414] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1409] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1415] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.d PARAM */))) * (data->localData[0]->realVars[554] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x[1] variable */) + (data->simulationInfo->realParameter[1415] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.d PARAM */) * (data->localData[0]->realVars[553] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y variable */);
  TRACE_POP
}
/*
equation index: 2827
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.T1 - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.T2) < 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y else gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2827};
  modelica_boolean tmp78;
  tmp78 = Less(fabs(data->simulationInfo->realParameter[1405] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.T1 PARAM */ - data->simulationInfo->realParameter[1406] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.T2 PARAM */),1e-015);
  data->localData[0]->realVars[556] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.y variable */ = (tmp78?(data->simulationInfo->realParameter[1404] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.K PARAM */) * (data->localData[0]->realVars[553] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y variable */):data->localData[0]->realVars[555] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2828
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.y = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.bb[2] - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.d) * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] + gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2828};
  data->localData[0]->realVars[558] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.y variable */ = (data->simulationInfo->realParameter[1432] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1427] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1433] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.d PARAM */))) * (data->localData[0]->realVars[557] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x[1] variable */) + (data->simulationInfo->realParameter[1433] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.d PARAM */) * (data->localData[0]->realVars[556] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.y variable */);
  TRACE_POP
}
/*
equation index: 2829
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.T1 - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.T2) < 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.y else gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2829};
  modelica_boolean tmp79;
  tmp79 = Less(fabs(data->simulationInfo->realParameter[1423] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.T1 PARAM */ - data->simulationInfo->realParameter[1424] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.T2 PARAM */),1e-015);
  data->localData[0]->realVars[559] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.y variable */ = (tmp79?(data->simulationInfo->realParameter[1422] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.K PARAM */) * (data->localData[0]->realVars[556] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.y variable */):data->localData[0]->realVars[558] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2830
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.y = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.bb[2] - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.d) * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] + gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2830};
  data->localData[0]->realVars[561] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.y variable */ = (data->simulationInfo->realParameter[1450] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1445] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1451] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.d PARAM */))) * (data->localData[0]->realVars[560] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x[1] variable */) + (data->simulationInfo->realParameter[1451] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.d PARAM */) * (data->localData[0]->realVars[559] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.y variable */);
  TRACE_POP
}
/*
equation index: 2831
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.T1 - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.T2) < 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.y else gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2831};
  modelica_boolean tmp80;
  tmp80 = Less(fabs(data->simulationInfo->realParameter[1441] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.T1 PARAM */ - data->simulationInfo->realParameter[1442] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.T2 PARAM */),1e-015);
  data->localData[0]->realVars[562] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.y variable */ = (tmp80?(data->simulationInfo->realParameter[1440] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.K PARAM */) * (data->localData[0]->realVars[559] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.y variable */):data->localData[0]->realVars[561] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2832
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.y = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.bb[2] - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.d) * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] + gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2832};
  data->localData[0]->realVars[564] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.y variable */ = (data->simulationInfo->realParameter[1468] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1463] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1469] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.d PARAM */))) * (data->localData[0]->realVars[563] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x[1] variable */) + (data->simulationInfo->realParameter[1469] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.d PARAM */) * (data->localData[0]->realVars[562] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.y variable */);
  TRACE_POP
}
/*
equation index: 2833
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.T1 - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.T2) < 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.y else gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2833};
  modelica_boolean tmp81;
  tmp81 = Less(fabs(data->simulationInfo->realParameter[1459] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.T1 PARAM */ - data->simulationInfo->realParameter[1460] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.T2 PARAM */),1e-015);
  data->localData[0]->realVars[565] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.y variable */ = (tmp81?(data->simulationInfo->realParameter[1458] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.K PARAM */) * (data->localData[0]->realVars[562] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.y variable */):data->localData[0]->realVars[564] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2834
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.y = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.bb[2] - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.d) * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] + gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2834};
  data->localData[0]->realVars[567] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.y variable */ = (data->simulationInfo->realParameter[1486] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1481] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1487] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.d PARAM */))) * (data->localData[0]->realVars[566] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x[1] variable */) + (data->simulationInfo->realParameter[1487] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.d PARAM */) * (data->localData[0]->realVars[565] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.y variable */);
  TRACE_POP
}
/*
equation index: 2835
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.T1 - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.T2) < 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.y else gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2835};
  modelica_boolean tmp82;
  tmp82 = Less(fabs(data->simulationInfo->realParameter[1477] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.T1 PARAM */ - data->simulationInfo->realParameter[1478] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.T2 PARAM */),1e-015);
  data->localData[0]->realVars[568] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.y variable */ = (tmp82?(data->simulationInfo->realParameter[1476] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.K PARAM */) * (data->localData[0]->realVars[565] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.y variable */):data->localData[0]->realVars[567] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2836
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.y = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.bb[2] - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.d) * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] + gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2836};
  data->localData[0]->realVars[570] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.y variable */ = (data->simulationInfo->realParameter[1504] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1499] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1505] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.d PARAM */))) * (data->localData[0]->realVars[569] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x[1] variable */) + (data->simulationInfo->realParameter[1505] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.d PARAM */) * (data->localData[0]->realVars[568] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.y variable */);
  TRACE_POP
}
/*
equation index: 2837
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.T1 - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.T2) < 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.y else gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2837};
  modelica_boolean tmp83;
  tmp83 = Less(fabs(data->simulationInfo->realParameter[1495] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.T1 PARAM */ - data->simulationInfo->realParameter[1496] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.T2 PARAM */),1e-015);
  data->localData[0]->realVars[571] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.y variable */ = (tmp83?(data->simulationInfo->realParameter[1494] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.K PARAM */) * (data->localData[0]->realVars[568] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.y variable */):data->localData[0]->realVars[570] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2838
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.y = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.bb[2] - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.d) * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] + gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.d * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2838};
  data->localData[0]->realVars[573] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.y variable */ = (data->simulationInfo->realParameter[1522] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1517] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1523] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.d PARAM */))) * (data->localData[0]->realVars[572] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x[1] variable */) + (data->simulationInfo->realParameter[1523] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.d PARAM */) * (data->localData[0]->realVars[571] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.y variable */);
  TRACE_POP
}
/*
equation index: 2839
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.y = if abs(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.T1 - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.T2) < 1e-015 then gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.K * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.y else gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2839};
  modelica_boolean tmp84;
  tmp84 = Less(fabs(data->simulationInfo->realParameter[1513] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.T1 PARAM */ - data->simulationInfo->realParameter[1514] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.T2 PARAM */),1e-015);
  data->localData[0]->realVars[574] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.y variable */ = (tmp84?(data->simulationInfo->realParameter[1512] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.K PARAM */) * (data->localData[0]->realVars[571] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.y variable */):data->localData[0]->realVars[573] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2840
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2840};
  data->localData[0]->realVars[163] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1518] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a_end PARAM */) * (data->localData[0]->realVars[571] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.y variable */) - ((data->simulationInfo->realParameter[1517] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a[2] PARAM */) * (data->localData[0]->realVars[61] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1516] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_8.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2841
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2841};
  data->localData[0]->realVars[162] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1500] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a_end PARAM */) * (data->localData[0]->realVars[568] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.y variable */) - ((data->simulationInfo->realParameter[1499] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a[2] PARAM */) * (data->localData[0]->realVars[60] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1498] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_7.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2842
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2842};
  data->localData[0]->realVars[161] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1482] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a_end PARAM */) * (data->localData[0]->realVars[565] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.y variable */) - ((data->simulationInfo->realParameter[1481] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a[2] PARAM */) * (data->localData[0]->realVars[59] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1480] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_6.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2843
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2843};
  data->localData[0]->realVars[160] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1464] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a_end PARAM */) * (data->localData[0]->realVars[562] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.y variable */) - ((data->simulationInfo->realParameter[1463] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a[2] PARAM */) * (data->localData[0]->realVars[58] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1462] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_5.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2844
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2844};
  data->localData[0]->realVars[159] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1446] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a_end PARAM */) * (data->localData[0]->realVars[559] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.y variable */) - ((data->simulationInfo->realParameter[1445] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a[2] PARAM */) * (data->localData[0]->realVars[57] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1444] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_4.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2845
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2845};
  data->localData[0]->realVars[158] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1428] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a_end PARAM */) * (data->localData[0]->realVars[556] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.y variable */) - ((data->simulationInfo->realParameter[1427] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a[2] PARAM */) * (data->localData[0]->realVars[56] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1426] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_3.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2846
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2846};
  data->localData[0]->realVars[157] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1410] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a_end PARAM */) * (data->localData[0]->realVars[553] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.y variable */) - ((data->simulationInfo->realParameter[1409] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a[2] PARAM */) * (data->localData[0]->realVars[55] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1408] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_2.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2847
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end * gen_Bus_2_1.pSS2A.add.y - gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] * gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2847};
  data->localData[0]->realVars[156] /* der(gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1392] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a_end PARAM */) * (data->localData[0]->realVars[538] /* gen_Bus_2_1.pSS2A.add.y variable */) - ((data->simulationInfo->realParameter[1391] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a[2] PARAM */) * (data->localData[0]->realVars[54] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1390] /* gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.rampTrackingFilter.LL_1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2848
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.add1.y = gen_Bus_2_1.pSS2A.add1.k1 * gen_Bus_2_1.pSS2A.add1.u1 + gen_Bus_2_1.pSS2A.add1.k2 * gen_Bus_2_1.pSS2A.SimpleLag2.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2848};
  data->localData[0]->realVars[540] /* gen_Bus_2_1.pSS2A.add1.y variable */ = (data->simulationInfo->realParameter[1313] /* gen_Bus_2_1.pSS2A.add1.k1 PARAM */) * (data->localData[0]->realVars[539] /* gen_Bus_2_1.pSS2A.add1.u1 variable */) + (data->simulationInfo->realParameter[1314] /* gen_Bus_2_1.pSS2A.add1.k2 PARAM */) * (data->localData[0]->realVars[537] /* gen_Bus_2_1.pSS2A.SimpleLag2.y variable */);
  TRACE_POP
}
/*
equation index: 2849
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag1.u = gen_Bus_2_1.pSS2A.gain.k * gen_Bus_2_1.pSS2A.add1.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2849};
  data->localData[0]->realVars[529] /* gen_Bus_2_1.pSS2A.Leadlag1.u variable */ = (data->simulationInfo->realParameter[1383] /* gen_Bus_2_1.pSS2A.gain.k PARAM */) * (data->localData[0]->realVars[540] /* gen_Bus_2_1.pSS2A.add1.y variable */);
  TRACE_POP
}
/*
equation index: 2850
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag1.TF.y = (gen_Bus_2_1.pSS2A.Leadlag1.TF.bb[2] - gen_Bus_2_1.pSS2A.Leadlag1.TF.a[2] * gen_Bus_2_1.pSS2A.Leadlag1.TF.d) * gen_Bus_2_1.pSS2A.Leadlag1.TF.x[1] + gen_Bus_2_1.pSS2A.Leadlag1.TF.d * gen_Bus_2_1.pSS2A.Leadlag1.u
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2850};
  data->localData[0]->realVars[528] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.y variable */ = (data->simulationInfo->realParameter[1259] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1254] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1260] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.d PARAM */))) * (data->localData[0]->realVars[527] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.x[1] variable */) + (data->simulationInfo->realParameter[1260] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.d PARAM */) * (data->localData[0]->realVars[529] /* gen_Bus_2_1.pSS2A.Leadlag1.u variable */);
  TRACE_POP
}
/*
equation index: 2851
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag1.y = if abs(gen_Bus_2_1.pSS2A.Leadlag1.T1 - gen_Bus_2_1.pSS2A.Leadlag1.T2) < 1e-015 then gen_Bus_2_1.pSS2A.Leadlag1.K * gen_Bus_2_1.pSS2A.Leadlag1.u else gen_Bus_2_1.pSS2A.Leadlag1.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2851};
  modelica_boolean tmp85;
  tmp85 = Less(fabs(data->simulationInfo->realParameter[1250] /* gen_Bus_2_1.pSS2A.Leadlag1.T1 PARAM */ - data->simulationInfo->realParameter[1251] /* gen_Bus_2_1.pSS2A.Leadlag1.T2 PARAM */),1e-015);
  data->localData[0]->realVars[530] /* gen_Bus_2_1.pSS2A.Leadlag1.y variable */ = (tmp85?(data->simulationInfo->realParameter[1249] /* gen_Bus_2_1.pSS2A.Leadlag1.K PARAM */) * (data->localData[0]->realVars[529] /* gen_Bus_2_1.pSS2A.Leadlag1.u variable */):data->localData[0]->realVars[528] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2852
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag2.TF.y = (gen_Bus_2_1.pSS2A.Leadlag2.TF.bb[2] - gen_Bus_2_1.pSS2A.Leadlag2.TF.a[2] * gen_Bus_2_1.pSS2A.Leadlag2.TF.d) * gen_Bus_2_1.pSS2A.Leadlag2.TF.x[1] + gen_Bus_2_1.pSS2A.Leadlag2.TF.d * gen_Bus_2_1.pSS2A.Leadlag1.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2852};
  data->localData[0]->realVars[532] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.y variable */ = (data->simulationInfo->realParameter[1277] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.bb[2] PARAM */ - ((data->simulationInfo->realParameter[1272] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.a[2] PARAM */) * (data->simulationInfo->realParameter[1278] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.d PARAM */))) * (data->localData[0]->realVars[531] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.x[1] variable */) + (data->simulationInfo->realParameter[1278] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.d PARAM */) * (data->localData[0]->realVars[530] /* gen_Bus_2_1.pSS2A.Leadlag1.y variable */);
  TRACE_POP
}
/*
equation index: 2853
type: SIMPLE_ASSIGN
gen_Bus_2_1.pSS2A.Leadlag2.y = if abs(gen_Bus_2_1.pSS2A.Leadlag2.T1 - gen_Bus_2_1.pSS2A.Leadlag2.T2) < 1e-015 then gen_Bus_2_1.pSS2A.Leadlag2.K * gen_Bus_2_1.pSS2A.Leadlag1.y else gen_Bus_2_1.pSS2A.Leadlag2.TF.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2853};
  modelica_boolean tmp86;
  tmp86 = Less(fabs(data->simulationInfo->realParameter[1268] /* gen_Bus_2_1.pSS2A.Leadlag2.T1 PARAM */ - data->simulationInfo->realParameter[1269] /* gen_Bus_2_1.pSS2A.Leadlag2.T2 PARAM */),1e-015);
  data->localData[0]->realVars[533] /* gen_Bus_2_1.pSS2A.Leadlag2.y variable */ = (tmp86?(data->simulationInfo->realParameter[1267] /* gen_Bus_2_1.pSS2A.Leadlag2.K PARAM */) * (data->localData[0]->realVars[530] /* gen_Bus_2_1.pSS2A.Leadlag1.y variable */):data->localData[0]->realVars[532] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.y variable */);
  TRACE_POP
}
/*
equation index: 2854
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.VOTHSG = smooth(0, if gen_Bus_2_1.pSS2A.Leadlag2.y > gen_Bus_2_1.pSS2A.limiter.uMax then gen_Bus_2_1.pSS2A.limiter.uMax else if gen_Bus_2_1.pSS2A.Leadlag2.y < gen_Bus_2_1.pSS2A.limiter.uMin then gen_Bus_2_1.pSS2A.limiter.uMin else gen_Bus_2_1.pSS2A.Leadlag2.y)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2854};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  modelica_real tmp90;
  tmp87 = Greater(data->localData[0]->realVars[533] /* gen_Bus_2_1.pSS2A.Leadlag2.y variable */,data->simulationInfo->realParameter[1384] /* gen_Bus_2_1.pSS2A.limiter.uMax PARAM */);
  tmp89 = (modelica_boolean)tmp87;
  if(tmp89)
  {
    tmp90 = data->simulationInfo->realParameter[1384] /* gen_Bus_2_1.pSS2A.limiter.uMax PARAM */;
  }
  else
  {
    tmp88 = Less(data->localData[0]->realVars[533] /* gen_Bus_2_1.pSS2A.Leadlag2.y variable */,data->simulationInfo->realParameter[1385] /* gen_Bus_2_1.pSS2A.limiter.uMin PARAM */);
    tmp90 = (tmp88?data->simulationInfo->realParameter[1385] /* gen_Bus_2_1.pSS2A.limiter.uMin PARAM */:data->localData[0]->realVars[533] /* gen_Bus_2_1.pSS2A.Leadlag2.y variable */);
  }
  data->localData[0]->realVars[516] /* gen_Bus_2_1.iEEET1_1.VOTHSG variable */ = tmp90;
  TRACE_POP
}
/*
equation index: 2855
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.sum2.y = gen_Bus_2_1.iEEET1_1.sum2.k1 * gen_Bus_2_1.iEEET1_1.VOTHSG + gen_Bus_2_1.iEEET1_1.sum2.k2 * gen_Bus_2_1.iEEET1_1.DiffV.y + gen_Bus_2_1.iEEET1_1.sum2.k3 * gen_Bus_2_1.iEEET1_1.DiffV1.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2855};
  data->localData[0]->realVars[526] /* gen_Bus_2_1.iEEET1_1.sum2.y variable */ = (data->simulationInfo->realParameter[1241] /* gen_Bus_2_1.iEEET1_1.sum2.k1 PARAM */) * (data->localData[0]->realVars[516] /* gen_Bus_2_1.iEEET1_1.VOTHSG variable */) + (data->simulationInfo->realParameter[1242] /* gen_Bus_2_1.iEEET1_1.sum2.k2 PARAM */) * (data->localData[0]->realVars[512] /* gen_Bus_2_1.iEEET1_1.DiffV.y variable */) + (data->simulationInfo->realParameter[1243] /* gen_Bus_2_1.iEEET1_1.sum2.k3 PARAM */) * (data->localData[0]->realVars[513] /* gen_Bus_2_1.iEEET1_1.DiffV1.y variable */);
  TRACE_POP
}
/*
equation index: 2856
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.simpleLagLim.u = gen_Bus_2_1.iEEET1_1.sum3.k1 * gen_Bus_2_1.iEEET1_1.sum2.y + gen_Bus_2_1.iEEET1_1.sum3.k2 * gen_Bus_2_1.iEEET1_1.derivativeLag.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2856};
  data->localData[0]->realVars[525] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.u variable */ = (data->simulationInfo->realParameter[1244] /* gen_Bus_2_1.iEEET1_1.sum3.k1 PARAM */) * (data->localData[0]->realVars[526] /* gen_Bus_2_1.iEEET1_1.sum2.y variable */) + (data->simulationInfo->realParameter[1245] /* gen_Bus_2_1.iEEET1_1.sum3.k2 PARAM */) * (data->localData[0]->realVars[517] /* gen_Bus_2_1.iEEET1_1.derivativeLag.y variable */);
  TRACE_POP
}
/*
equation index: 2857
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.I_C = if abs(gen_Bus_2_1.iEEET1_1.simpleLagLim.T) <= 1e-015 then max(min(gen_Bus_2_1.iEEET1_1.simpleLagLim.u * gen_Bus_2_1.iEEET1_1.simpleLagLim.K, gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax), gen_Bus_2_1.iEEET1_1.simpleLagLim.outMin) else max(min(gen_Bus_2_1.iEEET1_1.simpleLagLim.state, gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax), gen_Bus_2_1.iEEET1_1.simpleLagLim.outMin)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2857};
  modelica_boolean tmp91;
  tmp91 = LessEq(fabs(data->simulationInfo->realParameter[1235] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.T PARAM */),1e-015);
  data->localData[0]->realVars[518] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.I_C variable */ = (tmp91?fmax(fmin((data->localData[0]->realVars[525] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.u variable */) * (data->simulationInfo->realParameter[1234] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.K PARAM */),data->simulationInfo->realParameter[1238] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[1239] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMin PARAM */):fmax(fmin(data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[1238] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax PARAM */),data->simulationInfo->realParameter[1239] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMin PARAM */));
  TRACE_POP
}
/*
equation index: 2858
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.iEEET1_1.simpleLagLim.state = (gen_Bus_2_1.iEEET1_1.simpleLagLim.K * gen_Bus_2_1.iEEET1_1.simpleLagLim.u - gen_Bus_2_1.iEEET1_1.simpleLagLim.state) / gen_Bus_2_1.iEEET1_1.simpleLagLim.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2858};
  data->localData[0]->realVars[147] /* der(gen_Bus_2_1.iEEET1_1.simpleLagLim.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1234] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[525] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */,data->simulationInfo->realParameter[1236] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.T_mod PARAM */,"gen_Bus_2_1.iEEET1_1.simpleLagLim.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2859
type: SIMPLE_ASSIGN
$whenCondition14 = gen_Bus_2_1.iEEET1_1.simpleLagLim.state > gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax and gen_Bus_2_1.iEEET1_1.simpleLagLim.K * gen_Bus_2_1.iEEET1_1.simpleLagLim.u - gen_Bus_2_1.iEEET1_1.simpleLagLim.state < 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2859};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  RELATIONHYSTERESIS(tmp92, data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1238] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax PARAM */, 120, Greater);
  RELATIONHYSTERESIS(tmp93, (data->simulationInfo->realParameter[1234] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[525] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, 121, Less);
  data->localData[0]->booleanVars[5] /* $whenCondition14 DISCRETE */ = (tmp92 && tmp93);
  TRACE_POP
}
/*
equation index: 2860
type: SIMPLE_ASSIGN
$whenCondition13 = gen_Bus_2_1.iEEET1_1.simpleLagLim.state < gen_Bus_2_1.iEEET1_1.simpleLagLim.outMin and gen_Bus_2_1.iEEET1_1.simpleLagLim.K * gen_Bus_2_1.iEEET1_1.simpleLagLim.u - gen_Bus_2_1.iEEET1_1.simpleLagLim.state > 0.0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2860};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  RELATIONHYSTERESIS(tmp94, data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1239] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMin PARAM */, 122, Less);
  RELATIONHYSTERESIS(tmp95, (data->simulationInfo->realParameter[1234] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[525] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, 123, Greater);
  data->localData[0]->booleanVars[4] /* $whenCondition13 DISCRETE */ = (tmp94 && tmp95);
  TRACE_POP
}
/*
equation index: 2861
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.Leadlag2.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.Leadlag2.TF.a_end * gen_Bus_2_1.pSS2A.Leadlag1.y - gen_Bus_2_1.pSS2A.Leadlag2.TF.a[2] * gen_Bus_2_1.pSS2A.Leadlag2.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.Leadlag2.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2861};
  data->localData[0]->realVars[149] /* der(gen_Bus_2_1.pSS2A.Leadlag2.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1273] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.a_end PARAM */) * (data->localData[0]->realVars[530] /* gen_Bus_2_1.pSS2A.Leadlag1.y variable */) - ((data->simulationInfo->realParameter[1272] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.a[2] PARAM */) * (data->localData[0]->realVars[47] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1271] /* gen_Bus_2_1.pSS2A.Leadlag2.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.Leadlag2.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2862
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.Leadlag1.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.Leadlag1.TF.a_end * gen_Bus_2_1.pSS2A.Leadlag1.u - gen_Bus_2_1.pSS2A.Leadlag1.TF.a[2] * gen_Bus_2_1.pSS2A.Leadlag1.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.Leadlag1.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2862};
  data->localData[0]->realVars[148] /* der(gen_Bus_2_1.pSS2A.Leadlag1.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1255] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.a_end PARAM */) * (data->localData[0]->realVars[529] /* gen_Bus_2_1.pSS2A.Leadlag1.u variable */) - ((data->simulationInfo->realParameter[1254] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.a[2] PARAM */) * (data->localData[0]->realVars[46] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1253] /* gen_Bus_2_1.pSS2A.Leadlag1.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.Leadlag1.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2863
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.SimpleLag2.state = (gen_Bus_2_1.pSS2A.SimpleLag2.K * gen_Bus_2_1.pSS2A.SimpleLag2.u - gen_Bus_2_1.pSS2A.SimpleLag2.state) / gen_Bus_2_1.pSS2A.SimpleLag2.T_mod
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2863};
  data->localData[0]->realVars[151] /* der(gen_Bus_2_1.pSS2A.SimpleLag2.state) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1292] /* gen_Bus_2_1.pSS2A.SimpleLag2.K PARAM */) * (data->localData[0]->realVars[536] /* gen_Bus_2_1.pSS2A.SimpleLag2.u variable */) - data->localData[0]->realVars[49] /* gen_Bus_2_1.pSS2A.SimpleLag2.state STATE(1) */,data->simulationInfo->realParameter[1294] /* gen_Bus_2_1.pSS2A.SimpleLag2.T_mod PARAM */,"gen_Bus_2_1.pSS2A.SimpleLag2.T_mod",equationIndexes);
  TRACE_POP
}
/*
equation index: 2864
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.derivativeLag3.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.derivativeLag3.TF.a_end * gen_Bus_2_1.pSS2A.derivativeLag2.y - gen_Bus_2_1.pSS2A.derivativeLag3.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag3.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.derivativeLag3.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2864};
  data->localData[0]->realVars[155] /* der(gen_Bus_2_1.pSS2A.derivativeLag3.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1371] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.a_end PARAM */) * (data->localData[0]->realVars[548] /* gen_Bus_2_1.pSS2A.derivativeLag2.y variable */) - ((data->simulationInfo->realParameter[1370] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.a[2] PARAM */) * (data->localData[0]->realVars[53] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1369] /* gen_Bus_2_1.pSS2A.derivativeLag3.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.derivativeLag3.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2865
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.pSS2A.derivativeLag2.TF.x_scaled[1] = (gen_Bus_2_1.pSS2A.derivativeLag2.TF.a_end * gen_Bus_2_1.gENROU.PELEC - gen_Bus_2_1.pSS2A.derivativeLag2.TF.a[2] * gen_Bus_2_1.pSS2A.derivativeLag2.TF.x_scaled[1]) / gen_Bus_2_1.pSS2A.derivativeLag2.TF.a[1]
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2865};
  data->localData[0]->realVars[154] /* der(gen_Bus_2_1.pSS2A.derivativeLag2.TF.x_scaled[1]) STATE_DER */ = DIVISION_SIM((data->simulationInfo->realParameter[1354] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.a_end PARAM */) * (data->localData[0]->realVars[495] /* gen_Bus_2_1.gENROU.PELEC variable */) - ((data->simulationInfo->realParameter[1353] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.a[2] PARAM */) * (data->localData[0]->realVars[52] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.x_scaled[1] STATE(1) */)),data->simulationInfo->realParameter[1352] /* gen_Bus_2_1.pSS2A.derivativeLag2.TF.a[1] PARAM */,"gen_Bus_2_1.pSS2A.derivativeLag2.TF.a[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 2866
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.anglei = atan2(-Bus_02.n[2].ii, -Bus_02.n[2].ir)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2866};
  data->localData[0]->realVars[505] /* gen_Bus_2_1.gENROU.anglei variable */ = atan2((-data->localData[0]->realVars[229] /* Bus_02.n[2].ii variable */), (-data->localData[0]->realVars[231] /* Bus_02.n[2].ir variable */));
  TRACE_POP
}
/*
equation index: 2867
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.XaqIlq = gen_Bus_2_1.gENROU.K1q * (gen_Bus_2_1.gENROU.Epd + (gen_Bus_2_1.gENROU.Xpq - gen_Bus_2_1.gENROU.Xl) * gen_Bus_2_1.gENROU.iq - gen_Bus_2_1.gENROU.PSIkq) + gen_Bus_2_1.gENROU.Epd + gen_Bus_2_1.gENROU.iq * (gen_Bus_2_1.gENROU.Xpq - gen_Bus_2_1.gENROU.Xq) + $cse3 * gen_Bus_2_1.gENROU.PSIppq * (gen_Bus_2_1.gENROU.Xq - gen_Bus_2_1.gENROU.Xl) / (gen_Bus_2_1.gENROU.Xd - gen_Bus_2_1.gENROU.Xl)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2867};
  data->localData[0]->realVars[504] /* gen_Bus_2_1.gENROU.XaqIlq variable */ = (data->simulationInfo->realParameter[1107] /* gen_Bus_2_1.gENROU.K1q PARAM */) * (data->localData[0]->realVars[36] /* gen_Bus_2_1.gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[1148] /* gen_Bus_2_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[1143] /* gen_Bus_2_1.gENROU.Xl PARAM */) * (data->localData[0]->realVars[508] /* gen_Bus_2_1.gENROU.iq variable */) - data->localData[0]->realVars[39] /* gen_Bus_2_1.gENROU.PSIkq STATE(1) */) + data->localData[0]->realVars[36] /* gen_Bus_2_1.gENROU.Epd STATE(1) */ + (data->localData[0]->realVars[508] /* gen_Bus_2_1.gENROU.iq variable */) * (data->simulationInfo->realParameter[1148] /* gen_Bus_2_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[1149] /* gen_Bus_2_1.gENROU.Xq PARAM */) + (data->localData[0]->realVars[213] /* $cse3 variable */) * ((data->localData[0]->realVars[500] /* gen_Bus_2_1.gENROU.PSIppq variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[1149] /* gen_Bus_2_1.gENROU.Xq PARAM */ - data->simulationInfo->realParameter[1143] /* gen_Bus_2_1.gENROU.Xl PARAM */,data->simulationInfo->realParameter[1142] /* gen_Bus_2_1.gENROU.Xd PARAM */ - data->simulationInfo->realParameter[1143] /* gen_Bus_2_1.gENROU.Xl PARAM */,"gen_Bus_2_1.gENROU.Xd - gen_Bus_2_1.gENROU.Xl",equationIndexes)));
  TRACE_POP
}
/*
equation index: 2868
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.gENROU.Epd = (-gen_Bus_2_1.gENROU.XaqIlq) / gen_Bus_2_1.gENROU.Tpq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2868};
  data->localData[0]->realVars[138] /* der(gen_Bus_2_1.gENROU.Epd) STATE_DER */ = DIVISION_SIM((-data->localData[0]->realVars[504] /* gen_Bus_2_1.gENROU.XaqIlq variable */),data->simulationInfo->realParameter[1137] /* gen_Bus_2_1.gENROU.Tpq0 PARAM */,"gen_Bus_2_1.gENROU.Tpq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2869
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.gENROU.PSIkq = (gen_Bus_2_1.gENROU.Epd + (gen_Bus_2_1.gENROU.Xpq - gen_Bus_2_1.gENROU.Xl) * gen_Bus_2_1.gENROU.iq - gen_Bus_2_1.gENROU.PSIkq) / gen_Bus_2_1.gENROU.Tppq0
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2869};
  data->localData[0]->realVars[141] /* der(gen_Bus_2_1.gENROU.PSIkq) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[36] /* gen_Bus_2_1.gENROU.Epd STATE(1) */ + (data->simulationInfo->realParameter[1148] /* gen_Bus_2_1.gENROU.Xpq PARAM */ - data->simulationInfo->realParameter[1143] /* gen_Bus_2_1.gENROU.Xl PARAM */) * (data->localData[0]->realVars[508] /* gen_Bus_2_1.gENROU.iq variable */) - data->localData[0]->realVars[39] /* gen_Bus_2_1.gENROU.PSIkq STATE(1) */,data->simulationInfo->realParameter[1136] /* gen_Bus_2_1.gENROU.Tppq0 PARAM */,"gen_Bus_2_1.gENROU.Tppq0",equationIndexes);
  TRACE_POP
}
/*
equation index: 2870
type: SIMPLE_ASSIGN
gen_Bus_2_1.gENROU.Te = gen_Bus_2_1.gENROU.PSId * gen_Bus_2_1.gENROU.iq - gen_Bus_2_1.gENROU.PSIq * gen_Bus_2_1.gENROU.id
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2870};
  data->localData[0]->realVars[503] /* gen_Bus_2_1.gENROU.Te variable */ = (data->localData[0]->realVars[497] /* gen_Bus_2_1.gENROU.PSId variable */) * (data->localData[0]->realVars[508] /* gen_Bus_2_1.gENROU.iq variable */) - ((data->localData[0]->realVars[501] /* gen_Bus_2_1.gENROU.PSIq variable */) * (data->localData[0]->realVars[507] /* gen_Bus_2_1.gENROU.id variable */));
  TRACE_POP
}
/*
equation index: 2871
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.gENROU.w = 0.5 * ((gen_Bus_2_1.gENROU.PMECH - gen_Bus_2_1.gENROU.D * gen_Bus_2_1.gENROU.w) / (1.0 + gen_Bus_2_1.gENROU.w) - gen_Bus_2_1.gENROU.Te) / gen_Bus_2_1.gENROU.H
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2871};
  data->localData[0]->realVars[143] /* der(gen_Bus_2_1.gENROU.w) STATE_DER */ = (0.5) * (DIVISION_SIM(DIVISION_SIM(data->localData[0]->realVars[496] /* gen_Bus_2_1.gENROU.PMECH variable */ - ((data->simulationInfo->realParameter[1093] /* gen_Bus_2_1.gENROU.D PARAM */) * (data->localData[0]->realVars[41] /* gen_Bus_2_1.gENROU.w STATE(1) */)),1.0 + data->localData[0]->realVars[41] /* gen_Bus_2_1.gENROU.w STATE(1) */,"1.0 + gen_Bus_2_1.gENROU.w",equationIndexes) - data->localData[0]->realVars[503] /* gen_Bus_2_1.gENROU.Te variable */,data->simulationInfo->realParameter[1099] /* gen_Bus_2_1.gENROU.H PARAM */,"gen_Bus_2_1.gENROU.H",equationIndexes));
  TRACE_POP
}
/*
equation index: 2872
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.VE.u2 = OpenIPSL.NonElectrical.Functions.SE(gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y, gen_Bus_2_1.iEEET1_1.rotatingExciter.se1.SE1, gen_Bus_2_1.iEEET1_1.rotatingExciter.se1.SE2, gen_Bus_2_1.iEEET1_1.rotatingExciter.se1.E1, gen_Bus_2_1.iEEET1_1.rotatingExciter.se1.E2)
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2872};
  data->localData[0]->realVars[522] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.VE.u2 variable */ = omc_OpenIPSL_NonElectrical_Functions_SE(threadData, data->localData[0]->realVars[44] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */, data->simulationInfo->realParameter[1232] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.se1.SE1 PARAM */, data->simulationInfo->realParameter[1233] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.se1.SE2 PARAM */, data->simulationInfo->realParameter[1230] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.se1.E1 PARAM */, data->simulationInfo->realParameter[1231] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.se1.E2 PARAM */);
  TRACE_POP
}
/*
equation index: 2873
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.u1 = gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y * gen_Bus_2_1.iEEET1_1.rotatingExciter.VE.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2873};
  data->localData[0]->realVars[519] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.u1 variable */ = (data->localData[0]->realVars[44] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y STATE(1) */) * (data->localData[0]->realVars[522] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.VE.u2 variable */);
  TRACE_POP
}
/*
equation index: 2874
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.y = gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.k1 * gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.u1 + gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.k2 * gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.u2
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2874};
  data->localData[0]->realVars[521] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.y variable */ = (data->simulationInfo->realParameter[1224] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.k1 PARAM */) * (data->localData[0]->realVars[519] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.u1 variable */) + (data->simulationInfo->realParameter[1225] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.k2 PARAM */) * (data->localData[0]->realVars[520] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.u2 variable */);
  TRACE_POP
}
/*
equation index: 2875
type: SIMPLE_ASSIGN
gen_Bus_2_1.iEEET1_1.rotatingExciter.feedback.y = gen_Bus_2_1.iEEET1_1.rotatingExciter.I_C - gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2875};
  data->localData[0]->realVars[523] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.feedback.y variable */ = data->localData[0]->realVars[518] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.I_C variable */ - data->localData[0]->realVars[521] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.Sum.y variable */;
  TRACE_POP
}
/*
equation index: 2876
type: SIMPLE_ASSIGN
$DER.gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y = gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.k * gen_Bus_2_1.iEEET1_1.rotatingExciter.feedback.y
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2876};
  data->localData[0]->realVars[146] /* der(gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.y) STATE_DER */ = (data->simulationInfo->realParameter[1228] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.sISO.k PARAM */) * (data->localData[0]->realVars[523] /* gen_Bus_2_1.iEEET1_1.rotatingExciter.feedback.y variable */);
  TRACE_POP
}
/*
equation index: 2892
type: ALGORITHM

  assert(gen_Bus_2_1.pSS2A.limiter.uMax >= gen_Bus_2_1.pSS2A.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(gen_Bus_2_1.pSS2A.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(gen_Bus_2_1.pSS2A.limiter.uMin, 6, 0, true) + ")");
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2892};
  modelica_boolean tmp96;
  static const MMC_DEFSTRINGLIT(tmp97,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,11,") < uMin (=");
  modelica_string tmp100;
  static int tmp101 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp96 = GreaterEq(data->simulationInfo->realParameter[1384] /* gen_Bus_2_1.pSS2A.limiter.uMax PARAM */,data->simulationInfo->realParameter[1385] /* gen_Bus_2_1.pSS2A.limiter.uMin PARAM */);
    if(!tmp96)
    {
      tmp98 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[1384] /* gen_Bus_2_1.pSS2A.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp97),tmp98);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp99));
      tmp100 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[1385] /* gen_Bus_2_1.pSS2A.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp100);
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
/*
equation index: 2891
type: ALGORITHM

  assert(gen_Bus_1_1.pSS2A.limiter.uMax >= gen_Bus_1_1.pSS2A.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(gen_Bus_1_1.pSS2A.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(gen_Bus_1_1.pSS2A.limiter.uMin, 6, 0, true) + ")");
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2891};
  modelica_boolean tmp102;
  static const MMC_DEFSTRINGLIT(tmp103,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp104;
  static const MMC_DEFSTRINGLIT(tmp105,11,") < uMin (=");
  modelica_string tmp106;
  static int tmp107 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp102 = GreaterEq(data->simulationInfo->realParameter[849] /* gen_Bus_1_1.pSS2A.limiter.uMax PARAM */,data->simulationInfo->realParameter[850] /* gen_Bus_1_1.pSS2A.limiter.uMin PARAM */);
    if(!tmp102)
    {
      tmp104 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[849] /* gen_Bus_1_1.pSS2A.limiter.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp103),tmp104);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp105));
      tmp106 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[850] /* gen_Bus_1_1.pSS2A.limiter.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp106);
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
equation index: 2889
type: WHEN

when {$whenCondition2} then
  reinit(gen_Bus_3_1.iEEET1_1.simpleLagLim.state,  gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax);
end when;
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2889};
  if((data->localData[0]->booleanVars[6] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[6] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1775] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_3_1.iEEET1_1.simpleLagLim.state = %g", data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1776] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_3_1.iEEET1_1.simpleLagLim.state = %g", data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 2887
type: WHEN

when {$whenCondition4} then
  reinit(gen_Bus_6_1.iEEET1_1.simpleLagLim.state,  gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax);
end when;
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2887};
  if((data->localData[0]->booleanVars[8] /* $whenCondition4 DISCRETE */ && !data->simulationInfo->booleanVarsPre[8] /* $whenCondition4 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1941] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_6_1.iEEET1_1.simpleLagLim.state = %g", data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[7] /* $whenCondition3 DISCRETE */ && !data->simulationInfo->booleanVarsPre[7] /* $whenCondition3 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1942] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_6_1.iEEET1_1.simpleLagLim.state = %g", data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 2885
type: WHEN

when {$whenCondition6} then
  reinit(gen_Bus_8_1.iEEET1_1.simpleLagLim.state,  gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax);
end when;
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2885};
  if((data->localData[0]->booleanVars[10] /* $whenCondition6 DISCRETE */ && !data->simulationInfo->booleanVarsPre[10] /* $whenCondition6 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[2107] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_8_1.iEEET1_1.simpleLagLim.state = %g", data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[9] /* $whenCondition5 DISCRETE */ && !data->simulationInfo->booleanVarsPre[9] /* $whenCondition5 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[2108] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_8_1.iEEET1_1.simpleLagLim.state = %g", data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 2883
type: WHEN

when {$whenCondition8} then
  reinit(gen_Bus_1_1.tGOV1_1.simpleLagLim.state,  gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax);
end when;
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2883};
  if((data->localData[0]->booleanVars[12] /* $whenCondition8 DISCRETE */ && !data->simulationInfo->booleanVarsPre[12] /* $whenCondition8 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1080] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_1_1.tGOV1_1.simpleLagLim.state = %g", data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[11] /* $whenCondition7 DISCRETE */ && !data->simulationInfo->booleanVarsPre[11] /* $whenCondition7 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1081] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_1_1.tGOV1_1.simpleLagLim.state = %g", data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 2881
type: WHEN

when {$whenCondition10} then
  reinit(gen_Bus_1_1.iEEET1_1.simpleLagLim.state,  gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax);
end when;
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2881};
  if((data->localData[0]->booleanVars[1] /* $whenCondition10 DISCRETE */ && !data->simulationInfo->booleanVarsPre[1] /* $whenCondition10 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[703] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_1_1.iEEET1_1.simpleLagLim.state = %g", data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[13] /* $whenCondition9 DISCRETE */ && !data->simulationInfo->booleanVarsPre[13] /* $whenCondition9 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[704] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_1_1.iEEET1_1.simpleLagLim.state = %g", data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 2879
type: WHEN

when {$whenCondition12} then
  reinit(gen_Bus_2_1.tGOV1_1.simpleLagLim.state,  gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax);
end when;
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2879};
  if((data->localData[0]->booleanVars[3] /* $whenCondition12 DISCRETE */ && !data->simulationInfo->booleanVarsPre[3] /* $whenCondition12 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1615] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_2_1.tGOV1_1.simpleLagLim.state = %g", data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[2] /* $whenCondition11 DISCRETE */ && !data->simulationInfo->booleanVarsPre[2] /* $whenCondition11 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1616] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_2_1.tGOV1_1.simpleLagLim.state = %g", data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}
/*
equation index: 2877
type: WHEN

when {$whenCondition14} then
  reinit(gen_Bus_2_1.iEEET1_1.simpleLagLim.state,  gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax);
end when;
*/
void IEEE14_IEEE14_Base_Case_eqFunction_2877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2877};
  if((data->localData[0]->booleanVars[5] /* $whenCondition14 DISCRETE */ && !data->simulationInfo->booleanVarsPre[5] /* $whenCondition14 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1238] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_2_1.iEEET1_1.simpleLagLim.state = %g", data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  else if((data->localData[0]->booleanVars[4] /* $whenCondition13 DISCRETE */ && !data->simulationInfo->booleanVarsPre[4] /* $whenCondition13 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */ = data->simulationInfo->realParameter[1239] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMin PARAM */;
    infoStreamPrint(LOG_EVENTS, 0, "reinit gen_Bus_2_1.iEEET1_1.simpleLagLim.state = %g", data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */);
    data->simulationInfo->needToIterate = 1;
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int IEEE14_IEEE14_Base_Case_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  IEEE14_IEEE14_Base_Case_functionLocalKnownVars(data, threadData);
  IEEE14_IEEE14_Base_Case_eqFunction_1923(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1924(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1925(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1926(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1927(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1928(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1929(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1930(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1931(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1932(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1933(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1934(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1935(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1936(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1937(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1938(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1939(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1940(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1941(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1942(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1943(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1944(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1945(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1946(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1947(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1948(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1949(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1950(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1951(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1952(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1953(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1954(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1955(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1956(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1957(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1958(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1959(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1960(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1961(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1962(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1963(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1964(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1965(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1966(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1967(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1968(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1969(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1970(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1971(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1972(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1973(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1974(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1975(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1976(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1977(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1978(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1979(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1980(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1981(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1982(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1983(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1984(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1985(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1986(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1987(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1988(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1989(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1990(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1991(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1992(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1993(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1994(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1995(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1996(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1997(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1998(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_1999(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2000(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2001(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2002(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2003(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2004(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2005(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2006(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2007(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2008(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2009(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2010(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2011(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2012(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2013(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2014(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2015(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2016(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2017(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2018(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2019(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2020(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2021(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2022(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2023(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2024(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2025(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2026(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2027(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2028(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2029(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2030(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2031(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2032(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2033(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2034(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2035(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2036(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2037(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2038(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2039(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2040(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2041(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2042(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2043(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2044(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2045(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2046(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2047(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2048(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2049(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2050(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2051(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2052(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2053(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2054(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2055(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2056(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2057(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2058(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2059(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2507(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2508(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2509(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2510(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2511(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2512(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2513(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2514(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2515(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2516(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2517(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2518(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2519(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2520(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2521(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2522(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2523(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2524(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2525(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2526(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2527(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2528(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2529(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2530(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2531(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2532(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2533(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2534(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2535(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2536(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2537(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2538(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2539(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2540(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2541(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2542(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2543(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2544(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2545(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2546(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2547(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2548(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2549(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2550(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2551(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2552(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2553(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2554(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2555(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2556(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2557(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2558(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2559(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2560(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2561(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2562(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2563(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2564(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2565(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2566(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2567(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2568(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2569(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2570(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2571(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2572(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2573(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2574(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2575(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2576(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2577(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2578(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2579(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2580(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2581(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2582(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2583(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2584(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2585(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2586(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2587(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2588(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2589(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2590(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2591(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2592(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2593(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2594(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2595(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2596(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2597(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2598(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2599(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2600(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2601(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2602(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2603(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2604(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2605(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2606(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2607(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2608(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2609(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2610(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2611(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2612(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2613(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2614(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2615(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2616(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2617(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2618(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2619(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2620(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2621(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2622(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2623(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2624(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2625(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2626(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2627(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2628(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2629(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2630(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2631(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2632(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2633(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2634(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2635(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2636(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2637(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2638(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2639(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2640(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2641(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2642(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2643(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2644(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2645(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2646(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2647(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2648(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2649(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2650(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2651(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2652(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2653(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2654(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2655(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2656(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2657(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2658(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2659(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2660(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2661(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2662(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2663(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2664(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2665(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2666(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2667(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2668(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2669(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2670(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2671(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2672(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2673(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2674(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2675(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2676(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2677(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2678(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2679(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2680(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2681(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2682(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2683(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2684(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2685(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2686(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2687(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2688(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2689(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2690(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2691(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2692(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2693(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2694(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2695(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2696(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2697(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2698(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2699(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2700(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2701(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2702(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2703(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2704(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2705(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2706(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2707(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2708(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2709(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2710(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2711(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2712(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2713(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2714(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2715(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2716(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2717(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2718(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2719(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2720(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2721(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2722(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2723(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2724(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2725(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2726(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2727(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2728(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2729(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2730(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2731(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2732(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2733(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2734(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2735(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2736(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2737(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2738(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2739(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2740(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2741(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2742(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2743(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2744(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2745(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2746(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2747(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2748(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2749(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2750(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2751(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2752(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2753(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2754(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2755(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2756(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2757(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2758(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2759(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2760(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2761(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2762(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2763(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2764(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2765(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2766(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2767(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2768(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2769(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2770(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2771(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2772(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2773(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2774(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2775(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2776(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2777(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2778(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2779(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2780(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2781(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2782(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2783(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2784(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2785(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2786(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2787(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2788(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2789(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2790(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2791(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2792(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2793(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2794(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2795(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2796(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2797(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2798(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2799(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2800(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2801(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2802(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2803(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2804(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2805(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2806(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2807(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2808(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2809(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2810(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2811(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2812(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2813(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2814(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2815(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2816(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2817(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2818(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2819(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2820(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2821(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2822(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2823(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2824(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2825(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2826(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2827(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2828(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2829(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2830(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2831(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2832(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2833(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2834(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2835(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2836(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2837(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2838(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2839(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2840(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2841(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2842(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2843(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2844(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2845(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2846(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2847(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2848(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2849(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2850(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2851(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2852(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2853(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2854(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2855(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2856(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2857(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2858(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2859(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2860(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2861(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2862(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2863(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2864(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2865(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2866(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2867(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2868(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2869(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2870(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2871(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2872(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2873(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2874(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2875(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2876(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2892(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2891(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2889(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2887(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2885(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2883(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2881(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2879(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2877(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int IEEE14_IEEE14_Base_Case_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void IEEE14_IEEE14_Base_Case_eqFunction_1930(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1931(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1932(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1933(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1934(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1935(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1936(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1937(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1938(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1939(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1940(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1941(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1942(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1943(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1944(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1946(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1947(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1948(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1949(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1950(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1951(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1952(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1953(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1954(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1955(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1956(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1959(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1960(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1961(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1962(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1963(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1964(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1965(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1966(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1967(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1968(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1969(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1970(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1971(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1972(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1973(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1974(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1975(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1976(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1977(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1978(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1979(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1980(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1981(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1982(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1983(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1984(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1985(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1986(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1988(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1989(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1990(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1991(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1992(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1993(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1994(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1995(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1996(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1997(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_1998(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2001(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2002(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2003(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2004(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2005(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2006(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2007(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2008(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2009(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2010(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2011(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2012(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2013(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2014(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2015(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2016(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2017(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2018(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2019(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2020(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2021(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2022(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2023(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2024(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2025(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2026(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2027(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2028(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2029(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2030(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2031(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2032(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2033(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2034(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2035(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2036(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2037(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2038(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2039(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2040(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2041(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2042(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2043(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2044(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2045(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2046(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2047(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2048(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2049(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2050(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2051(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2052(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2053(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2054(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2055(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2056(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2057(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2058(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2059(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2507(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2508(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2509(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2510(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2511(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2512(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2513(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2515(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2516(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2517(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2520(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2521(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2522(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2523(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2524(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2527(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2528(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2529(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2530(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2531(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2532(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2533(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2534(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2535(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2538(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2552(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2553(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2554(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2569(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2570(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2571(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2572(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2573(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2574(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2575(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2576(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2579(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2597(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2598(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2599(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2600(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2601(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2643(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2644(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2645(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2648(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2649(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2650(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2651(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2652(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2653(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2654(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2655(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2658(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2663(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2664(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2665(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2666(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2667(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2684(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2685(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2686(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2707(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2708(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2709(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2710(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2711(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2712(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2713(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2714(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2715(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2720(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2721(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2722(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2723(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2724(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2725(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2726(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2727(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2728(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2729(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2730(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2731(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2732(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2733(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2734(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2735(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2736(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2738(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2739(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2740(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2741(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2742(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2743(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2744(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2745(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2746(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2747(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2748(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2749(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2750(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2751(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2752(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2753(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2754(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2755(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2756(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2757(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2760(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2761(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2762(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2763(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2764(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2765(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2766(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2767(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2768(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2769(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2770(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2771(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2772(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2773(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2774(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2775(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2776(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2777(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2778(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2779(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2780(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2783(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2784(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2785(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2786(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2787(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2800(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2801(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2802(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2803(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2804(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2805(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2806(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2807(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2808(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2809(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2810(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2811(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2812(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2813(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2814(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2815(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2816(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2818(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2819(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2820(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2821(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2822(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2823(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2824(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2825(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2826(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2827(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2828(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2829(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2830(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2831(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2832(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2833(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2834(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2835(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2836(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2837(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2840(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2841(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2842(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2843(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2844(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2845(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2846(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2847(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2848(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2849(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2850(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2851(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2852(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2853(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2854(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2855(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2856(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2857(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2858(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2861(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2862(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2863(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2864(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2865(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2867(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2868(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2869(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2870(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2871(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2872(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2873(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2874(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2875(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2876(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    IEEE14_IEEE14_Base_Case_eqFunction_1930(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1931(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1932(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1933(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1934(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1935(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1936(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1937(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1938(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1939(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1940(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1941(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1942(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1943(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1944(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1946(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1947(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1948(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1949(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1950(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1951(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1952(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1953(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1954(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1955(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1956(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1959(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1960(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1961(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1962(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1963(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1964(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1965(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1966(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1967(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1968(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1969(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1970(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1971(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1972(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1973(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1974(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1975(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1976(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1977(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1978(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1979(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1980(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1981(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1982(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1983(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1984(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1985(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1986(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1988(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1989(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1990(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1991(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1992(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1993(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1994(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1995(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1996(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1997(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_1998(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2001(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2002(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2003(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2004(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2005(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2006(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2007(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2008(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2009(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2010(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2011(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2012(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2013(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2014(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2015(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2016(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2017(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2018(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2019(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2020(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2021(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2022(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2023(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2024(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2025(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2026(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2027(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2028(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2029(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2030(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2031(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2032(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2033(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2034(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2035(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2036(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2037(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2038(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2039(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2040(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2041(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2042(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2043(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2044(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2045(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2046(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2047(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2048(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2049(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2050(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2051(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2052(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2053(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2054(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2055(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2056(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2057(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2058(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2059(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2507(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2508(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2509(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2510(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2511(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2512(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2513(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2515(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2516(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2517(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2520(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2521(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2522(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2523(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2524(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2527(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2528(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2529(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2530(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2531(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2532(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2533(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2534(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2535(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2538(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2552(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2553(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2554(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2569(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2570(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2571(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2572(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2573(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2574(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2575(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2576(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2579(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2597(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2598(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2599(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2600(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2601(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2643(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2644(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2645(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2648(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2649(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2650(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2651(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2652(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2653(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2654(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2655(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2658(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2663(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2664(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2665(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2666(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2667(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2684(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2685(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2686(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2707(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2708(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2709(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2710(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2711(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2712(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2713(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2714(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2715(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2720(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2721(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2722(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2723(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2724(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2725(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2726(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2727(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2728(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2729(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2730(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2731(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2732(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2733(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2734(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2735(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2736(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2738(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2739(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2740(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2741(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2742(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2743(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2744(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2745(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2746(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2747(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2748(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2749(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2750(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2751(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2752(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2753(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2754(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2755(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2756(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2757(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2760(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2761(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2762(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2763(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2764(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2765(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2766(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2767(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2768(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2769(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2770(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2771(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2772(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2773(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2774(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2775(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2776(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2777(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2778(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2779(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2780(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2783(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2784(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2785(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2786(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2787(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2800(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2801(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2802(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2803(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2804(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2805(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2806(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2807(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2808(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2809(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2810(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2811(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2812(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2813(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2814(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2815(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2816(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2818(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2819(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2820(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2821(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2822(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2823(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2824(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2825(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2826(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2827(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2828(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2829(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2830(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2831(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2832(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2833(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2834(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2835(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2836(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2837(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2840(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2841(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2842(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2843(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2844(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2845(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2846(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2847(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2848(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2849(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2850(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2851(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2852(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2853(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2854(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2855(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2856(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2857(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2858(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2861(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2862(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2863(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2864(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2865(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2867(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2868(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2869(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2870(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2871(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2872(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2873(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2874(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2875(data, threadData);

    IEEE14_IEEE14_Base_Case_eqFunction_2876(data, threadData);
}

int IEEE14_IEEE14_Base_Case_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  IEEE14_IEEE14_Base_Case_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "IEEE14.IEEE14_Base_Case_12jac.h"
#include "IEEE14.IEEE14_Base_Case_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks IEEE14_IEEE14_Base_Case_callback = {
   (int (*)(DATA *, threadData_t *, void *)) IEEE14_IEEE14_Base_Case_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) IEEE14_IEEE14_Base_Case_performQSSSimulation,
   IEEE14_IEEE14_Base_Case_updateContinuousSystem,
   IEEE14_IEEE14_Base_Case_callExternalObjectDestructors,
   IEEE14_IEEE14_Base_Case_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   IEEE14_IEEE14_Base_Case_initializeStateSets,
   #else
   NULL,
   #endif
   IEEE14_IEEE14_Base_Case_initializeDAEmodeData,
   IEEE14_IEEE14_Base_Case_functionODE,
   IEEE14_IEEE14_Base_Case_functionAlgebraics,
   IEEE14_IEEE14_Base_Case_functionDAE,
   IEEE14_IEEE14_Base_Case_functionLocalKnownVars,
   IEEE14_IEEE14_Base_Case_input_function,
   IEEE14_IEEE14_Base_Case_input_function_init,
   IEEE14_IEEE14_Base_Case_input_function_updateStartValues,
   IEEE14_IEEE14_Base_Case_data_function,
   IEEE14_IEEE14_Base_Case_output_function,
   IEEE14_IEEE14_Base_Case_setc_function,
   IEEE14_IEEE14_Base_Case_function_storeDelayed,
   IEEE14_IEEE14_Base_Case_updateBoundVariableAttributes,
   IEEE14_IEEE14_Base_Case_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   IEEE14_IEEE14_Base_Case_functionInitialEquations_lambda0,
   IEEE14_IEEE14_Base_Case_functionRemovedInitialEquations,
   IEEE14_IEEE14_Base_Case_updateBoundParameters,
   IEEE14_IEEE14_Base_Case_checkForAsserts,
   IEEE14_IEEE14_Base_Case_function_ZeroCrossingsEquations,
   IEEE14_IEEE14_Base_Case_function_ZeroCrossings,
   IEEE14_IEEE14_Base_Case_function_updateRelations,
   IEEE14_IEEE14_Base_Case_zeroCrossingDescription,
   IEEE14_IEEE14_Base_Case_relationDescription,
   IEEE14_IEEE14_Base_Case_function_initSample,
   IEEE14_IEEE14_Base_Case_INDEX_JAC_A,
   IEEE14_IEEE14_Base_Case_INDEX_JAC_B,
   IEEE14_IEEE14_Base_Case_INDEX_JAC_C,
   IEEE14_IEEE14_Base_Case_INDEX_JAC_D,
   IEEE14_IEEE14_Base_Case_INDEX_JAC_F,
   IEEE14_IEEE14_Base_Case_initialAnalyticJacobianA,
   IEEE14_IEEE14_Base_Case_initialAnalyticJacobianB,
   IEEE14_IEEE14_Base_Case_initialAnalyticJacobianC,
   IEEE14_IEEE14_Base_Case_initialAnalyticJacobianD,
   IEEE14_IEEE14_Base_Case_initialAnalyticJacobianF,
   IEEE14_IEEE14_Base_Case_functionJacA_column,
   IEEE14_IEEE14_Base_Case_functionJacB_column,
   IEEE14_IEEE14_Base_Case_functionJacC_column,
   IEEE14_IEEE14_Base_Case_functionJacD_column,
   IEEE14_IEEE14_Base_Case_functionJacF_column,
   IEEE14_IEEE14_Base_Case_linear_model_frame,
   IEEE14_IEEE14_Base_Case_linear_model_datarecovery_frame,
   IEEE14_IEEE14_Base_Case_mayer,
   IEEE14_IEEE14_Base_Case_lagrange,
   IEEE14_IEEE14_Base_Case_pickUpBoundsForInputsInOptimization,
   IEEE14_IEEE14_Base_Case_setInputData,
   IEEE14_IEEE14_Base_Case_getTimeGrid,
   IEEE14_IEEE14_Base_Case_symbolicInlineSystem,
   IEEE14_IEEE14_Base_Case_function_initSynchronous,
   IEEE14_IEEE14_Base_Case_function_updateSynchronous,
   IEEE14_IEEE14_Base_Case_function_equationsSynchronous,
   IEEE14_IEEE14_Base_Case_inputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Program Files/OpenModelica1.16.2-64bit/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,55,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "IEEE14"
#define _OMC_LIT_RESOURCE_1_dir_data "Z:/Documents/GitHub_Repositories/_maintained/Papers/Trajectory_Generation_Tool/models/_old/IEEE14"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,6,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,97,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/Program Files/OpenModelica1.16.2-64bit/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,70,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Program Files/OpenModelica1.16.2-64bit/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,78,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "OpenIPSL"
#define _OMC_LIT_RESOURCE_4_dir_data "Z:/Documents/Dymola/Library/OpenIPSL_1.5/OpenIPSL"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,8,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,49,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void IEEE14_IEEE14_Base_Case_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &IEEE14_IEEE14_Base_Case_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "IEEE14.IEEE14_Base_Case";
  data->modelData->modelFilePrefix = "IEEE14.IEEE14_Base_Case";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "Z:/Documents/GitHub_Repositories/_maintained/Papers/Trajectory_Generation_Tool/models/_old/IEEE14";
  data->modelData->modelGUID = "{cda5f324-3798-4dab-937e-c486f330ab13}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "IEEE14.IEEE14_Base_Case_init.c"
    ;
  static const char contents_info[] =
    #include "IEEE14.IEEE14_Base_Case_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "IEEE14.IEEE14_Base_Case_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "IEEE14.IEEE14_Base_Case_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 102;
  data->modelData->nVariablesReal = 833;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 19;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 2468;
  data->modelData->nParametersInteger = 195;
  data->modelData->nParametersBoolean = 41;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 781;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 164;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 128;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "IEEE14.IEEE14_Base_Case_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 14;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 5044;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 3;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 6;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->linearizationDumpLanguage =
  OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    IEEE14_IEEE14_Base_Case_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


