cmake_minimum_required(VERSION 3.10)
project(Sorting
        VERSION 0.0.1
        DESCRIPTION "Basic sorting algorithms"
        LANGUAGES CXX)

add_executable(excute main.cpp)
target_compile_features(excute PRIVATE cxx_std_23)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)