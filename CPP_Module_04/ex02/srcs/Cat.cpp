/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/07 15:06:25 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat()
{
	PRINT_DEBUG("Cat: Default constructor called.");
    brain = new Brain();
	_type = "Cat";
}

Cat:: Cat(const Cat& f) : AAnimal(f)
{
	PRINT_DEBUG("Cat: Copy constructor called.");
    brain = NULL;
    *this = f;
}

Cat:: ~Cat()
{
	PRINT_DEBUG("Cat: Destructor called.");
    delete brain;
}

Cat& Cat:: operator=(const Cat& f)
{
	PRINT_DEBUG("Cat: Asignation operand called.");
    if (this != &f)
    {
        AAnimal::operator=(f);
        _type = f._type;
        if (brain)
            delete brain;
        brain = new Brain(*f.brain);
    }
    return (*this);
}

void	Cat:: makeSound() const
{
	std::cout << "🐈 Typical Cat sound... 🐈" << std::endl;
}

void Cat:: catSetIdea(int id, const std::string& idea)
{
    brain->setIdea(id, idea);
}

std::string Cat:: catGetIdea(int id)
{
    return (brain->getIdea(id));
}
