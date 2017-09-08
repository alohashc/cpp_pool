//
// Created by Andrii Lohashchuk on 9/3/17.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
public:

	~IMateriaSource() {}
	void learnMateria(AMateria*) = 0;
	AMateria* createMateria(std::string const & type) = 0;
};

#endif
