/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/07/18 16:00:33 by psegura-         ###   ########.fr       */
=======
/*   Updated: 2023/07/13 18:18:10 by psegura-         ###   ########.fr       */
>>>>>>> c49e8b5a017a523a97279646d6972b5400183181
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
