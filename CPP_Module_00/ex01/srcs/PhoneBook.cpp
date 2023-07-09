/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:02:26 by pepe              #+#    #+#             */
/*   Updated: 2023/07/09 15:20:37 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook()
{
	_id = 0;
}

PhoneBook::~PhoneBook() 
{
}

int	PhoneBook::_str_is_digit(const std::string& phone)
{
	std::string::const_iterator i;
	for (i = phone.begin(); i != phone.end(); ++i)
		if (std::isdigit(*i) == 0)
			return (0);
	return (1);
}

// int	PhoneBook::_check_phone(std::string input)
// {
// 	if (input.length() != 9 || !_str_is_digit(input))
// 		return (1);
// 	return (0);
// }

void PhoneBook::_add_phone()
{
	std::string input;
	Contact *aux = &_agenda[_id % 8];

	while (true)
	{
		std::cout << "Add phone number > ";
		std::cin >> input;
		if (std::cin.eof())
			exit(1);
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
		std::cin >> input;
		if (std::cin.eof())
			exit(1);
		aux->set_data(i, input);
	}
	_add_phone();
	std::cout << "Add secret > ";
	std::cin >> input;
	if (std::cin.eof())
		exit(1);
	aux->set_data(4, input);
	std::cout << "New contact added, with _id [" << _id << "]" << std::endl;
	_id++;
}

#include <sstream>

#include <iostream>
#include <iomanip>

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
	// int columnWidth = 10;

	grid_printHeader();

	std::string id = "0";
    std::string firstName = "1234567890";
    std::string lastName = "Doelandiachachi";
    std::string nickname = "JD";

	// Contact         *aux;

	for (int i = 0; i < _id; i++)
	{
		std::cout << "|";
		grid_printItem(id);
		grid_printItem(firstName);
		grid_printItem(lastName);
		grid_printItem(nickname);
		std::cout << std::endl;
	}
	
	// Contact         *aux;

	// for (int i = 0; i < _id; i++)
	// {
	// 	aux = &_agenda[i];
	// 	aux->print_data();
	// }
}

void PhoneBook::search_and_print_contact()
{
	std::string     input;
	Contact         *aux;

	_print_all_contacts();
	while (true)
	{
		std::cin >> input;
		if (input.length() == 1 && _str_is_digit(input))
			break ;
		std::cout << "Write a valid index." << std::endl;
	}
	aux = &_agenda[atoi(input.c_str())];
	aux->print_data();
}
