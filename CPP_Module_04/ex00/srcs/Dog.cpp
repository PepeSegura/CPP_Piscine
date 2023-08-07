/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/07 17:14:44 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog()
{
    PRINT_DEBUG("Dog: Default constructor called.");
	_type = "Dog";
}

Dog:: Dog(const Dog& f) : Animal(f)
{
    PRINT_DEBUG("Dog: Copy constructor called.");
    *this = f;
}

Dog:: ~Dog()
{
    PRINT_DEBUG("Dog: Destructor called.");
}

Dog& Dog:: operator=(const Dog& f)
{
    PRINT_DEBUG("Dog: Asignation operand called.");
    if (this != &f)
		*this = f;
    return (*this);
}

void	Dog:: makeSound() const
{
	std::cout << "🐶 Typical Dog sound... 🐶" << std::endl;
}
