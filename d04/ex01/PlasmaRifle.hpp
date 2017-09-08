//
// Created by Andrii Lohashchuk on 8/9/17.
//

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
private:

public:

	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const & src);
	~PlasmaRifle();

	PlasmaRifle &operator=(PlasmaRifle const & rhs);

	void attack() const;
};

#endif
