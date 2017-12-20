cmake_minimum_required(VERSION 3.9)
project(pp_program5_20gru2017)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES program.cpp program.h)
set(MAIN_FILES ${SOURCE_FILES} main.cpp)
set(TEST_FILES ${SOURCE_FILES} catch.hpp test.cpp)

add_executable(pp_program5_20gru2017 ${MAIN_FILES})
add_executable(pp_program5_20gru2017_test ${TEST_FILES})