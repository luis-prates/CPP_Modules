/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:45:32 by lprates           #+#    #+#             */
/*   Updated: 2022/06/24 23:13:22 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap clap("Clap");
	ScavTrap momma("Momma");
	FragTrap baby("Baby");

	baby.attack("Clap");
	clap.takeDamage(30);
	clap.attack("Baby");
	momma.attack("Baby");
	baby.takeDamage(20);
	baby.highFivesGuys();
	momma.attack("Baby");
	baby.takeDamage(20);
	momma.guardGate();
	momma.attack("Baby");
	baby.takeDamage(20);
	momma.attack("Baby");
	baby.takeDamage(20);
	momma.attack("Baby");
	baby.takeDamage(20);
	momma.attack("Baby");
	baby.takeDamage(20);

	ClapTrap *test1 = new ScavTrap("Test 1");
	ClapTrap *test2 = new FragTrap("Test 2");
	ClapTrap *test3 = new ClapTrap("Test 3");
	test1->attack("test2");
	test2->attack("test3");
	test3->attack("test1");
	delete test3;
	delete test2;
	delete test1;

	return (0);
}
