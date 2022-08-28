/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:26:17 by lprates           #+#    #+#             */
/*   Updated: 2022/08/28 17:30:22 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(uint N) : _maxSize(N), _span(new std::vector<int>[_maxSize]())
{
	return ;
}

Span::Span(Span const &src) : _maxSize(0), _span(NULL)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Span &Span::operator=(Span const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		delete [] this->_span;
		this->_maxSize = src._maxSize;
		std::vector<int> *newSpan = new std::vector<int>[src._span->size()];
		std::copy(src._span->begin(), src._span->end(), std::back_inserter(*newSpan));
		this->_span = newSpan;
	}
    return *this;
}

Span::~Span()
{
}

unsigned int Span::size() const
{
	return (this->_maxSize);
}

void Span::addNumber(int number)
{
	if (this->_span->size() >= this->_maxSize)
		throw std::out_of_range("Exception: No more space in container");
	this->_span->push_back(number);
	return ;
}

unsigned int Span::shortestSpan()
{
	if (this->_span->size() <= 1)
		throw std::length_error("Exception: Not enough elements in container!");
	std::vector<int> *temp = this->_span;
	std::sort(temp->begin(), temp->end());
	std::vector<int> newVector(temp->size(), 0);
	std::adjacent_difference(temp->begin(), temp->end(), newVector.begin());
	return (*std::min_element(newVector.begin() + 1, newVector.end()));
	
}

unsigned int Span::longestSpan()
{
	if (this->_span->size() <= 1)
		throw std::length_error("Exception: Not enough elements in container!");
	return (*std::max_element(this->_span->begin(), this->_span->end()) \
			- *std::min_element(this->_span->begin(), this->_span->end()));
}

void Span::fill_span(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_span->size() + std::distance(begin, end) > _maxSize)
		throw std::out_of_range("Not enough space in Container for range");
	this->_span->insert(this->_span->end(), begin, end);
}

void Span::print() 
{
	std::cout << "Vector contains" << std::endl;
	for (std::vector<int>::iterator it = this->_span->begin(); it < this->_span->end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}
