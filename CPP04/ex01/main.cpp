/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:33:53 by lprates           #+#    #+#             */
/*   Updated: 2022/06/25 15:58:18 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int		nbrAnimals = 2;
	Animal *animals[nbrAnimals];
	for (int i = 0; i < nbrAnimals; i++)
	{
		if (i < (nbrAnimals / 2))
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < nbrAnimals; i++)
		delete animals[i];

	Dog doge;
	Dog shiba;
	Dog dogecopy(doge);
	shiba = dogecopy;

	return 0;
}
