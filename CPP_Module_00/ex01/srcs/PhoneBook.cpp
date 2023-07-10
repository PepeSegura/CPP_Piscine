/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:02:26 by pepe              #+#    #+#             */
/*   Updated: 2023/07/10 23:27:32 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

#define ERROR_EOF "\033[0;31mError: EOF detected.\033[0m"

PhoneBook::PhoneBook()
{
	_id = 0;
}

PhoneBook::~PhoneBook() 
{
}

void	PhoneBook::print_error(std::string error)
{
	std::cout << error << std::endl;
	exit(0);
}

int	PhoneBook::_str_is_digit(const std::string& phone)
{
	std::string::const_iterator i;
	for (i = phone.begin(); i != phone.end(); ++i)
		if (std::isdigit(*i) == 0)
			return (0);
	return (1);
}

void PhoneBook::_add_phone()
{
	std::string input;
	Contact *aux = &_agenda[_id % 8];

	while (true)
	{
		std::cout << "Add phone number > ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			print_error(ERROR_EOF);
		if (input.length() == 9 && _str_is_digit(input))
		{
			aux->set_data(3, input);
			break ;
		}
		std::cout << "Not a valid phone. Try with 9 digits..." << std::endl;
	}
}

void PhoneBook::add_contact()
{
	std::string input;
	std::string text[] = { "name", "last_name", "nickname", "phone number", "secret" };
	Contact *aux = &_agenda[_id % 8];

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Add " << text[i] << " > ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			print_error(ERROR_EOF);
		aux->set_data(i, input);
	}
	_add_phone();
	std::cout << "Add secret > ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		print_error(ERROR_EOF);
	aux->set_data(4, input);
	std::cout << "New contact added, with _id [" << _id << "]" << std::endl;
	_id++;
}

int	set_width(std::string text)
{
	return (text.length() > 9 ? 9 : text.length());
}

void grid_printHeader(void)
{
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void grid_printSpaces(int a)
{
	while (a)
	{
		std::cout << " ";
		a--;
	}
}

void grid_printItem(std::string item)
{
	int len;

	len = item.length();
	if (len > 10)
	{
		std::cout << item.substr(0, 9) << ".|";
	}
	else 
	{
		if (len < 10)
			grid_printSpaces (10 - len);
		std::cout << item << "|";
	}
}

void PhoneBook::_print_all_contacts()
{
	Contact         *aux;
	int				limit;

	limit = (_id <= 8) ? _id : 8;
	grid_printHeader();
	for (int i = 0; i < limit; i++)
	{
		std::cout << "|";
		aux = &_agenda[i % 8];
		grid_printItem(std::to_string(i % 8));
		grid_printItem(aux->get_data(0));
		grid_printItem(aux->get_data(1));
		grid_printItem(aux->get_data(2));
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "Choose an index to get all the contact information." << std::endl;
}

int	_index_in_range(std::string input)
{
	int	index;

	index = atoi(input.c_str());
	return (index >= 0 && index < 8);
}

void PhoneBook::search_and_print_contact()
{
	std::string     input;
	Contact         *aux;

	system("clear");
	_print_all_contacts();
	while (true)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
			print_error(ERROR_EOF);
		if (input.length() == 1 && _str_is_digit(input) && _index_in_range(input))
			break ;
		std::cout << "Choose an index between 0 and 7." << std::endl;
	}
	aux = &_agenda[atoi(input.c_str())];
	aux->print_data();
}
