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
    std::cout << this->_name << " here!!!!" << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name) :_name(name){
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    std::cout << name << " here!!!!" << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
    *this = src;
    std::cout << this->_name << " here!!!" << std::endl;
    return;
}

ScavTrap::~ScavTrap() {
    std::cout << "destroying complete" << std::endl;
    return;
}

unsigned int ScavTrap::getHitPoints() const {
    return this->_hitPoints;
}

// overload operator

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs) {
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


// STANDART ATTACKS

void ScavTrap::rangedAttack(std::string const &target) {
    std::cout << "SC4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" <<
              this->_rangedAttackDamage << "> points of damage !" << std::endl;

}

void ScavTrap::meleeAttack(std::string const &target) {
    std::cout << "SC4G-TP <" << this->_name << "> attacks <" << target << "> at melee, causing <" <<
              this->_meleeAttackDamage << "> points of damage !" << std::endl;
}


// DAMAGE AND REPAIRED

void ScavTrap::takeDamaged(unsigned int amount) {
    if (amount - this->_armorDamageReduction > this->_hitPoints)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= (amount - this->_armorDamageReduction);
    std::cout << "Damaged: " << amount - this->_armorDamageReduction << " hit points" << std::endl;
    std::cout << this->_name <<" has " << this->_hitPoints << " hit points" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount){
    this->_hitPoints += amount;
    this->_hitPoints = this->_hitPoints > _maxHitPoints ? 100 : this->_hitPoints;
    std::cout << this->_name << " Repaired: " << amount << " hit points" << std::endl;
    std::cout << this->_name << " has: " << this->_hitPoints << " hit points" << std::endl;
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
    
    int index = rand() % 5;
    (this->*arrChallenge[index])(target);
}

void ScavTrap::_randomChallenge1(std::string const &target) {
    std::cout << "Random Challenge 1" << std::endl;
}

void ScavTrap::_randomChallenge2(std::string const &target) {
    std::cout << "Random Challenge 2" << std::endl;
}

void ScavTrap::_randomChallenge3(std::string const &target) {
    std::cout << "Random Challenge 3" << std::endl;
}

void ScavTrap::_randomChallenge4(std::string const &target) {
    std::cout << "Random Challenge 4" << std::endl;
}

void ScavTrap::_randomChallenge5(std::string const &target) {
    std::cout << "Random Challenge 5" << std::endl;
}