//
// Created by Andrii Lohashchuk on 8/7/17.
//
#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {
	return;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
	std::cout << this->_name << ", " << this->_title <<", is born !" << std::endl;
	return;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
	*this = src;
	std::cout << this->_name << ", " << this->_title <<", is born !" << std::endl;
	return;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title
	          <<", is dead. Consequences will never be the same !" << std::endl;
	return;
}

Sorcerer& Sorcerer::operator=(Sorcerer const &rhs) {
	this->_name = rhs.getName();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() <<", and I want to kill !" << std::endl;
	return o;
}

void Sorcerer::polymorph(Victim const & rhs) const {
	rhs.getPolymorphed();
}

std::string Sorcerer::getName() const {
	return this->_name;
}

std::string Sorcerer::getTitle() const {
	return this->_title;
}