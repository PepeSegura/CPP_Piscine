/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:37:54 by pepe              #+#    #+#             */
/*   Updated: 2023/07/09 02:56:44 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_data(int id, std::string input)
{
    data[id] = input;
}

void    Contact::print_data()
{
    std::string text[] = { "Name", "Last name", "Nickname", "Phone number", "Secret" };
    for (int i = 0; i < 5; i++)
    {
        std::cout << text[i] << ": "<< data[i] << std::endl;
    }
}
