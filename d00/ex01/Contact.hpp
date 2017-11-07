/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:10:44 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/30 15:27:46 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact{
public:

	Contact(void);
	~Contact(void);

	std::string getFirst_name() const;

	void setFirst_name(const std::string &first_name);

	std::string getLast_name() const;

	void setLast_name(const std::string &last_name);

	std::string getNickname() const;

	void setNickname(const std::string &nickname);

	std::string getLogin() const;

	void setLogin(const std::string &login);

	std::string getPostal_address() const;

	void setPostal_address(const std::string &postal_address);

	std::string getPhone_number() const;

	void setPhone_number(const std::string &phone_number);

	std::string getBirthday_date() const;

	void setBirthday_date(const std::string &birthday_date);

	std::string getFavorite_meal() const;

	void setFavorite_meal(const std::string &favorite_meal);

	std::string getUnderwear_color() const;

	void setUnderwear_color(const std::string &underwear_color);

	std::string getDarkest_secret() const;

	void setDarkest_secret(const std::string &darkest_secret);

private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
};

#endif
