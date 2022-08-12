/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:59:00 by lprates           #+#    #+#             */
/*   Updated: 2022/07/10 17:47:44 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

# include <iostream>
# include <string>
# include <stdint.h>


struct Data
{
    public:
        Data();
		Data(std::string dataType);
        Data(Data const &src);
        Data &operator=(Data const &src);
        ~Data();

		std::string getData() const;

	private:
		std::string _dataType;

};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
