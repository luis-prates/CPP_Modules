#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Default constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
	Form("Shrubbery", 145, 137), _target(target)
{
	std::cout << "Shrubbery Creation Form has been created for " << _target \
			  << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		throw ForbiddenSelfAssignException();
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Creation Form Destructor called." << std::endl;
}

void ShrubberyCreationForm::action() const
{
	std::string		fileName;
	fileName = _target + "_shrubbery";
	std::ofstream	shrubbery(fileName.c_str());

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
