//
// Created by Andrii Lohashchuk on 11/4/17.
//

#ifndef RUSH00_PLAYER_HPP
#define RUSH00_PLAYER_HPP

#include "Enemy.hpp"

class Player{
    
    protected:
        int     score;
        int     x;
        int     y;
        int     hp;
        int     width;
        int     hight;
        std::string display;
        std::string name;

    public:
        
        Player();
        Player(int width, int hight);
        Player(Player const & src);
        ~Player();

        Player &operator=(Player const &rhs);
        void    operator+=(int score);
        void    operator-=(int damage);

        int getY() const;
        int getX() const;
        int  getScore(void) const;

        void setX(int x);
        void setY(int y);
        void setScore(int score);
        void move(int in_char);
        void die(void);

        int getHp() const;
        void Dam(int dam);
        void setHp(int hp);
        std::string getDisplay() const;
        std::string getName() const;

        std::string healt(int hp);
        int colorHealth(int hp);

};

#endif //RUSH00_PLAYER_HPP
