/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:33:35 by lprates           #+#    #+#             */
/*   Updated: 2022/08/28 00:46:58 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void subject_tests( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return ;
}

class Awesome
{
	public:
		Awesome(void) : _n(0) {}
		Awesome( int n ) : _n( n ) {}
		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int get_n() const { return _n; }
		
	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void)
{
	std::cout << "Subject Tests" << std::endl;
	subject_tests();
	std::cout << std::endl;
	
	{
		std::cout << "Eval Tests" << std::endl;
		Awesome a(2), b(4);
		swap(a, b);
		std::cout << a << " " << b << std::endl;
		std::cout << max(a, b) << std::endl;
		std::cout << min(a, b) << std::endl;
	}
	return (0);
}
