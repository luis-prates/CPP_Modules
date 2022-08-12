/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:39:02 by lprates           #+#    #+#             */
/*   Updated: 2022/07/10 17:49:36 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <climits>
# include <cstdlib>
# include <cctype>
# include <string.h>
# include <sstream>

enum ErrorHandling {
	eVALID = 0,
	eNEGINF,
	ePOSINF,
	eNAN,

	eIMPOS,
	eNONDISP,

	eINVALID
};

class Scalar
{
    public:
        Scalar();
        Scalar(char *str);
        Scalar(Scalar const &src);
        Scalar &operator=(Scalar const &src);
        ~Scalar();

		int		checkSpecialCases();
		int		checkOneCharCases();
		int		checkValidInput(char *ptr, double converted);
		void	convertToChar();
		void	convertToInt();
		void	convertToFloat();
		void	convertToDouble();

	private:
		std::string	_str;
		double		_generalValue;
		int			_generalValueStatus;
};

#endif
