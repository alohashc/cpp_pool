//
// Created by Andrii Lohashchuk on 9/1/17.
//

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
	*this = src;
	return;
}

TacticalMarine::~TacticalMarine(){
	std::cout << "Aaargh ..." << std::endl;
	return;
}

ISpaceMarine* TacticalMarine::clone() const {
	return (new TacticalMarine);
}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << std::endl;
}

// OVERLOAD

TacticalMarine& TacticalMarine::operator=(TacticalMarine const &rhs) {
	(void)rhs;
	return *this;
}