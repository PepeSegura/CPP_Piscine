/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:08:25 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/16 17:38:16 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cstring>

int main(void)
{
	try
	{
		Bureaucrat test("Pepe", 1);
	
		std::cout << test << std::endl;
		test.incrementGrade();
		std::cout << test << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat test("Manolo", 10);

		std::cout << test << std::endl;
		test.incrementGrade();
		std::cout << test << std::endl;
		test.decrementGrade();
		std::cout << test << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat test("Nico", 150);
	
		std::cout << test << std::endl;
		test.decrementGrade();
		std::cout << test << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
