/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/07 16:57:20 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal:: WrongAnimal()
{
    PRINT_DEBUG("WrongAnimal: Default constructor called.");
	_type = "Unsetted";
}

WrongAnimal:: WrongAnimal(std::string type) : _type(type)
{
    PRINT_DEBUG("WrongAnimal: Type setter constructor called.");
}

WrongAnimal:: WrongAnimal(const WrongAnimal& f)
{
    PRINT_DEBUG("WrongAnimal: Copy constructor called.");
    *this = f;
}

WrongAnimal:: ~WrongAnimal()
{
    PRINT_DEBUG("WrongAnimal: Destructor called.");
}

WrongAnimal& WrongAnimal:: operator=(const WrongAnimal& f)
{
    PRINT_DEBUG("WrongAnimal: Asignation operand called.");
    if (this != &f)
		*this = f;
    return (*this);
}

const std::string	WrongAnimal:: getType() const
{
	return (_type);
}

void	WrongAnimal:: makeSound() const
{
	std::cout << "❌ Tipical undefined Wronganimal sound... ❌" << std::endl;
}
