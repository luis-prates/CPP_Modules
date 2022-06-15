/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:46:57 by lprates           #+#    #+#             */
/*   Updated: 2022/06/09 18:44:17 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"

class Contact {

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string _phoneNumber;
	std::string _darkSecret;

public:
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNumber();
	std::string getDarkSecret();
	void setContact(std::string firstName,
					std::string lastName,
					std::string nickname,
					std::string phoneNumber,
					std::string darkSecret
					);
};


#endif
