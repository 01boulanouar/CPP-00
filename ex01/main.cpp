/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:44:32 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/24 13:39:17 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

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
			phonebook.search();
		else if (!command.compare("EXIT"))
			break ;	
		else
			std::cout << "invalid command !" << std::endl;
	}	
	return (0);
}
