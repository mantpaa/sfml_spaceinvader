cmake_minimum_required(VERSION 3.6)
project(sfml_spaceinvader)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

set(SOURCE_FILES main.cpp)
add_executable(sfml_spaceinvader ${SOURCE_FILES})

target_link_libraries(sfml_spaceinvader sfml-system sfml-graphics sfml-window)