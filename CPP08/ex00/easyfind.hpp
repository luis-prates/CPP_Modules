/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:02:23 by lprates           #+#    #+#             */
/*   Updated: 2022/08/28 13:49:48 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <string>
# include <vector>

class ElementNotFound: public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Element not found";
		}
};

template <class T>
void	easyfind(T &population, int toFind)
{
	typename T::iterator iter;
	
	iter = std::find(population.begin(), population.end(), toFind);
	try {
		if (iter == population.end())
			throw (ElementNotFound());
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return ;
	}
	std::cout << "Element found for value: " << *iter << std::endl;
}

#endif
