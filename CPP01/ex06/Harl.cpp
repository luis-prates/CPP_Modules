/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:19:47 by lprates           #+#    #+#             */
/*   Updated: 2022/06/15 01:56:59 by lprates          ###   ########.fr       */
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
	void	(Harl::*fPointer[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int		i = -1;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	enum eLevel {DEBUG, INFO, WARNING, ERROR};

	while(levels[++i] != level && !levels[i].empty())
		continue ;
	switch (i)
	{
		case eLevel(DEBUG):
			(this->*fPointer[0])();
			
		case eLevel(INFO):
			(this->*fPointer[1])();
			
		case eLevel(WARNING):
			(this->*fPointer[2])();
			
		case eLevel(ERROR):
			(this->*fPointer[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
