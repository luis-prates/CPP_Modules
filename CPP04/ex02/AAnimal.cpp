/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:50:23 by lprates           #+#    #+#             */
/*   Updated: 2022/06/25 14:34:51 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Default AAnimal constructor was called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
    std::cout << "Copy AAnimal constructor called" << std::endl;
    *this = src;
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
    std::cout << "Copy AAnimal assignment operator called" << std::endl;
    if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "Pure virtual Destructor for AAnimal called." << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->_type);
}
