/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:19:47 by lprates           #+#    #+#             */
/*   Updated: 2022/06/15 01:28:48 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "DEBUG: " << \
	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. " << \
	"I really do!" \
	<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: " << \
	"I cannot believe adding extra bacon costs more money. " << \
	"You didn’t put enough bacon in my burger! " << \
	"If you did, I wouldn’t be asking for more!" \
	<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING: " << \
	"I think I deserve to have some extra bacon for free. " << \
	"I’ve been coming for years whereas you started working here since last month." \
	<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR: " << \
	"This is unacceptable! " << \
	"I want to speak to the manager now." \
	<< std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*fct[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int		i = 0;
	enum	e_level {DEBUG, INFO, WARNING, ERROR};
	
	(void) level;
	while (i < 4)
	{
		
		i++;
	}
	(this->*fct[e_level(level.c_str())])();
	
	
}
