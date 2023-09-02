/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:01 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/03 00:28:16 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readCSV.hpp"

template <typename KeyType, typename ValueType>
void	printMap(const std::map<KeyType, ValueType> &keyValuePairs)
{
	typedef typename std::map<KeyType, ValueType>::const_iterator Iterator;
	for (Iterator iter = keyValuePairs.begin(); iter != keyValuePairs.end(); ++iter)
	{
		std::cout << "Key: [" << iter->first << "] \tValue: [" << iter->second << "]" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw (std::runtime_error("Error: You must introduce 1 argument."));

		std::ifstream databaseFile("./srcs/data.csv");
		if (!databaseFile)
			throw (std::runtime_error("Error: Failed to open database!"));

		std::map<int, float>	database;
		fill_database(database, databaseFile);
	
		std::ifstream inputFile(argv[1]);
		if (!inputFile)
			throw (std::runtime_error("Error: Failed to open input file!"));

		read_input(database, inputFile);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
