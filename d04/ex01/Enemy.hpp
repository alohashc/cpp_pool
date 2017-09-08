//
// Created by Andrii Lohashchuk on 8/9/17.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy{
protected:

	std::string _type;
	int         _hp;

public:

	Enemy();
	Enemy(std::string const & type, int hp);
	Enemy(Enemy const & src);
	virtual ~Enemy();

	Enemy &operator=(Enemy const & rhs);

	std::string getType() const;
	int getHP() const;

	void setType(std::string type);
	void setHP(int hp);

	virtual void takeDamage(int);

};

#endif
