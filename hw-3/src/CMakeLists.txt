add_library(buffer SHARED buffer.cpp)
set_target_properties(buffer
     PROPERTIES
     PUBLIC_HEADER buffer.h
 )
