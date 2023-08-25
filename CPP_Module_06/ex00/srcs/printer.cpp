/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 01:01:34 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/25 03:45:51 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.hpp"

void write_char(int c)
{
	if (c > 32 && c < 127 && isprint(c))
		std::cout << "char:\t '" << static_cast<char>(c) << "'" << std::endl;
	else
		std::cout << "char:\t Not displayable" << std::endl;
}

void write_int(double d)
{
    int	i;

    if (d > 2147483647.0)
        std::cout << "int:\t Overflow" << std::endl;
    else if (d < -2147483648.0)
        std::cout << "int:\t Underflow" << std::endl;
	else
	{
        i = static_cast<int>(d);
        std::cout << "int:\t " << i << std::endl;
    }
}

void print_special_float(std::string str)
{
	std::cout << "char:\t Impossible"     << std::endl;
	std::cout << "int:\t Impossible"      << std::endl;
	std::cout << "float:\t "              << str << std::endl;
	std::cout << "double:\t "             << str.substr(0, str.length() - 1) << std::endl;
}

void print_special_double(std::string str)
{
	std::cout << "char:\t Impossible"     << std::endl;
	std::cout << "int:\t Impossible"      << std::endl;
	std::cout << "float:\t "              << str + "f" << std::endl;
	std::cout << "double:\t "             << str << std::endl;
}

void print_int(std::string str)
{
	double  d;
	int     i;
	float   f;

	d = static_cast<double>(strtod(str.c_str(), NULL));
	i = static_cast<int>(d);
	f = static_cast<float>(d);

	std::cout << "Printing int: " << str << std::endl;
	
	write_char(i);
	write_int(d);
	std::cout << "float:\t " 	<< f << ".0f" << std::endl;
	std::cout << "double:\t "	<< d << ".0"  << std::endl;
}

void print_double(std::string str)
{
	double  d;
	int     i;
	float   f;

	d = static_cast<double>(strtod(str.c_str(), NULL));
	i = static_cast<int>(d);
	f = static_cast<float>(d);
	
	std::cout << "Printing double: " << str << std::endl;

	write_char(i);
	write_int(d);
	std::cout.precision(10);
	if (f - floorf(f) == 0)
		std::cout << "float:\t " 	<< f << ".0f" << std::endl;
	else
		std::cout << "float:\t " 	<< f << "f" << std::endl;
	if (d - floorf(d) == 0)
		std::cout << "double:\t " 	<< d << ".0" << std::endl;
	else
		std::cout << "double:\t " 	<< d << std::endl;
}

void print_float(std::string str)
{
	float   f;
	int     i;
	double  d;

	f = static_cast<float>(strtod(str.c_str(), NULL));
	i = static_cast<int>(f);
	d = static_cast<double>(f);
	
	std::cout << "Printing float: " << str << std::endl;

	write_char(i);
	write_int(d);
	std::cout.precision(10);
	if (f - floorf(f) == 0)
		std::cout << "float:\t " 	<< f << ".0f" << std::endl;
	else
		std::cout << "float:\t " 	<< f << "f" << std::endl;
	if (d - floorf(d) == 0)
		std::cout << "double:\t " 	<< d << ".0" << std::endl;
	else
		std::cout << "double:\t " 	<< d << std::endl;
}

void print_char(std::string str)
{
	int		i;
	float	f;
	double	d;

	i = static_cast<int>(str[0]);
	f = static_cast<float>(str[0]);
	d = static_cast<double>(str[0]);
	
	std::cout << "Printing char: " << str << std::endl;
	
	write_char(i);
	write_int(d);
	std::cout.precision(10);
	std::cout << "float:\t " 	<< f << ".0f"	<< std::endl;
	std::cout << "double:\t "	<< d << ".0"	<< std::endl;
}

void print_else(std::string str)
{
	std::cerr << "Unknown type: " << str << std::endl;
}
