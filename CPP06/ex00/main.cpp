/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:10:18 by lprates           #+#    #+#             */
/*   Updated: 2022/07/05 01:10:18 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Please insert one argument." << std::endl;
		return (1);
	}
	if (argv[1][0] == '\0')
	{
		std::cout << "Please insert a non-null argument." << std::endl;
		return (1);
	}

	Scalar converter(argv[1]);

	converter.convertToChar();
	converter.convertToInt();
	converter.convertToFloat();
	converter.convertToDouble();
	return (0);
}

