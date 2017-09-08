//
// Created by Andrii Lohashchuk on 9/1/17.
//

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src) {
	std::cout << "* teleports from space *" << std::endl;
	*this = src;
	return;
}

AssaultTerminator::~AssaultTerminator(){
	std::cout << "I’ll be back ..." << std::endl;
	return;
}

ISpaceMarine* AssaultTerminator::clone() const {
	return (new AssaultTerminator);
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

// OVERLOAD

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const &rhs) {
	(void)rhs;
	return *this;
}