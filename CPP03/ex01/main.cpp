/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:45:32 by lprates           #+#    #+#             */
/*   Updated: 2022/06/24 21:59:49 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	loki( "Loki" );
	ScavTrap	thor( a );
	ScavTrap	odin;
	
	odin = loki;
	loki.attack( "Thor" );
	loki.takeDamage(100);
	loki.beRepaired(3);
	loki.guardGate();
}
