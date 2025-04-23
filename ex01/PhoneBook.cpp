/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:49:11 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/23 16:31:55 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void PhoneBook::addContact(Contact contact)
{
	static int i = 0;

	contacts[i % 8] = contact;
	i++;
}

static void print_text(std::string text, bool newline)
{
	if (text.length() > 10)
	{
		text.resize(9);
		text.append(".");
	}
	std::cout << '|' << std::setfill(' ') << std::setw(10) << text ;
	if (newline)
		std::cout << '|'  << std::endl;
}

void PhoneBook::search()
{
	int i;
	
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     index|first name| last Name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	i = 0;
	while (i < 8)
	{
		if (contacts[i].getFirstName().compare(""))
		{
			print_text(std::to_string(i + 1), false);
			print_text(contacts[i].getFirstName(), false);
			print_text(contacts[i].getLastName(), false);
			print_text(contacts[i].getNickName(), true);
		}
		i++;
	}
	
	std::cout << "|___________________________________________|" << std::endl;
	
	//fix adding oldest
	//undestaand setw()
	//implemet the invalid index
	//
	
	std::cout << std::endl;
	contacts[0].printContact();
}
