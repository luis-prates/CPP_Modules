/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:21:34 by lprates           #+#    #+#             */
/*   Updated: 2022/06/18 18:34:59 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	SetAndAddContact(PhoneBook *phoneBook)
{
	static int	idx = 0;
	t_contacts	contact;

	std::cout << "First name: ";
	std::cin >> contact.firstName;
	std::cout << "Last name: ";
	std::cin >> contact.lastName;
	std::cout << "Nickname: ";
	std::cin >> contact.nickname;
	std::cout << "Phone number: ";
	std::cin >> contact.phoneNumber;
	std::cout << "Dark secret: ";
	std::cin >> contact.darkSecret;
	phoneBook->addContact(contact, idx);
	idx++;
	if (idx == 8)
		idx = 0;
}

int main(void)
{
	PhoneBook	phoneBook;
	std::string option;
	std::string	search;
	int			i;


	while (true)
	{
		std::cout << "ADD: Add contact" << std::endl;
		std::cout << "SEARCH: Search contact" << std::endl;
		std::cout << "EXIT: Quit" << std::endl;
		std::cout << "Choose an option: ";
		std::cin >> option;
		std::cout << std::endl;
		if (option.compare("ADD") == 0)
			SetAndAddContact(&phoneBook);
		else if (option.compare("SEARCH") == 0)
		{
			if (phoneBook.getContactCount() == 0)
			{
				std::cout << "No contacts" << std::endl << std::endl;
				continue;
			}
			std::cout << "|     Index| FirstName|  LastName|  Nickname|" << std::endl;
			for (int i = 0; i < phoneBook.getContactCount(); i++) {

				if (phoneBook.getContact(i).getFirstName().size() != 0)
				{
					std::cout << "|" << std::setw(10) << i;
					phoneBook.getContact(i).getFirstName().size() > 10 ? std::cout << "|" << std::setw(9) << phoneBook.getContact(i).getFirstName().substr(0,9) << "." :
														std::cout << "|" << std::setw(10) << phoneBook.getContact(i).getFirstName().substr(0,10);
					phoneBook.getContact(i).getLastName().size() > 10 ? std::cout << "|" << std::setw(9) << phoneBook.getContact(i).getLastName().substr(0,9) << "." :
														std::cout << "|" << std::setw(10) << phoneBook.getContact(i).getLastName().substr(0,10);
					phoneBook.getContact(i).getNickname().size() > 10 ? std::cout << "|" << std::setw(9) << phoneBook.getContact(i).getNickname().substr(0,9) << ".|" << std::endl :
														std::cout << "|" << std::setw(10) << phoneBook.getContact(i).getNickname().substr(0,10) << "|" << std::endl;
				}
			}
			while (true)
			{
				std::cout << "Choose a contact: ";
				std::cin >> search;
				if (search.find_first_not_of("0123456789") != std::string::npos)
				{
					std::cout << "Invalid input" << std::endl;
					continue;
				}
				i = std::stoi(search);
				if (i < 0 || i >= phoneBook.getContactCount())
				{
					std::cout << "Invalid index" << std::endl;
					continue;
				}
				break;
			}
			for (int idx = 0; idx < phoneBook.getContactCount(); idx++)
			{
				if (idx == i)
				{
					std::cout << "\nFirst name: " << phoneBook.getContact(i).getFirstName() << std::endl;
					std::cout << "Last name: " << phoneBook.getContact(i).getLastName() << std::endl;
					std::cout << "Nickname: " << phoneBook.getContact(i).getNickname() << std::endl;
					std::cout << "Phone number: " << phoneBook.getContact(i).getPhoneNumber() << std::endl;
					std::cout << "Dark secret: " << phoneBook.getContact(i).getDarkSecret() << std::endl;
				}
			}
		}
		else if (option.compare("EXIT") == 0)
			break;
		else
			std::cout << "Invalid option" << std::endl;
		std::cout << std::endl;
	}
}
