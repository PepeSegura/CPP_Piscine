/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:40:48 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/25 03:48:03 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Debug.hpp"
#include "parser.hpp"
#include "printer.hpp"

void    print_data(int type, std::string input)
{
	void (*printFunctions[])(std::string) =
	{
		print_special_float,
		print_special_double,
		print_int,
		print_double,
		print_float,
		print_char,
		print_else
	};

	switch (type)
	{
		case SPECIAL_F:	printFunctions[SPECIAL_F](input);	break;
		case SPECIAL_D:	printFunctions[SPECIAL_D](input);	break;
		case INT:		printFunctions[INT](input);			break;
		case DOUBLE:	printFunctions[DOUBLE](input);		break;
		case FLOAT:		printFunctions[FLOAT](input);		break;
		case CHAR:		printFunctions[CHAR](input);		break;
		default:		printFunctions[ERROR](input);		break;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Introduce one parameter." << std::endl;
		return (1);
	}
	std::string str =  argv[1];
	int			type = 0;

	try
	{
		type = check_input(str);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	print_data(type, str);
	return (0);
}
