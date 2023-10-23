/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:07:42 by psegura-          #+#    #+#             */
/*   Updated: 2023/10/23 18:19:18 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap clav("\033[0;31mClavito\033[0m");
	ScavTrap scav("\033[0;32mScavenger\033[0m");
	FragTrap frag("\033[0;33mFragstioner\033[0m");
	std::cout << std::endl;

	clav.takeDamage(5);
	clav.beRepaired(10);
	clav.attack("Tabla");
	clav.takeDamage(50);
	std::cout << std::endl;
	
	scav.guardGate();
	scav.takeDamage(50);
	scav.beRepaired(10);
	scav.attack("Hunter");
	scav.takeDamage(50);
	std::cout << std::endl;

	frag.highFivesGuys();
	frag.takeDamage(75);
	frag.beRepaired(25);
	frag.attack("Mats");
	frag.takeDamage(50);
	std::cout << std::endl;
	return (0);	
}
