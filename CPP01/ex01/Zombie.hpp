/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:15:10 by lprates           #+#    #+#             */
/*   Updated: 2022/06/11 21:09:06 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie(std::string name);
		Zombie();
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);

	
	private:
		std::string	_name;
};

Zombie	*zombieHorde(int n, std::string name);

#endif
