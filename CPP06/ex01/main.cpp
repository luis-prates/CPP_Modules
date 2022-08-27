/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:06:33 by lprates           #+#    #+#             */
/*   Updated: 2022/08/28 00:11:17 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data *original = new Data("Testinggg");
    std::cout << "original address before :" << original << std::endl;
    std::cout << "original data before: " << original->getData() << std::endl;

    uintptr_t store = serialize(original);
    std::cout << "serialized original: " << store << std::endl;

    Data *after = deserialize(store);
    std::cout << "deserialize result address: " << after << std::endl;
    std::cout << "deserialze value: " << after->getData() << std::endl;
    std::cout << "original address: " << original << std::endl;
    std::cout << "original value: " << original->getData() << std::endl;
	//original->_dataType = "mudastis";
	std::cout << "deserialize value after change: " << after->getData() << std::endl;
    std::cout << "original value after change: " << original->getData() << std::endl;

    return 0;
}
