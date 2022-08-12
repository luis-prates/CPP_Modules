#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
        ~RobotomyRequestForm();

		virtual void action() const;

	private:
		const std::string	_target;

};

#endif
