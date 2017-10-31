/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:33:07 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:33:28 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
    Zombie zombie = Zombie("Zuzya", "drishh");
    ZombieEvent event = ZombieEvent();
    event.setZombieType("Zombak");

    Zombie *z = event.newZombie("Vasya");
    Zombie *z1 = event.newZombie(event.randomChump());

    zombie.announce();
    z->announce();
    z1->announce();
    delete z;
    delete z1;
    return 0;
}
