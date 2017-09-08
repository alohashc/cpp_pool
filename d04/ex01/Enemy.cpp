//
// Created by Andrii Lohashchuk on 8/9/17.
//
#include "Enemy.hpp"

Enemy::Enemy() {
	return;
}

Enemy::Enemy(std::string const &type, int hp) {
	this->_type = type;
	this->_hp = hp;
	return;
}

Enemy::Enemy(Enemy const &src) {
	*this = src;
	return;
}

Enemy::~Enemy() {
	return;
}

Enemy& Enemy::operator=(Enemy const &rhs) {
	this->_type = rhs.getType();
	this->_hp = rhs.getHP();
	return *this;
}

// GETTER

std::string Enemy::getType() const {
	return this->_type;
}

int Enemy::getHP() const {
	return this->_hp;
}

// SETTER

void Enemy::setType(std::string type) {
	this->_type = type;
}

void Enemy::setHP(int hp) {
	this->_hp = hp;
}

// DAMAGE

void Enemy::takeDamage(int damage) {
	if (damage >= 0)
	{
		if (_hp - damage > 0)
			_hp -= damage;
		else
			_hp = 0;
	}
}
