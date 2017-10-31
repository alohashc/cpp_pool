/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:30:04 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 20:30:21 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>

class Human{
private:
    void meleeAttack(std::string const & target);
    void rangedAttack(std::string const & target);
    void intimidatingShout(std::string const & target);

public:
    void action(std::string const & action_name, std::string const & target);
};

#endif
