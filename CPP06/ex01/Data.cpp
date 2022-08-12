/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:58:55 by lprates           #+#    #+#             */
/*   Updated: 2022/07/10 15:26:31 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
    std::cout << "Default constructor was called" << std::endl;
}

Data::Data(Data const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Data::Data(std::string dataType) : _dataType(dataType)
{
}

Data &Data::operator=(Data const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
	{
		this->_dataType = src._dataType;
	}
	return *this;
}

Data::~Data()
{
    std::cout << "Destructor called." << std::endl;
}

std::string Data::getData() const
{
    return (_dataType);
}

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
};
