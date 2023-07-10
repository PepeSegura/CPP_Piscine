/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:37:24 by pepe              #+#    #+#             */
/*   Updated: 2023/07/11 00:01:49 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#define ERROR_EOF	"\033[0;31mError: EOF detected.\033[0m"
#define COMMANDS	"\e[0;36mComands: \e[0;35mADD(A), SEARCH(S), EXIT(E)\e[0;37m"

void    checkCommands(std::string input, PhoneBook *PB)
{
	if (std::cin.eof())
		PB->print_error(ERROR_EOF);
	if (input == "EXIT" || input == "E")
		PB->print_error("\033[0;31mExit program.\033[0m");
	if (input == "ADD" || input == "A")
	{
		std::cout << "\e[0;32mAdding contact to the phonebook...\e[0;37m" << std::endl;
		PB->add_contact();
	}
	if (input == "SEARCH" || input == "S")
	{
		std::cout << "\e[0;32mLooking for a contact in the phonebook...\e[0;37m" << std::endl;
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
		std::cout << COMMANDS << std::endl;
		std::getline(std::cin, input);
		checkCommands(input, &PB);
	}
	return (0);
}
