/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/21 14:00:03 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog()
{
	if (printMessages)
	{
    	std::cout << "Dog: Default constructor called." << std::endl;
	}
    brain = new Brain();
	_type = "Dog";
}

Dog:: Dog(const Dog& f) : Animal(f)
{
	if (printMessages)
	{
    	std::cout << "Dog: Copy constructor called." << std::endl;
	}
    brain = NULL;
    *this = f;
}

Dog:: ~Dog()
{
	if (printMessages)
	{
    	std::cout << "Dog: Destructor called." << std::endl;
	}
    delete brain;
}

Dog& Dog:: operator=(const Dog& f)
{
    if (printMessages)
	{
		std::cout << "Asignation operand called." << std::endl;
	}
    if (this != &f)
		*this = f;
    return (*this);
}

void	Dog:: makeSound() const
{
	std::cout << "🐶 Typical Dog sound... 🐶" << std::endl;
}
