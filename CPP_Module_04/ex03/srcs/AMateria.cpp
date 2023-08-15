/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:14:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/10 16:37:59 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria:: AMateria(std::string const & type) : _type(type)
{
	PRINT_DEBUG("AMateria: Constructor with type setter called.");
}

AMateria:: ~AMateria()
{
	PRINT_DEBUG("AMateria: Destructor called.");
}

std::string const & AMateria:: getType() const
{
    return (_type);
}
