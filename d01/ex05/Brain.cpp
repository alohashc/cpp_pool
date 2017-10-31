/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:45:16 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 19:04:38 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain() {
    initBrain();
}

Brain::~Brain() {
}

std::string Brain::identify() const {

    std::stringstream address;
    address << this;
    return address.str();
}

void Brain::initBrain() {
    this->_iq = 113;
    this->_weight = 3;
}
