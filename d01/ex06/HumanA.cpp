/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:53:23 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 18:57:35 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon) {
}

HumanA::~HumanA() {
}

void HumanA::attack() {
    std::cout << _name << " attack with his " << _weapon->getType() << std::endl;
}
