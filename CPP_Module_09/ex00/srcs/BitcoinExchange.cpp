/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:46:24 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/04 15:46:57 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	isValidDate(const std::tm& date)
{
	return (date.tm_year >= 0                                   // YEAR
		&& (date.tm_mon - 1) >= 0   &&  (date.tm_mon - 1) < 12  // MOTH
		&& (date.tm_mday >= 1)      &&  (date.tm_mday <= 31));  // DAY
}

int	convertDateToInt(std::tm& date)
{
	return (date.tm_year * 10000 + date.tm_mon * 100 + date.tm_mday);
}

std::string	convertIntToDate(int date)
{
    std::stringstream ss;
    ss << std::setw(8) << std::setfill('0') << date;
    std::string dateStr = ss.str();

    dateStr.insert(4, "-");
    dateStr.insert(7, "-");

    return (dateStr);
}

int	parse_date(std::string& dateString) //Expected format YYYY-MM-DD
{
	std::tm date = {};
	std::istringstream dateStream(dateString);
	char dash;

	if (dateStream >> date.tm_year >> dash >> date.tm_mon >> dash >> date.tm_mday)
	{
		if (isValidDate(date))
			return (convertDateToInt(date));
		else
			std::cerr << "Invalid date components: " << dateString << std::endl;
	}
	else
		std::cerr << "Invalid date format: " << dateString << std::endl;
	return (-1);
}

void	fill_database(std::map<int, float>& database, std::ifstream& dataFile)
{
	float					exchangeRate;
	std::string				line;

    checkHeader("date,exchange_rate", dataFile);
	
	while (std::getline(dataFile, line))
	{
		std::istringstream	iss(line);
		std::string			dateStr;
		int					dateINT;
		if (std::getline(iss, dateStr, ',') && iss >> exchangeRate)
		{
			dateINT = parse_date(dateStr);
			database[dateINT] = exchangeRate;	
		}
		else
			std::cerr << "Error: bad input: " << line << std::endl;
	}
	dataFile.close();
}
