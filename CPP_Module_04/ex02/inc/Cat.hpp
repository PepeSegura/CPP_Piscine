/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/23 15:36:09 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
    public:
        Cat();
        Cat(const Cat &f);
        ~Cat();
        Cat& operator=(const Cat &f);
		virtual void    makeSound() const;
        void            catSetIdea(int id, const std::string& idea);
        std::string     catGetIdea(int id);

    private:
        Brain *brain;
};
