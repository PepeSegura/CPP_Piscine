/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:42:26 by pepe              #+#    #+#             */
/*   Updated: 2023/07/12 14:55:54 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    debug(void)
{
    std::cout << "“I love DEBUGging!!!" << std::endl;
}

void    info(void)
{
    std::cout << "If you need more INFO you should RTFM!" << std::endl; 
}

void    warning(void)
{
    std::cout << "Your code will work perfectly even with a lot of WARNINGs." << std::endl;
}

void    error(void)
{
    std::cout << "You should always compile your code with the -Wall -Wextra -WERROR flags." << std::endl;
}

Harl:: Harl()
{
    
}

Harl:: ~Harl()
{
    
}

void Harl:: complain(std:: string level)
{
    std::cout << "Calling the function: [" << level << "]." << std::endl;
}
