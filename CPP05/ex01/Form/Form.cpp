/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 22:35:55 by lprates           #+#    #+#             */
/*   Updated: 2022/06/25 22:59:53 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    std::cout << "Default constructor was called" << std::endl;
}

Form::Form(Form const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Form &Form::operator=(Form const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Form::~Form()
{
    std::cout << "Destructor called." << std::endl;
}

const std::string& Form::getName()
{
	return (_name);
}

bool& Form::getIsSigned()
{
	return (_isSigned);
}

const int& Form::getGradeToSign()
{
	return (_gradeToSign);
}

const int& Form::getGradeToExecute()
{
	return (_gradeToExecute);
}

void Form::beSigned(Bureaucrat &buro)
{
	
}
