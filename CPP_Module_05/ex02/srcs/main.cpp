/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:08:25 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/16 23:26:35 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << "Creating Bureaucrats" << std::endl;
	Bureaucrat bur1("Pepe", 1);
	Bureaucrat bur2("Manolo", 150);
	Bureaucrat bur3("Raul", 50);

	std::cout << std::endl << "Creating Forms" << std::endl;
	RobotomyRequestForm		test("bip bop bup");
	std::cout << std::endl << "Deleting everything" << std::endl;
}
