/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/31 15:22:15 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice:: Ice() : AMateria("ice")
{
    std::cout << "Ice: Default constructor called." << std::endl;
}

Ice:: Ice(const Ice& f) : AMateria("ice")
{
    std::cout << "Ice: Copy constructor called." << std::endl;
    *this = f;
}

Ice:: ~Ice()
{
    std::cout << "Ice: Destructor called." << std::endl;
}

Ice& Ice:: operator=(const Ice& f)
{
    std::cout << "Ice: Asignation operand called." << std::endl;
    if (this != &f)
		*this = f;
    return (*this);
}

AMateria* Ice:: clone() const
{
	AMateria *clone = new Ice;
	std::cout << "clone" << std::endl;
	return (clone);
}

void Ice:: use(ICharacter& target)
{
	std::cout << "❄️ shoots an ice bolt at " << target.getName() << " ❄️" << std::endl;
}
