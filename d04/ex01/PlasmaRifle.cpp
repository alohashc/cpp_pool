//
// Created by Andrii Lohashchuk on 8/9/17.
//
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5){
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) {
	*this = src;
	return;
}

PlasmaRifle::~PlasmaRifle() {
	return;
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs) {
	this->setName(rhs.getName());
	this->setAPCost(rhs.getAPCost());
	this->setDamage(rhs.getDamage());
	return *this;
}
