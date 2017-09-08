//
// Created by Andrii Lohashchuk on 8/4/17.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap create" << std::endl;
	return;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destroy" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
	return;
}

// DAMAGE AND REPAIRED

void ClapTrap::takeDamaged(unsigned int amount) {
	if (amount - this->_armorDamageReduction > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= (amount - this->_armorDamageReduction);
	std::cout << "Damaged: " << amount - this->_armorDamageReduction << " hit points" << std::endl;
	std::cout << this->_name <<" has " << this->_hitPoints << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	this->_hitPoints += amount;
	this->_hitPoints = this->_hitPoints > _maxHitPoints ? 100 : this->_hitPoints;
	std::cout << this->_name << " Repaired: " << amount << " hit points" << std::endl;
	std::cout << this->_name << " has: " << this->_hitPoints << " hit points" << std::endl;
}

unsigned int ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

// STANDART ATTACKS

void ClapTrap::rangedAttack(std::string const &target) {
	std::cout << "CL4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" <<
	          this->_rangedAttackDamage << "> points of damage !" << std::endl;

}

void ClapTrap::meleeAttack(std::string const &target) {
	std::cout << "CL4G-TP <" << this->_name << "> attacks <" << target << "> at melee, causing <" <<
	          this->_meleeAttackDamage << "> points of damage !" << std::endl;
}

// overload operator

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs) {
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	return *this;
}