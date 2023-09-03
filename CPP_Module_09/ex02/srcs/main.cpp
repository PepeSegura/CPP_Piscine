/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:01 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/03 21:46:55 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	check_int(std::string& str)
{
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

void    fill_containers(std::vector<int>& vector, std::list<int>& list, char *str)
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
			list.push_back(nbr);
		}
		else
			throw (std::runtime_error("Error: Invalid token: " + token));
	}
}

int	main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw (std::runtime_error("Error: Introduce just one argument."));

		std::vector<int>	vector;
		std::list<int>		list;

		fill_containers(vector, list, argv[1]);
		print_data(vector, list);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
