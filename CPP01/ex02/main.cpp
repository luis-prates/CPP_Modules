/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:20:37 by lprates           #+#    #+#             */
/*   Updated: 2022/06/11 21:27:39 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringRef = brain;
	
	std::cout << "brain var address: " << &brain << std::endl;
	std::cout << "stringPTR address: " << stringPTR << std::endl;
	std::cout << "stringRef address: " << &stringRef << std::endl;

	std::cout << "brain value: " << brain << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringRef value: " << stringRef << std::endl;

	return (0);
}
