/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:42:18 by lprates           #+#    #+#             */
/*   Updated: 2022/06/25 22:22:30 by lprates          ###   ########.fr       */
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

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: Yo, your grade is too high!!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: Yo, your grade is too low!!");
}

std::ostream& operator<<(std::ostream &stream, Bureaucrat &buro)
{
	stream << buro.getName() << ", bureaucrat grade " << buro.getGrade() << ".";
	return (stream);
}

