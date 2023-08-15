/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/15 17:25:06 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog:: Dog()
{
	PRINT_DEBUG("Dog: Default constructor called.");
    brain = new Brain();
	_type = "Dog";
}

Dog:: Dog(const Dog& f) : Animal(f)
{
	PRINT_DEBUG("Dog: Copy constructor called.");
    brain = NULL;
    *this = f;
}

Dog:: ~Dog()
{
	PRINT_DEBUG("Dog: Destructor called.");
    delete brain;
}

Dog& Dog:: operator=(const Dog& f)
{
	PRINT_DEBUG("Dog: Asignation operand called.");
    if (this != &f)
    {
        _type = f._type;
        if (brain)
            delete brain;
        brain = new Brain(*f.brain);
    }
    return (*this);
}

void	Dog:: makeSound() const
{
	std::cout << "🐶 Typical Dog sound... 🐶" << std::endl;
}

void Dog:: dogSetIdea(int id, const std::string& idea)
{
    brain->setIdea(id, idea);
}

std::string Dog:: dogGetIdea(int id)
{
    return (brain->getIdea(id));
}
