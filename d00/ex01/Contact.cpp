/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:13:40 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/30 15:24:15 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

std::string Contact::getFirst_name() const {
    return first_name;
}

void Contact::setFirst_name(const std::string &first_name) {
    Contact::first_name = first_name;
}

std::string Contact::getLast_name() const {
    return last_name;
}

void Contact::setLast_name(const std::string &last_name) {
    Contact::last_name = last_name;
}

std::string Contact::getNickname() const {
    return nickname;
}

void Contact::setNickname(const std::string &nickname) {
    Contact::nickname = nickname;
}

std::string Contact::getLogin() const {
    return login;
}

void Contact::setLogin(const std::string &login) {
    Contact::login = login;
}

std::string Contact::getPostal_address() const {
    return postal_address;
}

void Contact::setPostal_address(const std::string &postal_address) {
    Contact::postal_address = postal_address;
}

std::string Contact::getPhone_number() const {
    return phone_number;
}

void Contact::setPhone_number(const std::string &phone_number) {
    Contact::phone_number = phone_number;
}

std::string Contact::getBirthday_date() const {
    return birthday_date;
}

void Contact::setBirthday_date(const std::string &birthday_date) {
    Contact::birthday_date = birthday_date;
}

std::string Contact::getFavorite_meal() const {
    return favorite_meal;
}

void Contact::setFavorite_meal(const std::string &favorite_meal) {
    Contact::favorite_meal = favorite_meal;
}

std::string Contact::getUnderwear_color() const {
    return underwear_color;
}

void Contact::setUnderwear_color(const std::string &underwear_color) {
    Contact::underwear_color = underwear_color;
}

std::string Contact::getDarkest_secret() const {
    return darkest_secret;
}

void Contact::setDarkest_secret(const std::string &darkest_secret) {
    Contact::darkest_secret = darkest_secret;
}
