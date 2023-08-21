/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/21 01:29:15 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Debug.hpp"

#define STAR_ART "   \
	*           \n   \
   / \\         \n   \
  *   *         \n   \
 /     \\       \n   \
*       *       \n   \
   |  |              \
"

ShrubberyCreationForm:: ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("undefined")
{
	PRINT_DEBUG("ShrubberyCreationForm: Default constructor called.");
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	PRINT_DEBUG("ShrubberyCreationForm: Copy constructor called.");
}

ShrubberyCreationForm:: ShrubberyCreationForm(const ShrubberyCreationForm& f) : AForm("ShrubberyCreationForm", 145, 137), _target(f._target)
{
	PRINT_DEBUG("ShrubberyCreationForm: Copy constructor called.");
	*this = f;
}

ShrubberyCreationForm:: ~ShrubberyCreationForm()
{
	PRINT_DEBUG("ShrubberyCreationForm: Destructor called.");
}

ShrubberyCreationForm& ShrubberyCreationForm:: operator=(const ShrubberyCreationForm& f)
{
	PRINT_DEBUG("ShrubberyCreationForm: Asignation operand called.");
	if (this != &f)
		*this = f;
	return (*this);
}

void ShrubberyCreationForm:: execute(Bureaucrat const & executor) const
{
	std::string outFilename = executor.getName() + "_shrubbery";
	std::ofstream outFile(outFilename.c_str());

	if (outFile.is_open())
	{
		outFile << STAR_ART << std::endl;
		outFile.close();
		std::cout << "New ASCII tree in " << outFilename << " file" << std::endl;
	}
	else
	{
		throw (std::runtime_error("ShrubberyCreationForm: Can't create an ASCII tree in " + outFilename + " file"));
	}
}
