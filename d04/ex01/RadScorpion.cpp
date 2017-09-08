//
// Created by Andrii Lohashchuk on 8/9/17.
//
#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy("RadScorpion", 80){
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const &src) {
	*this = src;
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

// OVERLOAD

RadScorpion& RadScorpion::operator=(RadScorpion const &rhs) {
	this->setType(rhs.getType());
	this->setHP(rhs.getHP());
	return *this;
}

// DAMAGE

void RadScorpion::takeDamage(int damage) {
	int hp = getHP();

	damage -= 3;
	if (damage >= 0)
	{
		if (hp - damage > 0)
			hp -= damage;
		else
			hp = 0;
	}
	setHP(hp);
}