//
// Created by Andrii Lohashchuk on 8/9/17.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character{
private:

	std::string _name;
	int         _ap;
	AWeapon     *_weapon;

	int         _flag;

public:

	Character();
	Character(std::string const & name);
	Character(Character const & src);
	~Character();

	Character &operator=(Character const & rhs);

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

	std::string getName() const;
	int getAP() const;
	AWeapon *getWeapon() const;
	int getFlag() const;
};

std::ostream &operator<<(std::ostream & o, Character const & rhs);

#endif
