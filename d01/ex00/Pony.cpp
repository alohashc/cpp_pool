/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:15:42 by alohashc          #+#    #+#             */
/*   Updated: 2017/11/01 11:19:28 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name)
{
    std::cout << this->_name << " is born to eat" << std::endl;
}

Pony::~Pony() {
    std::cout << this->_name << " on vacation" << std::endl;
}

void Pony::changeName(std::string name){
	this->_name = name;
	std::cout << "Call me " << name << "!" << std::endl;
}
