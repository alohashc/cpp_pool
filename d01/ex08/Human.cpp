/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:30:29 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 20:31:02 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const &target) {
    std::cout << "melee attack on " << target << std::endl;
}

void Human::rangedAttack(std::string const &target) {
    std::cout << "ranged attack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target) {
    std::cout << "intimidating shout on " << target << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target) {
    std::string arrName[3] = {"melee", "ranged", "shout"};
    void (Human::*arrPtr[3])(std::string const &) = {
            &Human::meleeAttack,
            &Human::rangedAttack,
            &Human::intimidatingShout
    };
    for (int i = 0; i < 3; ++i) {
        if (arrName[i] == action_name)
            (this->*arrPtr[i])(target);
    }
}
