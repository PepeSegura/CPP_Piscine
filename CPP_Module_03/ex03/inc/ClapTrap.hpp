/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/10/22 18:42:17 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Debug.hpp"

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int ep, int dmg);
		ClapTrap(const ClapTrap &f);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap &f);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string _name;
		int         _hp;
		int			_ep;
		int			_dmg;
};

