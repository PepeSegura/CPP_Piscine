/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:14:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/03 00:09:41 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

bool AMateria:: printMessages = true;

AMateria:: AMateria()
{
	if (printMessages)
	{
		std::cout << "AMateria: Default constructor called." << std::endl;
	}
    _type = "unsetted";
}

AMateria:: AMateria(std::string const & type) : _type(type)
{
	if (printMessages)
	{
		std::cout << "AMateria: Constructor with type setter called." << std::endl;
	}
}

AMateria:: AMateria(const AMateria &f)
{
    if (printMessages)
    {
        std::cout << "AMateria: Copy constructor called." << std::endl;
    }
	*this = f;
}

AMateria:: ~AMateria()
{
    if (printMessages)
    {
        std::cout << "AMateria: Destructor called." << std::endl;
    }
}

AMateria&    AMateria:: operator=(const AMateria &f)
{
    if (printMessages)
    {
        std::cout << "AMateria: Asignation operand called." << std::endl;
    }
	if (this != &f)
		_type = f._type;
    return (*this);
}

std::string const & AMateria:: getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "This will never be printed, right " << target.getName() << " ?" << std::endl;
}
