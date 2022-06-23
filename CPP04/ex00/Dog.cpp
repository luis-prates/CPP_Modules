/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:49:47 by lprates           #+#    #+#             */
/*   Updated: 2022/06/23 01:10:12 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Default Dog constructor was called" << std::endl;
}

Dog::Dog(Dog const &src)
{
    std::cout << "Copy Dog constructor called" << std::endl;
    *this = src;
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << "Copy Dog assignment operator called" << std::endl;
    if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark Bark" << std::endl;
	return ;
}
