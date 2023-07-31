/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/31 14:12:30 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character:: Character()
{
    std::cout << "Character: Default constructor called." << std::endl;
}

Character:: Character(const Character& f)
{
    std::cout << "Character: Copy constructor called." << std::endl;
    *this = f;
}

Character:: ~Character()
{
    std::cout << "Character: Destructor called." << std::endl;
}

Character& Character:: operator=(const Character& f)
{
    std::cout << "Character: Asignation operand called." << std::endl;
    if (this != &f)
		*this = f;
    return (*this);
}
