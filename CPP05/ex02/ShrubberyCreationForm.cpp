#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Default constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
	Form("Shrubbery", 145, 137), _target(target)
{
	std::cout << "Form has been created for " << _target \
			  << std::endl << this;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor called." << std::endl;
}

void ShrubberyCreationForm::action() const
{
	std::ofstream shrubbery(_target + "_shrubbery");

	shrubbery	<< "       _-_"        << std::endl
				<< "    /~~   ~~\\"    << std::endl
				<< " /~~         ~~\\" << std::endl
				<< "{               }" << std::endl
 				<< " \\  _-     -_  /" << std::endl
				<< "   ~  \\\\ //  ~"  << std::endl
				<< "_- -   | | _- _"   << std::endl
				<< "  _ -  | |   -_"   << std::endl
				<< "      // \\\\"     << std::endl;
	shrubbery.close();

}
