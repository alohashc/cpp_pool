//
// Created by Andrii Lohashchuk on 9/3/17.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
#include <string.h>

class AMateria {
private:

	unsigned int _xp;

public:

	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();

	std::string const & getType() const;
	unsigned int getXP() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
