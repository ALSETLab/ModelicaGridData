/* External objects file */
#include "IEEE14.IEEE14_Base_Case_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void IEEE14_IEEE14_Base_Case_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo->extObjs)
  {
    free(data->simulationInfo->extObjs);
    data->simulationInfo->extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif

