/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:49:41 by lprates           #+#    #+#             */
/*   Updated: 2022/06/23 01:10:25 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Default Cat constructor was called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Copy Cat assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meeeoww" << std::endl;
	return ;
}
