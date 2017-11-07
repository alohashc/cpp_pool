//
// Created by Andrii Lohashchuk on 11/4/17.
//

#ifndef RUSH00_ENEMY_HPP
#define RUSH00_ENEMY_HPP

#include "Window.hpp"


class Enemy {

protected:
    int x;
    float y;
    int hight;
    int width;
    int display;

public:
    void setHight(int hight);

    void setWidth(int width);

    Enemy();
    Enemy(int width, int hight);
    Enemy(Enemy const &src);
    ~Enemy();

    Enemy &operator=(Enemy const &rhs);

    virtual int getX() const;
    virtual void setX(int x);
    virtual int getY() const;
    virtual void setY(int y);
    virtual int getDisplay() const;
    virtual void setDisplay(int display);

    virtual void move();
};


#endif //RUSH00_ENEMY_HPP
