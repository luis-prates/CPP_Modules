/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:49:45 by lprates           #+#    #+#             */
/*   Updated: 2022/06/23 01:06:49 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &src);
		~Cat();

		void makeSound() const;

	private:

};

#endif
