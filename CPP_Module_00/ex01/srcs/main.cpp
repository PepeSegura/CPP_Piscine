/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:37:24 by pepe              #+#    #+#             */
/*   Updated: 2023/07/09 02:12:17 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	search_contact(void)
{
	
}

void    checkCommands(std::string input, PhoneBook *PB)
{
	if (std::cin.eof() || input == "EXIT")
	{
		std::cout << "\033[0;31mSyntax error: EOF detected.\033[0m" << std::endl;
		exit(0);
	}
	if (input == "A")
	{
		std::cout << "Ading contact to the phonebook..." << std::endl;
		PB->add_contact();
	}
	if (input == "S")
	{
		std::cout << "Looking for a contact in the phonebook..." << std::endl;
		PB->search_and_print_contact();
		// search_contact();
	}
}

int main(void)
{
	std::string	input;
	PhoneBook	PB;

	while (true)
	{
		std::cin >> input;
		checkCommands(input, &PB);
	}
	return (0);
}
