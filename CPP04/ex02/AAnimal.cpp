/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:50:23 by lprates           #+#    #+#             */
/*   Updated: 2022/06/24 01:57:12 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::~AAnimal()
{
    std::cout << "Pure virtual Destructor for Animal called." << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "*Animal sounds*" << std::endl;
	return ;
}

std::string AAnimal::getType() const
{
	return (this->_type);
}
