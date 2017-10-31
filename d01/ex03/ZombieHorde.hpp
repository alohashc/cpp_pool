/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:39:42 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:40:10 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde{
private:
    int _n;
    std::string _names[10];
    Zombie *_z;

    void initNames();
public:
    ZombieHorde(int n);
    ~ZombieHorde();

    void announce();
    std::string randomName();
};

#endif
