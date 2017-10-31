/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:34:19 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:37:47 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
    std::cout << "New Zombie" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie dead" << std::endl;
}

void    Zombie::announce() {
    std::cout << "<" << Zombie::_name << " (" << Zombie::_type << ")> Brrrrraaaaaaiiinnsss....." << std::endl;
}
