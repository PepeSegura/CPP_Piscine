/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/16 18:24:32 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Bureaucrat.hpp"

# define MAX_GRADE 1
# define MIN_GRADE 150

class Bureaucrat;

class Form
{
    public:
        Form();
        Form(const Form &f);
        Form(const std::string &name, int gradeToSign, int gradeToExecute);
        ~Form();
        Form& operator=(const Form &f);

        std::string const       getName() const;
        bool                    isSigned() const;
        int                     getGradeToSign() const;
        int                     getGradeToExecute() const;
        void                    beSigned(Bureaucrat b);

        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException(int flag) : _flag(flag) {}

                const char *what() const throw();

            private:
                int _flag;
        };
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException(int flag) : _flag(flag) {}

                const char *what() const throw();

            private:
                int _flag;
        };

    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;

};

std::ostream& operator<<(std::ostream &out, Form const &f);
