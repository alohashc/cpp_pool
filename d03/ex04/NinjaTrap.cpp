//
// Created by Andrii Lohashchuk on 8/4/17.
//
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
	this->_name = "NinjaTrap";
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "NinjaTrap create" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) {
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_name = name;
	std::cout << "NinjaTrap create" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src) {
	*this = src;
	std::cout << "NinjaTrap create" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap create" << std::endl;
}

// STANDART ATTACKS

void NinjaTrap::rangedAttack(std::string const &target) {
	std::cout << "Ninja <" << this->_name << "> attacks <" << target << "> at range, causing <" <<
	          this->_rangedAttackDamage << "> points of damage !" << std::endl;

}

void NinjaTrap::meleeAttack(std::string const &target) {
	std::cout << "Ninja <" << this->_name << "> attacks <" << target << "> at melee, causing <" <<
	          this->_meleeAttackDamage << "> points of damage !" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &src) {
	src.meleeAttack("Hulk");
	src.rangedAttack("Hulk");
}

void NinjaTrap::ninjaShoebox(FragTrap &src) {
	src.meleeAttack("Hulk");
	src.rangedAttack("Hulk");
}

void NinjaTrap::ninjaShoebox(ScavTrap &src) {
	src.meleeAttack("Hulk");
	src.rangedAttack("Hulk");
}

void NinjaTrap::ninjaShoebox(NinjaTrap &src) {
	src.meleeAttack("Hulk");
	src.rangedAttack("Hulk");
}
