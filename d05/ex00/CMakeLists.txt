cmake_minimum_required(VERSION 3.7)
project(d05)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Bureaucrat.hpp Bureaucrat.cpp)
add_executable(d05 ${SOURCE_FILES})