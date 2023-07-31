/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/31 15:28:23 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include "Cure.hpp"

Cure:: Cure() : AMateria("cure")
{
    std::cout << "Cure: Default constructor called." << std::endl;
}

Cure:: Cure(const Cure& f) : AMateria("cure")
{
    std::cout << "Cure: Copy constructor called." << std::endl;
    *this = f;
}

Cure:: ~Cure()
{
    std::cout << "Cure: Destructor called." << std::endl;
}

Cure& Cure:: operator=(const Cure& f)
{
    std::cout << "Cure: Asignation operand called." << std::endl;
    if (this != &f)
		*this = f;
    return (*this);
}

AMateria* Cure:: clone() const
{
	AMateria *clone = new Cure;
	std::cout << "clone" << std::endl;
	return (clone);
}

void Cure:: use(ICharacter& target)
{
	std::cout << "🏥 heals " << target.getName() << "’s wounds 🏥" << std::endl;
}
