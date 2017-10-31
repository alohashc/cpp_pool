/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:55:05 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 20:56:57 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):_type(type){
}

Weapon::~Weapon() {
}

void Weapon::setType(std::string type){
    this->_type = type;
}

const std::string &Weapon::getType() {
    return this->_type;
}
