/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:46:42 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/04 15:46:43 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include <fstream>
#include <map>

/*__UTILS__*/
bool    	isValidDate(const std::tm& date);
int         convertDateToInt(std::tm& date);
int         parse_date(std::string& dateString);
std::string	convertIntToDate(int date);
void        checkHeader(const std::string& header, std::ifstream& inputFile);

/*__DATA.csv__*/
void    fill_database(std::map<int, float>& database, std::ifstream& dataFile);


/*__INPUT.txt__*/
void	read_input(std::map<int, float>& database, std::ifstream& inputFile);
