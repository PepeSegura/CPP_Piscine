/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:01 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/30 04:29:27 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <map>

int convertDateToInt(const std::string& date) {
    std::istringstream ss(date);
    int year, month, day;
    char dash;

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

int	main(int argc, char **)
{
	if (argc != 2)
	{
		std::cerr << "Introduce the database filename." << std::endl;
		return (0);
	}
	std::map<int, std::string> data_csv;
	std::string date = "2009-01-05";
	int pos = convertDateToInt(date);
	data_csv[pos] = "hola";
	data_csv[0] = "hola";
	data_csv[1] = "paco";
	printMap(data_csv);
	return (0);
}
