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

#include "Cat.hpp"

Cat:: Cat()
{
    std::cout << "Default constructor called." << std::endl;
}

Cat:: Cat(const Cat& f)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = f;
}

Cat:: ~Cat()
{
    std::cout << "Destructor called." << std::endl;
}
