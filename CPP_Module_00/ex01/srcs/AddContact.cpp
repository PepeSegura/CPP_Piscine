/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 03:31:25 by pepe              #+#    #+#             */
/*   Updated: 2023/07/07 04:12:41 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	str_is_digit(const std::string& phone)
{
	std::string::const_iterator i;
	for (i = phone.begin(); i != phone.end(); ++i)
		if (std::isdigit(*i) == 0)
			return (1);
	return (0);
}

int	check_phone(std::string input)
{
	if (input.length() != 9 || str_is_digit(input))
		return (1);
	return (0);
}

void add_phone(PhoneBook* PB)
{
	std::string input;

	while (true)
	{
		std::cout << "Add phone number > ";
		std::cin >> input;
		if (std::cin.eof())
			exit(1);
		if (check_phone(input) == 0)
		{
			PB[0].Agenda->data[3] = input;
			break ;
		}
		std::cout << "Not a valid phone. Try with 9 digits..." << std::endl;
	}
}

void add_contact(PhoneBook* PB)
{
	std::string input;
	std::string text[] = { "name", "last_name", "nickname", "phone number", "secret" };

	for (int i = 0; i < 3; i++) {
		std::cout << "Add " << text[i] << " > ";
		std::cin >> input;
		if (std::cin.eof())
			exit(1);
		PB[0].Agenda->data[i] = input;
	}
	add_phone(PB);
	std::cout << "Add secret > ";
	std::cin >> input;
	if (std::cin.eof())
		exit(1);
	PB[0].Agenda->data[4] = input;
	std::cout << "New contact added, with id [" << PB->id << "]" << std::endl;
}

