/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/08 02:03:55 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Debug.hpp"

Form:: Form() : _name("unnamed"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
    PRINT_DEBUG("Form: Default constructor called.");
    if (MAX_GRADE > _gradeToSign || MAX_GRADE > _gradeToExecute)
        throw (Form:: GradeTooHighException());
    if (MIN_GRADE < _gradeToSign || MIN_GRADE < _gradeToExecute)
        throw (Form:: GradeTooLowException());
}

Form:: Form(const Form& f) : _name(f._name), _gradeToSign(f._gradeToSign), _gradeToExecute(f._gradeToExecute)
{
    PRINT_DEBUG("Form: Copy constructor called.");
    *this = f;
}

Form:: Form(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    PRINT_DEBUG("Form: Typer setters constructor called.");
	_signed = false;
    if (MAX_GRADE > _gradeToSign || MAX_GRADE > _gradeToExecute)
        throw (Form:: GradeTooHighException());
    if (MIN_GRADE < _gradeToSign || MIN_GRADE < _gradeToExecute)
        throw (Form:: GradeTooLowException());
}

Form:: ~Form()
{
    PRINT_DEBUG("Form: Destructor called.");
}

Form& Form:: operator=(const Form& f)
{
    PRINT_DEBUG("Form: Asignation operand called.");
    if (MAX_GRADE > f._gradeToSign || MAX_GRADE > f._gradeToExecute)
        throw (Form:: GradeTooHighException());
    if (MIN_GRADE < f._gradeToSign || MIN_GRADE < f._gradeToExecute)
        throw (Form:: GradeTooLowException());
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
        throw (Form:: GradeTooLowException());
    _signed = true;
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
