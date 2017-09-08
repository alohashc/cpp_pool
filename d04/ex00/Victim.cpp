//
// Created by Andrii Lohashchuk on 8/7/17.
//
#include "Victim.hpp"

Victim::Victim() {
	return;
}

Victim::Victim(std::string name) : _name(name){
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return;
}

Victim::Victim(Victim const &src) {
	*this = src;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return;
}

Victim::~Victim() {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return;
}

Victim& Victim::operator=(Victim const &rhs) {
	this->setName(rhs.getName());
	return *this;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
	o << "I am " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}

void Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

void Victim::setName(std::string name) {
	this->_name = name;
}

std::string Victim::getName() const {
	return this->_name;
}