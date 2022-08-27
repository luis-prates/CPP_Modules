/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:42:31 by lprates           #+#    #+#             */
/*   Updated: 2022/08/28 00:22:42 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base *rand = generate();
    identify(rand);
    delete rand;
    Base bs;
    identify(&bs);

    A a;
    identify(a);
	identify(&a);
    B b;
    identify(b);
    identify(&b);
    C c;
    identify(c);
    identify(&c);
    Base d;
    identify(d);
    identify(&d);
}
