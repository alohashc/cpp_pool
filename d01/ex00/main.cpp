/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:26:24 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:26:33 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheStack(std::string name)
{
    Pony pony = Pony(name);
	pony.changeName("Hulk");
}

void	ponyOnTheHeap(std::string name)
{
    Pony*    pony2 = new Pony(name);
	pony2->changeName("Tor");

    delete pony2;
}

int main() {

    ponyOnTheHeap("Ponya");
    ponyOnTheStack("Phonya");

	std::cout << "EMPTY" << std::endl;
    return 0;
}
