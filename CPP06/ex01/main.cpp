/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:06:33 by lprates           #+#    #+#             */
/*   Updated: 2022/07/09 22:06:33 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data original("Testinggg");
    std::cout << &original << std::endl;
    std::cout << original.getData() << std::endl;

    uintptr_t store = serialize(&original);
    std::cout << store << std::endl;

    Data *after = deserialize(store);
    std::cout << after << std::endl;
    std::cout << after->getData() << std::endl;

    return 0;
}
