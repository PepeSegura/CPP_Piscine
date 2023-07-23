/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/23 15:36:09 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AAnimal.hpp"

class Brain
{
    public:
        Brain();
        Brain(const Brain &f);
        virtual ~Brain();
        Brain& operator=(const Brain &f);
        void            setIdea(int id, std::string idea);
        std::string     getIdea(int id);

    protected:
        std::string ideas[100];
};

