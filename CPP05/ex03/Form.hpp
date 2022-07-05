/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 22:35:58 by lprates           #+#    #+#             */
/*   Updated: 2022/07/05 00:39:33 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string const name, int const gradeToSign, int const gradeToExecute);
		Form(Form const &src);
		Form &operator=(Form const &src);
		virtual ~Form();

		// getters
		const std::string	&getName() const;
		bool				getIsSigned() const;
		const int			&getGradeToSign() const;
		const int			&getGradeToExecute() const;
		
		// member functions
		void				beSigned(Bureaucrat &buro);
		void				execute(const Bureaucrat &executor) const;
		virtual void        action(void) const = 0;

		class GradeTooLowException : virtual public std::exception
		{
			private:
				virtual const char* what() const throw ();
		};
		class GradeTooHighException : virtual public std::exception
		{
			private:
				virtual const char *what() const throw();
		};
		class ForbiddenSelfAssignException : virtual public std::exception
		{
			private:
				virtual const char *what() const throw();
		};
		class NotSignedException : virtual public std::exception
		{
			private:
				virtual const char *what() const throw();
		};

	private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

};

std::ostream	&operator<<(std::ostream &stream, Form &form);

#endif
