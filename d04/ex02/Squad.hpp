//
// Created by Andrii Lohashchuk on 9/1/17.
//

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>
#include <string.h>

class Squad : public ISquad{
private:

	struct _sUnit
	{
		int index;
		ISpaceMarine *spaceMarines;
		struct _sUnit *next;
	};

	struct _sUnit *_listUnits;

public:

	Squad();
	Squad(Squad const & src);
	~Squad();

	Squad & operator=(Squad const & rhs);

	int getCount() const;
	ISpaceMarine *getUnit(int index) const;
	int push(ISpaceMarine*);
};

#endif
