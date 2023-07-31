/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/18 22:08:16 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

Materia:: Materia()
{
    std::cout << "Materia: Default constructor called." << std::endl;
}

Materia:: Materia(const Materia& f)
{
    std::cout << "Materia: Copy constructor called." << std::endl;
    *this = f;
}

Materia:: ~Materia()
{
    std::cout << "Materia: Destructor called." << std::endl;
}

Materia& Materia:: operator=(const Materia& f)
{
    std::cout << "Materia: Asignation operand called." << std::endl;
    if (this != &f)
		*this = f;
    return (*this);
}
