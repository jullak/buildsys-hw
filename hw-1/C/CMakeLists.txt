cmake_minimum_required(VERSION 3.8)

project(hw-c)

include_directories(${CMAKE_SOURCE_DIR})

add_executable(C main.cpp)
target_link_libraries(C hw-b-lib)
add_dependencies(C codegen)


enable_testing()
add_executable(CTest main_test.cpp test.cpp)
target_link_libraries(CTest hw-b-lib)
add_dependencies(CTest codegen)

target_include_directories(CTest PUBLIC ${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
target_link_libraries(CTest gtest gtest_main)
add_test(CTest CTest)