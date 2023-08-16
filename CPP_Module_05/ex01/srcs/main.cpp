/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:08:25 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/16 19:47:57 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat bur1("Pepe", 1);
        
        std::cout << bur1 << std::endl;
        
        Form       form1("Only Pepe can sign this", 1, 1);
        Form       form2("Everyone can sign this", 150, 150);
        
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
    
        bur1.signForm(form1);
        bur1.signForm(form2);
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---------------------------------------------------------------" << std::endl;
    try
    {
        Bureaucrat bur1("Manolo", 150);
        
        std::cout << bur1 << std::endl;
        
        Form       form1("Only Pepe can sign this", 1, 1);
        Form       form2("Everyone can sign this", 150, 150);
        
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
    
        bur1.signForm(form1);
        bur1.signForm(form2);
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
        bur1.signForm(form2);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "----------------------------WRONG-FORMS------------------------" << std::endl;
    try
    {
        Form form1("Grade to sign to high", 0, 150);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Form form2("Grade to sign to low", 200, 150);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Form form3("Grade to exec to high", 1, 0);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Form form4("Grade to exec to low", 1, 200);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}
