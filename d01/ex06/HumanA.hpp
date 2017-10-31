/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:54:06 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 18:58:38 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
private:
    std::string _name;
    Weapon *_weapon;

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    void attack();
};

#endif
