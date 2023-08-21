/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/19 20:44:06 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Debug.hpp"

RobotomyRequestForm:: RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("undefined")
{
    PRINT_DEBUG("RobotomyRequestForm: Default constructor called.");
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    PRINT_DEBUG("RobotomyRequestForm: Copy constructor called.");
}

RobotomyRequestForm:: RobotomyRequestForm(const RobotomyRequestForm& f) : AForm("RobotomyRequestForm", 72, 45), _target(f._target)
{
    PRINT_DEBUG("RobotomyRequestForm: Copy constructor called.");
    *this = f;
}

RobotomyRequestForm:: ~RobotomyRequestForm()
{
    PRINT_DEBUG("RobotomyRequestForm: Destructor called.");
}

RobotomyRequestForm& RobotomyRequestForm:: operator=(const RobotomyRequestForm& f)
{
    PRINT_DEBUG("RobotomyRequestForm: Asignation operand called.");
	if (this != &f)
		*this = f;
    return (*this);
}

void RobotomyRequestForm:: execute(Bureaucrat const & executor) const
{
    (void)executor;
    std::cout << "RobotomyRequestForm: Execute form." << std::endl;
}
