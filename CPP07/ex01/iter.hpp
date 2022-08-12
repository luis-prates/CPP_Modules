/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:47:41 by lprates           #+#    #+#             */
/*   Updated: 2022/07/10 18:47:41 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

// In order to use functions with different return values (outside template)
// typename and class in template is the same!

template <class T, class U>
void    iter(T ptr[], std::size_t len, U ft)
{
    for (std::size_t i = 0; i < len; i++)
       ft(ptr[i]);
    return ;
}

// In order to use functions that return void inside another template (like print.hpp) we must use this

template <class T>
void    iter(T ptr[], std::size_t len, void (*ft)(T const &))
{
    for (std::size_t i = 0; i < len; i++)
       ft(ptr[i]);
    return ;
}

// In order to apply template functions in which we can change the values (like change.hpp)

template <class T>
void    iter(T ptr[], std::size_t len, void (*ft)(T &))
{
    for (std::size_t i = 0; i < len; i++)
       ft(ptr[i]);
    return ;
}

#endif
