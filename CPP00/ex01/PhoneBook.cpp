/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:30:02 by lprates           #+#    #+#             */
/*   Updated: 2022/06/18 18:35:03 by lprates          ###   ########.fr       */
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
	while (count < 8 && this->_contacts[count].getFirstName().empty() == false)
		count++;
	return (count);
}
