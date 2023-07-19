/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/17 19:34:32 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed:: Fixed()
{
    std::cout << "Default constructor called." << std::endl;
    this->fixed = 0;
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

Fixed:: Fixed(const int int_nb)
{
    std::cout << "INT constructor called." << std::endl;
    this->fixed = int_nb;
}

Fixed:: Fixed(const float float_nb)
{
    std::cout << "FLOAT constructor called." << std::endl;
    (void)float_nb;
}

int Fixed:: getRawBits(void)
const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed);
}

void Fixed:: setRawBits(int const raw)
{
    this->fixed = raw;
}

float Fixed:: toFloat(void) const
{
    float result = 0;

    return (result);
}

int Fixed:: toInt(void) const
{
    int result = 0;

    return (result);
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

std::ostream& operator<<(std::ostream &out, Fixed const &f)
{
    float result;

    result = f.toFloat();
    out << result;
    return (out);
}
