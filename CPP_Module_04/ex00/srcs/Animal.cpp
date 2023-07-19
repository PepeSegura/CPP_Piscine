/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/19 20:50:51 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal:: Animal()
{
    std::cout << "Default constructor called." << std::endl;
}

Animal:: Animal(std::string type)
{
	_type = type;
    std::cout << "Default constructor called." << std::endl;
}

Animal:: Animal(const Animal& f)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = f;
}

Animal:: ~Animal()
{
    std::cout << "Destructor called." << std::endl;
}

std::string	Animal:: getType()
{
	return (this->_type);
}

void	Animal:: makeSound()
{
	if (this->getType() != "Dog" && this->getType() != "Cat")
		std::cout << "Tipical undefined animal sound... ⁇" << std::endl;
	if (this->getType() == "Dog")
		std::cout << "🐶 Typical Dog sound... 🐶" << std::endl;
	if (this->getType() == "Cat")
		std::cout << "🐈 Typical Cat sound... 🐈" << std::endl;
}
