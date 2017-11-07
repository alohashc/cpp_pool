/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 18:44:01 by alohashc          #+#    #+#             */
/*   Updated: 2017/11/01 18:44:10 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
private:
    int _n;
    static const int _bits = 8;

public:
    Fixed();
    Fixed(int const n);
    Fixed(float const n);
    Fixed(Fixed const & src);
    ~Fixed();

    Fixed &operator=(Fixed const & rhs);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    float   toFloat(void) const;
    int     toInt(void) const;


};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
