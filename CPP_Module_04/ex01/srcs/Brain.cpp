/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:45:23 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/20 17:52:51 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain:: Brain()
{
    std::cout << "Brain: Default constructor called." << std::endl;
}

Brain:: Brain(const Brain& f)
{
    std::cout << "Brain: Copy constructor called." << std::endl;
    for (int i = 0; i < 100; i++)
            ideas[i] = f.ideas[i];
    *this = f;
}

Brain:: ~Brain()
{
    std::cout << "Brain: Destructor called." << std::endl;
}

Brain& Brain:: operator=(const Brain& f)
{
    std::cout << "Asignation operand called." << std::endl;
    if (this != &f)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = f.ideas[i];
    }
    return (*this);
}

void    Brain:: setIdea(int id, std::string idea)
{
    ideas[id] = idea;
}

std::string Brain:: getIdea(int id)
{
    return (ideas[id]);
}
