/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:45:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 15:49:44 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	{
		std::cout << "A zombie will be created and deleted." << std::endl;
		Zombie unnamed;
	}
	{
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "A zombie called Pepe will be created and deleted." << std::endl;
		Zombie *pepe = NULL;
		pepe = newZombie("PEPE");
		delete (pepe);
		std::cout << "-------------------------------------------------" << std::endl;
	}
	{
		randomChump("Paco");
	}
	return (0);
}
