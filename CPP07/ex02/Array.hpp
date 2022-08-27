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

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdio>
# include <cstdlib>
# include <exception>
# include <iostream>

template <class T>
class Array
{
    private:
        T 				*_elements;
        unsigned int	_size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &array);
        ~Array();
        Array			&operator=(const Array& array);
        T				&operator[](std::size_t idx);
        T				operator[](std::size_t idx) const;
        unsigned int	size() const;
        
		class OutofBoundsException : public std::exception
		{
            private:
            	virtual const char* what() const throw();
        };
};

template <class T>
unsigned int Array<T>::size() const
{
    return (this->_size);
}

template <class T>
Array<T>::Array()
{
    _size = 0;
    _elements = new T[size()]();
}

template <class T>
Array<T>::Array(unsigned int n)
{
    _size = n;
    _elements = new T[size()]();
}

template <class T>
Array<T>::Array(const Array &array)
{
    this->_size = array.size();
    this->_elements = new T[size()]();
    *this = array;
}

template <class T>
Array<T>  &Array<T>::operator=(const Array& array)
{
    if (this == &array)
		return (*this);
	if (this->size() != array.size())
    {
        delete [] _elements;
        this->_size = array.size();
        this->_elements = new T[size()]();
    }
    for (std::size_t i = 0; i < this->size() && i < array.size(); i++)
        this->_elements[i] = array._elements[i];
    return (*this);
}

template <class T>
T  &Array<T>::operator[](std::size_t idx)
{
    if (idx >= size())
        throw OutofBoundsException();
    return (_elements[idx]);
}

template <class T>
T  Array<T>::operator[](std::size_t idx) const
{
    if (idx >= size())
        throw OutofBoundsException();
    return (_elements[idx]);
}

template <class T>
Array<T>::~Array()
{
    delete [] _elements;
    _size = 0;
    // std::cout << "Destroying array" << std::endl;   
}

template <class T>
const char* Array<T>::OutofBoundsException::what() const throw()
{
    return ("Trying to access outside array");
}


#endif
