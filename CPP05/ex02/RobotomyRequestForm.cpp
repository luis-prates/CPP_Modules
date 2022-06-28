#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Default constructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : 
	Form("Robotomy", 72, 45), _target(target)
{
	std::cout << "Form has been created for " << _target \
			  << std::endl << this;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called." << std::endl;
}

void RobotomyRequestForm::action() const
{
	std::cout << "Ziiiiiiiiiiiiin Brrrrrrrrrrrrrr *drilling noises*" << std::endl;
	int	random = std::rand() % 10;

	if (random >= 0)
	{
		std::cout << _target << " has been robotomized!\n";
		return ;
	}
	if (random < 10)
	{
		std::cout << "Robotomy failed for target " << _target << std::endl;
		return ;
	}
}
