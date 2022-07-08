/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:39:02 by lprates           #+#    #+#             */
/*   Updated: 2022/07/06 23:29:23 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_H
#define SCALAR_H

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
