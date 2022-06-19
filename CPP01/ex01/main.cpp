/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:14:20 by lprates           #+#    #+#             */
/*   Updated: 2022/06/19 14:32:48 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		n = 2;
	
	horde = zombieHorde(n, "Bob");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
