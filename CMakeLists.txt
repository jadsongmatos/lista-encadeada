cmake_minimum_required(VERSION 3.14)

project(e-t2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
#include(GoogleTest)
#add_library(gtest)

add_executable(e-t2 main.cpp)

#target_link_libraries(e-t2 Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(e-t2 GTest::GTest GTest::Main)

