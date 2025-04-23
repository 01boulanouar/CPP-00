#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
# include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void addContact(Contact contact);
		void search();
	private:
		Contact contacts[8];
};

#endif
