//
// Created by Andrii Lohashchuk on 8/9/17.
//
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8){
	return;
}

PowerFist::PowerFist(PowerFist const &src) {
	*this = src;
	return;
}

PowerFist::~PowerFist() {
	return;
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs) {
	this->setName(rhs.getName());
	this->setAPCost(rhs.getAPCost());
	this->setDamage(rhs.getDamage());
	return *this;
}
