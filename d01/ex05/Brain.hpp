/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:44:57 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:45:02 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
private:
    int _iq;
    int _weight;

    void initBrain();
public:
    Brain();
    ~Brain();

    std::string identify() const;
};

#endif
