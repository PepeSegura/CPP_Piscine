/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:46:24 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/10 16:23:55 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	is_valid_date(const std::tm& date)
{
	return (date.tm_year >= 0                                   // YEAR
		&& (date.tm_mon - 1) >= 0   &&  (date.tm_mon - 1) < 12  // MOTH
		&& (date.tm_mday >= 1)      &&  (date.tm_mday <= 31));  // DAY
}

int	convert_date_to_int(std::tm& date)
{
	return (date.tm_year * 10000 + date.tm_mon * 100 + date.tm_mday);
}

std::string	convert_int_to_date(int date)
{
	std::stringstream ss;
	ss << std::setw(8) << std::setfill('0') << date;
	std::string dateStr = ss.str();

	dateStr.insert(4, "-");
	dateStr.insert(7, "-");

	return (dateStr);
}

int	parse_date(std::string& dateString, std::string file) //Expected format YYYY-MM-DD
{
	std::tm date = {};
	std::istringstream dateStream(dateString);
	char dash1, dash2, extraChar;

	if (dateStream >> date.tm_year >> dash1 >> date.tm_mon >> dash2 >> date.tm_mday
		&& dash1 == '-' && dash2 == '-' && !(dateStream >> extraChar))
	{
		if (is_valid_date(date))
			return (convert_date_to_int(date));
		else
			throw (std::runtime_error(file + ": Invalid date: " + dateString));
	}
	else
		throw (std::runtime_error(file + ": Invalid date: " + dateString));
	return (-1);
}

float parse_ammount(std::string& ammountString, std::string file)
{
	std::string	trimedAmmount = ammountString;
	size_t		firstNonSpace = trimedAmmount.find_first_not_of(" \t\n\r");
	size_t		lastNonSpace = trimedAmmount.find_last_not_of(" \t\n\r");
	
	if (firstNonSpace != std::string::npos && lastNonSpace != std::string::npos)
		trimedAmmount = trimedAmmount.substr(firstNonSpace, lastNonSpace - firstNonSpace + 1);
	else
		throw std::runtime_error(file + ": Invalid ammount: " + ammountString);

	if (check_float(trimedAmmount))
	{
		std::istringstream ammountStr(trimedAmmount);
		float ammount;

		if (ammountStr >> ammount)
		{
			if (ammountStr.eof())
				return (ammount);
			else
				throw (std::runtime_error(file + ": Invalid ammount: " + ammountString));
		}
	}
	throw std::runtime_error(file + ": Invalid ammount: " + ammountString);
}

void	fill_database(std::map<int, float>& database, std::ifstream& dataFile)
{
	std::string		line;

	check_header("date,exchange_rate", dataFile);

	while (std::getline(dataFile, line))
	{
		std::istringstream	iss(line);
		std::string			dateStr;
		std::string			exchangeStr;

		if (std::getline(iss, dateStr, ',')  && std::getline(iss, exchangeStr))
		{
			int		dateINT;
			float	exchange;
			try
			{
				dateINT	 = parse_date(dateStr, "Database");
				exchange = parse_ammount(exchangeStr, "Database");
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				continue ;
			}	
			database[dateINT] = exchange;
		}
		else
			std::cerr << "Database: bad input: " << line << std::endl;
	}
	dataFile.close();
}
