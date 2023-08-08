/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/08 00:33:08 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

# define MAX_GRADE 1
# define MIN_GRADE 150

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

        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };

    private:
        std::string         _name;
        int                 _grade;

};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &f);