/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:44:32 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/23 15:43:16 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string getInput(std::string message)
{
	std::string input;

	input = "";
	while (!input.compare(""))
	{
		std::cout << message;
		if (!std::getline(std::cin ,input))
			exit (1);
	}
	return (input);
}

Contact getContact(void)
{
	std::string lastName;
	std::string firstName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	lastName = getInput("Enter last name: ");
	firstName = getInput("Enter first name: ");
	nickName = getInput("Enter nick name: ");
	phoneNumber = getInput("Enter phone number: ");
	darkestSecret = getInput("Enter darkest secret: ");

	return (Contact(lastName, firstName, nickName, phoneNumber, darkestSecret));
}

int main(void)
{
	std::string command;
	PhoneBook phonebook;

	while (1)
	{
		command = getInput("phonebook> ");
		if (!command.compare("ADD"))
			phonebook.addContact(getContact());
		else if (!command.compare("SEARCH"))
			std::cout << "SEARCH mentioned" << std::endl;
		else if (!command.compare("EXIT"))
			break ;	
		// else
		// 	std::cout << "invalid command !" << std::endl;
	}	
	return (0);
}
