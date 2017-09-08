//
// Created by Andrii Lohashchuk on 8/7/17.
//

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {
public:

	Peon();
	Peon(std::string name);
	Peon(Peon const & src);
	~Peon();

	Peon &operator=(Peon const & rhs);

	void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream & o, Peon const & rhs);

#endif
