/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:50:25 by lprates           #+#    #+#             */
/*   Updated: 2022/06/25 14:21:38 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

# include <iostream>
# include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(AAnimal const &src);
		AAnimal &operator=(AAnimal const &src);
		virtual void makeSound() const = 0;
		std::string getType() const;
		virtual ~AAnimal() = 0;

	private:

	protected:
		std::string _type;

};

#endif
