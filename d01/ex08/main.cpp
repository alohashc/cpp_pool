/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 19:43:39 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 20:29:55 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int main() {

    Human human;

    human.action("melee", "Pony");
    human.action("ranged", "Mouse");
    human.action("shout", "Dog");
    human.action("ranged", "Zombie");
    return 0;
}
