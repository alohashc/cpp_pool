//
// Created by Andrii Lohashchuk on 8/2/17.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "FragTrap.hpp"

class ScavTrap{
private:
    unsigned int _hitPoints,
                    _maxHitPoints,
                    _energyPoints,
                    _maxEnergyPoints,
                    _level,
                    _meleeAttackDamage,
                    _rangedAttackDamage,
                    _armorDamageReduction;

    std::string _name;

    void    _randomChallenge1(std::string const & target);
    void    _randomChallenge2(std::string const & target);
    void    _randomChallenge3(std::string const & target);
    void    _randomChallenge4(std::string const & target);
    void    _randomChallenge5(std::string const & target);

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap();

    ScavTrap &operator=(ScavTrap const & rhs);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamaged(unsigned int amount);
    void beRepaired(unsigned int amount);

    void challengeNewcomer(std::string const & target);

    unsigned int getHitPoints() const;
};

#endif
