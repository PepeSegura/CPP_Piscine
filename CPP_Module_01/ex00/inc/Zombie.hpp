/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:46:00 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 15:44:42 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	set_name(std::string name);

	private:
		std::string name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
