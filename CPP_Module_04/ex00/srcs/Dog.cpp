/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/20 16:27:43 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog()
{
    std::cout << "Dog: Default constructor called." << std::endl;
	_type = "Dog";
}

Dog:: Dog(const Dog& f) : Animal(f)
{
    std::cout << "Dog: Copy constructor called." << std::endl;
    *this = f;
}

Dog:: ~Dog()
{
    std::cout << "Dog: Destructor called." << std::endl;
}

Dog& Dog:: operator=(const Dog& f)
{
    std::cout << "Asignation operand called." << std::endl;
    if (this != &f)
		*this = f;
    return (*this);
}

void	Dog:: makeSound() const
{
	std::cout << "🐶 Typical Dog sound... 🐶" << std::endl;
}
