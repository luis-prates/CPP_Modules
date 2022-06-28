/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:42:15 by lprates           #+#    #+#             */
/*   Updated: 2022/06/29 00:35:00 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{

	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		
		const std::string	&getName();
		int					&getGrade();
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(Form &form);
		void				executeForm(const Form &form);

	private:
		const std::string	_name;
		int					_grade;

		class	GradeTooHighException : virtual public std::exception
		{
			private:
				virtual const char* what() const throw ();
		};
		class	GradeTooLowException : virtual public std::exception
		{
			private:
				virtual const char* what() const throw ();
		};
		class ForbiddenSelfAssign : virtual public std::exception
		{
			private:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &stream, Bureaucrat &buro);

#endif
