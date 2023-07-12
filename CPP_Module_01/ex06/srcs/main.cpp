/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:39:35 by pepe              #+#    #+#             */
/*   Updated: 2023/07/12 18:35:48 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	{
    	Harl debug;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Harl will complain with the level DEBUG." << std::endl;
	    debug.complain("debug");
	}
	{
    	Harl info;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Harl will complain with the level INFO." << std::endl;
	    info.complain("info");
	}
	{
    	Harl warning;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Harl will complain with the level WARNING." << std::endl;
	    warning.complain("warning");
	}
	{
    	Harl error;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Harl will complain with the level ERROR." << std::endl;
	    error.complain("error");
	}
	{
    	Harl non_existent;
		std::cout << "------------------------------------------------" << std::endl;
		std::cout << "Harl will try to complain with an invalid level." << std::endl;
	    non_existent.complain("non_existent");
	}
	{
    	Harl empty;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "Harl will try to complain without any level." << std::endl;
	    empty.complain("");
	}
    return (0);
}
