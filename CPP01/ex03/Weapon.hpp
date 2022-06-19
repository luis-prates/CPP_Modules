/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:15:28 by lprates           #+#    #+#             */
/*   Updated: 2022/06/19 14:35:25 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		void				setType(std::string type);
		const std::string	&getType() const;
	
	private:
		std::string		_type;
};

#endif
