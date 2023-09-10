/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:46:42 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/10 15:52:20 by psegura-         ###   ########.fr       */
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
bool    	is_valid_date(const std::tm& date);
int         convert_date_to_int(std::tm& date);
int         parse_date(std::string& dateString, std::string file);
float   	parse_ammount(std::string& ammountString, std::string file);
bool	    check_float(std::string& str);

std::string	convert_int_to_date(int date);

void        check_header(const std::string& header, std::ifstream& inputFile);

/*__DATA.csv__*/
void    fill_database(std::map<int, float>& database, std::ifstream& dataFile);


/*__INPUT.txt__*/
void	read_input(std::map<int, float>& database, std::ifstream& inputFile);
