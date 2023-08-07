/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/07 15:09:00 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Debug.hpp"

class Animal
{
    public:
        Animal();
        Animal(const Animal &f);
		Animal(const std::string type);
        virtual ~Animal();
        Animal&	operator=(const Animal &f);
		const	std::string	getType()	const;
		virtual void		makeSound() const;

	protected:
		std::string	_type;

};
