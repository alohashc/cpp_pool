//
// Created by Andrii Lohashchuk on 11/1/17.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _value;
    static const int _fractional_bits = 8;
public:

    Fixed();
    Fixed(Fixed const & src);
    ~Fixed();

    Fixed &operator=(Fixed const & rhs);

    int getRawBits(void) const;
    void setRawBits(int const raw);

};


#endif //EX00_FIXED_HPP
