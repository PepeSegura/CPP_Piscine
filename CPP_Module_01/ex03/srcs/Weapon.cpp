/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:02:44 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 18:15:39 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon:: Weapon()
{
	
}

Weapon:: ~Weapon()
{
	
}

const std::string&	Weapon:: getType(void)
{
	return (this->type);
}

void	Weapon:: setType(std::string type)
{
	this->type = type;
}
