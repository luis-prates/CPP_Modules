/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:42:30 by lprates           #+#    #+#             */
/*   Updated: 2022/06/27 01:13:01 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	{
		Form papel("Student Council", 10, 100);
		std::cout << papel;

		std::cout << std::endl;

		try {
			Form papel2("Student Council", 188, 100);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		try {
			Form papel3("Student Council", 42, -1);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Form papel("Student Council", 10, 100);
		Form teste;
		
		Bureaucrat buro("Wronga", 11);
		Bureaucrat bura("Relex", 5);

		try {
			//teste = papel;
			papel.beSigned(buro);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}
		std::cout << std::endl;

		try {
			papel.beSigned(bura);
		}
		catch (std::exception & error) {
			std::cout << error.what() << std::endl;
		}

		std::cout << papel;
	}
}
