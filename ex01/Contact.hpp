/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:13:25 by moboulan          #+#    #+#             */
/*   Updated: 2025/04/19 18:29:51 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H

# define CONTACT_H

# include <iostream>

class Contact
{
	public:
		Contact();
		// ~Contact();
		Contact(const std::string &LastName, const std::string &FirstName, const std::string &NickName, const std::string &PhoneNumber, const std::string &DarkestSecret);
		
		const std::string &getLastName() const;
		const std::string &getFirstName() const;
		const std::string &getNickName() const;
		const std::string &getPhoneNumber() const;
		const std::string &getDarkestSecret() const;
	
	private:
		std::string LastName;
		std::string FirstName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;

};

#endif
