#ifndef tp_pipeline_math_utils_RegionsMember_h
#define tp_pipeline_math_utils_RegionsMember_h

#include "tp_pipeline_math_utils/Globals.h"

#include "tp_data/AbstractMember.h"

#include "tp_math_utils/Region.h"

namespace tp_pipeline_math_utils
{

//##################################################################################################
class RegionsMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  RegionsMember(const std::string& name);

  std::vector<tp_math_utils::Region> data;
};

}

#endif
