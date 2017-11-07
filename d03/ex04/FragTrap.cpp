//
// Created by Andrii Lohashchuk on 8/1/17.
//
#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->_name = "FragTrap";
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
	std::cout << "FragTrap create" << std::endl;
}

FragTrap::FragTrap(std::string name){
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
	this->_name = name;
    std::cout << "FragTrap create" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src){
    *this = src;
	std::cout << "FragTrap create" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destroy" << std::endl;
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
		srand(clock());
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
