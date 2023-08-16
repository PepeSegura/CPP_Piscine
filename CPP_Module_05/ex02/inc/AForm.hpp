/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/16 23:16:37 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Bureaucrat.hpp"

# define MAX_GRADE 1
# define MIN_GRADE 150

class AForm
{
    public:
        AForm();
        AForm(const AForm &f);
        AForm(const std::string &name, int gradeToSign, int gradeToExecute);
        virtual ~AForm();
        AForm& operator=(const AForm &f);

        std::string const       getName() const;
        bool                    isSigned() const;
        int                     getGradeToSign() const;
        int                     getGradeToExecute() const;
        void                    beSigned(Bureaucrat b);
        virtual void            execute(Bureaucrat const &executor) = 0;

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

std::ostream& operator<<(std::ostream &out, AForm const &f);
