cmake_minimum_required(VERSION 3.8)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp FragTrap.hpp FragTrap.cpp)
add_executable(ex00 ${SOURCE_FILES})