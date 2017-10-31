/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:36:14 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:37:10 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){
    std::cout << "Create Zombie" << std::endl;
    initNames();
}

ZombieEvent::~ZombieEvent() {
    std::cout << "Destroy Zombie" << std::endl;
}

void ZombieEvent::setZombieType(std::string type){
    this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name){
    return(new Zombie(name, _type));
}

std::string ZombieEvent::randomChump() {
    int index;

    index = rand() % 5;
    return(_names[index]);
}

void ZombieEvent::initNames() {
    _names[0] = "Zhmot";
    _names[1] = "Barlog";
    _names[2] = "Svin";
    _names[3] = "Tugoy";
    _names[4] = "Aboltus";
}

