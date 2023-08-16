/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/16 18:40:56 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Debug.hpp"

AForm:: AForm() : _name("unnamed"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
    PRINT_DEBUG("AForm: Default constructor called.");
    if (MAX_GRADE > _gradeToSign || MAX_GRADE > _gradeToExecute)
        throw (AForm:: GradeTooHighException(0));
    if (MIN_GRADE < _gradeToSign || MIN_GRADE < _gradeToExecute)
        throw (AForm:: GradeTooLowException(0));
}

AForm:: AForm(const AForm& f) : _name(f._name), _gradeToSign(f._gradeToSign), _gradeToExecute(f._gradeToExecute)
{
    PRINT_DEBUG("AForm: Copy constructor called.");
    *this = f;
}

AForm:: AForm(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false) , _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    PRINT_DEBUG("AForm: Typer setters constructor called.");
    if (MAX_GRADE > _gradeToSign || MAX_GRADE > _gradeToExecute)
        throw (AForm:: GradeTooHighException(0));
    if (MIN_GRADE < _gradeToSign || MIN_GRADE < _gradeToExecute)
        throw (AForm:: GradeTooLowException(0));
}

AForm:: ~AForm()
{
    PRINT_DEBUG("AForm: Destructor called.");
}

AForm& AForm:: operator=(const AForm& f)
{
    PRINT_DEBUG("AForm: Asignation operand called.");
    if (MAX_GRADE > f._gradeToSign || MAX_GRADE > f._gradeToExecute)
        throw (AForm:: GradeTooHighException(0));
    if (MIN_GRADE < f._gradeToSign || MIN_GRADE < f._gradeToExecute)
        throw (AForm:: GradeTooLowException(0));
    if (this != &f)
		*this = f;
    return (*this);
}

std::string const AForm:: getName() const
{
    return (_name);
}

bool AForm:: isSigned() const
{
    return (_signed);
}

int AForm:: getGradeToSign() const
{
    return (_gradeToSign);
}

int AForm:: getGradeToExecute() const
{
    return (_gradeToExecute);
}

void AForm:: beSigned(Bureaucrat b)
{
    if (b.getGrade() > _gradeToSign)
        throw (AForm:: GradeTooLowException(1));
    if (_signed == true)
        throw (AForm:: GradeTooLowException(2));
    _signed = true;
}

const char * AForm::GradeTooHighException:: what() const throw()
{
    switch (_flag)
    {
        case 0: return ("AForm: Couldn't create the form, [rank to hight]");
        default: return ("AForm: TooHighException");
    }
}

const char * AForm::GradeTooLowException:: what() const throw()
{
    switch (_flag)
    {
        case 0: return ("AForm: Couldn't create the form, [rank to low]");
        case 1: return ("AForm: Couldn't sign the form, [rank to low]");
        case 2: return ("AForm: AForm already signed");
        default: return ("AForm: TooLowException");
    }
}

std::ostream& operator<<(std::ostream &out, AForm const &f)
{
    out <<  "AForm name:   ["    <<  f.getName()             << "]\n"
        <<  "IsSigned:    ["    <<  f.isSigned()            << "]\n"
        <<  "GradeToExec: ["    <<  f.getGradeToExecute()   << "]\n"
        <<  "GradeToSign: ["    <<  f.getGradeToSign()      << "]\n"
        ;
    return (out);
}
