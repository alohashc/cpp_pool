//
// Created by Andrii Lohashchuk on 8/4/17.
//
#include "SuperTrap.hpp"

SuperTrap::SuperTrap() {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = "SuperTrap";
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "SuperTrap create" << std::endl;
	return;
}

SuperTrap::SuperTrap(std::string name) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "SuperTrap create" << std::endl;
	return;
}

SuperTrap::SuperTrap(SuperTrap const &src) {
	*this = src;
	std::cout << "SuperTrap create" << std::endl;
	return;
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap destroy" << std::endl;
	return;
}

void SuperTrap::meleeAttack(std::string const &target) {
	FragTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string const &target) {
	NinjaTrap::rangedAttack(target);
}
