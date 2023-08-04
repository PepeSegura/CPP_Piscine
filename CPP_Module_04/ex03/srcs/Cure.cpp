/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/04 18:30:49 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure:: Cure() : AMateria("cure")
{
	PRINT_DEBUG("Cure: Default constructor called.");
}

Cure:: Cure(const Cure& f) : AMateria("cure")
{
	PRINT_DEBUG("Cure: Copy constructor called.");
    *this = f;
}

Cure:: ~Cure()
{
	PRINT_DEBUG("Cure: Destructor called.");
}

Cure& Cure:: operator=(const Cure& f)
{
	PRINT_DEBUG("Cure: Asignation operand called.");
    if (this != &f)
		*this = f;
    return (*this);
}

AMateria* Cure:: clone() const
{
	AMateria *clone = new Cure;
	return (clone);
}

void Cure:: use(ICharacter& target)
{
	std::cout << "🏥 heals " << target.getName() << "'s wounds 🏥" << std::endl;
}
