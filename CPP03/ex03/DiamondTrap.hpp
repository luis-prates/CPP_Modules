/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:23:40 by lprates           #+#    #+#             */
/*   Updated: 2022/06/22 01:23:40 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap &operator=(DiamondTrap const &src);
		~DiamondTrap();

		void whoAmI();
		void attack(const std::string& target);
};




#endif
