/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/07/17 19:34:32 by psegura-         ###   ########.fr       */
=======
/*   Updated: 2023/07/18 17:13:33 by psegura-         ###   ########.fr       */
>>>>>>> 12350858672823cd75371e9aa8cd39c3b702a0b7
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed:: Fixed() : fixed(0)
{
    std::cout << "Default constructor called." << std::endl;
}

Fixed:: ~Fixed()
{
    std::cout << "Destructor called." << std::endl;
}

Fixed:: Fixed(const Fixed& f)
{
    std::cout << "Copy constructor called." << std::endl;
    fixed = f.getRawBits();
}

Fixed:: Fixed(const int int_nb) : fixed(int_nb << bits)
{
    std::cout << "INT constructor called." << std::endl;
}

Fixed:: Fixed(const float float_nb)
{
    std::cout << "FLOAT constructor called." << std::endl;
    fixed = roundf((float)float_nb * (1 << bits));
}

int Fixed:: getRawBits(void)
const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed);
}

void Fixed:: setRawBits(int const raw)
{
    fixed = raw;
}

float Fixed:: toFloat(void) const
{
    return ((float)fixed / (1 << bits));
}

int Fixed:: toInt(void) const
{
    return (fixed >> bits);
}

Fixed& Fixed:: operator=(const Fixed& f)
{
    std::cout << "Asignation operand called." << std::endl;
    if (this != &f)
        fixed = f.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream &out, Fixed const &f)
{
    out << f.toFloat();
    return (out);
}
