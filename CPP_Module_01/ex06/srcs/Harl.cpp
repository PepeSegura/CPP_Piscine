/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:42:26 by pepe              #+#    #+#             */
/*   Updated: 2023/07/12 18:52:58 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl:: debug(void)
{
    std::cout << "DEBUG" << std::endl;
}

void    Harl:: info(void)
{
    std::cout << "INFO" << std::endl; 
}

void    Harl:: warning(void)
{
    std::cout << "WARNING" << std::endl;
}

void    Harl:: error(void)
{
    std::cout << "ERROR" << std::endl;
}

Harl:: Harl()
{
}

Harl:: ~Harl()
{
}

void Harl:: complain(std:: string level)
{
	std::string inputs[4] =
	{
		"debug"		,
		"info"		,
		"warning"	,
		"error"
	};

	void	(Harl:: *levels[4])(void) = 
	{
		&Harl::debug	,
		&Harl::info		,
		&Harl::warning	,
		&Harl::error
	};

	int	levelId = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level == inputs[i])
			levelId = i;
	}

	switch (levelId)
	{
		case 0: (this->*levels[0])();
		case 1: (this->*levels[1])();
		case 2: (this->*levels[2])();
		case 3: (this->*levels[3])();
			break ;
		default:
			std::cout << "Invalid complain level: [" << level << "]" << std::endl;
	}
}
