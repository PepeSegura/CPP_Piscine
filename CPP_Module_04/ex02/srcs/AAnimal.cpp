/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/20 19:12:51 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal:: AAnimal()
{
    PRINT_DEBUG("AAnimal: Default constructor called.");
	_type = "Unsetted";
}

AAnimal:: AAnimal(std::string type) : _type(type)
{
    PRINT_DEBUG("AAnimal: Type setter constructor called.");
}

AAnimal:: AAnimal(const AAnimal& f)
{
    PRINT_DEBUG("AAnimal: Copy constructor called.");
    *this = f;
}

AAnimal:: ~AAnimal()
{
    PRINT_DEBUG("AAnimal: Destructor called.");
}

AAnimal& AAnimal:: operator=(const AAnimal& f)
{
    PRINT_DEBUG("AAnimal: Asignation operand called.");
    if (this != &f)
		_type = f._type;
    return (*this);
}

const std::string	AAnimal:: getType() const
{
	return (_type);
}
