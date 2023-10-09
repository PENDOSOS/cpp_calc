cmake_minimum_required(VERSION 3.26)
									
project(calc)				

set(CMAKE_CXX_STANDARD 20)
set(PROJECT_HEADERS src/calculator.h src/number.h)
add_executable(calc src/main.cpp src/calculator.cpp src/number.cpp)
add_library(funcsin SHARED ./plugins/funcsin/funcsin.cpp "plugins/funcsin/funcsin.cpp")
add_library(funcdeg SHARED ./plugins/funcdeg/funcdeg.cpp "plugins/funcdeg/funcdeg.cpp")	