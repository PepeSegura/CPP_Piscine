/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:02:26 by pepe              #+#    #+#             */
/*   Updated: 2023/07/09 02:58:53 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook()
{
	id = 0;
}

PhoneBook::~PhoneBook() 
{
}

int	PhoneBook::str_is_digit(const std::string& phone)
{
	std::string::const_iterator i;
	for (i = phone.begin(); i != phone.end(); ++i)
		if (std::isdigit(*i) == 0)
			return (0);
	return (1);
}

int	PhoneBook::check_phone(std::string input)
{
	if (input.length() != 9 || !str_is_digit(input))
		return (1);
	return (0);
}

void PhoneBook::add_phone()
{
	std::string input;
	Contact *aux = &agenda[id % 8];

	while (true)
	{
		std::cout << "Add phone number > ";
		std::cin >> input;
		if (std::cin.eof())
			exit(1);
		if (check_phone(input) == 0)
		{
			aux->set_data(3, input);
			// agenda[id % 8].data[3] = input;
			break ;
		}
		std::cout << "Not a valid phone. Try with 9 digits..." << std::endl;
	}
}

void PhoneBook::add_contact()
{
	std::string input;
	std::string text[] = { "name", "last_name", "nickname", "phone number", "secret" };
	Contact *aux = &agenda[id % 8];

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Add " << text[i] << " > ";
		std::cin >> input;
		if (std::cin.eof())
			exit(1);
		aux->set_data(i, input);
	}
	add_phone();
	std::cout << "Add secret > ";
	std::cin >> input;
	if (std::cin.eof())
		exit(1);
	aux->set_data(4, input);
	std::cout << "New contact added, with id [" << id << "]" << std::endl;
	id++;
}

#include <sstream>

void PhoneBook::search_and_print_contact()
{
	std::string     input;
	Contact         *aux;

	/*PRINT_ALL: Private del Phonebook, que imprime la tabla 
	con todos los contactos*/
	while (true)
	{
		std::cin >> input;
		if (input.length() == 1 && str_is_digit(input))
			break ;
		std::cout << "Write a valid index." << std::endl;
	}
	aux = &agenda[atoi(input.c_str())];
	aux->print_data();
}
