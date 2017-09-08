//
// Created by Andrii Lohashchuk on 8/9/17.
//

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon{
private:

public:

	PowerFist();
	PowerFist(PowerFist const & src);
	~PowerFist();

	PowerFist &operator=(PowerFist const & rhs);

	void attack() const;
};

#endif
