/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:30:02 by lprates           #+#    #+#             */
/*   Updated: 2022/06/11 17:46:57 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void PhoneBook::addContact(t_contacts contact, int idx)
{
	_contacts[idx].setContact(contact.firstName,
								contact.lastName,
								contact.nickname,
								contact.phoneNumber,
								contact.darkSecret
								);
	return;
}

Contact PhoneBook::getContact(int idx)
{
	return this->_contacts[idx];
}

int PhoneBook::getContactCount()
{
	int	count;

	count = 0;
	while (this->_contacts[count].getFirstName() != "")
		count++;
	return (count);
}
