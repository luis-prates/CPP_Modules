/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 23:13:57 by lprates           #+#    #+#             */
/*   Updated: 2022/06/24 23:14:14 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	ClapTrap grandfather("Old Guy");
	ScavTrap father("Moustache guy");
	FragTrap mother("Beautiful woman");
	DiamondTrap baby("Baby");
	DiamondTrap jeff;

	std::cout << std::endl;
	grandfather.attack("jeff");
	jeff.takeDamage(0);
	jeff.attack("Old Guy");
	baby.highFivesGuys();
	baby.guardGate();
	baby.whoAmI();
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby.takeDamage(30);
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby.takeDamage(30);
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby = jeff;
	baby.whoAmI();
	baby.beRepaired(100);

	std::cout << std::endl;

	ClapTrap *test1 = new DiamondTrap("test1");
	delete test1;

	std::cout << std::endl;

	return (0);
}
