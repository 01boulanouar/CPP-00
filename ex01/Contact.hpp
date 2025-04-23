/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:13:25 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/23 16:26:51 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H

# define CONTACT_H

# include <iostream>

class Contact
{
	public:
		Contact();
		Contact(const std::string &lastName, const std::string &firstName, const std::string &nickName, const std::string &phoneNumber, const std::string &darkestSecret);
		~Contact();
		
		const std::string &getLastName() const;
		const std::string &getFirstName() const;
		const std::string &getNickName() const;
		const std::string &getPhoneNumber() const;
		const std::string &getDarkestSecret() const;

		void printContact() const;
	
	private:
		std::string _lastName;
		std::string _firstName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

};

#endif
