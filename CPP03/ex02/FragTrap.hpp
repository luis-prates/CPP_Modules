/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 01:18:52 by lprates           #+#    #+#             */
/*   Updated: 2022/06/22 01:18:52 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define	FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	private:


	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		FragTrap &operator=(FragTrap const &src);
		~FragTrap();

		void highFiveGuys();
		void attack(const std::string &target);
};

#endif
