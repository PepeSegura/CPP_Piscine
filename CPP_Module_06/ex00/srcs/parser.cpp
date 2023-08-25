/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:39:21 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/25 02:52:34 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "parser.hpp"

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
	if (count_dots(str) != 1)
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
	if (count_dots(str) != 1)
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
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return(SPECIAL_F);
	if (str == "-inf" || str == "+inf" || str == "nan")
		return(SPECIAL_D);
	if (check_int(str))
		return (INT);
	if (check_double(str))
		return (DOUBLE);
	if (check_float(str))
		return (FLOAT);
	if (str.length() == 1)
		return (CHAR);
	return (ERROR);	
}
