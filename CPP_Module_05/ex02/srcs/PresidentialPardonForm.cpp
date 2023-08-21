/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/21 00:56:57 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Debug.hpp"

PresidentialPardonForm:: PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("undefined")
{
    PRINT_DEBUG("PresidentialPardonForm: Default constructor called.");
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    PRINT_DEBUG("PresidentialPardonForm: Copy constructor called.");
}

PresidentialPardonForm:: PresidentialPardonForm(const PresidentialPardonForm& f) : AForm("PresidentialPardonForm", 25, 5), _target(f._target)
{
    PRINT_DEBUG("PresidentialPardonForm: Copy constructor called.");
    *this = f;
}

PresidentialPardonForm:: ~PresidentialPardonForm()
{
    PRINT_DEBUG("PresidentialPardonForm: Destructor called.");
}

PresidentialPardonForm& PresidentialPardonForm:: operator=(const PresidentialPardonForm& f)
{
    PRINT_DEBUG("PresidentialPardonForm: Asignation operand called.");
    if (this != &f)
	    *this = f;
    return (*this);
}

void PresidentialPardonForm:: execute(Bureaucrat const & executor) const
{
    std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
