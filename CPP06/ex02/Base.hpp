/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:57:56 by lprates           #+#    #+#             */
/*   Updated: 2022/07/10 17:58:34 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

class Base
{
    public:
        virtual ~Base();

	private:

};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif
