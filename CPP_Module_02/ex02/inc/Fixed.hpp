/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/18 18:41:08 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &f);
        Fixed(const int int_nb);
        Fixed(const float float_nb);
        Fixed&  operator=(Fixed const &f);

        void    setRawBits(int const raw);
        int     getRawBits(void) const;
        float   toFloat(void) const;
        int     toInt(void) const;

        /*__COMPARISON_OPERATORS_*/
        bool    operator>(Fixed const &f);
        bool    operator<(Fixed const &f);
        bool    operator>=(Fixed const &f);
        bool    operator<=(Fixed const &f);
        bool    operator==(Fixed const &f);
        bool    operator!=(Fixed const &f);
        /*__ARITHMETIC_OPERATORS__*/
        Fixed   operator+(Fixed const &f);
        Fixed   operator-(Fixed const &f);
        Fixed   operator*(Fixed const &f);
        Fixed   operator/(Fixed const &f);
        /*__INCREMENT/DECREMENT_OPERATORS__*/
        Fixed&  operator++();       /* Pre  - increment */
        Fixed&  operator--();       /* Pre  - decrement */
        Fixed   operator++(int);    /* Post - increment */
        Fixed   operator--(int);    /* Post - decrement */
        /*__MIN/MAX__*/
        static const Fixed& max(Fixed const& a, Fixed const& b);
        static const Fixed& min(Fixed const& a, Fixed const& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static Fixed& min(Fixed& a, Fixed& b);

    private:
        int                 fixed;
        static const int    bits = 8;
};

std::ostream& operator<<(std::ostream &out, Fixed const &f);
