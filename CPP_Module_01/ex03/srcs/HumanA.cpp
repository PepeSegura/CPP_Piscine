/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:02:37 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 20:06:20 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA:: HumanA(const std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
	std::string weapon_type;

	weapon_type = weapon.getType();
	if (weapon_type.length() == 0)
		std::cout	<< "A HumanA called " << name << " has spawned " << "without a weapon" << std::endl;
	else
		std::cout	<< "A HumanA called " << name << " has spawned " << "with the weapon " << weapon.getType() << std::endl;
}

HumanA:: ~HumanA()
{
}

void	HumanA:: attack()
{
	std::string weapon;

	weapon = this->weapon.getType();
	if (weapon.length() == 0)
		std::cout << this->name << " slapped you in the face" << std::endl;
	else
		std::cout << this->name << " attacks with their " << weapon << std::endl;
}
