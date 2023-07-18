/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:07:42 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/18 21:26:30 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap pepe("pepe");

	pepe.takeDamage(5);
	pepe.beRepaired(-2);
	pepe.beRepaired(2);
	pepe.takeDamage(15);
	pepe.attack("manolo");
	pepe.beRepaired(50);
	return (0);	
}
