/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/04 18:06:36 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

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
        static bool         printMessages;

	protected:
		std::string	_type;

};
