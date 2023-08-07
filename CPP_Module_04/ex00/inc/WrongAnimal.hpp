/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/07 17:08:42 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include "Debug.hpp"

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &f);
        WrongAnimal(const std::string type);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal &f);
        const	std::string	getType()	const;
		void		makeSound() const;

    protected:
		std::string	_type;
        
};

#endif
