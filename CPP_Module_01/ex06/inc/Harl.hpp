/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:39:59 by pepe              #+#    #+#             */
/*   Updated: 2023/07/12 17:29:15 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Harl
{
    public:
        Harl();
        ~Harl();
        void    complain(std::string level);
    
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
};
