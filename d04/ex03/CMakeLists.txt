cmake_minimum_required(VERSION 3.7)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp AMateria.hpp AMateria.cpp Ice.hpp Ice.cpp Cure.hpp Cure.cpp Character.hpp Character.cpp MateriaSource.hpp MateriaSource.cpp ICharacter.hpp IMateriaSource.hpp)
add_executable(ex03 ${SOURCE_FILES})