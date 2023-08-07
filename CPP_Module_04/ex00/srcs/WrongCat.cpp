/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:06:02 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/07 16:58:10 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat:: WrongCat()
{
    PRINT_DEBUG("WrongCat: Default constructor called.");
	_type = "WrongCat";
}

WrongCat:: WrongCat(const WrongCat& f) : WrongAnimal(f)
{
    PRINT_DEBUG("WrongCat: Copy constructor called.");
    *this = f;
}

WrongCat:: ~WrongCat()
{
    PRINT_DEBUG("WrongCat: Destructor called.");
}

WrongCat& WrongCat:: operator=(const WrongCat& f)
{
    PRINT_DEBUG("WrongCat: Asignation operand called.");
    if (this != &f)
		*this = f;
    return (*this);
}

void	WrongCat:: makeSound() const
{
	std::cout << "❌🐈 WrongCat sound... 🐈❌" << std::endl;
}
