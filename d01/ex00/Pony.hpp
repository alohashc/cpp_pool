/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:02:15 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:27:49 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
#include <iostream>
#include <string>

class Pony{
private:
    std::string _name;
public:
    Pony(std::string name);
    ~Pony();

	void changeName(std::string);
};

#endif
