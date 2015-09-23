cmake_minimum_required(VERSION 3.0)
project(Calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES AST.cpp Parser.cpp main.cpp)
add_executable(Calculator ${SOURCE_FILES})