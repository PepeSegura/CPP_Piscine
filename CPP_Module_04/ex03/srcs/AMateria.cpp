/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:14:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/04 18:26:41 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria:: AMateria()
{
	PRINT_DEBUG("AMateria: Default constructor called.");
    _type = "unsetted";
}

AMateria:: AMateria(std::string const & type) : _type(type)
{
	PRINT_DEBUG("AMateria: Constructor with type setter called.");
}

AMateria:: AMateria(const AMateria &f)
{
	PRINT_DEBUG("AMateria: Copy constructor called.");
	*this = f;
}

AMateria:: ~AMateria()
{
	PRINT_DEBUG("AMateria: Destructor called.");
}

AMateria&    AMateria:: operator=(const AMateria &f)
{
	PRINT_DEBUG("AMateria: Asignation operand called.");
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
