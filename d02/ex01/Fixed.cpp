//
// Created by Andrii Lohashchuk on 7/31/17.
//

#include "Fixed.hpp"

Fixed::Fixed(): _n(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) :_n(n << this->_bits){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n) :_n(roundf(n * (1 << this->_bits))){
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    this->_n = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    return this->_n;
}

void Fixed::setRawBits(int const raw) {
    this->_n = raw;
}

float Fixed::toFloat() const {
    return this->_n / (float)(1 << this->_bits);
}

int Fixed::toInt() const {
    return this->_n / (1 << this->_bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}