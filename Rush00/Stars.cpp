
#include "Stars.hpp"

Stars::Stars() {

}

Stars::Stars(int width, int hight) {
    this->x = (rand() % width) + 2;
    this->y = rand() % hight;
    this->hight = hight;
    this->width = width;
    this->display = '.';
}

Stars::Stars(Stars const &src) {
    *this = src;
}

Stars::~Stars() {

}

Stars& Stars::operator=(Stars const &rhs) {

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

void    Stars::move() {

    srand(clock());
    if (this->y > this->hight - 12)
    {
        this->x = rand() % this->width - 1;
        if (this->x == 0)
            this->x += 1;
        this->y = 1;
    }
    else
        this->y += 0.1;
}
