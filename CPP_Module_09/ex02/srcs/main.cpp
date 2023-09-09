/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:01 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/09 20:36:24 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	check_int(std::string& str)
{
	double dnbr = strtod(str.c_str(), NULL);

	if (str.length() > 11 || dnbr < 0 || dnbr > 2147483647)
		throw (std::runtime_error("Error: Invalid token: " + str));
	if (str.length() == 1 && (str[0] == '-' || str[0] == '+'))
		return (false);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (i == 0 && (!isdigit(str[i]) && str[i] != '+'))
			return (false);
		if (i != 0 && !isdigit(str[i]))
			return (false);
	}
	return (true);
}

void    store_numbers(std::vector<int>& vector, char *str)
{
	std::istringstream	iss(str);
	std::string			token;
	int					nbr = 0;

	while (iss >> token)
	{
		if (check_int(token))
		{
			nbr = atoi(token.c_str());
			vector.push_back(nbr);
		}
		else
			throw (std::runtime_error("Error: Invalid token: " + token));
	}
	
}

int	main(int argc, char **argv)
{
	try
	{
		if (argc < 2)
			throw (std::runtime_error("Error: Introduce at least one argument."));

		std::vector<int>	vector;

		for (int i = 1; argv[i]; i++)
			store_numbers(vector, argv[i]);
		if (vector.size() == 0)
			throw (std::runtime_error("Error: Empty argument."));
		pmergeme(vector);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
