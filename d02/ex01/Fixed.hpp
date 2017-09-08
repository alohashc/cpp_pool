//
// Created by Andrii Lohashchuk on 7/31/17.
//

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
