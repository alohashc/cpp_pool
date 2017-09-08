//
// Created by Andrii Lohashchuk on 8/9/17.
//

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy{
private:

public:

	RadScorpion();
	RadScorpion(RadScorpion const & src);
	~RadScorpion();

	RadScorpion &operator=(RadScorpion const & rhs);

	virtual void takeDamage(int);
};

#endif
