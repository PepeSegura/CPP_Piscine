/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:59:54 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 18:10:00 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Weapon
{
	public:
		Weapon();
		~Weapon();
		const std::string&	getType(void);
		void				setType(std::string type);

	private:
		std::string type;
};
