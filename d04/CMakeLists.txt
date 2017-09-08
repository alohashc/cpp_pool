cmake_minimum_required(VERSION 3.7)
project(d04)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        ex00/main.cpp
        ex00/Peon.cpp
        ex00/Peon.hpp
        ex00/Sorcerer.cpp
        ex00/Sorcerer.hpp
        ex00/Victim.cpp
        ex00/Victim.hpp
        ex01/AWeapon.cpp
        ex01/AWeapon.hpp
        ex01/Character.cpp
        ex01/Character.hpp
        ex01/Enemy.cpp
        ex01/Enemy.hpp
        ex01/main.cpp
        ex01/PlasmaRifle.cpp
        ex01/PlasmaRifle.hpp
        ex01/PowerFist.cpp
        ex01/PowerFist.hpp
        ex01/RadScorpion.cpp
        ex01/RadScorpion.hpp
        ex01/SuperMutant.cpp
        ex01/SuperMutant.hpp
        ex02/AssaultTerminator.cpp
        ex02/AssaultTerminator.hpp
        ex02/ISpaceMarine.hpp
        ex02/ISquad.hpp
        ex02/main.cpp
        ex02/Squad.cpp
        ex02/Squad.hpp
        ex02/TacticalMarine.cpp
        ex02/TacticalMarine.hpp
        ex03/AMateria.cpp
        ex03/AMateria.hpp
        ex03/Character.cpp
        ex03/Character.hpp
        ex03/Cure.cpp
        ex03/Cure.hpp
        ex03/Ice.cpp
        ex03/Ice.hpp
        ex03/ICharacter.hpp
        ex03/IMateriaSource.hpp
        ex03/main.cpp
        ex03/MateriaSource.cpp
        ex03/MateriaSource.hpp)

add_executable(d04 ${SOURCE_FILES})