/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/07 16:51:22 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat()
{
    PRINT_DEBUG("Cat: Default constructor called.");
	_type = "Cat";
}

Cat:: Cat(const Cat& f) : Animal(f)
{
    PRINT_DEBUG("Cat: Copy constructor called.");
    *this = f;
}

Cat:: ~Cat()
{
    PRINT_DEBUG("Cat: Destructor called.");
}

Cat& Cat:: operator=(const Cat& f)
{
    PRINT_DEBUG("Asignation operand called.");
    if (this != &f)
		*this = f;
    return (*this);
}

void	Cat:: makeSound() const
{
	std::cout << "🐈 Typical Cat sound... 🐈" << std::endl;
}
