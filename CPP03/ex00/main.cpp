/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:45:32 by lprates           #+#    #+#             */
/*   Updated: 2022/06/24 21:57:39 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap("Claptrap");
	ClapTrap	clapTrap2(clapTrap);
	ClapTrap	clapTrap3;
	
	clapTrap3 = clapTrap;
	clapTrap.attack("clapTrap2");
	clapTrap2.takeDamage(0);
	clapTrap3.beRepaired(10);
}
