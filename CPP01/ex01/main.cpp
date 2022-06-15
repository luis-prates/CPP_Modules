/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:14:20 by lprates           #+#    #+#             */
/*   Updated: 2022/06/11 21:12:05 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		n = 10;
	
	horde = zombieHorde(n, "Bob");
	for (int i = 0; i < n; i++)
		horde[i].announce();

	delete [] horde;
	return (0);
}
