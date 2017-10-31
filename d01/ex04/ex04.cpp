/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:41:07 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:43:55 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS A BRAIN";
    std::string* strPtr = &str;
    std::string& strRef = str;

    std::cout << *strPtr << std::endl;
    std::cout << strRef << std::endl;
    return (0);
}
