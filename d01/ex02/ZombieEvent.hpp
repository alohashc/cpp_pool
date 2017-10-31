/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:34:58 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:35:54 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieEvent{
private:
    std::string _type;
    std::string _names[5];

    void initNames();
public:

    ZombieEvent();
    ~ZombieEvent();

    Zombie* newZombie(std::string name);
    void setZombieType(std::string type);
    std::string randomChump();
};

#endif
