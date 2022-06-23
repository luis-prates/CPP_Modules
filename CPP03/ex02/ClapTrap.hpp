/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:45:55 by lprates           #+#    #+#             */
/*   Updated: 2022/06/20 23:45:55 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		ClapTrap &operator=(ClapTrap const &src);
		virtual ~ClapTrap();

		// Setter
		void	setName(std::string name);
		void	setHitPoints(int hitPoints);
		void	setEnergyPoint(int energyPoints);
		void	setAttackDamage(int attackDamage);
		

		// Getters
		std::string	getName();
		int			getHitPoints();
		int			getEnergyPoints();
		int			getAttackDamage();

		virtual void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif
