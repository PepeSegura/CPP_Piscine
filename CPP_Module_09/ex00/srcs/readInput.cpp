/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readInput.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:28:17 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/03 00:52:54 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readCSV.hpp"

float    find_date(std::map<int, float>& database, int toFind)
{
	std::map<int, float>::iterator iter = database.lower_bound(toFind);

	std::cout << "ToFind: [" << convertIntToDate(toFind);
	
	if (iter->first == toFind)
		std::cout << "]  Key: [" << convertIntToDate(iter->first) << "]  F  " << "\t Value: " << iter->second;
	else
	{
		if (iter == database.begin() && iter->first != toFind)
		{
			std::cout << "]  Bitcoin did not exist at that time.";
			return (-1);
		}
		if (iter != database.begin())
			--iter;
		std::cout << "]  Key: [" << convertIntToDate(iter->first) << "]  NF " << "\t Value: " << iter->second;
	}
	return (iter->second);
}

void	print_results(float ammount, float exchangeRate)
{
	if (ammount < 0)
		std::cout << "\t Ammout: " << ammount << "\t Not a positive number." << std::endl;
	else if (ammount > 1000)
		std::cout << "\t Ammout: " << ammount << "\t Number too big." << std::endl;
	else
		std::cout << "\t Ammout: " << ammount << "\t Total Value: " << exchangeRate * ammount << std::endl;
}

void checkHeader(const std::string& header, std::ifstream& inputFile)
{
    std::string line;

    if (std::getline(inputFile, line))
	{
        if (line == header)
            return ;
		else
			throw (std::runtime_error("Error: First line must contain exactly the header '" + header + "'"));
    }
	else
		throw (std::runtime_error("Error: Input file is empty."));
}

void	read_input(std::map<int, float>& database, std::ifstream& inputFile)
{
	float		ammount;
	float		exchangeRate;
	std::string	line;

   checkHeader("date | value", inputFile);

	while (std::getline(inputFile, line))
	{
		std::istringstream	iss(line);
		std::string			dateStr;
		int					dateINT;

		if (std::getline(iss, dateStr, '|') && iss >> ammount)
		{
			dateINT = parse_date(dateStr);
			exchangeRate = find_date(database, dateINT);
			if (exchangeRate != -1)
				print_results(ammount, exchangeRate);
			else
				std::cout << std::endl;
		}
		else
			std::cerr << "Error: bad input: " << line << std::endl;
	}
	inputFile.close();
}
