cmake_minimum_required(VERSION 3.7)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Sorcerer.hpp Victim.hpp Peon.hpp Sorcerer.cpp Victim.cpp Peon.cpp)
add_executable(ex00 ${SOURCE_FILES})