cmake_minimum_required(VERSION 3.12)
project(ndk-cmake-sample
    VERSION 0.1.0
    DESCRIPTION "Sample project for cross compiling Android from Windows with CMake."
    LANGUAGES CXX)

add_library(func SHARED func.cpp)

add_executable(sample main.cpp)
target_link_libraries(sample PUBLIC func)
