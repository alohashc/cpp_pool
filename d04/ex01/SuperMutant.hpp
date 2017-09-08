//
// Created by Andrii Lohashchuk on 8/9/17.
//

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy{
private:

public:
	SuperMutant();
	SuperMutant(SuperMutant const & src);
	~SuperMutant();

	SuperMutant &operator=(SuperMutant const & rhs);

	virtual void takeDamage(int);
};

#endif
