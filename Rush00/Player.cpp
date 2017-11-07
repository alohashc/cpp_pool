//
// Created by Andrii Lohashchuk on 11/4/17.
//
#include "Window.hpp"
#include "Player.hpp"

Player::Player (void) {

}

Player::Player(int width, int hight) :
    score(0),
    x(width / 2), y((hight - 20) - 2),
    width(width), hight(hight), display("<A>")
{
    this->name = "alohashc";
    this->hp = 100;
}

Player::Player(Player const &src) {
    *this = src;
}

Player::~Player() {
}

Player& Player::operator=(Player const &rhs) {

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

int Player::getX() const {
    return x;
}

int Player::getY() const {
    return y;
}

std::string Player::getDisplay() const {
    return display;
}

int  Player::getScore(void) const {
    return score;
}

std::string Player::getName() const {
    return this->name;
}

int Player::getHp() const {
    return this->hp;
}

void Player::setX(int x) {
    Player::x = x;
}

void Player::setY(int y) {
    Player::y = y;
}

void Player::setScore(int score) {
    this->score = score;
}

void Player::Dam(int dam) {
    this->hp -= dam;
}

void Player::setHp(int hp) {
    this->hp = hp;
}

void Player::move(int in_char) {
    switch (in_char) {
        case KEY_UP:
        case 'w':
            if (this->y > 1)
                this->y -= 1;
            break;
        case KEY_DOWN:
        case 's':
            if (this->y < this->hight - 12)
                this->y += 1;
            break;
        case KEY_LEFT:
        case 'a':
            if (this->x > 1)        
            this->x -= 1;
            break;
        case KEY_RIGHT:
        case 'd':
            if (this->x < this->width - 2)
                this->x += 1;
            break;
        default:
            break;
    }
}

void    Player::operator+=(int score) {

    this->score += score;
}

void    Player::die(void) {
    this->hp = 0;
}

std::string Player::healt(int hp) {
    if (hp == 100)
        return ("|||||||||||||||");
    else if (hp == 80)
        return ("    |||||||||||");
    else if (hp == 60)
        return ("        |||||||");
    else if (hp == 40)
        return ("           ||||");
    else if (hp == 20)
        return ("              |");
    else if (hp == 0)
        return (" ");
    return " ";
}

int Player::colorHealth(int hp) {
    if (hp == 100)
        return 2;
    else if (hp == 80)
        return 2;
    else if (hp == 60)
        return 4;
    else if (hp == 40)
        return 3;
    else if (hp == 20)
        return 3;
    else if (hp == 0)
        return 3;
    return 0;
}
