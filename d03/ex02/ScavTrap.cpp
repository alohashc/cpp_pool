//
// Created by Andrii Lohashchuk on 8/2/17.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    this->_name = "ScavTrap";
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
	std::cout << "ScavTrap create" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
	this->_name = name;
	std::cout << "ScavTrap create" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
    *this = src;
    std::cout << "ScavTrap create" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destroy" << std::endl;
}

// STANDART ATTACKS

void ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "SC4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" <<
	          this->_rangedAttackDamage << "> points of damage !" << std::endl;

}

void ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "SC4G-TP <" << this->_name << "> attacks <" << target << "> at melee, causing <" <<
	          this->_meleeAttackDamage << "> points of damage !" << std::endl;
}

// RANDOM CHALLENGE

void ScavTrap::challengeNewcomer(std::string const &target) {
    void (ScavTrap::*arrChallenge[5])(std::string const & target) = {
            &ScavTrap::_randomChallenge1,
            &ScavTrap::_randomChallenge2,
            &ScavTrap::_randomChallenge3,
            &ScavTrap::_randomChallenge4,
            &ScavTrap::_randomChallenge5
    };
    srand(clock());
    int index = rand() % 5;
    (this->*arrChallenge[index])(target);
}

void ScavTrap::_randomChallenge1(std::string const &target) {
    std::cout << "Random Challenge 1" << target <<  std::endl;
}

void ScavTrap::_randomChallenge2(std::string const &target) {
    std::cout << "Random Challenge 2" << target << std::endl;
}

void ScavTrap::_randomChallenge3(std::string const &target) {
    std::cout << "Random Challenge 3" << target << std::endl;
}

void ScavTrap::_randomChallenge4(std::string const &target) {
    std::cout << "Random Challenge 4" << target <<  std::endl;
}

void ScavTrap::_randomChallenge5(std::string const &target) {
    std::cout << "Random Challenge 5" << target <<  std::endl;
}
