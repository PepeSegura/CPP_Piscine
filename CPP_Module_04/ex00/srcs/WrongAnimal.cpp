/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/20 16:53:06 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal:: WrongAnimal()
{
    std::cout << "WrongAnimal: Default constructor called." << std::endl;
	_type = "Unsetted";
}

WrongAnimal:: WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal with type setter constructor called." << std::endl;
}

WrongAnimal:: WrongAnimal(const WrongAnimal& f)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = f;
}

WrongAnimal:: ~WrongAnimal()
{
    std::cout << "WrongAnimal: Destructor called." << std::endl;
}

WrongAnimal& WrongAnimal:: operator=(const WrongAnimal& f)
{
    std::cout << "Asignation operand called." << std::endl;
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
