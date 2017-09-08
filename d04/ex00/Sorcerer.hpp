//
// Created by Andrii Lohashchuk on 8/7/17.
//

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Peon.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;

public:
	Sorcerer();
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	~Sorcerer();

	Sorcerer &operator=(Sorcerer const & rhs);

	void polymorph(Victim const & rhs) const;

	std::string getName() const;
	std::string getTitle() const;
};

std::ostream &operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
