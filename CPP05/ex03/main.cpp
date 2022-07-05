/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprates <lprates@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:42:30 by lprates           #+#    #+#             */
/*   Updated: 2022/07/05 00:36:42 by lprates          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void    shrubbery_tests(Form *shrub)
{
    std::cout << std::endl;
    std::cout << "Shrubbery Form Tests" << std::endl;
    std::cout << std::endl;
    Bureaucrat farm("Farmer", 146);
    Bureaucrat stud("Student", 145);
    Bureaucrat intern("Intern", 138);
    Bureaucrat pres("President", 137);

    farm.signForm(*shrub);
    stud.signForm(*shrub);
    intern.executeForm(*shrub);
    pres.executeForm(*shrub);
    std::cout << std::endl;
}

void    robotomy_tests(Form *robot)
{
    std::cout << std::endl;
    std::cout << "Robotomy Form Tests" << std::endl;
    std::cout << std::endl;
    Bureaucrat farm("Farmer", 73);
    Bureaucrat stud("Student", 72);
    Bureaucrat intern("Intern", 46);
    Bureaucrat pres("President", 45);

    farm.signForm(*robot);
    stud.signForm(*robot);
    intern.executeForm(*robot);
    pres.executeForm(*robot);
    std::cout << std::endl;
}

void    presi_tests(Form *presi)
{
    std::cout << std::endl;
    std::cout << "President Form Tests" << std::endl;
    std::cout << std::endl;

    Bureaucrat farm("Farmer", 26);
    Bureaucrat stud("Student", 25);
    Bureaucrat intern("Intern", 6);
    Bureaucrat pres("President", 5);

    farm.signForm(*presi);
    stud.signForm(*presi);
    intern.executeForm(*presi);
    pres.executeForm(*presi);
    std::cout << std::endl;
}

int main()
{
    std::cout << std::endl;
    std::cout << "Form Creation Tests" << std::endl;
    std::cout << std::endl;

    // Form test;
    Form *temp = 0;
    Intern john;
    temp = john.makeForm("", "Ricardo");
    temp = john.makeForm("Random", "Ricardo");
    temp = john.makeForm("Roboreq", "Ricardo");
    temp = john.makeForm("Shrubbery creation", "Official Shrub");
    shrubbery_tests(temp);
    delete temp;
    temp = john.makeForm("robotomy request", "Official Robot");
    robotomy_tests(temp);
    delete temp;
    temp = john.makeForm("Presidential Pardon", "Official Presi");
    presi_tests(temp);
    delete temp;
}
