/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:50:23 by lprates           #+#    #+#             */
/*   Updated: 2022/06/23 01:09:55 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal constructor was called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Copy Animal constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(Animal const &src)
{
    std::cout << "Copy Animal assignment operator called" << std::endl;
    if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor Animal called." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "*Animal sounds*" << std::endl;
	return ;
}

std::string Animal::getType() const
{
	return (this->_type);
}
