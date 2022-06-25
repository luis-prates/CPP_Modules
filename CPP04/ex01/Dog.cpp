/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:49:47 by lprates           #+#    #+#             */
/*   Updated: 2022/06/25 16:07:43 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Default Dog constructor was called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default Dog Brain address: " << this->_brain << std::endl;
}

Dog::Dog(Dog const &src)
{
    std::cout << "Copy Dog constructor called" << std::endl;
	this->_brain = new Brain();
	std::cout << "Copy assign Dog Brain address: " << this->_brain << std::endl;
	*this = src;
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << "Copy Dog assignment operator called" << std::endl;
    if (this != &src)
	{
		this->_type = src._type;
		*this->_brain = *src._brain;
		std::cout << "Copy assign operator Dog Brain address: " << this->_brain << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
    std::cout << "Destructor Dog called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark Bark" << std::endl;
	return ;
}
