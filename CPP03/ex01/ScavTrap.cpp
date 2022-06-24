/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:05:03 by lprates           #+#    #+#             */
/*   Updated: 2022/06/24 22:20:49 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "NoName Scav";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Default constructor was called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Allow me to introduce myself -- I am a SC4V-TP " << this->_name << " steward robot, but my friends call me " << this->_name \
		<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}


ScavTrap& ScavTrap::operator=(ScavTrap const &src)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &src)
    {
      this->_name = src._name;
	  this->_hitPoints = src._hitPoints;
	  this->_energyPoints = src._energyPoints;
	  this->_attackDamage = src._attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << ": Well, I think that about wraps it up. Thanks for -- thanks for comin' to my party, minion." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << ": I am the Gate keeper now!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is out of hit points!" << std::endl;
		return ;
	}
	std::cout << \
		"ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" \
		<< std::endl;
	this->_energyPoints--;
}

