/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:46:13 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:46:24 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
}

Human::~Human() {
}

std::string Human::identify() {
    return _brain.identify();
}

const Brain &Human::getBrain() {
    return (this->_brain);
}
