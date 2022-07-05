/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:28:08 by lprates           #+#    #+#             */
/*   Updated: 2022/07/05 00:33:45 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

# include <iostream>
# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const &src);
        Intern &operator=(Intern const &src);
        ~Intern();

		Form	*makeForm(std::string form, std::string target);

		class NotValidFormException : virtual public std::exception
		{
			private:
				virtual const char *what() const throw();
		};

private:

};

#endif
