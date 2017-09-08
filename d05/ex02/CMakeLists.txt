cmake_minimum_required(VERSION 3.7)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Bureaucrat.hpp Bureaucrat.cpp Form.cpp Form.hpp ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp RobotomyRequestForm.cpp RobotomyRequestForm.hpp PresidentialPardonForm.cpp PresidentialPardonForm.hpp)
add_executable(ex02 ${SOURCE_FILES})