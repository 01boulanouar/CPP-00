/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:32:33 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/24 13:55:38 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "utils.hpp"

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
