cmake_minimum_required(VERSION 3.24)
project(MatrixLib)

set(CMAKE_CXX_STANDARD 17)

#add_library(MatrixLib library.cpp)

add_executable(Test main.cpp library.cpp Matrix.cpp Matrix.h)