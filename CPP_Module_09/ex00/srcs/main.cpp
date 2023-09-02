/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:01 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/02 00:26:26 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

int	convertDateToInt(const std::string &date)
{
	char	dash;

	int year, month, day;
	std::istringstream ss(date);
	ss >> year >> dash >> month >> dash >> day;
	return (year * 10000 + month * 100 + day);
}

template <typename KeyType, typename ValueType>
void	printMap(const std::map<KeyType, ValueType> &keyValuePairs)
{
	typedef typename std::map<KeyType, ValueType>::const_iterator Iterator;
	for (Iterator iter = keyValuePairs.begin(); iter != keyValuePairs.end(); ++iter)
	{
		std::cout << "Key: " << iter->first << ",Value: " << iter->second << std::endl;
	}
}

int	main(void)
{
	double	exchangeRate;
	int		errors = 0;

	std::ifstream inputFile("./srcs/data.csv");
	if (!inputFile)
	{
		std::cerr << "Failed to open file!" << std::endl;
		return (1);
	}

	std::map<std::string, double> exchangeRateMap; // Key is date, value is exchange rate
	std::string line;

	while (std::getline(inputFile, line))
	{
		std::istringstream iss(line);
		std::string dateStr;
		if (std::getline(iss, dateStr, ',') && iss >> exchangeRate)
		{
			exchangeRateMap[dateStr] = exchangeRate;	
		}
		else
		{
			std::cerr << "Error reading line: " << line << std::endl;
			errors++;
			// return (1);
		}
	}
	printMap(exchangeRateMap);
	std::cout << "Errors in data.csv: "<< errors << std::endl;
}

// int	main(int argc, char **)
// {
// 	int	pos;

// 	if (argc != 2)
// 	{
// 		std::cerr << "Introduce the database filename." << std::endl;
// 		return (0);
// 	}
// 	std::map<int, std::string> data_csv;
// 	std::string date = "2009-01-05";
// 	pos = convertDateToInt(date);
// 	data_csv[pos] = "hola";
// 	data_csv[0] = "hola";
// 	data_csv[1] = "paco";
// 	printMap(data_csv);
// 	return (0);
// }
