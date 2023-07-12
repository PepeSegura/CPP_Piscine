/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/13 01:02:27 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed:: Fixed()
{
    std::cout << "Default constructor called." << std::endl;
    this->fixed = 0;
}

Fixed:: Fixed(const Fixed& f)
{
    std::cout << "Copy constructor called." << std::endl;
    fixed = f.getRawBits();
}

Fixed:: ~Fixed()
{
    std::cout << "Destructor called." << std::endl;
}

int Fixed:: getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed);
}

void Fixed:: setRawBits(int const raw)
{
    this->fixed = raw;
}

Fixed& Fixed:: operator=(const Fixed& f)
{
    std::cout << "Asignation operand called." << std::endl;
    if (this != &f)
    {
        fixed = f.getRawBits();
    }
    return (*this);
}
