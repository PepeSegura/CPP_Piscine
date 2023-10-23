/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:45:30 by psegura-          #+#    #+#             */
/*   Updated: 2023/10/23 16:55:38 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"
# include "Debug.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &f);
		~FragTrap();
		FragTrap& operator=(const FragTrap &f);
		void	attack(const std::string& target);
        void	highFivesGuys(void);
};
