/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:49:11 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/19 18:00:08 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook created by default constructor!" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook Destroyed!" << std::endl;
}

void PhoneBook::addContact(Contact &contact)
{
	static int i = 0;

	contacts[i % 8] = contact;
	i++;
}

int	main(int argc, char *argv[])
{
	PhoneBook phone;
	
	Contact c1("test1", "johnes", "atlas", "+(421) 324 591", "loves choclate");
	Contact c2("test2", "contact", "second", "+(453) 123 686", "doesn't care");
	Contact c3("test3", "contact", "second", "+(453) 123 686", "doesn't care");
	Contact c4("test4", "contact", "second", "+(453) 123 686", "doesn't care");
	Contact c5("test5", "contact", "second", "+(453) 123 686", "doesn't care");
	Contact c6("test6", "contact", "second", "+(453) 123 686", "doesn't care");
	Contact c7("test7", "contact", "second", "+(453) 123 686", "doesn't care");
	Contact c8("test8", "contact", "second", "+(453) 123 686", "doesn't care");
	Contact c9("test9", "contact", "second", "+(453) 123 686", "doesn't care");
	phone.addContact(c1);
	phone.addContact(c2);
	phone.addContact(c3);
	phone.addContact(c4);
	phone.addContact(c5);
	phone.addContact(c6);
	phone.addContact(c7);
	phone.addContact(c8);
	phone.addContact(c9);
	(void) argc;
	(void) argv;
	return (0);
}
