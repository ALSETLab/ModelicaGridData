/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "IEEE14.IEEE14_Base_Case_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void IEEE14_IEEE14_Base_Case_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *IEEE14_IEEE14_Base_Case_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"gen_Bus_1_1.tGOV1_1.simpleLagLim.state > gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax and gen_Bus_1_1.tGOV1_1.simpleLagLim.K * gen_Bus_1_1.tGOV1_1.imGain9.y - gen_Bus_1_1.tGOV1_1.simpleLagLim.state < 0.0",
  "gen_Bus_1_1.tGOV1_1.simpleLagLim.state < gen_Bus_1_1.tGOV1_1.simpleLagLim.outMin and gen_Bus_1_1.tGOV1_1.simpleLagLim.K * gen_Bus_1_1.tGOV1_1.imGain9.y - gen_Bus_1_1.tGOV1_1.simpleLagLim.state > 0.0",
  "gen_Bus_2_1.tGOV1_1.simpleLagLim.state > gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax and gen_Bus_2_1.tGOV1_1.simpleLagLim.K * gen_Bus_2_1.tGOV1_1.imGain9.y - gen_Bus_2_1.tGOV1_1.simpleLagLim.state < 0.0",
  "gen_Bus_2_1.tGOV1_1.simpleLagLim.state < gen_Bus_2_1.tGOV1_1.simpleLagLim.outMin and gen_Bus_2_1.tGOV1_1.simpleLagLim.K * gen_Bus_2_1.tGOV1_1.imGain9.y - gen_Bus_2_1.tGOV1_1.simpleLagLim.state > 0.0",
  "time >= pwLine12.t1 and time < pwLine12.t2",
  "time >= pwLine12.t1",
  "time < pwLine12.t2",
  "time >= pwLine11.t1 and time < pwLine11.t2",
  "time >= pwLine11.t1",
  "time < pwLine11.t2",
  "time >= pwLine15.t1 and time < pwLine15.t2",
  "time >= pwLine4.t1 and time < pwLine4.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1 and time < pwLine1.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine3.t1 and time < pwLine3.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= pwLine6.t1 and time < pwLine6.t2",
  "time >= pwLine2.t1 and time < pwLine2.t2",
  "time >= pwLine.t1 and time < pwLine.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= LOAD_05.t1 and time <= LOAD_05.t1 + LOAD_05.d_t",
  "time >= LOAD_05.t1",
  "time <= LOAD_05.t1 + LOAD_05.d_t",
  "LOAD_05.v < 0.5 * LOAD_05.PQBRAK and LOAD_05.v > 0.0",
  "LOAD_05.v > 0.5 * LOAD_05.PQBRAK and LOAD_05.v < LOAD_05.PQBRAK",
  "time >= pwLine5.t1 and time < pwLine5.t2",
  "time >= pwLine5.t1",
  "time < pwLine5.t2",
  "time >= LOAD_02.t1 and time <= LOAD_02.t1 + LOAD_02.d_t",
  "time >= LOAD_02.t1",
  "time <= LOAD_02.t1 + LOAD_02.d_t",
  "LOAD_02.v < 0.5 * LOAD_02.PQBRAK and LOAD_02.v > 0.0",
  "LOAD_02.v > 0.5 * LOAD_02.PQBRAK and LOAD_02.v < LOAD_02.PQBRAK",
  "time >= pwLine2.t1",
  "time < pwLine2.t2",
  "time >= pwLine6.t1",
  "time < pwLine6.t2",
  "time >= LOAD_03.t1 and time <= LOAD_03.t1 + LOAD_03.d_t",
  "time >= LOAD_03.t1",
  "time <= LOAD_03.t1 + LOAD_03.d_t",
  "LOAD_03.v < 0.5 * LOAD_03.PQBRAK and LOAD_03.v > 0.0",
  "LOAD_03.v > 0.5 * LOAD_03.PQBRAK and LOAD_03.v < LOAD_03.PQBRAK",
  "time >= LOAD_04.t1 and time <= LOAD_04.t1 + LOAD_04.d_t",
  "time >= LOAD_04.t1",
  "time <= LOAD_04.t1 + LOAD_04.d_t",
  "LOAD_04.v < 0.5 * LOAD_04.PQBRAK and LOAD_04.v > 0.0",
  "LOAD_04.v > 0.5 * LOAD_04.PQBRAK and LOAD_04.v < LOAD_04.PQBRAK",
  "time >= pwLine14.t1 and time < pwLine14.t2",
  "time >= pwLine14.t1",
  "time < pwLine14.t2",
  "time >= LOAD_09.t1 and time <= LOAD_09.t1 + LOAD_09.d_t",
  "time >= LOAD_09.t1",
  "time <= LOAD_09.t1 + LOAD_09.d_t",
  "LOAD_09.v < 0.5 * LOAD_09.PQBRAK and LOAD_09.v > 0.0",
  "LOAD_09.v > 0.5 * LOAD_09.PQBRAK and LOAD_09.v < LOAD_09.PQBRAK",
  "time >= pwLine7.t1 and time < pwLine7.t2",
  "time >= pwLine7.t1",
  "time < pwLine7.t2",
  "time >= LOAD_10.t1 and time <= LOAD_10.t1 + LOAD_10.d_t",
  "time >= LOAD_10.t1",
  "time <= LOAD_10.t1 + LOAD_10.d_t",
  "LOAD_10.v < 0.5 * LOAD_10.PQBRAK and LOAD_10.v > 0.0",
  "LOAD_10.v > 0.5 * LOAD_10.PQBRAK and LOAD_10.v < LOAD_10.PQBRAK",
  "time >= pwLine10.t1 and time < pwLine10.t2",
  "time >= pwLine10.t1",
  "time < pwLine10.t2",
  "time >= pwLine9.t1 and time < pwLine9.t2",
  "time >= pwLine9.t1",
  "time < pwLine9.t2",
  "time >= LOAD_06.t1 and time <= LOAD_06.t1 + LOAD_06.d_t",
  "time >= LOAD_06.t1",
  "time <= LOAD_06.t1 + LOAD_06.d_t",
  "LOAD_06.v < 0.5 * LOAD_06.PQBRAK and LOAD_06.v > 0.0",
  "LOAD_06.v > 0.5 * LOAD_06.PQBRAK and LOAD_06.v < LOAD_06.PQBRAK",
  "time >= pwLine15.t1",
  "time < pwLine15.t2",
  "time >= pwLine13.t1 and time < pwLine13.t2",
  "time >= pwLine13.t1",
  "time < pwLine13.t2",
  "time >= pwLine8.t1 and time < pwLine8.t2",
  "time >= pwLine8.t1",
  "time < pwLine8.t2",
  "time >= LOAD_14.t1 and time <= LOAD_14.t1 + LOAD_14.d_t",
  "time >= LOAD_14.t1",
  "time <= LOAD_14.t1 + LOAD_14.d_t",
  "LOAD_14.v < 0.5 * LOAD_14.PQBRAK and LOAD_14.v > 0.0",
  "LOAD_14.v > 0.5 * LOAD_14.PQBRAK and LOAD_14.v < LOAD_14.PQBRAK",
  "time >= LOAD_13.t1 and time <= LOAD_13.t1 + LOAD_13.d_t",
  "time >= LOAD_13.t1",
  "time <= LOAD_13.t1 + LOAD_13.d_t",
  "LOAD_13.v < 0.5 * LOAD_13.PQBRAK and LOAD_13.v > 0.0",
  "LOAD_13.v > 0.5 * LOAD_13.PQBRAK and LOAD_13.v < LOAD_13.PQBRAK",
  "time >= LOAD_11.t1 and time <= LOAD_11.t1 + LOAD_11.d_t",
  "time >= LOAD_11.t1",
  "time <= LOAD_11.t1 + LOAD_11.d_t",
  "LOAD_11.v < 0.5 * LOAD_11.PQBRAK and LOAD_11.v > 0.0",
  "LOAD_11.v > 0.5 * LOAD_11.PQBRAK and LOAD_11.v < LOAD_11.PQBRAK",
  "time < pwFault.t1",
  "time < pwFault.t2 and pwFault.ground",
  "time < pwFault.t2",
  "time >= LOAD_12.t1 and time <= LOAD_12.t1 + LOAD_12.d_t",
  "time >= LOAD_12.t1",
  "time <= LOAD_12.t1 + LOAD_12.d_t",
  "LOAD_12.v < 0.5 * LOAD_12.PQBRAK and LOAD_12.v > 0.0",
  "LOAD_12.v > 0.5 * LOAD_12.PQBRAK and LOAD_12.v < LOAD_12.PQBRAK",
  "gen_Bus_6_1.iEEET1_1.simpleLagLim.state > gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax and gen_Bus_6_1.iEEET1_1.simpleLagLim.K * gen_Bus_6_1.iEEET1_1.simpleLagLim.u - gen_Bus_6_1.iEEET1_1.simpleLagLim.state < 0.0",
  "gen_Bus_6_1.iEEET1_1.simpleLagLim.state < gen_Bus_6_1.iEEET1_1.simpleLagLim.outMin and gen_Bus_6_1.iEEET1_1.simpleLagLim.K * gen_Bus_6_1.iEEET1_1.simpleLagLim.u - gen_Bus_6_1.iEEET1_1.simpleLagLim.state > 0.0",
  "gen_Bus_8_1.iEEET1_1.simpleLagLim.state > gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax and gen_Bus_8_1.iEEET1_1.simpleLagLim.K * gen_Bus_8_1.iEEET1_1.simpleLagLim.u - gen_Bus_8_1.iEEET1_1.simpleLagLim.state < 0.0",
  "gen_Bus_8_1.iEEET1_1.simpleLagLim.state < gen_Bus_8_1.iEEET1_1.simpleLagLim.outMin and gen_Bus_8_1.iEEET1_1.simpleLagLim.K * gen_Bus_8_1.iEEET1_1.simpleLagLim.u - gen_Bus_8_1.iEEET1_1.simpleLagLim.state > 0.0",
  "gen_Bus_3_1.iEEET1_1.simpleLagLim.state > gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax and gen_Bus_3_1.iEEET1_1.simpleLagLim.K * gen_Bus_3_1.iEEET1_1.simpleLagLim.u - gen_Bus_3_1.iEEET1_1.simpleLagLim.state < 0.0",
  "gen_Bus_3_1.iEEET1_1.simpleLagLim.state < gen_Bus_3_1.iEEET1_1.simpleLagLim.outMin and gen_Bus_3_1.iEEET1_1.simpleLagLim.K * gen_Bus_3_1.iEEET1_1.simpleLagLim.u - gen_Bus_3_1.iEEET1_1.simpleLagLim.state > 0.0",
  "gen_Bus_2_1.iEEET1_1.simpleLagLim.state > gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax and gen_Bus_2_1.iEEET1_1.simpleLagLim.K * gen_Bus_2_1.iEEET1_1.simpleLagLim.u - gen_Bus_2_1.iEEET1_1.simpleLagLim.state < 0.0",
  "gen_Bus_2_1.iEEET1_1.simpleLagLim.state < gen_Bus_2_1.iEEET1_1.simpleLagLim.outMin and gen_Bus_2_1.iEEET1_1.simpleLagLim.K * gen_Bus_2_1.iEEET1_1.simpleLagLim.u - gen_Bus_2_1.iEEET1_1.simpleLagLim.state > 0.0",
  "gen_Bus_1_1.iEEET1_1.simpleLagLim.state > gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax and gen_Bus_1_1.iEEET1_1.simpleLagLim.K * gen_Bus_1_1.iEEET1_1.simpleLagLim.u - gen_Bus_1_1.iEEET1_1.simpleLagLim.state < 0.0",
  "gen_Bus_1_1.iEEET1_1.simpleLagLim.state < gen_Bus_1_1.iEEET1_1.simpleLagLim.outMin and gen_Bus_1_1.iEEET1_1.simpleLagLim.K * gen_Bus_1_1.iEEET1_1.simpleLagLim.u - gen_Bus_1_1.iEEET1_1.simpleLagLim.state > 0.0",
  "LOAD_13.v < 0.5 * LOAD_13.PQBRAK",
  "LOAD_13.v > 0.0",
  "LOAD_13.v > 0.5 * LOAD_13.PQBRAK",
  "LOAD_13.v < LOAD_13.PQBRAK",
  "LOAD_12.v < 0.5 * LOAD_12.PQBRAK",
  "LOAD_12.v > 0.0",
  "LOAD_12.v > 0.5 * LOAD_12.PQBRAK",
  "LOAD_12.v < LOAD_12.PQBRAK",
  "LOAD_11.v < 0.5 * LOAD_11.PQBRAK",
  "LOAD_11.v > 0.0",
  "LOAD_11.v > 0.5 * LOAD_11.PQBRAK",
  "LOAD_11.v < LOAD_11.PQBRAK",
  "LOAD_10.v < 0.5 * LOAD_10.PQBRAK",
  "LOAD_10.v > 0.0",
  "LOAD_10.v > 0.5 * LOAD_10.PQBRAK",
  "LOAD_10.v < LOAD_10.PQBRAK",
  "LOAD_05.v < 0.5 * LOAD_05.PQBRAK",
  "LOAD_05.v > 0.0",
  "LOAD_05.v > 0.5 * LOAD_05.PQBRAK",
  "LOAD_05.v < LOAD_05.PQBRAK",
  "LOAD_03.v < 0.5 * LOAD_03.PQBRAK",
  "LOAD_03.v > 0.0",
  "LOAD_03.v > 0.5 * LOAD_03.PQBRAK",
  "LOAD_03.v < LOAD_03.PQBRAK",
  "LOAD_02.v < 0.5 * LOAD_02.PQBRAK",
  "LOAD_02.v > 0.0",
  "LOAD_02.v > 0.5 * LOAD_02.PQBRAK",
  "LOAD_02.v < LOAD_02.PQBRAK",
  "LOAD_14.v < 0.5 * LOAD_14.PQBRAK",
  "LOAD_14.v > 0.0",
  "LOAD_14.v > 0.5 * LOAD_14.PQBRAK",
  "LOAD_14.v < LOAD_14.PQBRAK",
  "LOAD_06.v < 0.5 * LOAD_06.PQBRAK",
  "LOAD_06.v > 0.0",
  "LOAD_06.v > 0.5 * LOAD_06.PQBRAK",
  "LOAD_06.v < LOAD_06.PQBRAK",
  "LOAD_09.v < 0.5 * LOAD_09.PQBRAK",
  "LOAD_09.v > 0.0",
  "LOAD_09.v > 0.5 * LOAD_09.PQBRAK",
  "LOAD_09.v < LOAD_09.PQBRAK",
  "LOAD_04.v < 0.5 * LOAD_04.PQBRAK",
  "LOAD_04.v > 0.0",
  "LOAD_04.v > 0.5 * LOAD_04.PQBRAK",
  "LOAD_04.v < LOAD_04.PQBRAK"};
  static const int occurEqs0[] = {1,1999};
  static const int occurEqs1[] = {1,2000};
  static const int occurEqs2[] = {1,1957};
  static const int occurEqs3[] = {1,1958};
  static const int occurEqs4[] = {1,-1};
  static const int occurEqs5[] = {1,-1};
  static const int occurEqs6[] = {1,-1};
  static const int occurEqs7[] = {1,-1};
  static const int occurEqs8[] = {1,-1};
  static const int occurEqs9[] = {1,-1};
  static const int occurEqs10[] = {1,-1};
  static const int occurEqs11[] = {1,-1};
  static const int occurEqs12[] = {1,-1};
  static const int occurEqs13[] = {1,-1};
  static const int occurEqs14[] = {1,-1};
  static const int occurEqs15[] = {1,-1};
  static const int occurEqs16[] = {1,-1};
  static const int occurEqs17[] = {1,-1};
  static const int occurEqs18[] = {1,-1};
  static const int occurEqs19[] = {1,-1};
  static const int occurEqs20[] = {1,-1};
  static const int occurEqs21[] = {1,-1};
  static const int occurEqs22[] = {1,-1};
  static const int occurEqs23[] = {1,-1};
  static const int occurEqs24[] = {1,-1};
  static const int occurEqs25[] = {1,-1};
  static const int occurEqs26[] = {1,-1};
  static const int occurEqs27[] = {1,-1};
  static const int occurEqs28[] = {1,-1};
  static const int occurEqs29[] = {1,-1};
  static const int occurEqs30[] = {1,-1};
  static const int occurEqs31[] = {1,-1};
  static const int occurEqs32[] = {1,-1};
  static const int occurEqs33[] = {1,-1};
  static const int occurEqs34[] = {1,-1};
  static const int occurEqs35[] = {1,-1};
  static const int occurEqs36[] = {1,-1};
  static const int occurEqs37[] = {1,-1};
  static const int occurEqs38[] = {1,-1};
  static const int occurEqs39[] = {1,-1};
  static const int occurEqs40[] = {1,-1};
  static const int occurEqs41[] = {1,-1};
  static const int occurEqs42[] = {1,-1};
  static const int occurEqs43[] = {1,-1};
  static const int occurEqs44[] = {1,-1};
  static const int occurEqs45[] = {1,-1};
  static const int occurEqs46[] = {1,-1};
  static const int occurEqs47[] = {1,-1};
  static const int occurEqs48[] = {1,-1};
  static const int occurEqs49[] = {1,-1};
  static const int occurEqs50[] = {1,-1};
  static const int occurEqs51[] = {1,-1};
  static const int occurEqs52[] = {1,-1};
  static const int occurEqs53[] = {1,-1};
  static const int occurEqs54[] = {1,-1};
  static const int occurEqs55[] = {1,-1};
  static const int occurEqs56[] = {1,-1};
  static const int occurEqs57[] = {1,-1};
  static const int occurEqs58[] = {1,-1};
  static const int occurEqs59[] = {1,-1};
  static const int occurEqs60[] = {1,-1};
  static const int occurEqs61[] = {1,-1};
  static const int occurEqs62[] = {1,-1};
  static const int occurEqs63[] = {1,-1};
  static const int occurEqs64[] = {1,-1};
  static const int occurEqs65[] = {1,-1};
  static const int occurEqs66[] = {1,-1};
  static const int occurEqs67[] = {1,-1};
  static const int occurEqs68[] = {1,-1};
  static const int occurEqs69[] = {1,-1};
  static const int occurEqs70[] = {1,-1};
  static const int occurEqs71[] = {1,-1};
  static const int occurEqs72[] = {1,-1};
  static const int occurEqs73[] = {1,-1};
  static const int occurEqs74[] = {1,-1};
  static const int occurEqs75[] = {1,-1};
  static const int occurEqs76[] = {1,-1};
  static const int occurEqs77[] = {1,-1};
  static const int occurEqs78[] = {1,-1};
  static const int occurEqs79[] = {1,-1};
  static const int occurEqs80[] = {1,-1};
  static const int occurEqs81[] = {1,-1};
  static const int occurEqs82[] = {1,-1};
  static const int occurEqs83[] = {1,-1};
  static const int occurEqs84[] = {1,-1};
  static const int occurEqs85[] = {1,-1};
  static const int occurEqs86[] = {1,-1};
  static const int occurEqs87[] = {1,-1};
  static const int occurEqs88[] = {1,-1};
  static const int occurEqs89[] = {1,-1};
  static const int occurEqs90[] = {1,-1};
  static const int occurEqs91[] = {1,-1};
  static const int occurEqs92[] = {1,-1};
  static const int occurEqs93[] = {1,-1};
  static const int occurEqs94[] = {1,-1};
  static const int occurEqs95[] = {1,-1};
  static const int occurEqs96[] = {1,-1};
  static const int occurEqs97[] = {1,-1};
  static const int occurEqs98[] = {1,-1};
  static const int occurEqs99[] = {1,-1};
  static const int occurEqs100[] = {1,-1};
  static const int occurEqs101[] = {1,-1};
  static const int occurEqs102[] = {1,-1};
  static const int occurEqs103[] = {1,-1};
  static const int occurEqs104[] = {1,-1};
  static const int occurEqs105[] = {1,-1};
  static const int occurEqs106[] = {1,-1};
  static const int occurEqs107[] = {1,-1};
  static const int occurEqs108[] = {1,-1};
  static const int occurEqs109[] = {1,-1};
  static const int occurEqs110[] = {1,2577};
  static const int occurEqs111[] = {1,2578};
  static const int occurEqs112[] = {1,2536};
  static const int occurEqs113[] = {1,2537};
  static const int occurEqs114[] = {1,2656};
  static const int occurEqs115[] = {1,2657};
  static const int occurEqs116[] = {1,2859};
  static const int occurEqs117[] = {1,2860};
  static const int occurEqs118[] = {1,2781};
  static const int occurEqs119[] = {1,2782};
  static const int occurEqs120[] = {1,2059};
  static const int occurEqs121[] = {1,2059};
  static const int occurEqs122[] = {1,2059};
  static const int occurEqs123[] = {1,2059};
  static const int occurEqs124[] = {1,2054};
  static const int occurEqs125[] = {1,2054};
  static const int occurEqs126[] = {1,2054};
  static const int occurEqs127[] = {1,2054};
  static const int occurEqs128[] = {1,2049};
  static const int occurEqs129[] = {1,2049};
  static const int occurEqs130[] = {1,2049};
  static const int occurEqs131[] = {1,2049};
  static const int occurEqs132[] = {1,2044};
  static const int occurEqs133[] = {1,2044};
  static const int occurEqs134[] = {1,2044};
  static const int occurEqs135[] = {1,2044};
  static const int occurEqs136[] = {1,2034};
  static const int occurEqs137[] = {1,2034};
  static const int occurEqs138[] = {1,2034};
  static const int occurEqs139[] = {1,2034};
  static const int occurEqs140[] = {1,2033};
  static const int occurEqs141[] = {1,2033};
  static const int occurEqs142[] = {1,2033};
  static const int occurEqs143[] = {1,2033};
  static const int occurEqs144[] = {1,2030};
  static const int occurEqs145[] = {1,2030};
  static const int occurEqs146[] = {1,2030};
  static const int occurEqs147[] = {1,2030};
  static const int occurEqs148[] = {1,2027};
  static const int occurEqs149[] = {1,2027};
  static const int occurEqs150[] = {1,2027};
  static const int occurEqs151[] = {1,2027};
  static const int occurEqs152[] = {1,2029};
  static const int occurEqs153[] = {1,2029};
  static const int occurEqs154[] = {1,2029};
  static const int occurEqs155[] = {1,2029};
  static const int occurEqs156[] = {1,2023};
  static const int occurEqs157[] = {1,2023};
  static const int occurEqs158[] = {1,2023};
  static const int occurEqs159[] = {1,2023};
  static const int occurEqs160[] = {1,2047};
  static const int occurEqs161[] = {1,2047};
  static const int occurEqs162[] = {1,2047};
  static const int occurEqs163[] = {1,2047};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27,occurEqs28,occurEqs29,occurEqs30,occurEqs31,occurEqs32,occurEqs33,occurEqs34,occurEqs35,occurEqs36,occurEqs37,occurEqs38,occurEqs39,occurEqs40,occurEqs41,occurEqs42,occurEqs43,occurEqs44,occurEqs45,occurEqs46,occurEqs47,occurEqs48,occurEqs49,occurEqs50,occurEqs51,occurEqs52,occurEqs53,occurEqs54,occurEqs55,occurEqs56,occurEqs57,occurEqs58,occurEqs59,occurEqs60,occurEqs61,occurEqs62,occurEqs63,occurEqs64,occurEqs65,occurEqs66,occurEqs67,occurEqs68,occurEqs69,occurEqs70,occurEqs71,occurEqs72,occurEqs73,occurEqs74,occurEqs75,occurEqs76,occurEqs77,occurEqs78,occurEqs79,occurEqs80,occurEqs81,occurEqs82,occurEqs83,occurEqs84,occurEqs85,occurEqs86,occurEqs87,occurEqs88,occurEqs89,occurEqs90,occurEqs91,occurEqs92,occurEqs93,occurEqs94,occurEqs95,occurEqs96,occurEqs97,occurEqs98,occurEqs99,occurEqs100,occurEqs101,occurEqs102,occurEqs103,occurEqs104,occurEqs105,occurEqs106,occurEqs107,occurEqs108,occurEqs109,occurEqs110,occurEqs111,occurEqs112,occurEqs113,occurEqs114,occurEqs115,occurEqs116,occurEqs117,occurEqs118,occurEqs119,occurEqs120,occurEqs121,occurEqs122,occurEqs123,occurEqs124,occurEqs125,occurEqs126,occurEqs127,occurEqs128,occurEqs129,occurEqs130,occurEqs131,occurEqs132,occurEqs133,occurEqs134,occurEqs135,occurEqs136,occurEqs137,occurEqs138,occurEqs139,occurEqs140,occurEqs141,occurEqs142,occurEqs143,occurEqs144,occurEqs145,occurEqs146,occurEqs147,occurEqs148,occurEqs149,occurEqs150,occurEqs151,occurEqs152,occurEqs153,occurEqs154,occurEqs155,occurEqs156,occurEqs157,occurEqs158,occurEqs159,occurEqs160,occurEqs161,occurEqs162,occurEqs163};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
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
extern void IEEE14_IEEE14_Base_Case_eqFunction_2741(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2742(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2743(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2744(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2745(DATA* data, threadData_t *threadData);
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
extern void IEEE14_IEEE14_Base_Case_eqFunction_2821(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2822(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2823(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2824(DATA* data, threadData_t *threadData);
extern void IEEE14_IEEE14_Base_Case_eqFunction_2825(DATA* data, threadData_t *threadData);
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

int IEEE14_IEEE14_Base_Case_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

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

  IEEE14_IEEE14_Base_Case_eqFunction_2741(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2742(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2743(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2744(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2745(data, threadData);

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

  IEEE14_IEEE14_Base_Case_eqFunction_2821(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2822(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2823(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2824(data, threadData);

  IEEE14_IEEE14_Base_Case_eqFunction_2825(data, threadData);

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
  
  TRACE_POP
  return 0;
}

int IEEE14_IEEE14_Base_Case_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp691;
  modelica_boolean tmp692;
  modelica_boolean tmp693;
  modelica_boolean tmp694;
  modelica_boolean tmp695;
  modelica_boolean tmp696;
  modelica_boolean tmp697;
  modelica_boolean tmp698;
  modelica_boolean tmp699;
  modelica_boolean tmp700;
  modelica_boolean tmp701;
  modelica_boolean tmp702;
  modelica_boolean tmp703;
  modelica_boolean tmp704;
  modelica_boolean tmp705;
  modelica_boolean tmp706;
  modelica_boolean tmp707;
  modelica_boolean tmp708;
  modelica_boolean tmp709;
  modelica_boolean tmp710;
  modelica_boolean tmp711;
  modelica_boolean tmp712;
  modelica_boolean tmp713;
  modelica_boolean tmp714;
  modelica_boolean tmp715;
  modelica_boolean tmp716;
  modelica_boolean tmp717;
  modelica_boolean tmp718;
  modelica_boolean tmp719;
  modelica_boolean tmp720;
  modelica_boolean tmp721;
  modelica_boolean tmp722;
  modelica_boolean tmp723;
  modelica_boolean tmp724;
  modelica_boolean tmp725;
  modelica_boolean tmp726;
  modelica_boolean tmp727;
  modelica_boolean tmp728;
  modelica_boolean tmp729;
  modelica_boolean tmp730;
  modelica_boolean tmp731;
  modelica_boolean tmp732;
  modelica_boolean tmp733;
  modelica_boolean tmp734;
  modelica_boolean tmp735;
  modelica_boolean tmp736;
  modelica_boolean tmp737;
  modelica_boolean tmp738;
  modelica_boolean tmp739;
  modelica_boolean tmp740;
  modelica_boolean tmp741;
  modelica_boolean tmp742;
  modelica_boolean tmp743;
  modelica_boolean tmp744;
  modelica_boolean tmp745;
  modelica_boolean tmp746;
  modelica_boolean tmp747;
  modelica_boolean tmp748;
  modelica_boolean tmp749;
  modelica_boolean tmp750;
  modelica_boolean tmp751;
  modelica_boolean tmp752;
  modelica_boolean tmp753;
  modelica_boolean tmp754;
  modelica_boolean tmp755;
  modelica_boolean tmp756;
  modelica_boolean tmp757;
  modelica_boolean tmp758;
  modelica_boolean tmp759;
  modelica_boolean tmp760;
  modelica_boolean tmp761;
  modelica_boolean tmp762;
  modelica_boolean tmp763;
  modelica_boolean tmp764;
  modelica_boolean tmp765;
  modelica_boolean tmp766;
  modelica_boolean tmp767;
  modelica_boolean tmp768;
  modelica_boolean tmp769;
  modelica_boolean tmp770;
  modelica_boolean tmp771;
  modelica_boolean tmp772;
  modelica_boolean tmp773;
  modelica_boolean tmp774;
  modelica_boolean tmp775;
  modelica_boolean tmp776;
  modelica_boolean tmp777;
  modelica_boolean tmp778;
  modelica_boolean tmp779;
  modelica_boolean tmp780;
  modelica_boolean tmp781;
  modelica_boolean tmp782;
  modelica_boolean tmp783;
  modelica_boolean tmp784;
  modelica_boolean tmp785;
  modelica_boolean tmp786;
  modelica_boolean tmp787;
  modelica_boolean tmp788;
  modelica_boolean tmp789;
  modelica_boolean tmp790;
  modelica_boolean tmp791;
  modelica_boolean tmp792;
  modelica_boolean tmp793;
  modelica_boolean tmp794;
  modelica_boolean tmp795;
  modelica_boolean tmp796;
  modelica_boolean tmp797;
  modelica_boolean tmp798;
  modelica_boolean tmp799;
  modelica_boolean tmp800;
  modelica_boolean tmp801;
  modelica_boolean tmp802;
  modelica_boolean tmp803;
  modelica_boolean tmp804;
  modelica_boolean tmp805;
  modelica_boolean tmp806;
  modelica_boolean tmp807;
  modelica_boolean tmp808;
  modelica_boolean tmp809;
  modelica_boolean tmp810;
  modelica_boolean tmp811;
  modelica_boolean tmp812;
  modelica_boolean tmp813;
  modelica_boolean tmp814;
  modelica_boolean tmp815;
  modelica_boolean tmp816;
  modelica_boolean tmp817;
  modelica_boolean tmp818;
  modelica_boolean tmp819;
  modelica_boolean tmp820;
  modelica_boolean tmp821;
  modelica_boolean tmp822;
  modelica_boolean tmp823;
  modelica_boolean tmp824;
  modelica_boolean tmp825;
  modelica_boolean tmp826;
  modelica_boolean tmp827;
  modelica_boolean tmp828;
  modelica_boolean tmp829;
  modelica_boolean tmp830;
  modelica_boolean tmp831;
  modelica_boolean tmp832;
  modelica_boolean tmp833;
  modelica_boolean tmp834;
  modelica_boolean tmp835;
  modelica_boolean tmp836;
  modelica_boolean tmp837;
  modelica_boolean tmp838;
  modelica_boolean tmp839;
  modelica_boolean tmp840;
  modelica_boolean tmp841;
  modelica_boolean tmp842;
  modelica_boolean tmp843;
  modelica_boolean tmp844;
  modelica_boolean tmp845;
  modelica_boolean tmp846;
  modelica_boolean tmp847;
  modelica_boolean tmp848;
  modelica_boolean tmp849;
  modelica_boolean tmp850;
  modelica_boolean tmp851;
  modelica_boolean tmp852;
  modelica_boolean tmp853;
  modelica_boolean tmp854;
  modelica_boolean tmp855;
  modelica_boolean tmp856;
  modelica_boolean tmp857;
  modelica_boolean tmp858;
  modelica_boolean tmp859;
  modelica_boolean tmp860;
  modelica_boolean tmp861;
  modelica_boolean tmp862;
  modelica_boolean tmp863;
  modelica_boolean tmp864;
  modelica_boolean tmp865;
  modelica_boolean tmp866;
  modelica_boolean tmp867;
  modelica_boolean tmp868;
  modelica_boolean tmp869;
  modelica_boolean tmp870;
  modelica_boolean tmp871;
  modelica_boolean tmp872;
  modelica_boolean tmp873;
  modelica_boolean tmp874;
  modelica_boolean tmp875;
  modelica_boolean tmp876;
  modelica_boolean tmp877;
  modelica_boolean tmp878;
  modelica_boolean tmp879;
  modelica_boolean tmp880;
  modelica_boolean tmp881;
  modelica_boolean tmp882;
  modelica_boolean tmp883;
  modelica_boolean tmp884;
  modelica_boolean tmp885;
  modelica_boolean tmp886;
  modelica_boolean tmp887;
  modelica_boolean tmp888;
  modelica_boolean tmp889;
  modelica_boolean tmp890;
  modelica_boolean tmp891;
  modelica_boolean tmp892;
  modelica_boolean tmp893;
  modelica_boolean tmp894;
  modelica_boolean tmp895;
  modelica_boolean tmp896;
  modelica_boolean tmp897;
  modelica_boolean tmp898;
  modelica_boolean tmp899;
  modelica_boolean tmp900;
  modelica_boolean tmp901;
  modelica_boolean tmp902;
  modelica_boolean tmp903;
  modelica_boolean tmp904;
  modelica_boolean tmp905;
  modelica_boolean tmp906;
  modelica_boolean tmp907;
  modelica_boolean tmp908;
  modelica_boolean tmp909;
  modelica_boolean tmp910;
  modelica_boolean tmp911;
  modelica_boolean tmp912;
  modelica_boolean tmp913;
  modelica_boolean tmp914;
  modelica_boolean tmp915;
  modelica_boolean tmp916;
  modelica_boolean tmp917;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp691 = GreaterZC(data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1080] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[0]);
  tmp692 = LessZC((data->simulationInfo->realParameter[1076] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[486] /* gen_Bus_1_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[1]);
  gout[0] = ((tmp691 && tmp692)) ? 1 : -1;
  tmp693 = LessZC(data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1081] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[2]);
  tmp694 = GreaterZC((data->simulationInfo->realParameter[1076] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[486] /* gen_Bus_1_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[3]);
  gout[1] = ((tmp693 && tmp694)) ? 1 : -1;
  tmp695 = GreaterZC(data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1615] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[4]);
  tmp696 = LessZC((data->simulationInfo->realParameter[1611] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[586] /* gen_Bus_2_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[5]);
  gout[2] = ((tmp695 && tmp696)) ? 1 : -1;
  tmp697 = LessZC(data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1616] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[6]);
  tmp698 = GreaterZC((data->simulationInfo->realParameter[1611] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[586] /* gen_Bus_2_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[7]);
  gout[3] = ((tmp697 && tmp698)) ? 1 : -1;
  tmp699 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2241] /* pwLine12.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  tmp700 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2242] /* pwLine12.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[4] = ((tmp699 && tmp700)) ? 1 : -1;
  tmp701 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2241] /* pwLine12.t1 PARAM */, data->simulationInfo->storedRelations[8]);
  gout[5] = (tmp701) ? 1 : -1;
  tmp702 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2242] /* pwLine12.t2 PARAM */, data->simulationInfo->storedRelations[9]);
  gout[6] = (tmp702) ? 1 : -1;
  tmp703 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2230] /* pwLine11.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  tmp704 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2231] /* pwLine11.t2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[7] = ((tmp703 && tmp704)) ? 1 : -1;
  tmp705 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2230] /* pwLine11.t1 PARAM */, data->simulationInfo->storedRelations[10]);
  gout[8] = (tmp705) ? 1 : -1;
  tmp706 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2231] /* pwLine11.t2 PARAM */, data->simulationInfo->storedRelations[11]);
  gout[9] = (tmp706) ? 1 : -1;
  tmp707 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2274] /* pwLine15.t1 PARAM */, data->simulationInfo->storedRelations[12]);
  tmp708 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2275] /* pwLine15.t2 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[10] = ((tmp707 && tmp708)) ? 1 : -1;
  tmp709 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2307] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[14]);
  tmp710 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2308] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[15]);
  gout[11] = ((tmp709 && tmp710)) ? 1 : -1;
  tmp711 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2307] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[14]);
  gout[12] = (tmp711) ? 1 : -1;
  tmp712 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2308] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[15]);
  gout[13] = (tmp712) ? 1 : -1;
  tmp713 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2208] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[16]);
  tmp714 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2209] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[17]);
  gout[14] = ((tmp713 && tmp714)) ? 1 : -1;
  tmp715 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2208] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[16]);
  gout[15] = (tmp715) ? 1 : -1;
  tmp716 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2209] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[17]);
  gout[16] = (tmp716) ? 1 : -1;
  tmp717 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2296] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[18]);
  tmp718 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2297] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[19]);
  gout[17] = ((tmp717 && tmp718)) ? 1 : -1;
  tmp719 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2296] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[18]);
  gout[18] = (tmp719) ? 1 : -1;
  tmp720 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2297] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[19]);
  gout[19] = (tmp720) ? 1 : -1;
  tmp721 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2329] /* pwLine6.t1 PARAM */, data->simulationInfo->storedRelations[20]);
  tmp722 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2330] /* pwLine6.t2 PARAM */, data->simulationInfo->storedRelations[21]);
  gout[20] = ((tmp721 && tmp722)) ? 1 : -1;
  tmp723 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2285] /* pwLine2.t1 PARAM */, data->simulationInfo->storedRelations[22]);
  tmp724 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2286] /* pwLine2.t2 PARAM */, data->simulationInfo->storedRelations[23]);
  gout[21] = ((tmp723 && tmp724)) ? 1 : -1;
  tmp725 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2197] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[24]);
  tmp726 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2198] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[25]);
  gout[22] = ((tmp725 && tmp726)) ? 1 : -1;
  tmp727 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2197] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[24]);
  gout[23] = (tmp727) ? 1 : -1;
  tmp728 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2198] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[25]);
  gout[24] = (tmp728) ? 1 : -1;
  tmp729 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[248] /* LOAD_05.t1 PARAM */, data->simulationInfo->storedRelations[26]);
  tmp730 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[248] /* LOAD_05.t1 PARAM */ + data->simulationInfo->realParameter[242] /* LOAD_05.d_t PARAM */, data->simulationInfo->storedRelations[27]);
  gout[25] = ((tmp729 && tmp730)) ? 1 : -1;
  tmp731 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[248] /* LOAD_05.t1 PARAM */, data->simulationInfo->storedRelations[26]);
  gout[26] = (tmp731) ? 1 : -1;
  tmp732 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[248] /* LOAD_05.t1 PARAM */ + data->simulationInfo->realParameter[242] /* LOAD_05.d_t PARAM */, data->simulationInfo->storedRelations[27]);
  gout[27] = (tmp732) ? 1 : -1;
  tmp733 = LessZC(data->localData[0]->realVars[347] /* LOAD_05.v variable */, (0.5) * (data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */), data->simulationInfo->storedRelations[28]);
  tmp734 = GreaterZC(data->localData[0]->realVars[347] /* LOAD_05.v variable */, 0.0, data->simulationInfo->storedRelations[29]);
  gout[28] = ((tmp733 && tmp734)) ? 1 : -1;
  tmp735 = GreaterZC(data->localData[0]->realVars[347] /* LOAD_05.v variable */, (0.5) * (data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */), data->simulationInfo->storedRelations[30]);
  tmp736 = LessZC(data->localData[0]->realVars[347] /* LOAD_05.v variable */, data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */, data->simulationInfo->storedRelations[31]);
  gout[29] = ((tmp735 && tmp736)) ? 1 : -1;
  tmp737 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2318] /* pwLine5.t1 PARAM */, data->simulationInfo->storedRelations[32]);
  tmp738 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2319] /* pwLine5.t2 PARAM */, data->simulationInfo->storedRelations[33]);
  gout[30] = ((tmp737 && tmp738)) ? 1 : -1;
  tmp739 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2318] /* pwLine5.t1 PARAM */, data->simulationInfo->storedRelations[32]);
  gout[31] = (tmp739) ? 1 : -1;
  tmp740 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2319] /* pwLine5.t2 PARAM */, data->simulationInfo->storedRelations[33]);
  gout[32] = (tmp740) ? 1 : -1;
  tmp741 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[122] /* LOAD_02.t1 PARAM */, data->simulationInfo->storedRelations[34]);
  tmp742 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[122] /* LOAD_02.t1 PARAM */ + data->simulationInfo->realParameter[116] /* LOAD_02.d_t PARAM */, data->simulationInfo->storedRelations[35]);
  gout[33] = ((tmp741 && tmp742)) ? 1 : -1;
  tmp743 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[122] /* LOAD_02.t1 PARAM */, data->simulationInfo->storedRelations[34]);
  gout[34] = (tmp743) ? 1 : -1;
  tmp744 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[122] /* LOAD_02.t1 PARAM */ + data->simulationInfo->realParameter[116] /* LOAD_02.d_t PARAM */, data->simulationInfo->storedRelations[35]);
  gout[35] = (tmp744) ? 1 : -1;
  tmp745 = LessZC(data->localData[0]->realVars[329] /* LOAD_02.v variable */, (0.5) * (data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */), data->simulationInfo->storedRelations[36]);
  tmp746 = GreaterZC(data->localData[0]->realVars[329] /* LOAD_02.v variable */, 0.0, data->simulationInfo->storedRelations[37]);
  gout[36] = ((tmp745 && tmp746)) ? 1 : -1;
  tmp747 = GreaterZC(data->localData[0]->realVars[329] /* LOAD_02.v variable */, (0.5) * (data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */), data->simulationInfo->storedRelations[38]);
  tmp748 = LessZC(data->localData[0]->realVars[329] /* LOAD_02.v variable */, data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */, data->simulationInfo->storedRelations[39]);
  gout[37] = ((tmp747 && tmp748)) ? 1 : -1;
  tmp749 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2285] /* pwLine2.t1 PARAM */, data->simulationInfo->storedRelations[22]);
  gout[38] = (tmp749) ? 1 : -1;
  tmp750 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2286] /* pwLine2.t2 PARAM */, data->simulationInfo->storedRelations[23]);
  gout[39] = (tmp750) ? 1 : -1;
  tmp751 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2329] /* pwLine6.t1 PARAM */, data->simulationInfo->storedRelations[20]);
  gout[40] = (tmp751) ? 1 : -1;
  tmp752 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2330] /* pwLine6.t2 PARAM */, data->simulationInfo->storedRelations[21]);
  gout[41] = (tmp752) ? 1 : -1;
  tmp753 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* LOAD_03.t1 PARAM */, data->simulationInfo->storedRelations[40]);
  tmp754 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* LOAD_03.t1 PARAM */ + data->simulationInfo->realParameter[158] /* LOAD_03.d_t PARAM */, data->simulationInfo->storedRelations[41]);
  gout[42] = ((tmp753 && tmp754)) ? 1 : -1;
  tmp755 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* LOAD_03.t1 PARAM */, data->simulationInfo->storedRelations[40]);
  gout[43] = (tmp755) ? 1 : -1;
  tmp756 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* LOAD_03.t1 PARAM */ + data->simulationInfo->realParameter[158] /* LOAD_03.d_t PARAM */, data->simulationInfo->storedRelations[41]);
  gout[44] = (tmp756) ? 1 : -1;
  tmp757 = LessZC(data->localData[0]->realVars[335] /* LOAD_03.v variable */, (0.5) * (data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */), data->simulationInfo->storedRelations[42]);
  tmp758 = GreaterZC(data->localData[0]->realVars[335] /* LOAD_03.v variable */, 0.0, data->simulationInfo->storedRelations[43]);
  gout[45] = ((tmp757 && tmp758)) ? 1 : -1;
  tmp759 = GreaterZC(data->localData[0]->realVars[335] /* LOAD_03.v variable */, (0.5) * (data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */), data->simulationInfo->storedRelations[44]);
  tmp760 = LessZC(data->localData[0]->realVars[335] /* LOAD_03.v variable */, data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */, data->simulationInfo->storedRelations[45]);
  gout[46] = ((tmp759 && tmp760)) ? 1 : -1;
  tmp761 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[206] /* LOAD_04.t1 PARAM */, data->simulationInfo->storedRelations[46]);
  tmp762 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[206] /* LOAD_04.t1 PARAM */ + data->simulationInfo->realParameter[200] /* LOAD_04.d_t PARAM */, data->simulationInfo->storedRelations[47]);
  gout[47] = ((tmp761 && tmp762)) ? 1 : -1;
  tmp763 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[206] /* LOAD_04.t1 PARAM */, data->simulationInfo->storedRelations[46]);
  gout[48] = (tmp763) ? 1 : -1;
  tmp764 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[206] /* LOAD_04.t1 PARAM */ + data->simulationInfo->realParameter[200] /* LOAD_04.d_t PARAM */, data->simulationInfo->storedRelations[47]);
  gout[49] = (tmp764) ? 1 : -1;
  tmp765 = LessZC(data->localData[0]->realVars[341] /* LOAD_04.v variable */, (0.5) * (data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */), data->simulationInfo->storedRelations[48]);
  tmp766 = GreaterZC(data->localData[0]->realVars[341] /* LOAD_04.v variable */, 0.0, data->simulationInfo->storedRelations[49]);
  gout[50] = ((tmp765 && tmp766)) ? 1 : -1;
  tmp767 = GreaterZC(data->localData[0]->realVars[341] /* LOAD_04.v variable */, (0.5) * (data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */), data->simulationInfo->storedRelations[50]);
  tmp768 = LessZC(data->localData[0]->realVars[341] /* LOAD_04.v variable */, data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */, data->simulationInfo->storedRelations[51]);
  gout[51] = ((tmp767 && tmp768)) ? 1 : -1;
  tmp769 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2263] /* pwLine14.t1 PARAM */, data->simulationInfo->storedRelations[52]);
  tmp770 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2264] /* pwLine14.t2 PARAM */, data->simulationInfo->storedRelations[53]);
  gout[52] = ((tmp769 && tmp770)) ? 1 : -1;
  tmp771 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2263] /* pwLine14.t1 PARAM */, data->simulationInfo->storedRelations[52]);
  gout[53] = (tmp771) ? 1 : -1;
  tmp772 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2264] /* pwLine14.t2 PARAM */, data->simulationInfo->storedRelations[53]);
  gout[54] = (tmp772) ? 1 : -1;
  tmp773 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* LOAD_09.t1 PARAM */, data->simulationInfo->storedRelations[54]);
  tmp774 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* LOAD_09.t1 PARAM */ + data->simulationInfo->realParameter[326] /* LOAD_09.d_t PARAM */, data->simulationInfo->storedRelations[55]);
  gout[55] = ((tmp773 && tmp774)) ? 1 : -1;
  tmp775 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* LOAD_09.t1 PARAM */, data->simulationInfo->storedRelations[54]);
  gout[56] = (tmp775) ? 1 : -1;
  tmp776 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* LOAD_09.t1 PARAM */ + data->simulationInfo->realParameter[326] /* LOAD_09.d_t PARAM */, data->simulationInfo->storedRelations[55]);
  gout[57] = (tmp776) ? 1 : -1;
  tmp777 = LessZC(data->localData[0]->realVars[359] /* LOAD_09.v variable */, (0.5) * (data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */), data->simulationInfo->storedRelations[56]);
  tmp778 = GreaterZC(data->localData[0]->realVars[359] /* LOAD_09.v variable */, 0.0, data->simulationInfo->storedRelations[57]);
  gout[58] = ((tmp777 && tmp778)) ? 1 : -1;
  tmp779 = GreaterZC(data->localData[0]->realVars[359] /* LOAD_09.v variable */, (0.5) * (data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */), data->simulationInfo->storedRelations[58]);
  tmp780 = LessZC(data->localData[0]->realVars[359] /* LOAD_09.v variable */, data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */, data->simulationInfo->storedRelations[59]);
  gout[59] = ((tmp779 && tmp780)) ? 1 : -1;
  tmp781 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2340] /* pwLine7.t1 PARAM */, data->simulationInfo->storedRelations[60]);
  tmp782 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2341] /* pwLine7.t2 PARAM */, data->simulationInfo->storedRelations[61]);
  gout[60] = ((tmp781 && tmp782)) ? 1 : -1;
  tmp783 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2340] /* pwLine7.t1 PARAM */, data->simulationInfo->storedRelations[60]);
  gout[61] = (tmp783) ? 1 : -1;
  tmp784 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2341] /* pwLine7.t2 PARAM */, data->simulationInfo->storedRelations[61]);
  gout[62] = (tmp784) ? 1 : -1;
  tmp785 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[374] /* LOAD_10.t1 PARAM */, data->simulationInfo->storedRelations[62]);
  tmp786 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[374] /* LOAD_10.t1 PARAM */ + data->simulationInfo->realParameter[368] /* LOAD_10.d_t PARAM */, data->simulationInfo->storedRelations[63]);
  gout[63] = ((tmp785 && tmp786)) ? 1 : -1;
  tmp787 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[374] /* LOAD_10.t1 PARAM */, data->simulationInfo->storedRelations[62]);
  gout[64] = (tmp787) ? 1 : -1;
  tmp788 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[374] /* LOAD_10.t1 PARAM */ + data->simulationInfo->realParameter[368] /* LOAD_10.d_t PARAM */, data->simulationInfo->storedRelations[63]);
  gout[65] = (tmp788) ? 1 : -1;
  tmp789 = LessZC(data->localData[0]->realVars[365] /* LOAD_10.v variable */, (0.5) * (data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */), data->simulationInfo->storedRelations[64]);
  tmp790 = GreaterZC(data->localData[0]->realVars[365] /* LOAD_10.v variable */, 0.0, data->simulationInfo->storedRelations[65]);
  gout[66] = ((tmp789 && tmp790)) ? 1 : -1;
  tmp791 = GreaterZC(data->localData[0]->realVars[365] /* LOAD_10.v variable */, (0.5) * (data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */), data->simulationInfo->storedRelations[66]);
  tmp792 = LessZC(data->localData[0]->realVars[365] /* LOAD_10.v variable */, data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */, data->simulationInfo->storedRelations[67]);
  gout[67] = ((tmp791 && tmp792)) ? 1 : -1;
  tmp793 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2219] /* pwLine10.t1 PARAM */, data->simulationInfo->storedRelations[68]);
  tmp794 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2220] /* pwLine10.t2 PARAM */, data->simulationInfo->storedRelations[69]);
  gout[68] = ((tmp793 && tmp794)) ? 1 : -1;
  tmp795 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2219] /* pwLine10.t1 PARAM */, data->simulationInfo->storedRelations[68]);
  gout[69] = (tmp795) ? 1 : -1;
  tmp796 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2220] /* pwLine10.t2 PARAM */, data->simulationInfo->storedRelations[69]);
  gout[70] = (tmp796) ? 1 : -1;
  tmp797 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2362] /* pwLine9.t1 PARAM */, data->simulationInfo->storedRelations[70]);
  tmp798 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2363] /* pwLine9.t2 PARAM */, data->simulationInfo->storedRelations[71]);
  gout[71] = ((tmp797 && tmp798)) ? 1 : -1;
  tmp799 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2362] /* pwLine9.t1 PARAM */, data->simulationInfo->storedRelations[70]);
  gout[72] = (tmp799) ? 1 : -1;
  tmp800 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2363] /* pwLine9.t2 PARAM */, data->simulationInfo->storedRelations[71]);
  gout[73] = (tmp800) ? 1 : -1;
  tmp801 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* LOAD_06.t1 PARAM */, data->simulationInfo->storedRelations[72]);
  tmp802 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* LOAD_06.t1 PARAM */ + data->simulationInfo->realParameter[284] /* LOAD_06.d_t PARAM */, data->simulationInfo->storedRelations[73]);
  gout[74] = ((tmp801 && tmp802)) ? 1 : -1;
  tmp803 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* LOAD_06.t1 PARAM */, data->simulationInfo->storedRelations[72]);
  gout[75] = (tmp803) ? 1 : -1;
  tmp804 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* LOAD_06.t1 PARAM */ + data->simulationInfo->realParameter[284] /* LOAD_06.d_t PARAM */, data->simulationInfo->storedRelations[73]);
  gout[76] = (tmp804) ? 1 : -1;
  tmp805 = LessZC(data->localData[0]->realVars[353] /* LOAD_06.v variable */, (0.5) * (data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */), data->simulationInfo->storedRelations[74]);
  tmp806 = GreaterZC(data->localData[0]->realVars[353] /* LOAD_06.v variable */, 0.0, data->simulationInfo->storedRelations[75]);
  gout[77] = ((tmp805 && tmp806)) ? 1 : -1;
  tmp807 = GreaterZC(data->localData[0]->realVars[353] /* LOAD_06.v variable */, (0.5) * (data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */), data->simulationInfo->storedRelations[76]);
  tmp808 = LessZC(data->localData[0]->realVars[353] /* LOAD_06.v variable */, data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */, data->simulationInfo->storedRelations[77]);
  gout[78] = ((tmp807 && tmp808)) ? 1 : -1;
  tmp809 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2274] /* pwLine15.t1 PARAM */, data->simulationInfo->storedRelations[12]);
  gout[79] = (tmp809) ? 1 : -1;
  tmp810 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2275] /* pwLine15.t2 PARAM */, data->simulationInfo->storedRelations[13]);
  gout[80] = (tmp810) ? 1 : -1;
  tmp811 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2252] /* pwLine13.t1 PARAM */, data->simulationInfo->storedRelations[78]);
  tmp812 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2253] /* pwLine13.t2 PARAM */, data->simulationInfo->storedRelations[79]);
  gout[81] = ((tmp811 && tmp812)) ? 1 : -1;
  tmp813 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2252] /* pwLine13.t1 PARAM */, data->simulationInfo->storedRelations[78]);
  gout[82] = (tmp813) ? 1 : -1;
  tmp814 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2253] /* pwLine13.t2 PARAM */, data->simulationInfo->storedRelations[79]);
  gout[83] = (tmp814) ? 1 : -1;
  tmp815 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2351] /* pwLine8.t1 PARAM */, data->simulationInfo->storedRelations[80]);
  tmp816 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2352] /* pwLine8.t2 PARAM */, data->simulationInfo->storedRelations[81]);
  gout[84] = ((tmp815 && tmp816)) ? 1 : -1;
  tmp817 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2351] /* pwLine8.t1 PARAM */, data->simulationInfo->storedRelations[80]);
  gout[85] = (tmp817) ? 1 : -1;
  tmp818 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2352] /* pwLine8.t2 PARAM */, data->simulationInfo->storedRelations[81]);
  gout[86] = (tmp818) ? 1 : -1;
  tmp819 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[542] /* LOAD_14.t1 PARAM */, data->simulationInfo->storedRelations[82]);
  tmp820 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[542] /* LOAD_14.t1 PARAM */ + data->simulationInfo->realParameter[536] /* LOAD_14.d_t PARAM */, data->simulationInfo->storedRelations[83]);
  gout[87] = ((tmp819 && tmp820)) ? 1 : -1;
  tmp821 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[542] /* LOAD_14.t1 PARAM */, data->simulationInfo->storedRelations[82]);
  gout[88] = (tmp821) ? 1 : -1;
  tmp822 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[542] /* LOAD_14.t1 PARAM */ + data->simulationInfo->realParameter[536] /* LOAD_14.d_t PARAM */, data->simulationInfo->storedRelations[83]);
  gout[89] = (tmp822) ? 1 : -1;
  tmp823 = LessZC(data->localData[0]->realVars[389] /* LOAD_14.v variable */, (0.5) * (data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */), data->simulationInfo->storedRelations[84]);
  tmp824 = GreaterZC(data->localData[0]->realVars[389] /* LOAD_14.v variable */, 0.0, data->simulationInfo->storedRelations[85]);
  gout[90] = ((tmp823 && tmp824)) ? 1 : -1;
  tmp825 = GreaterZC(data->localData[0]->realVars[389] /* LOAD_14.v variable */, (0.5) * (data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */), data->simulationInfo->storedRelations[86]);
  tmp826 = LessZC(data->localData[0]->realVars[389] /* LOAD_14.v variable */, data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */, data->simulationInfo->storedRelations[87]);
  gout[91] = ((tmp825 && tmp826)) ? 1 : -1;
  tmp827 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* LOAD_13.t1 PARAM */, data->simulationInfo->storedRelations[88]);
  tmp828 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* LOAD_13.t1 PARAM */ + data->simulationInfo->realParameter[494] /* LOAD_13.d_t PARAM */, data->simulationInfo->storedRelations[89]);
  gout[92] = ((tmp827 && tmp828)) ? 1 : -1;
  tmp829 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* LOAD_13.t1 PARAM */, data->simulationInfo->storedRelations[88]);
  gout[93] = (tmp829) ? 1 : -1;
  tmp830 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* LOAD_13.t1 PARAM */ + data->simulationInfo->realParameter[494] /* LOAD_13.d_t PARAM */, data->simulationInfo->storedRelations[89]);
  gout[94] = (tmp830) ? 1 : -1;
  tmp831 = LessZC(data->localData[0]->realVars[383] /* LOAD_13.v variable */, (0.5) * (data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */), data->simulationInfo->storedRelations[90]);
  tmp832 = GreaterZC(data->localData[0]->realVars[383] /* LOAD_13.v variable */, 0.0, data->simulationInfo->storedRelations[91]);
  gout[95] = ((tmp831 && tmp832)) ? 1 : -1;
  tmp833 = GreaterZC(data->localData[0]->realVars[383] /* LOAD_13.v variable */, (0.5) * (data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */), data->simulationInfo->storedRelations[92]);
  tmp834 = LessZC(data->localData[0]->realVars[383] /* LOAD_13.v variable */, data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */, data->simulationInfo->storedRelations[93]);
  gout[96] = ((tmp833 && tmp834)) ? 1 : -1;
  tmp835 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[416] /* LOAD_11.t1 PARAM */, data->simulationInfo->storedRelations[94]);
  tmp836 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[416] /* LOAD_11.t1 PARAM */ + data->simulationInfo->realParameter[410] /* LOAD_11.d_t PARAM */, data->simulationInfo->storedRelations[95]);
  gout[97] = ((tmp835 && tmp836)) ? 1 : -1;
  tmp837 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[416] /* LOAD_11.t1 PARAM */, data->simulationInfo->storedRelations[94]);
  gout[98] = (tmp837) ? 1 : -1;
  tmp838 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[416] /* LOAD_11.t1 PARAM */ + data->simulationInfo->realParameter[410] /* LOAD_11.d_t PARAM */, data->simulationInfo->storedRelations[95]);
  gout[99] = (tmp838) ? 1 : -1;
  tmp839 = LessZC(data->localData[0]->realVars[371] /* LOAD_11.v variable */, (0.5) * (data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */), data->simulationInfo->storedRelations[96]);
  tmp840 = GreaterZC(data->localData[0]->realVars[371] /* LOAD_11.v variable */, 0.0, data->simulationInfo->storedRelations[97]);
  gout[100] = ((tmp839 && tmp840)) ? 1 : -1;
  tmp841 = GreaterZC(data->localData[0]->realVars[371] /* LOAD_11.v variable */, (0.5) * (data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */), data->simulationInfo->storedRelations[98]);
  tmp842 = LessZC(data->localData[0]->realVars[371] /* LOAD_11.v variable */, data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */, data->simulationInfo->storedRelations[99]);
  gout[101] = ((tmp841 && tmp842)) ? 1 : -1;
  tmp843 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2186] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[100]);
  gout[102] = (tmp843) ? 1 : -1;
  tmp844 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2187] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[101]);
  gout[103] = ((tmp844 && data->simulationInfo->booleanParameter[24] /* pwFault.ground PARAM */)) ? 1 : -1;
  tmp845 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2187] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[101]);
  gout[104] = (tmp845) ? 1 : -1;
  tmp846 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[458] /* LOAD_12.t1 PARAM */, data->simulationInfo->storedRelations[102]);
  tmp847 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[458] /* LOAD_12.t1 PARAM */ + data->simulationInfo->realParameter[452] /* LOAD_12.d_t PARAM */, data->simulationInfo->storedRelations[103]);
  gout[105] = ((tmp846 && tmp847)) ? 1 : -1;
  tmp848 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[458] /* LOAD_12.t1 PARAM */, data->simulationInfo->storedRelations[102]);
  gout[106] = (tmp848) ? 1 : -1;
  tmp849 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[458] /* LOAD_12.t1 PARAM */ + data->simulationInfo->realParameter[452] /* LOAD_12.d_t PARAM */, data->simulationInfo->storedRelations[103]);
  gout[107] = (tmp849) ? 1 : -1;
  tmp850 = LessZC(data->localData[0]->realVars[377] /* LOAD_12.v variable */, (0.5) * (data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */), data->simulationInfo->storedRelations[104]);
  tmp851 = GreaterZC(data->localData[0]->realVars[377] /* LOAD_12.v variable */, 0.0, data->simulationInfo->storedRelations[105]);
  gout[108] = ((tmp850 && tmp851)) ? 1 : -1;
  tmp852 = GreaterZC(data->localData[0]->realVars[377] /* LOAD_12.v variable */, (0.5) * (data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */), data->simulationInfo->storedRelations[106]);
  tmp853 = LessZC(data->localData[0]->realVars[377] /* LOAD_12.v variable */, data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */, data->simulationInfo->storedRelations[107]);
  gout[109] = ((tmp852 && tmp853)) ? 1 : -1;
  tmp854 = GreaterZC(data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1941] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[108]);
  tmp855 = LessZC((data->simulationInfo->realParameter[1937] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[658] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[109]);
  gout[110] = ((tmp854 && tmp855)) ? 1 : -1;
  tmp856 = LessZC(data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1942] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[110]);
  tmp857 = GreaterZC((data->simulationInfo->realParameter[1937] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[658] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[111]);
  gout[111] = ((tmp856 && tmp857)) ? 1 : -1;
  tmp858 = GreaterZC(data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[2107] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[112]);
  tmp859 = LessZC((data->simulationInfo->realParameter[2103] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[693] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[113]);
  gout[112] = ((tmp858 && tmp859)) ? 1 : -1;
  tmp860 = LessZC(data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[2108] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[114]);
  tmp861 = GreaterZC((data->simulationInfo->realParameter[2103] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[693] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[115]);
  gout[113] = ((tmp860 && tmp861)) ? 1 : -1;
  tmp862 = GreaterZC(data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1775] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[116]);
  tmp863 = LessZC((data->simulationInfo->realParameter[1771] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[623] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[117]);
  gout[114] = ((tmp862 && tmp863)) ? 1 : -1;
  tmp864 = LessZC(data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1776] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[118]);
  tmp865 = GreaterZC((data->simulationInfo->realParameter[1771] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[623] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[119]);
  gout[115] = ((tmp864 && tmp865)) ? 1 : -1;
  tmp866 = GreaterZC(data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1238] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[120]);
  tmp867 = LessZC((data->simulationInfo->realParameter[1234] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[525] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[121]);
  gout[116] = ((tmp866 && tmp867)) ? 1 : -1;
  tmp868 = LessZC(data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1239] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[122]);
  tmp869 = GreaterZC((data->simulationInfo->realParameter[1234] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[525] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[123]);
  gout[117] = ((tmp868 && tmp869)) ? 1 : -1;
  tmp870 = GreaterZC(data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[703] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[124]);
  tmp871 = LessZC((data->simulationInfo->realParameter[699] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[425] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[125]);
  gout[118] = ((tmp870 && tmp871)) ? 1 : -1;
  tmp872 = LessZC(data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[704] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[126]);
  tmp873 = GreaterZC((data->simulationInfo->realParameter[699] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[425] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[127]);
  gout[119] = ((tmp872 && tmp873)) ? 1 : -1;
  tmp874 = LessZC(data->localData[0]->realVars[383] /* LOAD_13.v variable */, (0.5) * (data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */), data->simulationInfo->storedRelations[90]);
  gout[120] = (tmp874) ? 1 : -1;
  tmp875 = GreaterZC(data->localData[0]->realVars[383] /* LOAD_13.v variable */, 0.0, data->simulationInfo->storedRelations[91]);
  gout[121] = (tmp875) ? 1 : -1;
  tmp876 = GreaterZC(data->localData[0]->realVars[383] /* LOAD_13.v variable */, (0.5) * (data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */), data->simulationInfo->storedRelations[92]);
  gout[122] = (tmp876) ? 1 : -1;
  tmp877 = LessZC(data->localData[0]->realVars[383] /* LOAD_13.v variable */, data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */, data->simulationInfo->storedRelations[93]);
  gout[123] = (tmp877) ? 1 : -1;
  tmp878 = LessZC(data->localData[0]->realVars[377] /* LOAD_12.v variable */, (0.5) * (data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */), data->simulationInfo->storedRelations[104]);
  gout[124] = (tmp878) ? 1 : -1;
  tmp879 = GreaterZC(data->localData[0]->realVars[377] /* LOAD_12.v variable */, 0.0, data->simulationInfo->storedRelations[105]);
  gout[125] = (tmp879) ? 1 : -1;
  tmp880 = GreaterZC(data->localData[0]->realVars[377] /* LOAD_12.v variable */, (0.5) * (data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */), data->simulationInfo->storedRelations[106]);
  gout[126] = (tmp880) ? 1 : -1;
  tmp881 = LessZC(data->localData[0]->realVars[377] /* LOAD_12.v variable */, data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */, data->simulationInfo->storedRelations[107]);
  gout[127] = (tmp881) ? 1 : -1;
  tmp882 = LessZC(data->localData[0]->realVars[371] /* LOAD_11.v variable */, (0.5) * (data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */), data->simulationInfo->storedRelations[96]);
  gout[128] = (tmp882) ? 1 : -1;
  tmp883 = GreaterZC(data->localData[0]->realVars[371] /* LOAD_11.v variable */, 0.0, data->simulationInfo->storedRelations[97]);
  gout[129] = (tmp883) ? 1 : -1;
  tmp884 = GreaterZC(data->localData[0]->realVars[371] /* LOAD_11.v variable */, (0.5) * (data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */), data->simulationInfo->storedRelations[98]);
  gout[130] = (tmp884) ? 1 : -1;
  tmp885 = LessZC(data->localData[0]->realVars[371] /* LOAD_11.v variable */, data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */, data->simulationInfo->storedRelations[99]);
  gout[131] = (tmp885) ? 1 : -1;
  tmp886 = LessZC(data->localData[0]->realVars[365] /* LOAD_10.v variable */, (0.5) * (data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */), data->simulationInfo->storedRelations[64]);
  gout[132] = (tmp886) ? 1 : -1;
  tmp887 = GreaterZC(data->localData[0]->realVars[365] /* LOAD_10.v variable */, 0.0, data->simulationInfo->storedRelations[65]);
  gout[133] = (tmp887) ? 1 : -1;
  tmp888 = GreaterZC(data->localData[0]->realVars[365] /* LOAD_10.v variable */, (0.5) * (data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */), data->simulationInfo->storedRelations[66]);
  gout[134] = (tmp888) ? 1 : -1;
  tmp889 = LessZC(data->localData[0]->realVars[365] /* LOAD_10.v variable */, data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */, data->simulationInfo->storedRelations[67]);
  gout[135] = (tmp889) ? 1 : -1;
  tmp890 = LessZC(data->localData[0]->realVars[347] /* LOAD_05.v variable */, (0.5) * (data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */), data->simulationInfo->storedRelations[28]);
  gout[136] = (tmp890) ? 1 : -1;
  tmp891 = GreaterZC(data->localData[0]->realVars[347] /* LOAD_05.v variable */, 0.0, data->simulationInfo->storedRelations[29]);
  gout[137] = (tmp891) ? 1 : -1;
  tmp892 = GreaterZC(data->localData[0]->realVars[347] /* LOAD_05.v variable */, (0.5) * (data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */), data->simulationInfo->storedRelations[30]);
  gout[138] = (tmp892) ? 1 : -1;
  tmp893 = LessZC(data->localData[0]->realVars[347] /* LOAD_05.v variable */, data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */, data->simulationInfo->storedRelations[31]);
  gout[139] = (tmp893) ? 1 : -1;
  tmp894 = LessZC(data->localData[0]->realVars[335] /* LOAD_03.v variable */, (0.5) * (data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */), data->simulationInfo->storedRelations[42]);
  gout[140] = (tmp894) ? 1 : -1;
  tmp895 = GreaterZC(data->localData[0]->realVars[335] /* LOAD_03.v variable */, 0.0, data->simulationInfo->storedRelations[43]);
  gout[141] = (tmp895) ? 1 : -1;
  tmp896 = GreaterZC(data->localData[0]->realVars[335] /* LOAD_03.v variable */, (0.5) * (data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */), data->simulationInfo->storedRelations[44]);
  gout[142] = (tmp896) ? 1 : -1;
  tmp897 = LessZC(data->localData[0]->realVars[335] /* LOAD_03.v variable */, data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */, data->simulationInfo->storedRelations[45]);
  gout[143] = (tmp897) ? 1 : -1;
  tmp898 = LessZC(data->localData[0]->realVars[329] /* LOAD_02.v variable */, (0.5) * (data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */), data->simulationInfo->storedRelations[36]);
  gout[144] = (tmp898) ? 1 : -1;
  tmp899 = GreaterZC(data->localData[0]->realVars[329] /* LOAD_02.v variable */, 0.0, data->simulationInfo->storedRelations[37]);
  gout[145] = (tmp899) ? 1 : -1;
  tmp900 = GreaterZC(data->localData[0]->realVars[329] /* LOAD_02.v variable */, (0.5) * (data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */), data->simulationInfo->storedRelations[38]);
  gout[146] = (tmp900) ? 1 : -1;
  tmp901 = LessZC(data->localData[0]->realVars[329] /* LOAD_02.v variable */, data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */, data->simulationInfo->storedRelations[39]);
  gout[147] = (tmp901) ? 1 : -1;
  tmp902 = LessZC(data->localData[0]->realVars[389] /* LOAD_14.v variable */, (0.5) * (data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */), data->simulationInfo->storedRelations[84]);
  gout[148] = (tmp902) ? 1 : -1;
  tmp903 = GreaterZC(data->localData[0]->realVars[389] /* LOAD_14.v variable */, 0.0, data->simulationInfo->storedRelations[85]);
  gout[149] = (tmp903) ? 1 : -1;
  tmp904 = GreaterZC(data->localData[0]->realVars[389] /* LOAD_14.v variable */, (0.5) * (data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */), data->simulationInfo->storedRelations[86]);
  gout[150] = (tmp904) ? 1 : -1;
  tmp905 = LessZC(data->localData[0]->realVars[389] /* LOAD_14.v variable */, data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */, data->simulationInfo->storedRelations[87]);
  gout[151] = (tmp905) ? 1 : -1;
  tmp906 = LessZC(data->localData[0]->realVars[353] /* LOAD_06.v variable */, (0.5) * (data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */), data->simulationInfo->storedRelations[74]);
  gout[152] = (tmp906) ? 1 : -1;
  tmp907 = GreaterZC(data->localData[0]->realVars[353] /* LOAD_06.v variable */, 0.0, data->simulationInfo->storedRelations[75]);
  gout[153] = (tmp907) ? 1 : -1;
  tmp908 = GreaterZC(data->localData[0]->realVars[353] /* LOAD_06.v variable */, (0.5) * (data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */), data->simulationInfo->storedRelations[76]);
  gout[154] = (tmp908) ? 1 : -1;
  tmp909 = LessZC(data->localData[0]->realVars[353] /* LOAD_06.v variable */, data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */, data->simulationInfo->storedRelations[77]);
  gout[155] = (tmp909) ? 1 : -1;
  tmp910 = LessZC(data->localData[0]->realVars[359] /* LOAD_09.v variable */, (0.5) * (data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */), data->simulationInfo->storedRelations[56]);
  gout[156] = (tmp910) ? 1 : -1;
  tmp911 = GreaterZC(data->localData[0]->realVars[359] /* LOAD_09.v variable */, 0.0, data->simulationInfo->storedRelations[57]);
  gout[157] = (tmp911) ? 1 : -1;
  tmp912 = GreaterZC(data->localData[0]->realVars[359] /* LOAD_09.v variable */, (0.5) * (data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */), data->simulationInfo->storedRelations[58]);
  gout[158] = (tmp912) ? 1 : -1;
  tmp913 = LessZC(data->localData[0]->realVars[359] /* LOAD_09.v variable */, data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */, data->simulationInfo->storedRelations[59]);
  gout[159] = (tmp913) ? 1 : -1;
  tmp914 = LessZC(data->localData[0]->realVars[341] /* LOAD_04.v variable */, (0.5) * (data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */), data->simulationInfo->storedRelations[48]);
  gout[160] = (tmp914) ? 1 : -1;
  tmp915 = GreaterZC(data->localData[0]->realVars[341] /* LOAD_04.v variable */, 0.0, data->simulationInfo->storedRelations[49]);
  gout[161] = (tmp915) ? 1 : -1;
  tmp916 = GreaterZC(data->localData[0]->realVars[341] /* LOAD_04.v variable */, (0.5) * (data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */), data->simulationInfo->storedRelations[50]);
  gout[162] = (tmp916) ? 1 : -1;
  tmp917 = LessZC(data->localData[0]->realVars[341] /* LOAD_04.v variable */, data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */, data->simulationInfo->storedRelations[51]);
  gout[163] = (tmp917) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *IEEE14_IEEE14_Base_Case_relationDescription(int i)
{
  const char *res[] = {"gen_Bus_1_1.tGOV1_1.simpleLagLim.state > gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax",
  "gen_Bus_1_1.tGOV1_1.simpleLagLim.K * gen_Bus_1_1.tGOV1_1.imGain9.y - gen_Bus_1_1.tGOV1_1.simpleLagLim.state < 0.0",
  "gen_Bus_1_1.tGOV1_1.simpleLagLim.state < gen_Bus_1_1.tGOV1_1.simpleLagLim.outMin",
  "gen_Bus_1_1.tGOV1_1.simpleLagLim.K * gen_Bus_1_1.tGOV1_1.imGain9.y - gen_Bus_1_1.tGOV1_1.simpleLagLim.state > 0.0",
  "gen_Bus_2_1.tGOV1_1.simpleLagLim.state > gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax",
  "gen_Bus_2_1.tGOV1_1.simpleLagLim.K * gen_Bus_2_1.tGOV1_1.imGain9.y - gen_Bus_2_1.tGOV1_1.simpleLagLim.state < 0.0",
  "gen_Bus_2_1.tGOV1_1.simpleLagLim.state < gen_Bus_2_1.tGOV1_1.simpleLagLim.outMin",
  "gen_Bus_2_1.tGOV1_1.simpleLagLim.K * gen_Bus_2_1.tGOV1_1.imGain9.y - gen_Bus_2_1.tGOV1_1.simpleLagLim.state > 0.0",
  "time >= pwLine12.t1",
  "time < pwLine12.t2",
  "time >= pwLine11.t1",
  "time < pwLine11.t2",
  "time >= pwLine15.t1",
  "time < pwLine15.t2",
  "time >= pwLine4.t1",
  "time < pwLine4.t2",
  "time >= pwLine1.t1",
  "time < pwLine1.t2",
  "time >= pwLine3.t1",
  "time < pwLine3.t2",
  "time >= pwLine6.t1",
  "time < pwLine6.t2",
  "time >= pwLine2.t1",
  "time < pwLine2.t2",
  "time >= pwLine.t1",
  "time < pwLine.t2",
  "time >= LOAD_05.t1",
  "time <= LOAD_05.t1 + LOAD_05.d_t",
  "LOAD_05.v < 0.5 * LOAD_05.PQBRAK",
  "LOAD_05.v > 0.0",
  "LOAD_05.v > 0.5 * LOAD_05.PQBRAK",
  "LOAD_05.v < LOAD_05.PQBRAK",
  "time >= pwLine5.t1",
  "time < pwLine5.t2",
  "time >= LOAD_02.t1",
  "time <= LOAD_02.t1 + LOAD_02.d_t",
  "LOAD_02.v < 0.5 * LOAD_02.PQBRAK",
  "LOAD_02.v > 0.0",
  "LOAD_02.v > 0.5 * LOAD_02.PQBRAK",
  "LOAD_02.v < LOAD_02.PQBRAK",
  "time >= LOAD_03.t1",
  "time <= LOAD_03.t1 + LOAD_03.d_t",
  "LOAD_03.v < 0.5 * LOAD_03.PQBRAK",
  "LOAD_03.v > 0.0",
  "LOAD_03.v > 0.5 * LOAD_03.PQBRAK",
  "LOAD_03.v < LOAD_03.PQBRAK",
  "time >= LOAD_04.t1",
  "time <= LOAD_04.t1 + LOAD_04.d_t",
  "LOAD_04.v < 0.5 * LOAD_04.PQBRAK",
  "LOAD_04.v > 0.0",
  "LOAD_04.v > 0.5 * LOAD_04.PQBRAK",
  "LOAD_04.v < LOAD_04.PQBRAK",
  "time >= pwLine14.t1",
  "time < pwLine14.t2",
  "time >= LOAD_09.t1",
  "time <= LOAD_09.t1 + LOAD_09.d_t",
  "LOAD_09.v < 0.5 * LOAD_09.PQBRAK",
  "LOAD_09.v > 0.0",
  "LOAD_09.v > 0.5 * LOAD_09.PQBRAK",
  "LOAD_09.v < LOAD_09.PQBRAK",
  "time >= pwLine7.t1",
  "time < pwLine7.t2",
  "time >= LOAD_10.t1",
  "time <= LOAD_10.t1 + LOAD_10.d_t",
  "LOAD_10.v < 0.5 * LOAD_10.PQBRAK",
  "LOAD_10.v > 0.0",
  "LOAD_10.v > 0.5 * LOAD_10.PQBRAK",
  "LOAD_10.v < LOAD_10.PQBRAK",
  "time >= pwLine10.t1",
  "time < pwLine10.t2",
  "time >= pwLine9.t1",
  "time < pwLine9.t2",
  "time >= LOAD_06.t1",
  "time <= LOAD_06.t1 + LOAD_06.d_t",
  "LOAD_06.v < 0.5 * LOAD_06.PQBRAK",
  "LOAD_06.v > 0.0",
  "LOAD_06.v > 0.5 * LOAD_06.PQBRAK",
  "LOAD_06.v < LOAD_06.PQBRAK",
  "time >= pwLine13.t1",
  "time < pwLine13.t2",
  "time >= pwLine8.t1",
  "time < pwLine8.t2",
  "time >= LOAD_14.t1",
  "time <= LOAD_14.t1 + LOAD_14.d_t",
  "LOAD_14.v < 0.5 * LOAD_14.PQBRAK",
  "LOAD_14.v > 0.0",
  "LOAD_14.v > 0.5 * LOAD_14.PQBRAK",
  "LOAD_14.v < LOAD_14.PQBRAK",
  "time >= LOAD_13.t1",
  "time <= LOAD_13.t1 + LOAD_13.d_t",
  "LOAD_13.v < 0.5 * LOAD_13.PQBRAK",
  "LOAD_13.v > 0.0",
  "LOAD_13.v > 0.5 * LOAD_13.PQBRAK",
  "LOAD_13.v < LOAD_13.PQBRAK",
  "time >= LOAD_11.t1",
  "time <= LOAD_11.t1 + LOAD_11.d_t",
  "LOAD_11.v < 0.5 * LOAD_11.PQBRAK",
  "LOAD_11.v > 0.0",
  "LOAD_11.v > 0.5 * LOAD_11.PQBRAK",
  "LOAD_11.v < LOAD_11.PQBRAK",
  "time < pwFault.t1",
  "time < pwFault.t2",
  "time >= LOAD_12.t1",
  "time <= LOAD_12.t1 + LOAD_12.d_t",
  "LOAD_12.v < 0.5 * LOAD_12.PQBRAK",
  "LOAD_12.v > 0.0",
  "LOAD_12.v > 0.5 * LOAD_12.PQBRAK",
  "LOAD_12.v < LOAD_12.PQBRAK",
  "gen_Bus_6_1.iEEET1_1.simpleLagLim.state > gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax",
  "gen_Bus_6_1.iEEET1_1.simpleLagLim.K * gen_Bus_6_1.iEEET1_1.simpleLagLim.u - gen_Bus_6_1.iEEET1_1.simpleLagLim.state < 0.0",
  "gen_Bus_6_1.iEEET1_1.simpleLagLim.state < gen_Bus_6_1.iEEET1_1.simpleLagLim.outMin",
  "gen_Bus_6_1.iEEET1_1.simpleLagLim.K * gen_Bus_6_1.iEEET1_1.simpleLagLim.u - gen_Bus_6_1.iEEET1_1.simpleLagLim.state > 0.0",
  "gen_Bus_8_1.iEEET1_1.simpleLagLim.state > gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax",
  "gen_Bus_8_1.iEEET1_1.simpleLagLim.K * gen_Bus_8_1.iEEET1_1.simpleLagLim.u - gen_Bus_8_1.iEEET1_1.simpleLagLim.state < 0.0",
  "gen_Bus_8_1.iEEET1_1.simpleLagLim.state < gen_Bus_8_1.iEEET1_1.simpleLagLim.outMin",
  "gen_Bus_8_1.iEEET1_1.simpleLagLim.K * gen_Bus_8_1.iEEET1_1.simpleLagLim.u - gen_Bus_8_1.iEEET1_1.simpleLagLim.state > 0.0",
  "gen_Bus_3_1.iEEET1_1.simpleLagLim.state > gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax",
  "gen_Bus_3_1.iEEET1_1.simpleLagLim.K * gen_Bus_3_1.iEEET1_1.simpleLagLim.u - gen_Bus_3_1.iEEET1_1.simpleLagLim.state < 0.0",
  "gen_Bus_3_1.iEEET1_1.simpleLagLim.state < gen_Bus_3_1.iEEET1_1.simpleLagLim.outMin",
  "gen_Bus_3_1.iEEET1_1.simpleLagLim.K * gen_Bus_3_1.iEEET1_1.simpleLagLim.u - gen_Bus_3_1.iEEET1_1.simpleLagLim.state > 0.0",
  "gen_Bus_2_1.iEEET1_1.simpleLagLim.state > gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax",
  "gen_Bus_2_1.iEEET1_1.simpleLagLim.K * gen_Bus_2_1.iEEET1_1.simpleLagLim.u - gen_Bus_2_1.iEEET1_1.simpleLagLim.state < 0.0",
  "gen_Bus_2_1.iEEET1_1.simpleLagLim.state < gen_Bus_2_1.iEEET1_1.simpleLagLim.outMin",
  "gen_Bus_2_1.iEEET1_1.simpleLagLim.K * gen_Bus_2_1.iEEET1_1.simpleLagLim.u - gen_Bus_2_1.iEEET1_1.simpleLagLim.state > 0.0",
  "gen_Bus_1_1.iEEET1_1.simpleLagLim.state > gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax",
  "gen_Bus_1_1.iEEET1_1.simpleLagLim.K * gen_Bus_1_1.iEEET1_1.simpleLagLim.u - gen_Bus_1_1.iEEET1_1.simpleLagLim.state < 0.0",
  "gen_Bus_1_1.iEEET1_1.simpleLagLim.state < gen_Bus_1_1.iEEET1_1.simpleLagLim.outMin",
  "gen_Bus_1_1.iEEET1_1.simpleLagLim.K * gen_Bus_1_1.iEEET1_1.simpleLagLim.u - gen_Bus_1_1.iEEET1_1.simpleLagLim.state > 0.0"};
  return res[i];
}

int IEEE14_IEEE14_Base_Case_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp918;
  modelica_boolean tmp919;
  modelica_boolean tmp920;
  modelica_boolean tmp921;
  modelica_boolean tmp922;
  modelica_boolean tmp923;
  modelica_boolean tmp924;
  modelica_boolean tmp925;
  modelica_boolean tmp926;
  modelica_boolean tmp927;
  modelica_boolean tmp928;
  modelica_boolean tmp929;
  modelica_boolean tmp930;
  modelica_boolean tmp931;
  modelica_boolean tmp932;
  modelica_boolean tmp933;
  modelica_boolean tmp934;
  modelica_boolean tmp935;
  modelica_boolean tmp936;
  modelica_boolean tmp937;
  modelica_boolean tmp938;
  modelica_boolean tmp939;
  modelica_boolean tmp940;
  modelica_boolean tmp941;
  modelica_boolean tmp942;
  modelica_boolean tmp943;
  modelica_boolean tmp944;
  modelica_boolean tmp945;
  modelica_boolean tmp946;
  modelica_boolean tmp947;
  modelica_boolean tmp948;
  modelica_boolean tmp949;
  modelica_boolean tmp950;
  modelica_boolean tmp951;
  modelica_boolean tmp952;
  modelica_boolean tmp953;
  modelica_boolean tmp954;
  modelica_boolean tmp955;
  modelica_boolean tmp956;
  modelica_boolean tmp957;
  modelica_boolean tmp958;
  modelica_boolean tmp959;
  modelica_boolean tmp960;
  modelica_boolean tmp961;
  modelica_boolean tmp962;
  modelica_boolean tmp963;
  modelica_boolean tmp964;
  modelica_boolean tmp965;
  modelica_boolean tmp966;
  modelica_boolean tmp967;
  modelica_boolean tmp968;
  modelica_boolean tmp969;
  modelica_boolean tmp970;
  modelica_boolean tmp971;
  modelica_boolean tmp972;
  modelica_boolean tmp973;
  modelica_boolean tmp974;
  modelica_boolean tmp975;
  modelica_boolean tmp976;
  modelica_boolean tmp977;
  modelica_boolean tmp978;
  modelica_boolean tmp979;
  modelica_boolean tmp980;
  modelica_boolean tmp981;
  modelica_boolean tmp982;
  modelica_boolean tmp983;
  modelica_boolean tmp984;
  modelica_boolean tmp985;
  modelica_boolean tmp986;
  modelica_boolean tmp987;
  modelica_boolean tmp988;
  modelica_boolean tmp989;
  modelica_boolean tmp990;
  modelica_boolean tmp991;
  modelica_boolean tmp992;
  modelica_boolean tmp993;
  modelica_boolean tmp994;
  modelica_boolean tmp995;
  modelica_boolean tmp996;
  modelica_boolean tmp997;
  modelica_boolean tmp998;
  modelica_boolean tmp999;
  modelica_boolean tmp1000;
  modelica_boolean tmp1001;
  modelica_boolean tmp1002;
  modelica_boolean tmp1003;
  modelica_boolean tmp1004;
  modelica_boolean tmp1005;
  modelica_boolean tmp1006;
  modelica_boolean tmp1007;
  modelica_boolean tmp1008;
  modelica_boolean tmp1009;
  modelica_boolean tmp1010;
  modelica_boolean tmp1011;
  modelica_boolean tmp1012;
  modelica_boolean tmp1013;
  modelica_boolean tmp1014;
  modelica_boolean tmp1015;
  modelica_boolean tmp1016;
  modelica_boolean tmp1017;
  modelica_boolean tmp1018;
  modelica_boolean tmp1019;
  modelica_boolean tmp1020;
  modelica_boolean tmp1021;
  modelica_boolean tmp1022;
  modelica_boolean tmp1023;
  modelica_boolean tmp1024;
  modelica_boolean tmp1025;
  modelica_boolean tmp1026;
  modelica_boolean tmp1027;
  modelica_boolean tmp1028;
  modelica_boolean tmp1029;
  modelica_boolean tmp1030;
  modelica_boolean tmp1031;
  modelica_boolean tmp1032;
  modelica_boolean tmp1033;
  modelica_boolean tmp1034;
  modelica_boolean tmp1035;
  modelica_boolean tmp1036;
  modelica_boolean tmp1037;
  modelica_boolean tmp1038;
  modelica_boolean tmp1039;
  modelica_boolean tmp1040;
  modelica_boolean tmp1041;
  modelica_boolean tmp1042;
  modelica_boolean tmp1043;
  modelica_boolean tmp1044;
  modelica_boolean tmp1045;
  
  if(evalforZeroCross) {
    tmp918 = GreaterZC(data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1080] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp918;
    tmp919 = LessZC((data->simulationInfo->realParameter[1076] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[486] /* gen_Bus_1_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp919;
    tmp920 = LessZC(data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1081] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp920;
    tmp921 = GreaterZC((data->simulationInfo->realParameter[1076] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[486] /* gen_Bus_1_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp921;
    tmp922 = GreaterZC(data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1615] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp922;
    tmp923 = LessZC((data->simulationInfo->realParameter[1611] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[586] /* gen_Bus_2_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp923;
    tmp924 = LessZC(data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1616] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp924;
    tmp925 = GreaterZC((data->simulationInfo->realParameter[1611] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[586] /* gen_Bus_2_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp925;
    tmp926 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2241] /* pwLine12.t1 PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp926;
    tmp927 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2242] /* pwLine12.t2 PARAM */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp927;
    tmp928 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2230] /* pwLine11.t1 PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp928;
    tmp929 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2231] /* pwLine11.t2 PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp929;
    tmp930 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2274] /* pwLine15.t1 PARAM */, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp930;
    tmp931 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2275] /* pwLine15.t2 PARAM */, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp931;
    tmp932 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2307] /* pwLine4.t1 PARAM */, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp932;
    tmp933 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2308] /* pwLine4.t2 PARAM */, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp933;
    tmp934 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2208] /* pwLine1.t1 PARAM */, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp934;
    tmp935 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2209] /* pwLine1.t2 PARAM */, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp935;
    tmp936 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2296] /* pwLine3.t1 PARAM */, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp936;
    tmp937 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2297] /* pwLine3.t2 PARAM */, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp937;
    tmp938 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2329] /* pwLine6.t1 PARAM */, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp938;
    tmp939 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2330] /* pwLine6.t2 PARAM */, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp939;
    tmp940 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2285] /* pwLine2.t1 PARAM */, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp940;
    tmp941 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2286] /* pwLine2.t2 PARAM */, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp941;
    tmp942 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2197] /* pwLine.t1 PARAM */, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp942;
    tmp943 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2198] /* pwLine.t2 PARAM */, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp943;
    tmp944 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[248] /* LOAD_05.t1 PARAM */, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp944;
    tmp945 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[248] /* LOAD_05.t1 PARAM */ + data->simulationInfo->realParameter[242] /* LOAD_05.d_t PARAM */, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp945;
    tmp946 = LessZC(data->localData[0]->realVars[347] /* LOAD_05.v variable */, (0.5) * (data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */), data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp946;
    tmp947 = GreaterZC(data->localData[0]->realVars[347] /* LOAD_05.v variable */, 0.0, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp947;
    tmp948 = GreaterZC(data->localData[0]->realVars[347] /* LOAD_05.v variable */, (0.5) * (data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */), data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp948;
    tmp949 = LessZC(data->localData[0]->realVars[347] /* LOAD_05.v variable */, data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */, data->simulationInfo->storedRelations[31]);
    data->simulationInfo->relations[31] = tmp949;
    tmp950 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2318] /* pwLine5.t1 PARAM */, data->simulationInfo->storedRelations[32]);
    data->simulationInfo->relations[32] = tmp950;
    tmp951 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2319] /* pwLine5.t2 PARAM */, data->simulationInfo->storedRelations[33]);
    data->simulationInfo->relations[33] = tmp951;
    tmp952 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[122] /* LOAD_02.t1 PARAM */, data->simulationInfo->storedRelations[34]);
    data->simulationInfo->relations[34] = tmp952;
    tmp953 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[122] /* LOAD_02.t1 PARAM */ + data->simulationInfo->realParameter[116] /* LOAD_02.d_t PARAM */, data->simulationInfo->storedRelations[35]);
    data->simulationInfo->relations[35] = tmp953;
    tmp954 = LessZC(data->localData[0]->realVars[329] /* LOAD_02.v variable */, (0.5) * (data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */), data->simulationInfo->storedRelations[36]);
    data->simulationInfo->relations[36] = tmp954;
    tmp955 = GreaterZC(data->localData[0]->realVars[329] /* LOAD_02.v variable */, 0.0, data->simulationInfo->storedRelations[37]);
    data->simulationInfo->relations[37] = tmp955;
    tmp956 = GreaterZC(data->localData[0]->realVars[329] /* LOAD_02.v variable */, (0.5) * (data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */), data->simulationInfo->storedRelations[38]);
    data->simulationInfo->relations[38] = tmp956;
    tmp957 = LessZC(data->localData[0]->realVars[329] /* LOAD_02.v variable */, data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */, data->simulationInfo->storedRelations[39]);
    data->simulationInfo->relations[39] = tmp957;
    tmp958 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* LOAD_03.t1 PARAM */, data->simulationInfo->storedRelations[40]);
    data->simulationInfo->relations[40] = tmp958;
    tmp959 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[164] /* LOAD_03.t1 PARAM */ + data->simulationInfo->realParameter[158] /* LOAD_03.d_t PARAM */, data->simulationInfo->storedRelations[41]);
    data->simulationInfo->relations[41] = tmp959;
    tmp960 = LessZC(data->localData[0]->realVars[335] /* LOAD_03.v variable */, (0.5) * (data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */), data->simulationInfo->storedRelations[42]);
    data->simulationInfo->relations[42] = tmp960;
    tmp961 = GreaterZC(data->localData[0]->realVars[335] /* LOAD_03.v variable */, 0.0, data->simulationInfo->storedRelations[43]);
    data->simulationInfo->relations[43] = tmp961;
    tmp962 = GreaterZC(data->localData[0]->realVars[335] /* LOAD_03.v variable */, (0.5) * (data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */), data->simulationInfo->storedRelations[44]);
    data->simulationInfo->relations[44] = tmp962;
    tmp963 = LessZC(data->localData[0]->realVars[335] /* LOAD_03.v variable */, data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */, data->simulationInfo->storedRelations[45]);
    data->simulationInfo->relations[45] = tmp963;
    tmp964 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[206] /* LOAD_04.t1 PARAM */, data->simulationInfo->storedRelations[46]);
    data->simulationInfo->relations[46] = tmp964;
    tmp965 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[206] /* LOAD_04.t1 PARAM */ + data->simulationInfo->realParameter[200] /* LOAD_04.d_t PARAM */, data->simulationInfo->storedRelations[47]);
    data->simulationInfo->relations[47] = tmp965;
    tmp966 = LessZC(data->localData[0]->realVars[341] /* LOAD_04.v variable */, (0.5) * (data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */), data->simulationInfo->storedRelations[48]);
    data->simulationInfo->relations[48] = tmp966;
    tmp967 = GreaterZC(data->localData[0]->realVars[341] /* LOAD_04.v variable */, 0.0, data->simulationInfo->storedRelations[49]);
    data->simulationInfo->relations[49] = tmp967;
    tmp968 = GreaterZC(data->localData[0]->realVars[341] /* LOAD_04.v variable */, (0.5) * (data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */), data->simulationInfo->storedRelations[50]);
    data->simulationInfo->relations[50] = tmp968;
    tmp969 = LessZC(data->localData[0]->realVars[341] /* LOAD_04.v variable */, data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */, data->simulationInfo->storedRelations[51]);
    data->simulationInfo->relations[51] = tmp969;
    tmp970 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2263] /* pwLine14.t1 PARAM */, data->simulationInfo->storedRelations[52]);
    data->simulationInfo->relations[52] = tmp970;
    tmp971 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2264] /* pwLine14.t2 PARAM */, data->simulationInfo->storedRelations[53]);
    data->simulationInfo->relations[53] = tmp971;
    tmp972 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* LOAD_09.t1 PARAM */, data->simulationInfo->storedRelations[54]);
    data->simulationInfo->relations[54] = tmp972;
    tmp973 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[332] /* LOAD_09.t1 PARAM */ + data->simulationInfo->realParameter[326] /* LOAD_09.d_t PARAM */, data->simulationInfo->storedRelations[55]);
    data->simulationInfo->relations[55] = tmp973;
    tmp974 = LessZC(data->localData[0]->realVars[359] /* LOAD_09.v variable */, (0.5) * (data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */), data->simulationInfo->storedRelations[56]);
    data->simulationInfo->relations[56] = tmp974;
    tmp975 = GreaterZC(data->localData[0]->realVars[359] /* LOAD_09.v variable */, 0.0, data->simulationInfo->storedRelations[57]);
    data->simulationInfo->relations[57] = tmp975;
    tmp976 = GreaterZC(data->localData[0]->realVars[359] /* LOAD_09.v variable */, (0.5) * (data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */), data->simulationInfo->storedRelations[58]);
    data->simulationInfo->relations[58] = tmp976;
    tmp977 = LessZC(data->localData[0]->realVars[359] /* LOAD_09.v variable */, data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */, data->simulationInfo->storedRelations[59]);
    data->simulationInfo->relations[59] = tmp977;
    tmp978 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2340] /* pwLine7.t1 PARAM */, data->simulationInfo->storedRelations[60]);
    data->simulationInfo->relations[60] = tmp978;
    tmp979 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2341] /* pwLine7.t2 PARAM */, data->simulationInfo->storedRelations[61]);
    data->simulationInfo->relations[61] = tmp979;
    tmp980 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[374] /* LOAD_10.t1 PARAM */, data->simulationInfo->storedRelations[62]);
    data->simulationInfo->relations[62] = tmp980;
    tmp981 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[374] /* LOAD_10.t1 PARAM */ + data->simulationInfo->realParameter[368] /* LOAD_10.d_t PARAM */, data->simulationInfo->storedRelations[63]);
    data->simulationInfo->relations[63] = tmp981;
    tmp982 = LessZC(data->localData[0]->realVars[365] /* LOAD_10.v variable */, (0.5) * (data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */), data->simulationInfo->storedRelations[64]);
    data->simulationInfo->relations[64] = tmp982;
    tmp983 = GreaterZC(data->localData[0]->realVars[365] /* LOAD_10.v variable */, 0.0, data->simulationInfo->storedRelations[65]);
    data->simulationInfo->relations[65] = tmp983;
    tmp984 = GreaterZC(data->localData[0]->realVars[365] /* LOAD_10.v variable */, (0.5) * (data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */), data->simulationInfo->storedRelations[66]);
    data->simulationInfo->relations[66] = tmp984;
    tmp985 = LessZC(data->localData[0]->realVars[365] /* LOAD_10.v variable */, data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */, data->simulationInfo->storedRelations[67]);
    data->simulationInfo->relations[67] = tmp985;
    tmp986 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2219] /* pwLine10.t1 PARAM */, data->simulationInfo->storedRelations[68]);
    data->simulationInfo->relations[68] = tmp986;
    tmp987 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2220] /* pwLine10.t2 PARAM */, data->simulationInfo->storedRelations[69]);
    data->simulationInfo->relations[69] = tmp987;
    tmp988 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2362] /* pwLine9.t1 PARAM */, data->simulationInfo->storedRelations[70]);
    data->simulationInfo->relations[70] = tmp988;
    tmp989 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2363] /* pwLine9.t2 PARAM */, data->simulationInfo->storedRelations[71]);
    data->simulationInfo->relations[71] = tmp989;
    tmp990 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* LOAD_06.t1 PARAM */, data->simulationInfo->storedRelations[72]);
    data->simulationInfo->relations[72] = tmp990;
    tmp991 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[290] /* LOAD_06.t1 PARAM */ + data->simulationInfo->realParameter[284] /* LOAD_06.d_t PARAM */, data->simulationInfo->storedRelations[73]);
    data->simulationInfo->relations[73] = tmp991;
    tmp992 = LessZC(data->localData[0]->realVars[353] /* LOAD_06.v variable */, (0.5) * (data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */), data->simulationInfo->storedRelations[74]);
    data->simulationInfo->relations[74] = tmp992;
    tmp993 = GreaterZC(data->localData[0]->realVars[353] /* LOAD_06.v variable */, 0.0, data->simulationInfo->storedRelations[75]);
    data->simulationInfo->relations[75] = tmp993;
    tmp994 = GreaterZC(data->localData[0]->realVars[353] /* LOAD_06.v variable */, (0.5) * (data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */), data->simulationInfo->storedRelations[76]);
    data->simulationInfo->relations[76] = tmp994;
    tmp995 = LessZC(data->localData[0]->realVars[353] /* LOAD_06.v variable */, data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */, data->simulationInfo->storedRelations[77]);
    data->simulationInfo->relations[77] = tmp995;
    tmp996 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2252] /* pwLine13.t1 PARAM */, data->simulationInfo->storedRelations[78]);
    data->simulationInfo->relations[78] = tmp996;
    tmp997 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2253] /* pwLine13.t2 PARAM */, data->simulationInfo->storedRelations[79]);
    data->simulationInfo->relations[79] = tmp997;
    tmp998 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2351] /* pwLine8.t1 PARAM */, data->simulationInfo->storedRelations[80]);
    data->simulationInfo->relations[80] = tmp998;
    tmp999 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2352] /* pwLine8.t2 PARAM */, data->simulationInfo->storedRelations[81]);
    data->simulationInfo->relations[81] = tmp999;
    tmp1000 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[542] /* LOAD_14.t1 PARAM */, data->simulationInfo->storedRelations[82]);
    data->simulationInfo->relations[82] = tmp1000;
    tmp1001 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[542] /* LOAD_14.t1 PARAM */ + data->simulationInfo->realParameter[536] /* LOAD_14.d_t PARAM */, data->simulationInfo->storedRelations[83]);
    data->simulationInfo->relations[83] = tmp1001;
    tmp1002 = LessZC(data->localData[0]->realVars[389] /* LOAD_14.v variable */, (0.5) * (data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */), data->simulationInfo->storedRelations[84]);
    data->simulationInfo->relations[84] = tmp1002;
    tmp1003 = GreaterZC(data->localData[0]->realVars[389] /* LOAD_14.v variable */, 0.0, data->simulationInfo->storedRelations[85]);
    data->simulationInfo->relations[85] = tmp1003;
    tmp1004 = GreaterZC(data->localData[0]->realVars[389] /* LOAD_14.v variable */, (0.5) * (data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */), data->simulationInfo->storedRelations[86]);
    data->simulationInfo->relations[86] = tmp1004;
    tmp1005 = LessZC(data->localData[0]->realVars[389] /* LOAD_14.v variable */, data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */, data->simulationInfo->storedRelations[87]);
    data->simulationInfo->relations[87] = tmp1005;
    tmp1006 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* LOAD_13.t1 PARAM */, data->simulationInfo->storedRelations[88]);
    data->simulationInfo->relations[88] = tmp1006;
    tmp1007 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[500] /* LOAD_13.t1 PARAM */ + data->simulationInfo->realParameter[494] /* LOAD_13.d_t PARAM */, data->simulationInfo->storedRelations[89]);
    data->simulationInfo->relations[89] = tmp1007;
    tmp1008 = LessZC(data->localData[0]->realVars[383] /* LOAD_13.v variable */, (0.5) * (data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */), data->simulationInfo->storedRelations[90]);
    data->simulationInfo->relations[90] = tmp1008;
    tmp1009 = GreaterZC(data->localData[0]->realVars[383] /* LOAD_13.v variable */, 0.0, data->simulationInfo->storedRelations[91]);
    data->simulationInfo->relations[91] = tmp1009;
    tmp1010 = GreaterZC(data->localData[0]->realVars[383] /* LOAD_13.v variable */, (0.5) * (data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */), data->simulationInfo->storedRelations[92]);
    data->simulationInfo->relations[92] = tmp1010;
    tmp1011 = LessZC(data->localData[0]->realVars[383] /* LOAD_13.v variable */, data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */, data->simulationInfo->storedRelations[93]);
    data->simulationInfo->relations[93] = tmp1011;
    tmp1012 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[416] /* LOAD_11.t1 PARAM */, data->simulationInfo->storedRelations[94]);
    data->simulationInfo->relations[94] = tmp1012;
    tmp1013 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[416] /* LOAD_11.t1 PARAM */ + data->simulationInfo->realParameter[410] /* LOAD_11.d_t PARAM */, data->simulationInfo->storedRelations[95]);
    data->simulationInfo->relations[95] = tmp1013;
    tmp1014 = LessZC(data->localData[0]->realVars[371] /* LOAD_11.v variable */, (0.5) * (data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */), data->simulationInfo->storedRelations[96]);
    data->simulationInfo->relations[96] = tmp1014;
    tmp1015 = GreaterZC(data->localData[0]->realVars[371] /* LOAD_11.v variable */, 0.0, data->simulationInfo->storedRelations[97]);
    data->simulationInfo->relations[97] = tmp1015;
    tmp1016 = GreaterZC(data->localData[0]->realVars[371] /* LOAD_11.v variable */, (0.5) * (data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */), data->simulationInfo->storedRelations[98]);
    data->simulationInfo->relations[98] = tmp1016;
    tmp1017 = LessZC(data->localData[0]->realVars[371] /* LOAD_11.v variable */, data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */, data->simulationInfo->storedRelations[99]);
    data->simulationInfo->relations[99] = tmp1017;
    tmp1018 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2186] /* pwFault.t1 PARAM */, data->simulationInfo->storedRelations[100]);
    data->simulationInfo->relations[100] = tmp1018;
    tmp1019 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[2187] /* pwFault.t2 PARAM */, data->simulationInfo->storedRelations[101]);
    data->simulationInfo->relations[101] = tmp1019;
    tmp1020 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[458] /* LOAD_12.t1 PARAM */, data->simulationInfo->storedRelations[102]);
    data->simulationInfo->relations[102] = tmp1020;
    tmp1021 = LessEqZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[458] /* LOAD_12.t1 PARAM */ + data->simulationInfo->realParameter[452] /* LOAD_12.d_t PARAM */, data->simulationInfo->storedRelations[103]);
    data->simulationInfo->relations[103] = tmp1021;
    tmp1022 = LessZC(data->localData[0]->realVars[377] /* LOAD_12.v variable */, (0.5) * (data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */), data->simulationInfo->storedRelations[104]);
    data->simulationInfo->relations[104] = tmp1022;
    tmp1023 = GreaterZC(data->localData[0]->realVars[377] /* LOAD_12.v variable */, 0.0, data->simulationInfo->storedRelations[105]);
    data->simulationInfo->relations[105] = tmp1023;
    tmp1024 = GreaterZC(data->localData[0]->realVars[377] /* LOAD_12.v variable */, (0.5) * (data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */), data->simulationInfo->storedRelations[106]);
    data->simulationInfo->relations[106] = tmp1024;
    tmp1025 = LessZC(data->localData[0]->realVars[377] /* LOAD_12.v variable */, data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */, data->simulationInfo->storedRelations[107]);
    data->simulationInfo->relations[107] = tmp1025;
    tmp1026 = GreaterZC(data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1941] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[108]);
    data->simulationInfo->relations[108] = tmp1026;
    tmp1027 = LessZC((data->simulationInfo->realParameter[1937] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[658] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[109]);
    data->simulationInfo->relations[109] = tmp1027;
    tmp1028 = LessZC(data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1942] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[110]);
    data->simulationInfo->relations[110] = tmp1028;
    tmp1029 = GreaterZC((data->simulationInfo->realParameter[1937] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[658] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[111]);
    data->simulationInfo->relations[111] = tmp1029;
    tmp1030 = GreaterZC(data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[2107] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[112]);
    data->simulationInfo->relations[112] = tmp1030;
    tmp1031 = LessZC((data->simulationInfo->realParameter[2103] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[693] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[113]);
    data->simulationInfo->relations[113] = tmp1031;
    tmp1032 = LessZC(data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[2108] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[114]);
    data->simulationInfo->relations[114] = tmp1032;
    tmp1033 = GreaterZC((data->simulationInfo->realParameter[2103] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[693] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[115]);
    data->simulationInfo->relations[115] = tmp1033;
    tmp1034 = GreaterZC(data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1775] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[116]);
    data->simulationInfo->relations[116] = tmp1034;
    tmp1035 = LessZC((data->simulationInfo->realParameter[1771] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[623] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[117]);
    data->simulationInfo->relations[117] = tmp1035;
    tmp1036 = LessZC(data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1776] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[118]);
    data->simulationInfo->relations[118] = tmp1036;
    tmp1037 = GreaterZC((data->simulationInfo->realParameter[1771] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[623] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[119]);
    data->simulationInfo->relations[119] = tmp1037;
    tmp1038 = GreaterZC(data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1238] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[120]);
    data->simulationInfo->relations[120] = tmp1038;
    tmp1039 = LessZC((data->simulationInfo->realParameter[1234] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[525] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[121]);
    data->simulationInfo->relations[121] = tmp1039;
    tmp1040 = LessZC(data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[1239] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[122]);
    data->simulationInfo->relations[122] = tmp1040;
    tmp1041 = GreaterZC((data->simulationInfo->realParameter[1234] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[525] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[123]);
    data->simulationInfo->relations[123] = tmp1041;
    tmp1042 = GreaterZC(data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[703] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax PARAM */, data->simulationInfo->storedRelations[124]);
    data->simulationInfo->relations[124] = tmp1042;
    tmp1043 = LessZC((data->simulationInfo->realParameter[699] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[425] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[125]);
    data->simulationInfo->relations[125] = tmp1043;
    tmp1044 = LessZC(data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */, data->simulationInfo->realParameter[704] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMin PARAM */, data->simulationInfo->storedRelations[126]);
    data->simulationInfo->relations[126] = tmp1044;
    tmp1045 = GreaterZC((data->simulationInfo->realParameter[699] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[425] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */, 0.0, data->simulationInfo->storedRelations[127]);
    data->simulationInfo->relations[127] = tmp1045;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[1080] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[1] = ((data->simulationInfo->realParameter[1076] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[486] /* gen_Bus_1_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[1081] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[3] = ((data->simulationInfo->realParameter[1076] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[486] /* gen_Bus_1_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[35] /* gen_Bus_1_1.tGOV1_1.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[1615] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[5] = ((data->simulationInfo->realParameter[1611] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[586] /* gen_Bus_2_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[1616] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[7] = ((data->simulationInfo->realParameter[1611] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[586] /* gen_Bus_2_1.tGOV1_1.imGain9.y variable */) - data->localData[0]->realVars[71] /* gen_Bus_2_1.tGOV1_1.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[8] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2241] /* pwLine12.t1 PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2242] /* pwLine12.t2 PARAM */);
    data->simulationInfo->relations[10] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2230] /* pwLine11.t1 PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2231] /* pwLine11.t2 PARAM */);
    data->simulationInfo->relations[12] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2274] /* pwLine15.t1 PARAM */);
    data->simulationInfo->relations[13] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2275] /* pwLine15.t2 PARAM */);
    data->simulationInfo->relations[14] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2307] /* pwLine4.t1 PARAM */);
    data->simulationInfo->relations[15] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2308] /* pwLine4.t2 PARAM */);
    data->simulationInfo->relations[16] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2208] /* pwLine1.t1 PARAM */);
    data->simulationInfo->relations[17] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2209] /* pwLine1.t2 PARAM */);
    data->simulationInfo->relations[18] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2296] /* pwLine3.t1 PARAM */);
    data->simulationInfo->relations[19] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2297] /* pwLine3.t2 PARAM */);
    data->simulationInfo->relations[20] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2329] /* pwLine6.t1 PARAM */);
    data->simulationInfo->relations[21] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2330] /* pwLine6.t2 PARAM */);
    data->simulationInfo->relations[22] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2285] /* pwLine2.t1 PARAM */);
    data->simulationInfo->relations[23] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2286] /* pwLine2.t2 PARAM */);
    data->simulationInfo->relations[24] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2197] /* pwLine.t1 PARAM */);
    data->simulationInfo->relations[25] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2198] /* pwLine.t2 PARAM */);
    data->simulationInfo->relations[26] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[248] /* LOAD_05.t1 PARAM */);
    data->simulationInfo->relations[27] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[248] /* LOAD_05.t1 PARAM */ + data->simulationInfo->realParameter[242] /* LOAD_05.d_t PARAM */);
    data->simulationInfo->relations[28] = (data->localData[0]->realVars[347] /* LOAD_05.v variable */ < (0.5) * (data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */));
    data->simulationInfo->relations[29] = (data->localData[0]->realVars[347] /* LOAD_05.v variable */ > 0.0);
    data->simulationInfo->relations[30] = (data->localData[0]->realVars[347] /* LOAD_05.v variable */ > (0.5) * (data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */));
    data->simulationInfo->relations[31] = (data->localData[0]->realVars[347] /* LOAD_05.v variable */ < data->simulationInfo->realParameter[211] /* LOAD_05.PQBRAK PARAM */);
    data->simulationInfo->relations[32] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2318] /* pwLine5.t1 PARAM */);
    data->simulationInfo->relations[33] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2319] /* pwLine5.t2 PARAM */);
    data->simulationInfo->relations[34] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[122] /* LOAD_02.t1 PARAM */);
    data->simulationInfo->relations[35] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[122] /* LOAD_02.t1 PARAM */ + data->simulationInfo->realParameter[116] /* LOAD_02.d_t PARAM */);
    data->simulationInfo->relations[36] = (data->localData[0]->realVars[329] /* LOAD_02.v variable */ < (0.5) * (data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */));
    data->simulationInfo->relations[37] = (data->localData[0]->realVars[329] /* LOAD_02.v variable */ > 0.0);
    data->simulationInfo->relations[38] = (data->localData[0]->realVars[329] /* LOAD_02.v variable */ > (0.5) * (data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */));
    data->simulationInfo->relations[39] = (data->localData[0]->realVars[329] /* LOAD_02.v variable */ < data->simulationInfo->realParameter[85] /* LOAD_02.PQBRAK PARAM */);
    data->simulationInfo->relations[40] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[164] /* LOAD_03.t1 PARAM */);
    data->simulationInfo->relations[41] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[164] /* LOAD_03.t1 PARAM */ + data->simulationInfo->realParameter[158] /* LOAD_03.d_t PARAM */);
    data->simulationInfo->relations[42] = (data->localData[0]->realVars[335] /* LOAD_03.v variable */ < (0.5) * (data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */));
    data->simulationInfo->relations[43] = (data->localData[0]->realVars[335] /* LOAD_03.v variable */ > 0.0);
    data->simulationInfo->relations[44] = (data->localData[0]->realVars[335] /* LOAD_03.v variable */ > (0.5) * (data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */));
    data->simulationInfo->relations[45] = (data->localData[0]->realVars[335] /* LOAD_03.v variable */ < data->simulationInfo->realParameter[127] /* LOAD_03.PQBRAK PARAM */);
    data->simulationInfo->relations[46] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[206] /* LOAD_04.t1 PARAM */);
    data->simulationInfo->relations[47] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[206] /* LOAD_04.t1 PARAM */ + data->simulationInfo->realParameter[200] /* LOAD_04.d_t PARAM */);
    data->simulationInfo->relations[48] = (data->localData[0]->realVars[341] /* LOAD_04.v variable */ < (0.5) * (data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */));
    data->simulationInfo->relations[49] = (data->localData[0]->realVars[341] /* LOAD_04.v variable */ > 0.0);
    data->simulationInfo->relations[50] = (data->localData[0]->realVars[341] /* LOAD_04.v variable */ > (0.5) * (data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */));
    data->simulationInfo->relations[51] = (data->localData[0]->realVars[341] /* LOAD_04.v variable */ < data->simulationInfo->realParameter[169] /* LOAD_04.PQBRAK PARAM */);
    data->simulationInfo->relations[52] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2263] /* pwLine14.t1 PARAM */);
    data->simulationInfo->relations[53] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2264] /* pwLine14.t2 PARAM */);
    data->simulationInfo->relations[54] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[332] /* LOAD_09.t1 PARAM */);
    data->simulationInfo->relations[55] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[332] /* LOAD_09.t1 PARAM */ + data->simulationInfo->realParameter[326] /* LOAD_09.d_t PARAM */);
    data->simulationInfo->relations[56] = (data->localData[0]->realVars[359] /* LOAD_09.v variable */ < (0.5) * (data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */));
    data->simulationInfo->relations[57] = (data->localData[0]->realVars[359] /* LOAD_09.v variable */ > 0.0);
    data->simulationInfo->relations[58] = (data->localData[0]->realVars[359] /* LOAD_09.v variable */ > (0.5) * (data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */));
    data->simulationInfo->relations[59] = (data->localData[0]->realVars[359] /* LOAD_09.v variable */ < data->simulationInfo->realParameter[295] /* LOAD_09.PQBRAK PARAM */);
    data->simulationInfo->relations[60] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2340] /* pwLine7.t1 PARAM */);
    data->simulationInfo->relations[61] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2341] /* pwLine7.t2 PARAM */);
    data->simulationInfo->relations[62] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[374] /* LOAD_10.t1 PARAM */);
    data->simulationInfo->relations[63] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[374] /* LOAD_10.t1 PARAM */ + data->simulationInfo->realParameter[368] /* LOAD_10.d_t PARAM */);
    data->simulationInfo->relations[64] = (data->localData[0]->realVars[365] /* LOAD_10.v variable */ < (0.5) * (data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */));
    data->simulationInfo->relations[65] = (data->localData[0]->realVars[365] /* LOAD_10.v variable */ > 0.0);
    data->simulationInfo->relations[66] = (data->localData[0]->realVars[365] /* LOAD_10.v variable */ > (0.5) * (data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */));
    data->simulationInfo->relations[67] = (data->localData[0]->realVars[365] /* LOAD_10.v variable */ < data->simulationInfo->realParameter[337] /* LOAD_10.PQBRAK PARAM */);
    data->simulationInfo->relations[68] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2219] /* pwLine10.t1 PARAM */);
    data->simulationInfo->relations[69] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2220] /* pwLine10.t2 PARAM */);
    data->simulationInfo->relations[70] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2362] /* pwLine9.t1 PARAM */);
    data->simulationInfo->relations[71] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2363] /* pwLine9.t2 PARAM */);
    data->simulationInfo->relations[72] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[290] /* LOAD_06.t1 PARAM */);
    data->simulationInfo->relations[73] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[290] /* LOAD_06.t1 PARAM */ + data->simulationInfo->realParameter[284] /* LOAD_06.d_t PARAM */);
    data->simulationInfo->relations[74] = (data->localData[0]->realVars[353] /* LOAD_06.v variable */ < (0.5) * (data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */));
    data->simulationInfo->relations[75] = (data->localData[0]->realVars[353] /* LOAD_06.v variable */ > 0.0);
    data->simulationInfo->relations[76] = (data->localData[0]->realVars[353] /* LOAD_06.v variable */ > (0.5) * (data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */));
    data->simulationInfo->relations[77] = (data->localData[0]->realVars[353] /* LOAD_06.v variable */ < data->simulationInfo->realParameter[253] /* LOAD_06.PQBRAK PARAM */);
    data->simulationInfo->relations[78] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2252] /* pwLine13.t1 PARAM */);
    data->simulationInfo->relations[79] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2253] /* pwLine13.t2 PARAM */);
    data->simulationInfo->relations[80] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[2351] /* pwLine8.t1 PARAM */);
    data->simulationInfo->relations[81] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2352] /* pwLine8.t2 PARAM */);
    data->simulationInfo->relations[82] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[542] /* LOAD_14.t1 PARAM */);
    data->simulationInfo->relations[83] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[542] /* LOAD_14.t1 PARAM */ + data->simulationInfo->realParameter[536] /* LOAD_14.d_t PARAM */);
    data->simulationInfo->relations[84] = (data->localData[0]->realVars[389] /* LOAD_14.v variable */ < (0.5) * (data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */));
    data->simulationInfo->relations[85] = (data->localData[0]->realVars[389] /* LOAD_14.v variable */ > 0.0);
    data->simulationInfo->relations[86] = (data->localData[0]->realVars[389] /* LOAD_14.v variable */ > (0.5) * (data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */));
    data->simulationInfo->relations[87] = (data->localData[0]->realVars[389] /* LOAD_14.v variable */ < data->simulationInfo->realParameter[505] /* LOAD_14.PQBRAK PARAM */);
    data->simulationInfo->relations[88] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[500] /* LOAD_13.t1 PARAM */);
    data->simulationInfo->relations[89] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[500] /* LOAD_13.t1 PARAM */ + data->simulationInfo->realParameter[494] /* LOAD_13.d_t PARAM */);
    data->simulationInfo->relations[90] = (data->localData[0]->realVars[383] /* LOAD_13.v variable */ < (0.5) * (data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */));
    data->simulationInfo->relations[91] = (data->localData[0]->realVars[383] /* LOAD_13.v variable */ > 0.0);
    data->simulationInfo->relations[92] = (data->localData[0]->realVars[383] /* LOAD_13.v variable */ > (0.5) * (data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */));
    data->simulationInfo->relations[93] = (data->localData[0]->realVars[383] /* LOAD_13.v variable */ < data->simulationInfo->realParameter[463] /* LOAD_13.PQBRAK PARAM */);
    data->simulationInfo->relations[94] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[416] /* LOAD_11.t1 PARAM */);
    data->simulationInfo->relations[95] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[416] /* LOAD_11.t1 PARAM */ + data->simulationInfo->realParameter[410] /* LOAD_11.d_t PARAM */);
    data->simulationInfo->relations[96] = (data->localData[0]->realVars[371] /* LOAD_11.v variable */ < (0.5) * (data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */));
    data->simulationInfo->relations[97] = (data->localData[0]->realVars[371] /* LOAD_11.v variable */ > 0.0);
    data->simulationInfo->relations[98] = (data->localData[0]->realVars[371] /* LOAD_11.v variable */ > (0.5) * (data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */));
    data->simulationInfo->relations[99] = (data->localData[0]->realVars[371] /* LOAD_11.v variable */ < data->simulationInfo->realParameter[379] /* LOAD_11.PQBRAK PARAM */);
    data->simulationInfo->relations[100] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2186] /* pwFault.t1 PARAM */);
    data->simulationInfo->relations[101] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[2187] /* pwFault.t2 PARAM */);
    data->simulationInfo->relations[102] = (data->localData[0]->timeValue >= data->simulationInfo->realParameter[458] /* LOAD_12.t1 PARAM */);
    data->simulationInfo->relations[103] = (data->localData[0]->timeValue <= data->simulationInfo->realParameter[458] /* LOAD_12.t1 PARAM */ + data->simulationInfo->realParameter[452] /* LOAD_12.d_t PARAM */);
    data->simulationInfo->relations[104] = (data->localData[0]->realVars[377] /* LOAD_12.v variable */ < (0.5) * (data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */));
    data->simulationInfo->relations[105] = (data->localData[0]->realVars[377] /* LOAD_12.v variable */ > 0.0);
    data->simulationInfo->relations[106] = (data->localData[0]->realVars[377] /* LOAD_12.v variable */ > (0.5) * (data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */));
    data->simulationInfo->relations[107] = (data->localData[0]->realVars[377] /* LOAD_12.v variable */ < data->simulationInfo->realParameter[421] /* LOAD_12.PQBRAK PARAM */);
    data->simulationInfo->relations[108] = (data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[1941] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[109] = ((data->simulationInfo->realParameter[1937] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[658] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[110] = (data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[1942] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[111] = ((data->simulationInfo->realParameter[1937] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[658] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[91] /* gen_Bus_6_1.iEEET1_1.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[112] = (data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[2107] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[113] = ((data->simulationInfo->realParameter[2103] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[693] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[114] = (data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[2108] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[115] = ((data->simulationInfo->realParameter[2103] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[693] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[101] /* gen_Bus_8_1.iEEET1_1.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[116] = (data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[1775] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[117] = ((data->simulationInfo->realParameter[1771] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[623] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[118] = (data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[1776] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[119] = ((data->simulationInfo->realParameter[1771] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[623] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[81] /* gen_Bus_3_1.iEEET1_1.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[120] = (data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[1238] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[121] = ((data->simulationInfo->realParameter[1234] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[525] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[122] = (data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[1239] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[123] = ((data->simulationInfo->realParameter[1234] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[525] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[45] /* gen_Bus_2_1.iEEET1_1.simpleLagLim.state STATE(1) */ > 0.0);
    data->simulationInfo->relations[124] = (data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */ > data->simulationInfo->realParameter[703] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMax PARAM */);
    data->simulationInfo->relations[125] = ((data->simulationInfo->realParameter[699] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[425] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */ < 0.0);
    data->simulationInfo->relations[126] = (data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */ < data->simulationInfo->realParameter[704] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.outMin PARAM */);
    data->simulationInfo->relations[127] = ((data->simulationInfo->realParameter[699] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.K PARAM */) * (data->localData[0]->realVars[425] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.u variable */) - data->localData[0]->realVars[9] /* gen_Bus_1_1.iEEET1_1.simpleLagLim.state STATE(1) */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

