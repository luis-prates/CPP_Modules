#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Default constructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : 
	Form("Robotomy", 72, 45), _target(target)
{
	std::cout << "Robotomy Request Form has been created for " << _target \
			  << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		throw ForbiddenSelfAssignException();
	}
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy Request Form Destructor called." << std::endl;
}

void RobotomyRequestForm::action() const
{
	std::cout << "Ziiiiiiiiiiiiin Brrrrrrrrrrrrrr *drilling noises*" << std::endl;
	srand (time(NULL));
	int	random = rand() % 10;

	if (random >= 0 && random < 5)
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
