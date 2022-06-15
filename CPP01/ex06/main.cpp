/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:19:32 by lprates           #+#    #+#             */
/*   Updated: 2022/06/15 01:54:38 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main(int argc, char *argv[])
{
	Harl	harl;
	
	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cout << "Usage: ./Harl [level]" << std::endl;
	return (0);
}
