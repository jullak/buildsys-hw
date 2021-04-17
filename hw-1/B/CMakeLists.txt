cmake_minimum_required(VERSION 3.8)

project(hw-b-lib)

add_library(hw-b-lib SHARED
    ${PROJECT_SOURCE_DIR}/lib.cpp
    ${PROJECT_SOURCE_DIR}/lib.h
)
 
set_target_properties(hw-b-lib PROPERTIES
    PUBLIC_HEADER ${PROJECT_SOURCE_DIR}/lib.h
)

target_include_directories(hw-b-lib PRIVATE .)
