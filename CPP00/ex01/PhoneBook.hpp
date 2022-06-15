/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:25:09 by lprates           #+#    #+#             */
/*   Updated: 2022/06/11 17:38:56 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "main.hpp"

typedef struct	s_contacts
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkSecret;
}				t_contacts;

class PhoneBook {

private:

	Contact _contacts[8];
	
public:

	void addContact(t_contacts contact, int idx);
	Contact getContact(int idx);
	int	getContactCount();
};

#endif
