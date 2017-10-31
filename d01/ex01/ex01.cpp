/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:30:21 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:30:28 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak()
{
    std::string*    panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}
