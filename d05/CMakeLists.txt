cmake_minimum_required(VERSION 3.7)
project(d05)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        classsss/car.cpp
        classsss/car.hpp
        classsss/main.cpp
        classsss/transoort.cpp
        classsss/transoort.hpp
        ex00/Bureaucrat.cpp
        ex00/Bureaucrat.hpp
        ex00/main.cpp
        ex01/Bureaucrat.cpp
        ex01/Bureaucrat.hpp
        ex01/Form.cpp
        ex01/Form.hpp
        ex01/main.cpp
        ex02/Bureaucrat.cpp
        ex02/Bureaucrat.hpp
        ex02/Form.cpp
        ex02/Form.hpp
        ex02/main.cpp
        ex02/PresidentialPardonForm.cpp
        ex02/PresidentialPardonForm.hpp
        ex02/RobotomyRequestForm.cpp
        ex02/RobotomyRequestForm.hpp
        ex02/ShrubberyCreationForm.cpp
        ex02/ShrubberyCreationForm.hpp
        test/main.cpp)

add_executable(d05 ${SOURCE_FILES})