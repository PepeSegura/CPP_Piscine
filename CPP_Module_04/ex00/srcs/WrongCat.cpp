/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:06:02 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/20 17:07:10 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat:: WrongCat()
{
    std::cout << "WrongCat: Default constructor called." << std::endl;
	_type = "WrongCat";
}

WrongCat:: WrongCat(const WrongCat& f) : WrongAnimal(f)
{
    std::cout << "WrongCat: Copy constructor called." << std::endl;
    *this = f;
}

WrongCat:: ~WrongCat()
{
    std::cout << "WrongCat: Destructor called." << std::endl;
}

WrongCat& WrongCat:: operator=(const WrongCat& f)
{
    std::cout << "Asignation operand called." << std::endl;
    if (this != &f)
		*this = f;
    return (*this);
}

void	WrongCat:: makeSound() const
{
	std::cout << "❌🐈 WrongCat sound... 🐈❌" << std::endl;
}
