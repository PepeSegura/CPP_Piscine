/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:07:42 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/18 22:27:54 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	{
		ClapTrap clav("\033[0;31mClavito\033[0m");
		ScavTrap scav("\033[0;32mScavenger\033[0m");
		clav.takeDamage(5);
		clav.beRepaired(10);
		clav.attack("Tabla");
		clav.takeDamage(50);

		scav.guardGate();
		scav.takeDamage(50);
		scav.beRepaired(10);
		scav.attack("Hunter");
		scav.takeDamage(50);
	}
	return (0);	
}
