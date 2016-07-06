cmake_minimum_required(VERSION 2.8)
project(Volleyball_Manager)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Player.cpp Player.h Match.cpp Match.h)
add_executable(Volleyball_Manager ${SOURCE_FILES})
