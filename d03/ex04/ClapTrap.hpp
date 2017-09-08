//
// Created by Andrii Lohashchuk on 8/4/17.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
protected:
    unsigned int _hitPoints,
                    _maxHitPoints,
                    _energyPoints,
                    _maxEnergyPoints,
                    _level,
                    _meleeAttackDamage,
                    _rangedAttackDamage,
                    _armorDamageReduction;
    std::string _name;

public:
    ClapTrap();
	ClapTrap(ClapTrap const & src);
    ~ClapTrap();

	ClapTrap &operator=(ClapTrap const & rhs);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamaged(unsigned int amount);
    void beRepaired(unsigned int amount);

    unsigned int getHitPoints() const;

};

#endif
