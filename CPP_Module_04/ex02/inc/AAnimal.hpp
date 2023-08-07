/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/23 14:54:16 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Debug.hpp"

class AAnimal
{
    public:
        AAnimal();
        AAnimal(const AAnimal &f);
		AAnimal(const std::string type);
        virtual ~AAnimal();
        AAnimal&	operator=(const AAnimal &f);
		const	std::string	getType()	const;
		virtual void		makeSound() const = 0;

	protected:
		std::string	_type;

};
