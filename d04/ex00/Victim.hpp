//
// Created by Andrii Lohashchuk on 8/7/17.
//

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim{
private:

	std::string _name;

public:
	Victim();
	Victim(std::string name);
	Victim(Victim const & src);
	virtual ~Victim();

	Victim &operator=(Victim const & rhs);

	virtual void getPolymorphed() const;

	void setName(std::string name);
	std::string getName() const;
};

std::ostream &operator<<(std::ostream & o, Victim const & rhs);

#endif
