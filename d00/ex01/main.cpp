/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:15:51 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/30 15:32:23 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void) {

	std::string input;
	Phonebook book;

	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
	
	do
	{
		std::cout << "Enter the command: ";
		getline(std::cin, input);
		if (input == "ADD")
            book.addContact(book.readParams());
		else if (input == "SEARCH")
			book.searchContact();
		else if (input == "EXIT")
		{
			std::cout << "Bye" << std::endl;
			return (0);
		}
		else
			std::cout << "Command not found" << std::endl;
	}
	while (true);
    return 0;
}
