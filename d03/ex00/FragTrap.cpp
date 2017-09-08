//
// Created by Andrii Lohashchuk on 8/1/17.
//
#include "FragTrap.hpp"

FragTrap::FragTrap():_name("FragTrap") {
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string name) : FragTrap(){
	this->_name = name;
    std::cout << "Constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src){
    *this = src;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor called" << std::endl;
}

unsigned int FragTrap::getHitPoints() const {
    return this->_hitPoints;
}

// STANDART ATTACKS

void FragTrap::rangedAttack(std::string const &target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" <<
                                this->_rangedAttackDamage << "> points of damage !" << std::endl;

}

void FragTrap::meleeAttack(std::string const &target) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at melee, causing <" <<
              this->_meleeAttackDamage << "> points of damage !" << std::endl;
}



// DAMAGE AND REPAIRED

void FragTrap::takeDamaged(unsigned int amount) {
    if (amount - this->_armorDamageReduction > this->_hitPoints)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= (amount - this->_armorDamageReduction);
    std::cout << "Damaged: " << amount - this->_armorDamageReduction << " hit points" << std::endl;
    std::cout << this->_name <<" has " << this->_hitPoints << " hit points" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount){
    this->_hitPoints += amount;
    this->_hitPoints = this->_hitPoints > _maxHitPoints ? 100 : this->_hitPoints;
    std::cout << this->_name << " Repaired: " << amount << " hit points" << std::endl;
    std::cout << this->_name << " has: " << this->_hitPoints << " hit points" << std::endl;
}



// RANDOM ACTION

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
    void (FragTrap::*arrAction[5])(std::string const &target) = {
            &FragTrap::_randomAction1,
            &FragTrap::_randomAction2,
            &FragTrap::_randomAction3,
            &FragTrap::_randomAction4,
            &FragTrap::_randomAction5
    };
    int tmp_energy = (int)this->_energyPoints - 25;
    if (tmp_energy >= 0)
    {
        this->_energyPoints -= 25;
        int index = rand() % 5;
        (this->*arrAction[index])(target);
    }
    else
    {
        std::cout << "Not enough energy points!" << std::endl;
        std::cout << "Energy points: " << this->_energyPoints << std::endl;
    }
}

void FragTrap::_randomAction1(std::string const &target) {
    std::cout << "Random action 1" << std::endl;
    this->rangedAttack(target);
}

void FragTrap::_randomAction2(std::string const &target) {
    std::cout << "Random action 2" << std::endl;
    this->meleeAttack(target);
}

void FragTrap::_randomAction3(std::string const &target) {
    std::cout << "Random action 3" << std::endl;
    this->rangedAttack(target);
}

void FragTrap::_randomAction4(std::string const &target) {
    std::cout << "Random action 4" << std::endl;
    this->meleeAttack(target);
}

void FragTrap::_randomAction5(std::string const &target) {
    std::cout << "Random action 5" << std::endl;
    this->meleeAttack(target);
}



// overload operator

FragTrap& FragTrap::operator=(FragTrap const &rhs) {
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