#ifndef tp_pipeline_math_utils_Globals_h
#define tp_pipeline_math_utils_Globals_h

#include "tp_utils/StringID.h"

namespace tp_data
{
class CollectionFactory;
}

namespace tp_pipeline
{
class StepDelegateMap;
}

//##################################################################################################
//! Adds math utils data types to the processing pipeline.
namespace tp_pipeline_math_utils
{
tp_qt_DECLARE_ID(                     polygonsSID,                         "Polygons");
tp_qt_DECLARE_ID(                       floatsSID,                           "Floats");
tp_qt_DECLARE_ID(                      regionsSID,                          "Regions");

//##################################################################################################
//! Add the step delegates that this module provides to the StepDelegateMap
void createStepDelegates(tp_pipeline::StepDelegateMap& stepDelegates, const tp_data::CollectionFactory* collectionFactory);

//##################################################################################################
//! Static initialization of this module, see TP_STATIC_INIT in dependencies.pri
int staticInit();

}

#endif
