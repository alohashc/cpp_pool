/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:38:20 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:38:30 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main() {
    ZombieHorde zhorde = ZombieHorde(10);

    zhorde.announce();
    return 0;
}
