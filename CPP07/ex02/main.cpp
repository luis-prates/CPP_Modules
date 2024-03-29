/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:35:01 by lprates           #+#    #+#             */
/*   Updated: 2022/08/28 00:52:45 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

void    empty_array_tests()
{
    std::cout << std::endl;
    std::cout << "Empty array tests" << std::endl;
    std::cout << std::endl;
    Array <int>a;
    try
	{
        std::cout << a[0] << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
    try
	{
        std::cout << a[-1] << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
    try
	{
        std::cout << a[1] << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
}

void    full_array_tests()
{
    std::cout << std::endl;
    std::cout << "Full array tests" << std::endl;
    std::cout << std::endl;
    Array <int>a(10);
    try
	{
        a[0] = 2;
        std::cout << a[0] << std::endl;
        std::cout << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
    Array <int>b(a);
    try
	{
        std::cout << b[0] << std::endl;
        b[0] = 3;
        std::cout << a[0] << std::endl;
        std::cout << b[0] << std::endl;
        std::cout << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }

    try
	{
        a[-1] = 2;
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try
	{
        std::cout << a[-1] << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }

    try
	{
        a[1] = 3999;
        std::cout << a[1] << std::endl;
        std::cout << b[1] << std::endl;
        b = a;
        std::cout << a[1] << std::endl;
        std::cout << b[1] << std::endl;
        std::cout << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }

    try
	{
        b[9] = 6589;
        std::cout << a[9] << std::endl;
        std::cout << b[9] << std::endl;
        std::cout << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
    try
	{
        a[10] = 1111;
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try
	{
        std::cout << b[10] << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
}

void    extra_access_tests()
{
    std::cout << std::endl;
    std::cout << "Extra Access tests" << std::endl;
    std::cout << std::endl;

    Array <int>a(5);
    Array <int>b(10);
    b[0] = 10;
    // outside a range
    b[5] = 8;
    a = b;
    try
	{
        std::cout << a[5] << std::endl;
        std::cout << b[5] << std::endl;
        b[7] = 10;
        std::cout << a[7] << std::endl;
        std::cout << b[7] << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
}

void    const_tests()
{
    std::cout << std::endl;
    std::cout << "Const tests" << std::endl;
    std::cout << std::endl;
    const Array <int>a(5);
    // Check that it is not possible to change if array is const
    // a[4] = 2;
    std::cout << a[4] << std::endl;
}

void    intra_tests()
{
    std::cout << std::endl;
    std::cout << "Provided tests" << std::endl;
    std::cout << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return ;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return ;
}

int main()
{
    /*Array <int>a(5);
    Array <int>b(0);
    try
    {
        std::cout << "a: " << a.size() << " b: " << b[1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }*/
    
    empty_array_tests();
    full_array_tests();
    extra_access_tests();
    const_tests();
    intra_tests();
}
