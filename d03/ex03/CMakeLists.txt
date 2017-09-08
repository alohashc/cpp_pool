cmake_minimum_required(VERSION 3.7)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp FragTrap.cpp FragTrap.hpp ScavTrap.cpp ScavTrap.hpp ClapTrap.cpp ClapTrap.hpp NinjaTrap.hpp NinjaTrap.cpp)
add_executable(ex03 ${SOURCE_FILES})