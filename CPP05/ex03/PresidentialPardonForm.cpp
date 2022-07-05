#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Default constructor was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : 
	Form("PresidentialPardon", 25, 5), _target(target)
{
	std::cout << "Presidential Pardon Form has been created for " << _target \
			  << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		throw ForbiddenSelfAssignException();
	}
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential Pardon Form Destructor called." << std::endl;
}

void PresidentialPardonForm::action() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebro\n";
}
