/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/16 18:40:56 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Debug.hpp"

Form:: Form() : _name("unnamed"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
    PRINT_DEBUG("Form: Default constructor called.");
    if (MAX_GRADE > _gradeToSign || MAX_GRADE > _gradeToExecute)
        throw (Form:: GradeTooHighException(0));
    if (MIN_GRADE < _gradeToSign || MIN_GRADE < _gradeToExecute)
        throw (Form:: GradeTooLowException(0));
}

Form:: Form(const Form& f) : _name(f._name), _gradeToSign(f._gradeToSign), _gradeToExecute(f._gradeToExecute)
{
    PRINT_DEBUG("Form: Copy constructor called.");
    *this = f;
}

Form:: Form(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false) , _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    PRINT_DEBUG("Form: Typer setters constructor called.");
    if (MAX_GRADE > _gradeToSign || MAX_GRADE > _gradeToExecute)
        throw (Form:: GradeTooHighException(0));
    if (MIN_GRADE < _gradeToSign || MIN_GRADE < _gradeToExecute)
        throw (Form:: GradeTooLowException(0));
}

Form:: ~Form()
{
    PRINT_DEBUG("Form: Destructor called.");
}

Form& Form:: operator=(const Form& f)
{
    PRINT_DEBUG("Form: Asignation operand called.");
    if (MAX_GRADE > f._gradeToSign || MAX_GRADE > f._gradeToExecute)
        throw (Form:: GradeTooHighException(0));
    if (MIN_GRADE < f._gradeToSign || MIN_GRADE < f._gradeToExecute)
        throw (Form:: GradeTooLowException(0));
    if (this != &f)
		*this = f;
    return (*this);
}

std::string const Form:: getName() const
{
    return (_name);
}

bool Form:: isSigned() const
{
    return (_signed);
}

int Form:: getGradeToSign() const
{
    return (_gradeToSign);
}

int Form:: getGradeToExecute() const
{
    return (_gradeToExecute);
}

void Form:: beSigned(Bureaucrat b)
{
    if (b.getGrade() > _gradeToSign)
        throw (Form:: GradeTooLowException(1));
    if (_signed == true)
        throw (Form:: GradeTooLowException(2));
    _signed = true;
}

const char * Form::GradeTooHighException:: what() const throw()
{
    switch (_flag)
    {
        case 0: return ("Form: Couldn't create the form, [rank to hight]");
        default: return ("Form: TooHighException");
    }
}

const char * Form::GradeTooLowException:: what() const throw()
{
    switch (_flag)
    {
        case 0: return ("Form: Couldn't create the form, [rank to low]");
        case 1: return ("Form: Couldn't sign the form, [rank to low]");
        case 2: return ("Form: Form already signed");
        default: return ("Form: TooLowException");
    }
}

std::ostream& operator<<(std::ostream &out, Form const &f)
{
    out <<  "Form name:   ["    <<  f.getName()             << "]\n"
        <<  "IsSigned:    ["    <<  f.isSigned()            << "]\n"
        <<  "GradeToExec: ["    <<  f.getGradeToExecute()   << "]\n"
        <<  "GradeToSign: ["    <<  f.getGradeToSign()      << "]\n"
        ;
    return (out);
}
