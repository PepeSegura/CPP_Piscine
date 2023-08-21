/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:08:25 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/21 03:00:06 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Intern test_intern;

	std::cout << std::endl << "Creating Forms" << std::endl;
	AForm	*presi = NULL;
	AForm	*robotomy = NULL;
	AForm	*shrubbery = NULL;

	try
	{
		presi = test_intern.makeForm("Presidential Pardon", "Andres Manuel");
		robotomy = test_intern.makeForm("robotomy", "c3po");
		shrubbery = test_intern.makeForm("shrubbery creation", "forest");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	Bureaucrat	boss("Boss", 1);

	if (presi)
		boss.executeForm(*presi);
	if (robotomy)
	boss.executeForm(*robotomy);
	if (shrubbery)
		boss.executeForm(*shrubbery);
	
	delete presi;
	delete robotomy;
	delete shrubbery;
}
