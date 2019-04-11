TARGET = tp_pipeline_math_utils
TEMPLATE = lib

DEFINES += TP_PIPELINE_MATH_UTILS_LIBRARY

SOURCES += src/Globals.cpp
HEADERS += inc/tp_pipeline_math_utils/Globals.h

#-- Members ----------------------------------------------------------------------------------------
SOURCES += src/members/PolygonsMember.cpp
HEADERS += inc/tp_pipeline_math_utils/members/PolygonsMember.h

SOURCES += src/members/FloatsMember.cpp
HEADERS += inc/tp_pipeline_math_utils/members/FloatsMember.h

SOURCES += src/members/RegionsMember.cpp
HEADERS += inc/tp_pipeline_math_utils/members/RegionsMember.h
