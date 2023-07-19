/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/18 22:08:16 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal:: WrongAnimal()
{
    std::cout << "Default constructor called." << std::endl;
}

WrongAnimal:: WrongAnimal(const WrongAnimal& f)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = f;
}

WrongAnimal:: ~WrongAnimal()
{
    std::cout << "Destructor called." << std::endl;
}
