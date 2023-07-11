/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:57:04 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 18:11:17 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	std::cout << "This is the main." << std::endl;
	
	Weapon arma;

	arma.setType("ak-47");
	std::cout << arma.getType() << std::endl;
	return (0);
}
