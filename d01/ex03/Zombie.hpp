/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:38:46 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:38:58 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie{
private:
    std::string _name;
    std::string _type;
public:
    Zombie();
    Zombie(std::string name, std::string type);
    ~Zombie();

    void    announce();
};

#endif
