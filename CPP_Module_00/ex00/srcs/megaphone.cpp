/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:55:49 by pepe              #+#    #+#             */
/*   Updated: 2023/07/06 20:32:58 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string toUpperCase(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; argv[i]; i++)
	{
		std::string str = argv[i];
		std::cout << toUpperCase(str);
	}
	std::cout << std::endl;
	return (0);
}
