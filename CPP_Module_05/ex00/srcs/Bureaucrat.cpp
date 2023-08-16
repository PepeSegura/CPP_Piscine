/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/16 17:54:32 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Debug.hpp"

Bureaucrat:: Bureaucrat() : _name("unnamed"), _grade(MIN_GRADE)
{
    PRINT_DEBUG("Bureaucrat: Default constructor called.");
}

Bureaucrat:: Bureaucrat(std::string name, int grade) : _name(name)
{
    PRINT_DEBUG("Bureaucrat: Type setters constructor called.");
    if (MAX_GRADE > grade)
        throw (Bureaucrat:: GradeTooHighException());
    if (MIN_GRADE < grade)
        throw (Bureaucrat:: GradeTooLowException());
    _grade = grade;
}

Bureaucrat:: Bureaucrat(const Bureaucrat& f)
{
    PRINT_DEBUG("Bureaucrat: Copy constructor called.");
    *this = f;
}

Bureaucrat:: ~Bureaucrat()
{
    PRINT_DEBUG("Bureaucrat: Destructor called.");
}

Bureaucrat& Bureaucrat:: operator=(const Bureaucrat& f)
{
    PRINT_DEBUG("Bureaucrat: Asignation operand called.");
    if (MIN_GRADE > f._grade)
        throw (Bureaucrat:: GradeTooLowException());
    if (MAX_GRADE < f._grade)
        throw (Bureaucrat:: GradeTooHighException());
    _grade = f._grade;
    return (*this);
}

std::string const Bureaucrat:: getName() const
{
    return (_name);
}

int Bureaucrat:: getGrade() const
{
    return (_grade);
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &f)
{
    out << "Name: " << f.getName() << "\tGrade: " << f.getGrade();
    return (out);
}

void Bureaucrat:: incrementGrade()
{
    if (MAX_GRADE > (_grade - 1))
        throw (Bureaucrat:: GradeTooHighException());
    _grade--;
}

void Bureaucrat:: decrementGrade()
{
    if (MIN_GRADE < (_grade + 1))
        throw (Bureaucrat:: GradeTooLowException());
    _grade++;
}
