cmake_minimum_required(VERSION 3.13)


option(ON_ARM "Build for Arm" ON)

if(ON_ARM)
    if (${TOOLCHAIN_PATH} STREQUAL "")
        message(FATAL_ERROR "Need arm toolchain for complinig")
    endif()
    set(CMAKE_TOOLCHAIN_FILE ArmToolchain.cmake)
endif()

project(SimpleLibrary)

include_directories(include)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${SimpleLibrary_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${SimpleLibrary_SOURCE_DIR}/lib)

set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
set(CMAKE_INSTALL_RPATH "$ORIGIN/../lib-arm")
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

add_subdirectory(src)
add_executable(Main main.cpp)
add_executable(MainLib main_lib.cpp)

target_link_libraries(MainLib buffer)


install(
    TARGETS Main MainLib buffer
    RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin-arm
    LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib-arm
    ARCHIVE DESTINATION ${CMAKE_INSTALL_PREFIX}/lib-arm
)