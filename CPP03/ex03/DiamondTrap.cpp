/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:23:28 by lprates           #+#    #+#             */
/*   Updated: 2022/06/24 22:54:19 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "NoName Diamond";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_attackDamage = FragTrap::_attackDamage;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << "DiamondTrap Default constructor was called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	ClapTrap::_name = this->_name + "_clap_name";
	this->_attackDamage = FragTrap::_attackDamage;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << "Allow me to introduce myself -- I am a DI4MOND-TP " << this->_name << " steward robot, but my friends call me DiamondTrap " << this->_name \
		<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
	*this = src;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &src)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &src)
    {
      this->_name = src._name;
	  this->ClapTrap::_name = this->_name + "_clap_name";
	  this->_hitPoints = src._hitPoints;
	  this->_energyPoints = src._energyPoints;
	  this->_attackDamage = src._attackDamage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " has been destroyed!" << std::endl;
	return ;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hello my DiamondTrap name is " << _name << " and my ClapTrap name is "
			  << ClapTrap::_name << std::endl;
	return;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
	return ;
}
