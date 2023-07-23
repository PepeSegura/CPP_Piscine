/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/23 14:16:44 by psegura-         ###   ########.fr       */
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
    	std::cout << "Dog: Asignation operand called." << std::endl;
	}
    if (this != &f)
    {
        Animal::operator=(f);
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
