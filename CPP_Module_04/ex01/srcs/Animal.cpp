/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/20 19:12:51 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

bool Animal:: printMessages = true;

Animal:: Animal()
{
    if (printMessages)
    {
        std::cout << "Animal: Default constructor called." << std::endl;
    }
	_type = "Unsetted";
}

Animal:: Animal(std::string type) : _type(type)
{
    if (printMessages)
    {
        std::cout << "Animal with type setter constructor called." << std::endl;
    }
}

Animal:: Animal(const Animal& f)
{
    if (printMessages)
    {
        std::cout << "Copy constructor called." << std::endl;
    }
    *this = f;
}

Animal:: ~Animal()
{
    if (printMessages)
    {
       std::cout << "Animal: Destructor called." << std::endl;
    }
}

Animal& Animal:: operator=(const Animal& f)
{
    if (printMessages)
    {
        std::cout << "Animal: Asignation operand called." << std::endl;
    }
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
