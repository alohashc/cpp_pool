/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:45:31 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 17:46:05 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human{
private:
    const Brain _brain;
public:
    Human();
    ~Human();

    const Brain &getBrain();
    std::string identify();
};

#endif
