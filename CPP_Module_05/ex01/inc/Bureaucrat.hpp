/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/16 17:55:21 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Form.hpp"

# define MAX_GRADE 1
# define MIN_GRADE 150

class Form;

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &f);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat &f);

        std::string const       getName() const;
        int                     getGrade() const;
        void                    incrementGrade();
        void                    decrementGrade();
        void                    signForm(Form & form);

        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Bureaucrat: TooHighException");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Bureaucrat: TooLowException");
                }
        };

    private:
        const std::string   _name;
        int                 _grade;

};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &f);
