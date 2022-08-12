/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:46:43 by lprates           #+#    #+#             */
/*   Updated: 2022/07/10 18:05:06 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base *generate(void)
{
    std::srand(time(NULL));
    int d = rand() % 3;
    switch (d)
    {
		case 0:
			std::cout << "A\n";
			return (new A);
		case 1:
			std::cout << "B\n";
			return (new B);
		case 2:
			std::cout << "C\n";
			return (new C);
		default:
			return (NULL);
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "Converted class A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Converted class B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Converted class C" << std::endl;
    else
        std::cout << "No valid conversion available" << std::endl;
}

void identify(Base &p)
{
    try
	{
        A a = dynamic_cast<A &>(p);
        std::cout << "Converted class A" << std::endl;
        return ;
    }
    catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
    }
    try
	{
        B b = dynamic_cast<B &>(p);
        std::cout << "Converted class B" << std::endl;
        return ;
    }
    catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
    }
    try
	{
        C c = dynamic_cast<C &>(p);
        std::cout << "Converted class C" << std::endl;
        return ;
    }
    catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
    }
    std::cout << "No valid conversion available" << std::endl;
}
