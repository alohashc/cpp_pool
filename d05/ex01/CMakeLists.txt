cmake_minimum_required(VERSION 3.7)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Bureaucrat.cpp Bureaucrat.hpp Form.hpp Form.cpp)
add_executable(ex01 ${SOURCE_FILES})