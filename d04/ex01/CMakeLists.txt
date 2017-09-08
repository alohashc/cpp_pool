cmake_minimum_required(VERSION 3.7)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp AWeapon.hpp AWeapon.cpp PlasmaRifle.hpp PlasmaRifle.cpp PowerFist.hpp PowerFist.cpp Enemy.hpp Enemy.cpp SuperMutant.hpp SuperMutant.cpp RadScorpion.hpp RadScorpion.cpp Character.hpp Character.cpp)
add_executable(ex01 ${SOURCE_FILES})