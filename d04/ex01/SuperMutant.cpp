//
// Created by Andrii Lohashchuk on 8/9/17.
//
#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy("Super Mutant", 170){
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const &src) {
	*this = src;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
	return;
}

// OVERLOAD

SuperMutant& SuperMutant::operator=(SuperMutant const &rhs) {
	this->setType(rhs.getType());
	this->setHP(rhs.getHP());
	return *this;
}

void SuperMutant::takeDamage(int damage) {
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