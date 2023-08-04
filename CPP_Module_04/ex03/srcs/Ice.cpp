/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/04 18:31:41 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice:: Ice() : AMateria("ice")
{
	PRINT_DEBUG("Ice: Default constructor called.");
}

Ice:: Ice(const Ice& f) : AMateria("ice")
{
	PRINT_DEBUG("Ice: Copy constructor called.");
    *this = f;
}

Ice:: ~Ice()
{
	PRINT_DEBUG("Ice: Destructor called.");
}

Ice& Ice:: operator=(const Ice& f)
{
	PRINT_DEBUG("Ice: Asignation operand called.");
    if (this != &f)
		*this = f;
    return (*this);
}

AMateria* Ice:: clone() const
{
	AMateria *clone = new Ice;
	return (clone);
}

void Ice:: use(ICharacter& target)
{
	std::cout << "❄️ shoots an ice bolt at " << target.getName() << " ❄️" << std::endl;
}
