/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:18:43 by lprates           #+#    #+#             */
/*   Updated: 2022/06/22 01:18:43 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "NoName Frag";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default constructor was called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Allow me to introduce myself -- I am a SC4V-TP " << this->_name << " steward robot, but my friends call me FragTrap " << this->_name \
		<< "! Or they would, if any of them were still alive. Or had existed in the first place!" \
		<< std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}


FragTrap& FragTrap::operator=(FragTrap const &src)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &src)
    {
      this->_name = src._name;
	  this->_hitPoints = src._hitPoints;
	  this->_energyPoints = src._energyPoints;
	  this->_attackDamage = src._attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << ": Well, I think that about wraps it up. Thanks for -- thanks for comin' to my party, minion." << std::endl;
}

void FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << this->_name << ": Yo guys, give me High Fives for the meatbags!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (!this->_energyPoints || this->_hitPoints <= 0)
		return ;

	std::cout << \
		"FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" \
		<< std::endl;
	this->_energyPoints--;
}
