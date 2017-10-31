/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:54:30 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 18:54:36 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name) {
}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack() {
    std::cout << this->_name << " attack with his " << this->_weapon->getType() << std::endl;
}
