/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:08:25 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/09 16:35:57 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    {   
        try
        {
            Bureaucrat test("Pepe", 10);
            std::cout << test << std::endl;
            
            Form       form("First form", 50, 50);
            std::cout << form << std::endl;
        
            test.signForm(form);
            std::cout << form << std::endl;
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}
