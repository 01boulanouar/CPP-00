/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:49:11 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/24 14:02:37 by moboulan         ###   ########.fr       */
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
	std::string index;
	int i;
	
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     index|first name| last Name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	i = 0;
	while (i < 8)
	{
		if (contacts[i].getFirstName() != "")
		{
			print_text(std::to_string(i + 1), false);
			print_text(contacts[i].getFirstName(), false);
			print_text(contacts[i].getLastName(), false);
			print_text(contacts[i].getNickName(), true);
		}
		i++;
	}
	
	std::cout << "|___________________________________________|" << std::endl;
	
	std::cout << std::endl;
	index = getInput("Select an index: ");
	
	if (index.size() == 1 && index[0] >= '1' && index[0] <= '8')
	{
		i = index[0] - '0' - 1;
		if (contacts[i].getFirstName() != "")
			contacts[i].printContact();
		else
			std::cout << "No contact with that index" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;

}
