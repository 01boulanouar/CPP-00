/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:13:23 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/19 18:30:03 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact()
{
	LastName = "default";
	FirstName = "";
	NickName = "";
	PhoneNumber = "";
	DarkestSecret = "";
	// std::cout << "Contact created by default constructor!" << std::endl;
}

Contact::Contact(const std::string &LastName, const std::string &FirstName, const std::string &NickName, const std::string &PhoneNumber, const std::string &DarkestSecret)
{
	this->LastName = LastName;
	this->FirstName = FirstName;
	this->NickName = NickName;
	this->PhoneNumber = PhoneNumber;
	this->DarkestSecret = DarkestSecret;
	std::cout << "Contact " << LastName << " created!" << std::endl;
}

// Contact::~Contact()
// {
// 	std::cout << "Contact " << LastName << " destroyed!" << std::endl;
// }

const std::string &Contact::getLastName() const
{
	return (LastName);
}

const std::string &Contact::getFirstName() const
{
	return (FirstName);
}

const std::string &Contact::getNickName() const
{
	return (NickName);
}

const std::string &Contact::getPhoneNumber() const
{
	return (PhoneNumber);
}

const std::string &Contact::getDarkestSecret() const
{
	return (DarkestSecret);
}


