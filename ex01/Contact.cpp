/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:13:23 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/23 16:28:29 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact()
{
	_lastName = "";
	_firstName = "";
	_nickName = "";
	_phoneNumber = "";
	_darkestSecret = "";
}

Contact::Contact(const std::string &lastName, const std::string &firstName, const std::string &nickName, const std::string &phoneNumber, const std::string &darkestSecret)
{
	_lastName = lastName;
	_firstName = firstName;
	_nickName = nickName;
	_phoneNumber = phoneNumber;
	_darkestSecret = darkestSecret;
}

Contact::~Contact()
{
	return ;
}

const std::string &Contact::getLastName() const
{
	return (_lastName);
}

const std::string &Contact::getFirstName() const
{
	return (_firstName);
}

const std::string &Contact::getNickName() const
{
	return (_nickName);
}

const std::string &Contact::getPhoneNumber() const
{
	return (_phoneNumber);
}

const std::string &Contact::getDarkestSecret() const
{
	return (_darkestSecret);
}

void Contact::printContact() const
{
	std::cout << "first name: " << _firstName << std::endl;
	std::cout << "last name: " << _lastName << std::endl;
	std::cout << "nick name: " << _nickName << std::endl;
	std::cout << "phone number: " << _phoneNumber << std::endl;
	std::cout << "darkest secret: " << _darkestSecret << std::endl;
}
