//
// Created by Andrii Lohashchuk on 8/9/17.
//

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon{
protected:

	std::string _name;
	int         _damage;
	int         _apcost;

public:
	AWeapon();
	AWeapon(std::string const & name, int damage, int apcost);
	AWeapon(AWeapon const & src);
	virtual ~AWeapon();

	AWeapon &operator=(AWeapon const & rhs);

	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;

	void setName(std::string name);
	void setAPCost(int ap);
	void setDamage(int damage);

	virtual void attack() const = 0;

};

#endif
