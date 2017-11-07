/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:06:45 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/30 16:54:11 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook{
public:

	Phonebook(void);
	~Phonebook(void);

	void addContact(Contact a);
    Contact readParams();
	void searchContact();
	std::string changeSize(std::string str);
	void displayOneContact(Contact a);

private:
	Contact contact[8];
	int index;
};

#endif
