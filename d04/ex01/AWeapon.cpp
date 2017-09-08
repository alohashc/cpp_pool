//
// Created by Andrii Lohashchuk on 8/9/17.
//
#include "AWeapon.hpp"

AWeapon::AWeapon() {
	return;
}

AWeapon::AWeapon(std::string const &name, int damage, int apcost) {
	this->_damage = damage;
	this->_apcost = apcost;
	this->_name = name;
	return;
}

AWeapon::AWeapon(AWeapon const &src) {
	*this = src;
	return;
}

AWeapon::~AWeapon() {
	return;
}

AWeapon &AWeapon::operator=(AWeapon const &rhs) {
	this->_name = rhs.getName();
	this->_damage = rhs.getDamage();
	this->_apcost = rhs.getAPCost();
	return *this;
}

// GETTER

std::string AWeapon::getName() const {
	return this->_name;
}

int AWeapon::getDamage() const {
	return this->_damage;
}

int AWeapon::getAPCost() const {
	return this->_apcost;
}

// SETTER

void AWeapon::setName(std::string name) {
	this->_name = name;
}

void AWeapon::setAPCost(int ap) {
	this->_apcost = ap;
}

void AWeapon::setDamage(int damage) {
	this->_damage = damage;
}
