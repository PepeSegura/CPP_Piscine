/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/07 16:31:04 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal:: Animal()
{
    PRINT_DEBUG("Animal: Default constructor called.");
	_type = "Unsetted";
}

Animal:: Animal(std::string type) : _type(type)
{
    PRINT_DEBUG("Animal with type setter constructor called.");
}

Animal:: Animal(const Animal& f)
{
    PRINT_DEBUG("Copy constructor called.");
    *this = f;
}

Animal:: ~Animal()
{
    PRINT_DEBUG("Animal: Destructor called.");
}

Animal& Animal:: operator=(const Animal& f)
{
    PRINT_DEBUG("Animal: Asignation operand called.");
    if (this != &f)
		_type = f._type;
    return (*this);
}

const std::string	Animal:: getType() const
{
	return (_type);
}

void	Animal:: makeSound() const
{
	std::cout << "Tipical undefined animal sound... ⁇" << std::endl;
}
