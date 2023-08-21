/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/21 02:51:14 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Debug.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern:: Intern()
{
   PRINT_DEBUG("Intern: Default constructor called.");
}

Intern:: Intern(Intern& f)
{
	PRINT_DEBUG("Intern: Copy constructor called.");
	*this = f;
}

Intern:: ~Intern()
{
	PRINT_DEBUG("Intern: Destructor called.");
}

Intern& Intern:: operator=(Intern& f)
{
	PRINT_DEBUG("Intern: Asignation operand called.");
	if (this != &f)
		*this = f;
	return (*this);
}

int check_forms(std::string type)
{
	std::string available_forms[] =
	{
		"presidential"				,
		"robotomy"					,
		"shrubbery"					,
		"presidential pardon"		,
		"robotomy request"			,
		"shrubbery creation"		,
		"presidential pardon form"	,
		"robotomy request form"		,
		"shrubbery creation form"	,
	};

	for (std::string::iterator it = type.begin(); it != type.end(); ++it)
	{
		*it = std::tolower(*it);
	}
	for (int i = 0; i < 9; i++)
	{
		if (type == available_forms[i])
			return (i % 3);
	}
	return (-1);
}

AForm*   Intern:: makeForm(std::string type, std::string target)
{
	int	flag;

	flag = check_forms(type);
	switch (flag)
	{
		case 0: return (new PresidentialPardonForm(target));
		case 1: return (new RobotomyRequestForm(target));
		case 2: return (new ShrubberyCreationForm(target));
		default: throw (std::runtime_error("Invalif type of form"));
	}
}