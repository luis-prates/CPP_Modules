/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:24:29 by lprates           #+#    #+#             */
/*   Updated: 2022/06/25 12:24:30 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain();
		Brain(Brain const &src);
		Brain &operator=(Brain const &src);
		~Brain();

	private:

	protected:
		std::string _ideas[100];

};

#endif
