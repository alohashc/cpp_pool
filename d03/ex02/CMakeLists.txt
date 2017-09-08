cmake_minimum_required(VERSION 3.7.2)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp FragTrap.cpp ScavTrap.cpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp ClapTrap.cpp)
add_executable(ex02 ${SOURCE_FILES})