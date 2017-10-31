/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:05:02 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:05:11 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n){
    int i = 0;

    std::cout << "Create Horde" << std::endl;
    initNames();
    Zombie* z = new Zombie[n];
    _z = z;
    while (i < n)
    {
        _z[i] = Zombie(randomName(), "Trup");
        i++;
    }
}

ZombieHorde::~ZombieHorde() {
    delete [] _z;
    std::cout << "Delete Horde" << std::endl;
}

void ZombieHorde::announce() {
    int i = 0;

    while (i < _n)
    {
        _z[i].announce();
        i++;
    }
}

void ZombieHorde::initNames() {
    this->_names[0] = "Boroda";
    this->_names[1] = "Trus";
    this->_names[2] = "Balbes";
    this->_names[3] = "Zhirik";
    this->_names[4] = "Puzyr";
    this->_names[5] = "Shpala";
    this->_names[6] = "Zhmot";
    this->_names[7] = "Crot";
    this->_names[8] = "Halop";
    this->_names[9] = "Mishanya";
}

std::string ZombieHorde::randomName() {
    int index;

    index = rand() % 10;
    return (_names[index]);
}
