/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:37:24 by pepe              #+#    #+#             */
/*   Updated: 2023/07/06 21:14:02 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

void    checkCommands(std::string input)
{
	if (std::cin.eof() || input == "EXIT")
		exit(0);
	if (input == "ADD")
		std::cout << "Ading contact to the phonebook..." << std::endl;
	if (input == "SEARCH")
		std::cout << "Looking for a contact in the phonebook..." << std::endl;
}

int main(void)
{
	std::string input;
	while (true)
	{
		std::cin >> input;
		checkCommands(input);
	}
	return (0);
}
