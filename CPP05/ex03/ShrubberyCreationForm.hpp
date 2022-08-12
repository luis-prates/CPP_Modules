#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const target);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
        ~ShrubberyCreationForm();

		virtual void action() const;

	private:
		const std::string	_target;
};

#endif
