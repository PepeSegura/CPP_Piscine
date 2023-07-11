/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:52:55 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 15:45:29 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie()
{
	std::cout << "New Zombie created." << std::endl;
}

Zombie:: ~Zombie()
{
	if (this->name.length() != 0)
		std::cout << "The zombie "<< this->name << " has finally died." << std::endl;
	else
		std::cout << "The zombie has finally died." << std::endl;
}

void	Zombie:: set_name(std::string name)
{
	this->name = name;
}

void	Zombie:: announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
