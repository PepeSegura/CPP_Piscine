/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/18 18:46:46 by psegura-         ###   ########.fr       */
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

    private:
        int                 fixed;
        static const int    bits = 8;
};

std::ostream& operator<<(std::ostream &out, Fixed const &f);
