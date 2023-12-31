/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:02:16 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 19:58:02 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(const std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon& weapon);

	private:
		std::string	name;
		Weapon*		weapon;
};