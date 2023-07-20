cmake_minimum_required(VERSION 2.8)

project(libfoo)

set(SOURCE_LIB Derivative.cpp Instance.cpp)
add_library(libfoo SHARED ${SOURCE_LIB})

