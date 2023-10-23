/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/10/23 18:09:30 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "Debug.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &f);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap &f);
		void	attack(const std::string& target);
		void	whoAmI(void);
		void	printData(void);

	private:
		std::string _name;
};
