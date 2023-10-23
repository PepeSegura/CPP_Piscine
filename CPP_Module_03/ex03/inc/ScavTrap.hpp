/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:45:30 by psegura-          #+#    #+#             */
/*   Updated: 2023/10/23 16:55:49 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"
# include "Debug.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &f);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap &f);
		void	attack(const std::string& target);
        void    guardGate();
};
