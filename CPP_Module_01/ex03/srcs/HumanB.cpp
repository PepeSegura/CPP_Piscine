/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:02:40 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 20:00:48 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB:: HumanB(const std::string name) : name(name)
{
	std::cout << "A HumanB called " << name << " has spawned." << std::endl;
}

HumanB:: ~HumanB()
{
}

void	HumanB:: setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void	HumanB:: attack()
{
	std::string weapon;

	weapon = this->weapon->getType();
	if (weapon.length() == 0)
		std::cout << this->name << " slapped you in the face." << std::endl;
	else
		std::cout << this->name << " attacks with their " << weapon << std::endl;
}