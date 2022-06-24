/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:51:10 by lprates           #+#    #+#             */
/*   Updated: 2022/06/23 22:54:31 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default WrongAnimal constructor was called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "Copy WrongAnimal constructor called" << std::endl;
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
    std::cout << "Copy WrongAnimal assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor Wrong Animal called." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "*Wrong Animal sounds*" << std::endl;
	return ;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}
