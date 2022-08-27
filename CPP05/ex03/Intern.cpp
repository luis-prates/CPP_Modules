/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:28:11 by lprates           #+#    #+#             */
/*   Updated: 2022/08/27 18:50:55 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Default constructor was called" << std::endl;
}

Intern::Intern(Intern const &src)
{
    std::cout << "Intern Copy constructor called" << std::endl;
    *this = src;
}

Intern &Intern::operator=(Intern const &src)
{
    std::cout << "Intern Copy assignment operator called" << std::endl;
	if (this != &src)
		*this = src;
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called." << std::endl;
}

void	string_to_lower(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::tolower(str[i]);
}

const char	*Intern::NotValidFormException::what() const throw()
{
	return ("Empty or not valid form!");
}

Form* Intern::makeForm(std::string form, std::string target)
{
	int		j = -1;
	std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	enum eForm {SHRUBBERY, ROBOTOMY, PRESIDENTIAL};

	for (size_t i = 0; i < form.length(); i++)
		form[i] = std::tolower(form[i]);
	while(forms[++j] != form && !forms[j].empty())
		continue ;
	try
	{
		switch (j)
		{
			case SHRUBBERY:
				return (new ShrubberyCreationForm(target));
			case ROBOTOMY:
				return (new RobotomyRequestForm(target));
			case PRESIDENTIAL:
				return (new PresidentialPardonForm(target));
			default:
				throw NotValidFormException();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (NULL);
	}
}
