//
// Created by Andrii Lohashchuk on 8/7/17.
//
#include "Peon.hpp"

Peon::Peon() : Victim("Peon"){
	return;
}

Peon::Peon(std::string name) : Victim(name){
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(Peon const &src) {
	*this = src;
	return;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon& Peon::operator=(Peon const &rhs) {
	this->setName(rhs.getName());
	return *this;
}

std::ostream & operator<<(std::ostream & o, Peon const & rhs)
{
	o << "I am " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}

void Peon::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}