/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:49:47 by lprates           #+#    #+#             */
/*   Updated: 2022/06/24 01:44:24 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << "Default Dog constructor was called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default Dog Brain address: " << this->_brain << std::endl;
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
		this->_brain = new Brain();
		*this->_brain = *src._brain;
		std::cout << "Copy assign op Dog Brain address: " << this->_brain << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called." << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "Bark Bark" << std::endl;
	return ;
}
