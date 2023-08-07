/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/07 21:50:51 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ICharacter.hpp"
# include "Debug.hpp"

class AMateria
{
    public:
        // AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        // AMateria(const AMateria &f);
        // AMateria& operator=(const AMateria &f);

        std::string const       &getType() const;
        virtual AMateria        *clone() const = 0;
        virtual void            use(ICharacter& target) = 0;

    protected:
        std::string	_type;

};

