/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:51:16 by lprates           #+#    #+#             */
/*   Updated: 2022/06/23 22:59:17 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
    std::cout << "Default WrongCat constructor was called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
    std::cout << "Copy WrongCat constructor called" << std::endl;
    *this = src;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    std::cout << "Copy WrongCat assignment operator called" << std::endl;
    if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "(fake)Meeeoww" << std::endl;
	return ;
}
