/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:49:41 by lprates           #+#    #+#             */
/*   Updated: 2022/06/25 15:45:05 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Default Cat constructor was called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default Cat Brain address: " << this->_brain << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Copy Cat assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		*this->_brain = *src._brain;
		std::cout << "Copy assign op Dog Brain address: " << this->_brain << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destructor Cat called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meeeoww" << std::endl;
	return ;
}
