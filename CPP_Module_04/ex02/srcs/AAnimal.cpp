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

bool AAnimal:: printMessages = true;

AAnimal:: AAnimal()
{
    if (printMessages)
    {
        std::cout << "AAnimal: Default constructor called." << std::endl;
    }
	_type = "Unsetted";
}

AAnimal:: AAnimal(std::string type) : _type(type)
{
    if (printMessages)
    {
        std::cout << "AAnimal with type setter constructor called." << std::endl;
    }
}

AAnimal:: AAnimal(const AAnimal& f)
{
    if (printMessages)
    {
        std::cout << "Copy constructor called." << std::endl;
    }
    *this = f;
}

AAnimal:: ~AAnimal()
{
    if (printMessages)
    {
       std::cout << "AAnimal: Destructor called." << std::endl;
    }
}

AAnimal& AAnimal:: operator=(const AAnimal& f)
{
    if (printMessages)
    {
        std::cout << "AAnimal: Asignation operand called." << std::endl;
    }
    if (this != &f)
		_type = f._type;
    return (*this);
}

const std::string	AAnimal:: getType() const
{
	return (_type);
}
