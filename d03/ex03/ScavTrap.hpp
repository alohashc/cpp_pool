//
// Created by Andrii Lohashchuk on 8/2/17.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:
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

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

    void challengeNewcomer(std::string const & target);
};

#endif
