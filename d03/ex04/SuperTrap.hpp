//
// Created by Andrii Lohashchuk on 8/4/17.
//

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap{
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & src);
	~SuperTrap();

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
};

#endif
