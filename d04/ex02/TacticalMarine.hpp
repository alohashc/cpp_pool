//
// Created by Andrii Lohashchuk on 9/1/17.
//

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine{
private:

public:

	TacticalMarine();
	TacticalMarine(TacticalMarine const & src);
	~TacticalMarine();

	TacticalMarine &operator=(TacticalMarine const & rhs);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
