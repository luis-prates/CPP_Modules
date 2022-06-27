/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:42:30 by lprates           #+#    #+#             */
/*   Updated: 2022/06/27 00:37:59 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat bur1("Fry", 100);
		std::cout << bur1 << std::endl;
		Bureaucrat bur2("Fry", 2);
		std::cout << bur2 << std::endl;
		bur2.incrementGrade();
		std::cout << bur2 << std::endl;
		Bureaucrat bur3("Fry", 4);
		std::cout << bur3 << std::endl;
		Bureaucrat bur4("Fry", 150);
		std::cout << bur4 << std::endl;
		bur4.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "End mine" << std::endl;

	{
		try {
			Bureaucrat buro("Relex", 0);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		try {
			Bureaucrat buro("Relex", 151);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		std::cout << std::endl;
	}
	{
		try {
			Bureaucrat buro("Relex", 1);
			buro.incrementGrade();
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		try {
			Bureaucrat buro("Relex", 150);
			buro.decrementGrade();
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		std::cout << std::endl;
	}
	{
		Bureaucrat buro("Relex", 115);
		Bureaucrat bura("Relax", 1);

		std::cout << buro << std::endl;
		std::cout << bura << std::endl;
	}
}
