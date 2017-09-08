//
// Created by Andrii Lohashchuk on 9/1/17.
//

#include "Squad.hpp"

Squad::Squad() : _listUnits(NULL){
	return ;
}

Squad::Squad(Squad const &src) {
	*this = src;
	return;
}

Squad::~Squad() {
	struct _sUnit *tmp = _listUnits;

	while (_listUnits)
	{
		delete _listUnits->spaceMarines;
		_listUnits = _listUnits->next;
		if (!_listUnits)
			delete tmp;
	}
	return;
}

int Squad::getCount() const {
	int numUnits = 0;
	struct _sUnit *begin = this->_listUnits;

	while(begin)
	{
		begin = begin->next;
		numUnits++;
	}
	return numUnits;
}

ISpaceMarine *Squad::getUnit(int index) const {
	struct _sUnit *begin = this->_listUnits;

	while (begin)
	{
		if(begin->index == index)
			return begin->spaceMarines;
		begin = begin->next;
	}
	return NULL;
}

int Squad::push(ISpaceMarine *spaceMarine) {
	struct _sUnit *begin = this->_listUnits;
	struct _sUnit *newUnit = new _sUnit();

	if (spaceMarine)
	{
		newUnit->spaceMarines = spaceMarine;
		newUnit->next = NULL;
		if (!_listUnits)
		{
			newUnit->index = 0;
			_listUnits = newUnit;
			return (this->getCount());
		}
		else
		{
			while (_listUnits->next)
				_listUnits = _listUnits->next;
			newUnit->index = _listUnits->index + 1;
		}
		_listUnits->next = newUnit;
		_listUnits = begin;
		return this->getCount();
	}
	return this->getCount();
}

// OVERLOAD

Squad& Squad::operator=(Squad const &rhs) {
	_listUnits = rhs._listUnits;
	return *this;
}
