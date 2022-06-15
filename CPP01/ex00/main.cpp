/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:14:20 by lprates           #+#    #+#             */
/*   Updated: 2022/06/11 20:42:29 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie homie("Homie");
	Zombie	*dude = newZombie("Dude");
	
	homie.announce();
	dude->announce();
	RandomChump("Bro");
	delete dude;
	return (0);
}
