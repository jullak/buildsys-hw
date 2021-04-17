cmake_minimum_required(VERSION 3.8)

project(hw-1)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

execute_process(COMMAND git submodule init)
execute_process(COMMAND git submodule update)

add_subdirectory(third_party)
add_subdirectory(A)
add_subdirectory(B)
add_subdirectory(C)