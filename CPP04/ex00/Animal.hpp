/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:50:25 by lprates           #+#    #+#             */
/*   Updated: 2022/06/23 01:05:39 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(Animal const &src);
		Animal &operator=(Animal const &src);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;

	private:

	protected:
		std::string _type;

};

#endif
