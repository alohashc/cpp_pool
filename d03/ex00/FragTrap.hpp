//
// Created by Andrii Lohashchuk on 8/1/17.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap{
private:
    unsigned int _hitPoints;
    unsigned int _maxHitPoints;
    unsigned int _energyPoints;
    unsigned int _maxEnergyPoints;
    unsigned int _level;

    std::string _name;

    FragTrap &operator=(FragTrap const & rhs);

    unsigned int _meleeAttackDamage;
    unsigned int _rangedAttackDamage;
    unsigned int _armorDamageReduction;

    void _randomAction1(std::string const & target);
    void _randomAction2(std::string const & target);
    void _randomAction3(std::string const & target);
    void _randomAction4(std::string const & target);
    void _randomAction5(std::string const & target);

public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap();

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamaged(unsigned int amount);
    void beRepaired(unsigned int amount);

    void vaulthunter_dot_exe(std::string const & target);

    unsigned int getHitPoints() const;
};

#endif
