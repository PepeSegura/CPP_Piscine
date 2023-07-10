/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:37:54 by pepe              #+#    #+#             */
/*   Updated: 2023/07/10 23:24:28 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_data(int _id, std::string input)
{
    data[_id] = input;
}

std::string	Contact::get_data(int i)
{
	return (data[i % 8]);
}

void    Contact::print_data()
{
    std::string text[] = { "Name", "Last name", "Nickname", "Phone number", "Secret" };	
    for (int i = 0; i < 5; i++)
    {
		if (data[i].length())
        	std::cout << text[i] << ": "<< data[i] << std::endl;
    }
}
