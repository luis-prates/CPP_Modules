/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 02:04:10 by lprates           #+#    #+#             */
/*   Updated: 2022/06/19 19:10:30 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	// extra tests
	std::cout << std::endl;
	std::cout << "Extra tests" << std::endl;
	Fixed c(4);
	std::cout << "c value: " << c << std::endl;
	std::cout << "c prefix decrement: "<< --c << std::endl;
	std::cout << "c value after: "<< c << std::endl;
	std::cout << "c postfix decrement: "<< c-- << std::endl;
	std::cout << "c value after: "<< c << std::endl;
	Fixed d (Fixed(2.0f) * Fixed(1.0f));
	std::cout << "d value: "<< d << std::endl;
	std::cout << "c = 4 and d = 2 for easier comparison" << std::endl;
	c = Fixed(4);
	std::cout << "min c and d: "<< Fixed::min( c, d ) << std::endl;
	std::cout << "d / c: " << d / c << std::endl;
	std::cout << "c < d: " << (c < d) << std::endl;
	std::cout << "c <= d: " << (c <= d) << std::endl;
	std::cout << "c > d: " << (c > d) << std::endl;
	std::cout << "c >= d: " << (c >= d) << std::endl;
	std::cout << "c == d: " << (c == d) << std::endl;
	std::cout << "c != d: " << (c != d) << std::endl;

	std::cout << std::endl;
	std::cout << "Limits tests e=5000000 f=0.10f" << std::endl;
	Fixed e(5000000);
	Fixed f(0.10f);
	std::cout << "e / f: " << e / f << std::endl;
	std::cout << "e=5000000 f=2" << std::endl;
	f = 2;
	std::cout << "e / f: " << e / f << std::endl;
	std::cout << "e * f: " << e * f << std::endl;
	std::cout << "e=5000000 f=0.5f" << std::endl;
	f = 0.5f;
	std::cout << "e * f: " << e * f << std::endl;
	return 0;
}
