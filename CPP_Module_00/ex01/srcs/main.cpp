/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:37:24 by pepe              #+#    #+#             */
/*   Updated: 2023/07/07 04:12:47 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functions.hpp"

void	search_contact(void)
{
	
}

void    checkCommands(std::string input, PhoneBook *PB)
{
	if (std::cin.eof() || input == "EXIT")
		exit(0);
	if (input == "ADD")
	{
		std::cout << "Ading contact to the phonebook..." << std::endl;
		add_contact(PB);
		PB->id++;
	}
	if (input == "SEARCH")
	{
		std::cout << "Looking for a contact in the phonebook..." << std::endl;
		search_contact();
	}
}

int main(void)
{
	std::string	input;
	PhoneBook	PB;

	PB.id = 0;
	while (true)
	{
		std::cin >> input;
		checkCommands(input, &PB);
	}
	return (0);
}
