/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:45:23 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/07 15:04:22 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain:: Brain()
{
	PRINT_DEBUG("Brain: Default constructor called.");
}

Brain:: Brain(const Brain& f)
{
	PRINT_DEBUG("Brain: Copy constructor called.");
    for (int i = 0; i < 100; i++)
            ideas[i] = f.ideas[i];
    *this = f;
}

Brain:: ~Brain()
{
	PRINT_DEBUG("Brain: Destructor called.");
}

Brain& Brain:: operator=(const Brain& f)
{
	PRINT_DEBUG("Brain: Asignation operand called.");
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
