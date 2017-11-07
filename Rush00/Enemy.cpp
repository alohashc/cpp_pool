//
// Created by Andrii Lohashchuk on 11/4/17.
//

#include "Enemy.hpp"

Enemy::Enemy() {

}

Enemy::Enemy(int width, int hight) : 
    x((rand() % width) - 2), y((rand() % hight)),
    hight(hight), width(width), display('X')
{
}

Enemy::Enemy(Enemy const &src) {
    *this = src;
}

Enemy::~Enemy() {

}

Enemy& Enemy::operator=(Enemy const &rhs) {

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

int Enemy::getX() const {
    return x;
}

void Enemy::setX(int x) {
    Enemy::x = x;
}

int Enemy::getY() const {
    return this->y;
}

void Enemy::setY(int y) {
    Enemy::y = y;
}

int Enemy::getDisplay() const {
    return display;
}

void Enemy::setDisplay(int display) {
    Enemy::display = display;
}

void Enemy::move() {

    srand(clock());
    if (this->y > this->hight - 12)
    {
        this->x = rand() % this->width - 1;
        if (this->x == 0)
            this->x += 1;
        this->y = 1;
    }
    else
        this->y += 0.5;
}

void Enemy::setHight(int hight) {
    Enemy::hight = hight;
}

void Enemy::setWidth(int width) {
    Enemy::width = width;
}
