/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:39:05 by lprates           #+#    #+#             */
/*   Updated: 2022/07/06 23:31:56 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar()
{
    std::cout << "Scalar Default constructor was called" << std::endl;
}

Scalar::Scalar(Scalar const &src)
{
    std::cout << "Scalar Copy constructor called" << std::endl;
    *this = src;
}

Scalar::Scalar(char *str) : _str(static_cast<std::string>(str))
{
	char	*ptr;
	double	converted;

	//ptr = NULL;
	if (checkSpecialCases() || checkOneCharCases())
		return ;
	converted = strtod(str, &ptr);

	
	if (checkValidInput(ptr, converted))
		return ;
	else
	{
		// If all else fails, you have an invalid argument.
		_generalValueStatus = eINVALID;
		_generalValue = 0;
		return ;	
	}
}

Scalar &Scalar::operator=(Scalar const &src)
{
    std::cout << "Scalar Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_str = src._str;
		this->_generalValue = src._generalValue;
		this->_generalValueStatus = src._generalValueStatus;
	}
    return *this;
}

Scalar::~Scalar()
{
    std::cout << "Destructor called." << std::endl;
}

// Check Special Cases (nan, nanf, +inf, +inff, -inf, -inff)
int Scalar::checkSpecialCases()
{
	if (_str == "nan" || _str == "nanf")
	{
		_generalValueStatus = eNAN;
		_generalValue = 0;
		return (1);
	}
	if (_str == "+inf" || _str == "+inff")
	{
		_generalValueStatus = ePOSINF;
		_generalValue = 0;
		return (1);
	}
	if (_str == "-inf" || _str == "-inff")
	{
		_generalValueStatus = eNEGINF;
		_generalValue = 0;
		return (1);
	}
	return (0);
}

int Scalar::checkOneCharCases()
{
	// Check one character cases like ("1", "x", "-", " ")
	if (_str.length() == 1)
	{
		_generalValueStatus = eVALID;
		_generalValue = static_cast<double>(*(_str.c_str()));
		if (_generalValue >= 48 && _generalValue <= 57)
			_generalValue -= 48;
		return (1);
	}
	return (0);
}

int Scalar::checkValidInput(char *ptr, double converted)
{
	// Check if input is valid or if it finishes with an "f"
	if (*ptr == '\0' || strcmp(ptr, "f") == 0)
	{
		_generalValueStatus = eVALID;
		_generalValue = converted;
		return (1);
	}
	return (0);
}

void Scalar::convertToChar() {
	if (_generalValueStatus != eVALID) {
		if (_generalValueStatus == eINVALID)
			std::cout << "char: invalid argument" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
	else {
		char converted = static_cast<char>(_generalValue);

		if (converted < 0) {
			std::cout << "char: " << "impossible" << std::endl;
			return ;
		}

		if (isprint(converted)) {
			std::cout << "char: \'" << converted << "\'" << std::endl;
		}
		else {
			std::cout << "char: " << "Non displayable" << std::endl;
		}

	}
	return ;
}

void Scalar::convertToInt() {
	if (_generalValueStatus != eVALID) {
		if (_generalValueStatus == eINVALID)
			std::cout << "int: invalid argument" << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
	else {
		int converted = static_cast<int>(_generalValue);
		std::cout << "int: " << converted << std::endl;
	}
	return ;
}

void Scalar::convertToFloat() {
	if (_generalValueStatus != eVALID) {
		switch (_generalValueStatus) {
			case eNEGINF:
				std::cout << "float: -inff" << std::endl;
				break;
			case ePOSINF:
				std::cout << "float: +inff" << std::endl;
				break;
			case eNAN:
				std::cout << "float: nanf" << std::endl;
				break;
			case eINVALID:
				std::cout << "float: invalid argument" << std::endl;
				break;
		}
	}
	else {
		float converted = static_cast<float>(_generalValue);
		std::cout << std::setprecision(4);
		std::cout << "float: " << converted << "f" << std::endl;
	}
	return ;
}

void Scalar::convertToDouble() {
	if (_generalValueStatus != eVALID) {
		switch (_generalValueStatus) {
			case eNEGINF:
				std::cout << "double: -inf" << std::endl;
				break;
			case ePOSINF:
				std::cout << "double: +inf" << std::endl;
				break;
			case eNAN:
				std::cout << "double: nan" << std::endl;
				break;
			case eINVALID:
				std::cout << "double: invalid argument" << std::endl;
				break;
		}
	}
	else {
		std::cout << "double: " << _generalValue << std::endl;
	}
	return ;
}
