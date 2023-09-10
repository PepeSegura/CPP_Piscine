/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkFloat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:13:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/10 16:02:50 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

bool	check_float(std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != '-' && str[i] != '+')
			return (false);
	}
	return (true);
}