/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
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

class Dog : public AAnimal
{
    public:
        Dog();
        Dog(const Dog &f);
        ~Dog();
        Dog& operator=(const Dog &f);
		virtual void makeSound() const;
        void            dogSetIdea(int id, const std::string& idea);
        std::string     dogGetIdea(int id);

    private:
        Brain *brain;
};
