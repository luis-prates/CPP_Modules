/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:42:18 by lprates           #+#    #+#             */
/*   Updated: 2022/06/27 01:14:09 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
		if (grade > 150)
			throw GradeTooLowException();
		if (grade < 1)
			throw GradeTooHighException();
		_grade = grade;
	std::cout << "Constructor Bureaucrat " << _name << " was created with a grade of " << _grade << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << _name << " Destructor called." << std::endl;
}

const std::string &Bureaucrat::getName()
{
	return (_name);
}

int &Bureaucrat::getGrade()
{
	return (_grade);
}

void Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (this->_grade < 1)
			throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (this->_grade > 150)
			throw GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getIsSigned() == true)
		std::cout << getName() << " signed " << form.getName() << std::endl;
	else
		std::cout << getName() << " couldn't sign " << form.getName()
			<< " because grade too low" << std::endl;

}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat Exception: Yo, your grade is too high!!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Exception: Yo, your grade is too low!!");
}

const char	*Bureaucrat::ForbiddenSelfAssign::what() const throw ()
{
	return ("Cannot copy assign object with const members!");
}

std::ostream& operator<<(std::ostream &stream, Bureaucrat &buro)
{
	stream << buro.getName() << ", bureaucrat grade " << buro.getGrade() << ".";
	return (stream);
}

