/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readInput.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:28:17 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/10 16:39:01 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

float    find_date(std::map<int, float>& database, int toFind)
{
	std::map<int, float>::iterator iter = database.lower_bound(toFind);

	std::cout << "ToFind: [" << convert_int_to_date(toFind);
	
	if (iter->first == toFind)
		std::cout << "]  F   Key: [" << convert_int_to_date(iter->first) << "] " << "\t Value: " << iter->second;
	else
	{
		if (iter == database.begin() && iter->first != toFind)
			throw (std::runtime_error("]  Bitcoin did not exist at that time."));
		if (iter != database.begin())
			--iter;
		std::cout << "]  NF  Key: [" << convert_int_to_date(iter->first) << "] " << "\t Value: " << iter->second;
	}
	return (iter->second);
}

void	print_results(float ammount, float exchangeRate)
{
	if (ammount < 0)
		std::cout << "\t Ammount: " << ammount << "\t Invalid Ammount: Not a positive number." << std::endl;
	else if (ammount > 1000)
		std::cout << "\t Ammount: " << ammount << "\t Invalid Ammount: Number too big." << std::endl;
	else
		std::cout << "\t Ammount: " << ammount << "\t Total Value: " << exchangeRate * ammount << std::endl;
}

void check_header(const std::string& header, std::ifstream& inputFile)
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
	std::string	line;

   check_header("date | value", inputFile);

	while (std::getline(inputFile, line))
	{
		std::istringstream	iss(line);
		std::string			dateStr;
		std::string			ammountStr;

		if (std::getline(iss, dateStr, '|') && std::getline(iss, ammountStr))
		{
			int		dateINT;
			float	ammount;

			try
			{
				dateINT	= parse_date(dateStr, "Infile");
				ammount = parse_ammount(ammountStr, "Infile");
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				continue ;
			}
			float	exchangeRate;

			try
			{
				exchangeRate = find_date(database, dateINT);
				print_results(ammount, exchangeRate);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		else if (line.length() > 1)
			std::cerr << "Infile: bad input: " << line << std::endl;
	}
	inputFile.close();
}
