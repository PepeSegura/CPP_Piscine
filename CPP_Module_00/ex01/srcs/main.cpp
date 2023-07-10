/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:37:24 by pepe              #+#    #+#             */
/*   Updated: 2023/07/10 23:31:16 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#define ERROR_EOF "\033[0;31mError: EOF detected.\033[0m"

void    checkCommands(std::string input, PhoneBook *PB)
{
	if (std::cin.eof())
		PB->print_error(ERROR_EOF);
	if (input == "EXIT" || input == "E")
		PB->print_error("Exit program.");
	if (input == "ADD" || input == "A")
	{
		std::cout << "Ading contact to the phonebook..." << std::endl;
		PB->add_contact();
	}
	if (input == "SEARCH" || input == "S")
	{
		std::cout << "Looking for a contact in the phonebook..." << std::endl;
		PB->search_and_print_contact();
	}
}

int main(void)
{
	std::string	input;
	PhoneBook	PB;

	system("clear");
	while (true)
	{
		std::cout << "Comands: ADD(A), SEARCH(S), EXIT(E)" << std::endl;
		std::getline(std::cin, input);
		checkCommands(input, &PB);
	}
	return (0);
}
