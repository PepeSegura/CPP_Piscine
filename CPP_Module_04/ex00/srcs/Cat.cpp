/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/20 16:27:57 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat()
{
    std::cout << "Cat: Default constructor called." << std::endl;
	_type = "Cat";
}

Cat:: Cat(const Cat& f) : Animal(f)
{
    std::cout << "Cat: Copy constructor called." << std::endl;
    *this = f;
}

Cat:: ~Cat()
{
    std::cout << "Cat: Destructor called." << std::endl;
}

Cat& Cat:: operator=(const Cat& f)
{
    std::cout << "Asignation operand called." << std::endl;
    if (this != &f)
		*this = f;
    return (*this);
}

void	Cat:: makeSound() const
{
	std::cout << "🐈 Typical Cat sound... 🐈" << std::endl;
}
