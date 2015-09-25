cmake_minimum_required(VERSION 3.0)
project(Calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES_CALC AST.cpp Parser.cpp calcMain.cpp)
set(SOURCE_FILES_POSTFIX AST.cpp Parser.cpp calc2PostfixMain.cpp)
set(SOURCE_FILES_SEXPR AST.cpp Parser.cpp calc2SexprMain.cpp)
add_executable(calc ${SOURCE_FILES_CALC})
add_executable(calc2postfix ${SOURCE_FILES_POSTFIX})
add_executable(calc2sexpr ${SOURCE_FILES_SEXPR})
