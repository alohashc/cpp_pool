//
// Created by Andrii Lohashchuk on 11/1/17.
//

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}