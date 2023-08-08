/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:08:25 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/08 00:36:09 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    {   
        try
        {
            Bureaucrat test("Pepe", 1);
        
            std::cout << test << std::endl;
            test.incrementGrade();
            std::cout << test << std::endl;
        }
        catch(Bureaucrat:: GradeTooHighException &e)
        {
            std::cerr << e.what() << std::endl;
        }
        catch(Bureaucrat:: GradeTooLowException &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {   
        try
        {
            Bureaucrat test("Manolo", 10);

            std::cout << test << std::endl;
            test.incrementGrade();
            std::cout << test << std::endl;
            test.decrementGrade();
            std::cout << test << std::endl;
        }
        catch(Bureaucrat:: GradeTooHighException &e)
        {
            std::cerr << e.what() << std::endl;
        }
        catch(Bureaucrat:: GradeTooLowException &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {   
        try
        {
            Bureaucrat test("Nico", 150);
        
            std::cout << test << std::endl;
            test.decrementGrade();
            std::cout << test << std::endl;
        }
        catch(Bureaucrat:: GradeTooHighException &e)
        {
            std::cerr << e.what() << std::endl;
        }
        catch(Bureaucrat:: GradeTooLowException &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}
