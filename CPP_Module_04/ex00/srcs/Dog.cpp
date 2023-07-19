/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/19 20:49:26 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog()
{
    std::cout << "Default constructor called." << std::endl;
}

Dog:: Dog(std::string type) : Animal(type)
{
    std::cout << "Dog "<< type << " has spawned." << std::endl;
}

Dog:: Dog(const Dog& f)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = f;
}

Dog:: ~Dog()
{
    std::cout << "Destructor called." << std::endl;
}
