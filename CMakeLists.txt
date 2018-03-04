cmake_minimum_required(VERSION 3.9)
project(CAD)

set(CMAKE_CXX_STANDARD 11)
include_directories(/home/mira/Documents/COP290/Eigen)
add_executable(CAD main.cpp graphics.h linalg.h Point.h util.h)