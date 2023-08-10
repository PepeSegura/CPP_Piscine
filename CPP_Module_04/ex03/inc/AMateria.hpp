/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/10 16:44:08 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ICharacter.hpp"
# include "Debug.hpp"

class AMateria
{
    public:
        AMateria(std::string const & type);
        virtual ~AMateria();

        std::string const       &getType() const;
        virtual AMateria        *clone() const = 0;
        virtual void            use(ICharacter& target) = 0;

    protected:
        std::string	_type;

};

