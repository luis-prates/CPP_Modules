/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:50:25 by lprates           #+#    #+#             */
/*   Updated: 2022/06/24 01:56:35 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

# include <iostream>
# include <string>

class AAnimal
{
	public:
		virtual void makeSound() const;
		std::string getType() const;
		virtual ~AAnimal() = 0;

	private:

	protected:
		std::string _type;

};

#endif
