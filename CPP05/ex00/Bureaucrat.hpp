/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:42:15 by lprates           #+#    #+#             */
/*   Updated: 2022/07/10 17:49:36 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		
		const std::string	&getName();
		int					&getGrade();
		void				incrementGrade();
		void				decrementGrade();

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
};

std::ostream	&operator<<(std::ostream &stream, Bureaucrat &buro);

#endif
