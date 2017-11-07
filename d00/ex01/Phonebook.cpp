/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:07:59 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/30 14:58:42 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {
	index = 0;
}

Phonebook::~Phonebook() {
}

Contact Phonebook::readParams()
{
    Contact contact;
    std::string input;
    
    std::cout << "First Name:" << std::endl;
    getline(std::cin, input);
    contact.setFirst_name(input);
    std::cout << "Last Name:" << std::endl;
    getline(std::cin, input);
    contact.setLast_name(input);
    std::cout << "Nickname:" << std::endl;
    getline(std::cin, input);
    contact.setNickname(input);
    std::cout << "Login:" << std::endl;
    getline(std::cin, input);
    contact.setLogin(input);
    std::cout << "Postal address:" << std::endl;
    getline(std::cin, input);
    contact.setPostal_address(input);
    std::cout << "Birthday date:" << std::endl;
    getline(std::cin, input);
    contact.setBirthday_date(input);
    std::cout << "Favorite meal:" << std::endl;
    getline(std::cin, input);
    contact.setFavorite_meal(input);
    std::cout << "Underwear color:" << std::endl;
    getline(std::cin, input);
    contact.setUnderwear_color(input);
    std::cout << "Phone number:" << std::endl;
    getline(std::cin, input);
    contact.setPhone_number(input);
    std::cout << "Darkest secret:" << std::endl;
    getline(std::cin, input);
    contact.setDarkest_secret(input);
    return (contact);
}

void    Phonebook::searchContact() {
	int i;
	int index_one;

	i = 0;
	if (this->index == 0)
	{
		std::cout << "Phonebook is empty!" << std::endl;
		return;
	}
	while (i < index)
	{
		std::cout.width(10);
		std::cout << i;
		std::cout << "|";
		std::cout.width(10);
		std::cout << Phonebook ::changeSize(contact[i].getFirst_name());
		std::cout << "|";
		std::cout.width(10);
		std::cout << Phonebook::changeSize(contact[i].getLast_name());
		std::cout << "|";
		std::cout.width(10);
		std::cout << Phonebook::changeSize(contact[i].getNickname());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "Enter number of contact: ";
	std::cin >> index_one;
	std::cin.ignore();
	if (index_one >= 0 && index_one <= 7 && index_one < this->index)
		Phonebook::displayOneContact(contact[index_one]);
	else
		std::cout << "Indice error!"  << std::endl;
}

void	Phonebook::displayOneContact(Contact contact){
    std::cout << "First Name: ";
	std::cout << contact.getFirst_name() << std::endl;
    std::cout << "Last Name: ";
	std::cout << contact.getLast_name() << std::endl;
    std::cout << "Nickname: ";
	std::cout << contact.getNickname() << std::endl;
    std::cout << "Login: ";
	std::cout << contact.getLogin() << std::endl;
    std::cout << "Postal address: ";
	std::cout << contact.getPostal_address() << std::endl;
    std::cout << "Birthday date: ";
	std::cout << contact.getBirthday_date() << std::endl;
    std::cout << "Favorite meal: ";
	std::cout << contact.getFavorite_meal() << std::endl;
    std::cout << "Underwear color: ";
	std::cout << contact.getUnderwear_color() << std::endl;
    std::cout << "Phone number: ";
	std::cout << contact.getPhone_number() << std::endl;
    std::cout << "Darkest secret: ";
	std::cout << contact.getDarkest_secret() << std::endl;
}

std::string Phonebook::changeSize(std::string str) {
	if (str.size() > 9)
	{
		str.resize(9);
		str.resize(10, '.');
	}
	return (str);
}

void    Phonebook::addContact(Contact a) {
	if (index < 8)
	{
		contact[index] = a;
		index++;
	}
	else
		std::cout << "More than 8 elements" << std::endl;
}
