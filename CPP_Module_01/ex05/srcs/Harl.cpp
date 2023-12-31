/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:42:26 by pepe              #+#    #+#             */
/*   Updated: 2023/07/12 18:33:11 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl:: debug(void)
{
    std::cout << "I love DEBUGging!!!" << std::endl;
}

void    Harl:: info(void)
{
    std::cout << "If you need more INFO you should RTFM!" << std::endl; 
}

void    Harl:: warning(void)
{
    std::cout << "Your code will work perfectly even with a lot of WARNINGs." << std::endl;
}

void    Harl:: error(void)
{
    std::cout << "You should always compile your code with the -Wall -Wextra -WERROR flags." << std::endl;
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

	for (int i = 0; i < 4; i++)
	{
		if (level == inputs[i])
		{
			(this->*levels[i])();
			return ;
		}
	}
	std::cout << "Invalid complain level: [" << level << "]" << std::endl;
}
