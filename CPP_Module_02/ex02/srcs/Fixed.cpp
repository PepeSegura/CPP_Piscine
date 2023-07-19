/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/18 18:47:48 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed:: Fixed() : fixed(0)
{
}

Fixed:: ~Fixed()
{
}

Fixed:: Fixed(const Fixed& f)
{
    fixed = f.getRawBits();
}

Fixed:: Fixed(const int int_nb) : fixed(int_nb << bits)
{
}

Fixed:: Fixed(const float float_nb)
{
    fixed = roundf((float)float_nb * (1 << bits));
}

int Fixed:: getRawBits(void) const
{
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
    if (this != &f)
        fixed = f.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream &out, Fixed const &f)
{
    out << f.toFloat();
    return (out);
}

/*__COMPARISON_OPERATORS_*/

bool  Fixed:: operator>(Fixed const &f)
{
    return (this->getRawBits() > f.getRawBits());
}

bool  Fixed:: operator<(Fixed const &f)
{
    return (this->getRawBits() < f.getRawBits());   
}

bool  Fixed:: operator>=(Fixed const &f)
{
    return (this->getRawBits() >= f.getRawBits());
}

bool  Fixed:: operator<=(Fixed const &f)
{
    return (this->getRawBits() <= f.getRawBits());
}

bool  Fixed:: operator==(Fixed const &f)
{
    return (this->getRawBits() == f.getRawBits());
}

bool  Fixed:: operator!=(Fixed const &f)
{
    return (this->getRawBits() != f.getRawBits());
}

/*__ARITHMETIC_OPERATORS__*/

Fixed  Fixed:: operator+(Fixed const &f)
{
    return (this->toFloat() + f.toFloat());
}

Fixed  Fixed:: operator-(Fixed const &f)
{
    return (this->toFloat() - f.toFloat());
}

Fixed  Fixed:: operator*(Fixed const &f)
{
    return (this->toFloat() * f.toFloat());
}

Fixed  Fixed:: operator/(Fixed const &f)
{
    if (f.toFloat() != 0)
        return (this->toFloat() / f.toFloat());
    std::cout << "Operation aborted: Cannot divide by 0." << std::endl;
    return (this->toFloat());
}

/*__INCREMENT/DECREMENT_OPERATORS__*/

Fixed& Fixed:: operator++()
{
    fixed += 1;
    return (*this);
}

Fixed& Fixed:: operator--()
{
    fixed -= 1;
    return (*this);
}

Fixed  Fixed:: operator++(int)
{
    Fixed result = (*this);
    ++(*this);
    return (result);
}

Fixed  Fixed:: operator--(int)
{
    Fixed result = (*this);
    --(*this);
    return (result);
}

const Fixed&  Fixed:: max(Fixed const& a, Fixed const& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

const Fixed&  Fixed:: min(Fixed const& a, Fixed const& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed&  Fixed:: max(Fixed& a, Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

Fixed&  Fixed:: min(Fixed& a, Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}
