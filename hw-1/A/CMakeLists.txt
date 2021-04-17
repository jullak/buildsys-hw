cmake_minimum_required(VERSION 3.8)

project(hw-a-lib)

add_custom_command(
    OUTPUT index.h
    COMMAND python3 preparing.py 
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
)

add_custom_target(
    codegen DEPENDS index.h
)