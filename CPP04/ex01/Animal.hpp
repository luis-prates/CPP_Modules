/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:50:25 by lprates           #+#    #+#             */
/*   Updated: 2022/07/10 17:49:36 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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
