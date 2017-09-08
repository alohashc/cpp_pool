//
// Created by Andrii Lohashchuk on 8/4/17.
//

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap();

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	void ninjaShoebox(ClapTrap & src);
	void ninjaShoebox(FragTrap & src);
	void ninjaShoebox(ScavTrap & src);
	void ninjaShoebox(NinjaTrap & src);
};

#endif
