//
// Created by Andrii Lohashchuk on 8/9/17.
//
#include "Character.hpp"

Character::Character() {
	this->_ap = 40;
	this->_flag = 0;
	return;
}

Character::Character(std::string const &name) :_name(name){
	this->_ap = 40;
	this->_flag = 0;
	return;
}

Character::Character(Character const &src) {
	*this = src;
	return;
}

Character::~Character() {
	return;
}

// OVERLOAD

Character& Character::operator=(Character const &rhs) {
	this->_name = rhs.getName();
	this->_ap = rhs.getAP();
	this->_weapon = rhs.getWeapon();
	this->_flag = rhs._flag;
	return *this;
}

std::ostream &operator<<(std::ostream & o, Character const & rhs)
{
	if (rhs.getFlag())
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	return o;
}

// GETTER

std::string Character::getName() const {
	return this->_name;
}

int Character::getAP() const {
	return this->_ap;
}

AWeapon *Character::getWeapon() const {
	return this->_weapon;
}

int Character::getFlag() const {
	return this->_flag;
}

// ACTION

void Character::recoverAP() {
	if (this->_ap + 10 < 40)
		this->_ap += 10;
	else
		this->_ap = 40;
}

void Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
	this->_flag = 1;
}

void Character::attack(Enemy *enemy) {
	if (this->_weapon)
	{
		std::cout << this->getName() << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		this->_ap -= getWeapon()->getAPCost();
		enemy->takeDamage(this->_weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}