/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:54:49 by alohashc          #+#    #+#             */
/*   Updated: 2017/11/01 11:07:26 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
private:
    Weapon *_weapon;
    std::string _name;

public:
    HumanB(std::string name);
    ~HumanB();

    void setWeapon(Weapon &weapon);
    void attack();
};

#endif
