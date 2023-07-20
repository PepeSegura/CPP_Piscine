/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/20 18:56:31 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat()
{
    std::cout << "Cat: Default constructor called." << std::endl;
    brain = new Brain();
	_type = "Cat";
}

Cat:: Cat(const Cat& f) : Animal(f)
{
    std::cout << "Cat: Copy constructor called." << std::endl;
    brain = NULL;
    *this = f;
}

Cat:: ~Cat()
{
    std::cout << "Cat: Destructor called." << std::endl;
    delete brain;
}

Cat& Cat:: operator=(const Cat& f)
{
    std::cout << "Cat: Asignation operand called." << std::endl;
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
