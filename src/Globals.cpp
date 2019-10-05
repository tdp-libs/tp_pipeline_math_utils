#include "tp_pipeline_math_utils/Globals.h"

#include "tp_pipeline/Globals.h"

namespace tp_pipeline_math_utils
{
TP_DEFINE_ID(                     polygonsSID,                         "Polygons");
TP_DEFINE_ID(                       floatsSID,                           "Floats");
TP_DEFINE_ID(                      regionsSID,                          "Regions");

//##################################################################################################
void createStepDelegates(tp_pipeline::StepDelegateMap& stepDelegates, const tp_data::CollectionFactory* collectionFactory)
{
  TP_UNUSED(stepDelegates);
  TP_UNUSED(collectionFactory);
}

REGISTER_CREATE_STEP_DELEGATES;

//##################################################################################################
int staticInit()
{
  return 0;
}

}
