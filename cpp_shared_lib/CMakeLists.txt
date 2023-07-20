cmake_minimum_required(VERSION 3.5)
project(foo)

add_subdirectory(lib)

include_directories(lib/include)
add_executable(foo main.cpp)
target_link_libraries(foo libfoo)

