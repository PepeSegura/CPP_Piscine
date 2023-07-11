/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:01:55 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 19:14:19 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(const std::string name, Weapon& weapon);
		~HumanA();
		void	attack();

	private:
		std::string	name;
		Weapon&		weapon;
};
