#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor was called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Copy Brain constructor called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(Brain const &src)
{
	int	idx = -1;
    std::cout << "Copy Brain assignment operator called" << std::endl;
    if (this != &src)
	{
		while (++idx < 100)
			this->_ideas[idx] = src._ideas[idx];
	}
	return *this;
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called." << std::endl;
}
