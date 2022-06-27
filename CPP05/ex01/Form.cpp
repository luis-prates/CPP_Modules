/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 22:35:55 by lprates           #+#    #+#             */
/*   Updated: 2022/06/27 01:15:24 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default Form"), _isSigned(false), _gradeToSign(50), _gradeToExecute(25)
{
    std::cout << "Default constructor was called" << std::endl;
}

Form::Form(Form const &src) :
	_name(src._name),  _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    std::cout << "Copy constructor called" << std::endl;
}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute) :
	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToExecute > 150 || gradeToSign > 150)
			throw GradeTooLowException();
		if (gradeToExecute < 1 || gradeToSign < 1)
			throw GradeTooHighException();
	std::cout << "Form was created with name " << this->_name << std::endl;
}

Form &Form::operator=(Form const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
	{
		throw ForbiddenSelfAssign();
	}
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

const char	*Form::GradeTooHighException::what() const throw ()
{
	return ("Form Exception: Grade too high Exception");
}

const char	*Form::GradeTooLowException::what() const throw ()
{
	return ("Form Exception: Grade too low Exception");
}

const char	*Form::ForbiddenSelfAssign::what() const throw ()
{
	return ("Cannot copy assign object with const members!");
}

void Form::beSigned(Bureaucrat &buro)
{
	if (buro.getGrade() <= this->_gradeToSign)
	{
		this->_isSigned = true;
		buro.signForm(*this);
		return ;
	}
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &stream, Form &form)
{
	stream << "Form name is " << form.getName() \
		<< ", signed status: " << (form.getIsSigned() ? "true" : "false")  \
		<< ", minimum grade needed to sign " << form.getGradeToSign() \
		<< ", minimum grade needed to execute " << form.getGradeToExecute() \
		<< std::endl;
	return (stream);
}
