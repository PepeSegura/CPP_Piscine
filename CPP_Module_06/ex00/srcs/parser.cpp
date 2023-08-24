/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:39:21 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/24 17:31:48 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "parser.h"

int	has_digits(std::string str)
{
	int	flag = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]))
			flag = 1;
	}
	return (flag);
}

int	count_letter(std::string str)
{
	int	letter_count = 0;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))
			letter_count++;
	}
	return (letter_count);
}

int	count_dots(std::string str)
{
	int	dot_count = 0;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
			dot_count++;
	}
	return (dot_count);
}

void	check_symbol(std::string str)
{
	int	i = 0;
	int	flag = 0;

	for (; str[i]; i++)
	{
		if (i != 0 && (str[i] == '-' || str[i] == '+'))
			flag = 1;
	}
	if (flag == 1)
		throw (std::runtime_error("Invalid input: symbol found in an invalid position."));
}

int	check_special(std::string str)
{
	const char	*special[] = {"-inff", "-inf", "+inff", "+inf", "nanf", "nan", NULL};
	std::string	aux;

	for (int i = 0; special[i]; i++)
	{
		aux = special[i];
		if (str == aux)
			return (i);
	}
	return (-1);
}

bool	check_int(std::string str)
{
	if (count_letter(str) > 0)
		return (false);
	check_symbol(str);
	if (str.length() == 1 && (str[0] == '-' || str[0] == '+'))
		return (false);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (i == 0 && (!isdigit(str[i]) && str[i] != '-' && str[i] != '+'))
			return (false);
		if (i != 0 && !isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool	check_double(std::string str)
{
	if (count_letter(str) > 1)
		return (false);
	if (str.length() < 2)
		return (false);
	if (count_dots(str) > 1)
		return (false);
	if (str.length() == 2 && !has_digits(str))
		return (false);
	check_symbol(str);
	for (size_t i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '.')
			return (false);
	}
	return (true);
}

bool	check_float(std::string str)
{
	if (count_letter(str) > 1)
		return (false);
	if (str.length() < 3)
		return (false);
	if (count_dots(str) > 1)
		return (false);
	if (str.length() == 3 && !has_digits(str))
		return (false);
	check_symbol(str);
	for (size_t i = 1; i < str.length(); i++)
	{
		if (str[i] == 'f' && i != str.length() - 1)
			return (false);
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
			return (false);
	}
	return (true);
}

int	check_input(std::string str)
{
	if (check_special(str) != -1)
	{
		std::cout << "This is special." << std::endl;
		return (SPECIAL);
	}
	if (check_int(str))
	{
		std::cout << "This is a int." << std::endl;
		return (INT);	
	}
	if (check_double(str))
	{
		std::cout << "This is a double." << std::endl;
		return (DOUBLE);
	}
	if (check_float(str))
	{
		std::cout << "This is a float." << std::endl;
		return (FLOAT);
	}
	if (str.length() == 1)
	{
		std::cout << "This is a char." << std::endl;
		return (CHAR);
	}
	std::cerr << "Unkonw type." << std::endl;
	return (ERROR);	
}
