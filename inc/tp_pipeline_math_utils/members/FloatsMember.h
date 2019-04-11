#ifndef tp_pipeline_math_utils_FloatsMember_h
#define tp_pipeline_math_utils_FloatsMember_h

#include "tp_pipeline_math_utils/Globals.h"

#include "tp_data/AbstractMember.h"

namespace tp_pipeline_math_utils
{

//##################################################################################################
class FloatsMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  FloatsMember(const std::string& name);

  std::vector<float> data;
};

}

#endif
