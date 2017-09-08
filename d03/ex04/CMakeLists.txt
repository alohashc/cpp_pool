cmake_minimum_required(VERSION 3.7)
project(ex04)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp FragTrap.hpp FragTrap.cpp ScavTrap.hpp ScavTrap.cpp
        ClapTrap.hpp ClapTrap.cpp NinjaTrap.cpp NinjaTrap.hpp SuperTrap.hpp SuperTrap.cpp)
add_executable(ex04 ${SOURCE_FILES})