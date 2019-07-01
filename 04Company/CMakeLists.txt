cmake_minimum_required(VERSION 3.13)
project(04Company)

set(CMAKE_CXX_STANDARD 14)

add_executable(04Company main.cpp employee.cpp employee.h Technician.cpp Technician.h Manager.cpp Manager.h)