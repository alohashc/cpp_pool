/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:51:00 by alohashc          #+#    #+#             */
/*   Updated: 2017/11/02 19:09:52 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _n(0){
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(int const n) :_n(n << this->_bits){
    std::cout << "Int constructor called" << std::endl;
    return;
}

Fixed::Fixed(float const n) :_n(roundf(n * (1 << this->_bits))){
    std::cout << "Float constructor called" << std::endl;
    return;
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
    return (this->_n  >> this->_bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}

// OPERATOR OVERLOADING
// comparison

bool Fixed::operator>(Fixed const &rhs) {
    return (this->_n > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) {
    return (this->_n < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) {
    return (this->_n >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) {
    return (this->_n <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) {
    return (this->_n == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) {
    return (this->_n != rhs.getRawBits());
}


// arithmetic operators

Fixed Fixed::operator+(Fixed const &rhs){
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs){
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs){
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs){
    return Fixed(this->toFloat() / rhs.toFloat());
}

// increment and decrement operators


Fixed& Fixed::operator++() {
    ++this->_n;
    return *this;
}

Fixed& Fixed::operator--() {
    --this->_n;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    ++this->_n;
    return tmp;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    --this->_n;
    return tmp;
}

// non-member function

Fixed Fixed::min(Fixed const &a, Fixed const &b) {
    Fixed tmp;

    if (a.toFloat() > b.toFloat())
        tmp = b;
    else tmp = a;
    return tmp;
}

Fixed Fixed::max(Fixed const &a, Fixed const &b) {
    Fixed tmp;

    if (a.toFloat() > b.toFloat())
        tmp = a;
    else tmp = b;
    return tmp;
}
