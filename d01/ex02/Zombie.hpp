/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:33:41 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:34:08 by alohashc         ###   ########.fr       */
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
    Zombie(std::string name, std::string type);
    ~Zombie();
    void    announce();
};

#endif
