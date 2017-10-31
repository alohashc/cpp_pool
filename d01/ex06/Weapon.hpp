/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:55:25 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 21:01:24 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
private:
    std::string _type;

public:
    Weapon(std::string type);
    ~Weapon();

    const std::string &getType();
    void setType(std::string type);
};

#endif
