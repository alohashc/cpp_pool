//
// Created by Andrii Lohashchuk on 11/4/17.
//

#include "Bullet.hpp"

Bullet::Bullet (void) {

}

Bullet::Bullet(int width, int hight) :
    x(-1), y(-1),
    width(width), hight(hight), display('|')
{
}

Bullet::Bullet(Bullet const &src) {
    *this = src;
}

Bullet::~Bullet() {
}

Bullet& Bullet::operator=(Bullet const &rhs) {

    if (this != &rhs)
    {
        this->x = rhs.x;
        this->y = rhs.y;
        this->width = rhs.width;
        this->hight = rhs.hight;
        this->display = rhs.display;                
    }
    return *this;
}

void	Bullet::setX(int x) {
    Bullet::x = x;
}

void	Bullet::setY(int y) {
    Bullet::y = y;
}

void	Bullet::setDisplay(char c) {
	this->display = c;
}

int		Bullet::getX(void) {

    return this->x;
}

char	Bullet::getDisplay(void) {

	return this->display;
}

int		Bullet::getY(void) {

    return this->y;
}

void	Bullet::move(void) {

    if (this->y > this->hight - 2 || this->y < 2)
    {
        this->x = -2;
        this->y = -2;
    }
    else
        this->y -= 0.7;
}
