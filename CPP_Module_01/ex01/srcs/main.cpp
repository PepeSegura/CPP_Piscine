/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:45:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 16:45:54 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	{
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "An unnamed zombie will be created." << std::endl;
		Zombie unnamed;
	}
	{
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "An horde of 5 paquitos will be created" << std::endl;
		Zombie *horde = NULL;

		horde = zombieHorde(5, "paquitos");
		delete[] (horde);
		std::cout << "--------------------------------------" << std::endl;
	}
	{
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "An horde of 2 manolos will be created" << std::endl;
		Zombie *horde = NULL;

		horde = zombieHorde(2, "manolos");
		delete[] (horde);
		std::cout << "--------------------------------------" << std::endl;
	}
	return (0);
}
