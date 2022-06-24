/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:45:45 by lprates           #+#    #+#             */
/*   Updated: 2022/06/24 23:20:00 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("NoName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor was called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Allow me to introduce myself -- I am a CL4P-TP " << this->_name << " steward robot, but my friends call me Claptrap " << this->_name \
		<< "! Or they would, if any of them were still alive. Or had existed in the first place!" \
		<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << ": Well, I think that about wraps it up. Thanks for -- thanks for comin' to my party, minion." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
    {
      this->_name = src._name;
	  this->_hitPoints = src._hitPoints;
	  this->_energyPoints = src._energyPoints;
	  this->_attackDamage = src._attackDamage;
    }
    return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of hit points!" << std::endl;
		return ;
	}
	std::cout << \
		"ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" \
		<< std::endl;
	this->_energyPoints--;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of hit points!" << std::endl;
		return ;
	}
	if (this->_hitPoints + amount > 100)
	{
		this->_hitPoints = 100;
		this->_energyPoints--;
		std::cout << \
		"ClapTrap " << this->_name << " has repaired itself maxing out its hit points to 100!" \
		<< std::endl;
		return ;
	}
	else
		this->_hitPoints += amount;
	std::cout << \
		"ClapTrap " << this->_name << " has repaired itself gaining " << amount << " hit points! Has " << this->_hitPoints << " hit points!" \
		<< std::endl;
	this->_energyPoints--;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
	{
		this->_hitPoints = 0;
		std::cout << \
		"ClapTrap " << this->_name << " has been killed by an enemy!" \
		<< std::endl;
		return ;
	}
	std::cout << \
		"ClapTrap " << this->_name << " took " << amount << " of damage! Has " << this->_hitPoints << " hit points!" \
		<< std::endl;
	return ;
}
