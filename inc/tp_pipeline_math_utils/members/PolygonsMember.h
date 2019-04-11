#ifndef tp_pipeline_math_utils_PolygonsMember_h
#define tp_pipeline_math_utils_PolygonsMember_h

#include "tp_pipeline_math_utils/Globals.h"

#include "tp_math_utils/Polygon.h"

#include "tp_data/AbstractMember.h"

namespace tp_pipeline_math_utils
{

//##################################################################################################
class PolygonsMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  PolygonsMember(const std::string& name);

  std::vector<tp_math_utils::Polygon> data;
};

}

#endif
