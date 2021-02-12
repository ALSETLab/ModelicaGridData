#if defined(__cplusplus)
  extern "C" {
#endif
  int IEEE14_IEEE14_Base_Case_mayer(DATA* data, modelica_real** res, short*);
  int IEEE14_IEEE14_Base_Case_lagrange(DATA* data, modelica_real** res, short *, short *);
  int IEEE14_IEEE14_Base_Case_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int IEEE14_IEEE14_Base_Case_setInputData(DATA *data, const modelica_boolean file);
  int IEEE14_IEEE14_Base_Case_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif