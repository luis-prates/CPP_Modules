/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:37:44 by lprates           #+#    #+#             */
/*   Updated: 2022/08/28 18:42:08 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>
# include <deque>
# include <list>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
    private:

    public:
        MutantStack();
        MutantStack(const MutantStack &mutantStack);
        ~MutantStack();
        MutantStack &operator=(const MutantStack &mutantStack);
        typedef typename std::stack<T, Container>::container_type::iterator  iterator;
        typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;
        
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
		const_iterator begin() const {return this->c.begin();}
		const_iterator end() const {return this->c.end();}
		reverse_iterator rbegin() {return this->c.rbegin();}
		reverse_iterator rend() {return this->c.rend();}
		const_reverse_iterator rbegin() const {return this->c.rbegin();}
		const_reverse_iterator rend() const {return this->c.rend();}
};

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
    std::cout << "Contructor called" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &mutantStack) : std::stack<T, Container>()
{
    *this = mutantStack;
    std::cout << "Copy Constructor" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &mutantStack)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &mutantStack)
		this->c = mutantStack.c;
    return *this;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
    std::cout << "Destructor called" << std::endl;
}

#endif

