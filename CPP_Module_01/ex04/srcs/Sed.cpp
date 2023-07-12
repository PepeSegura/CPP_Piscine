/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:58:55 by pepe              #+#    #+#             */
/*   Updated: 2023/07/12 17:56:49 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	print_error(std::string error)
{
	std::cout << "Error:\n\t" << error << std::endl;
	exit(0);
}

Args:: Args(int argc, char **argv)
{
    if (argc != 4)
		print_error("Not enough arguments.");
    data[INFILENAME]    = argv[1];
    data[OUTFILENAME]   = data[INFILENAME] + ".replace";
    data[HAYSTACK]      = argv[2];
    data[NEEDLE]        = argv[3];
}

Args:: ~Args()
{
    std::string text[] = { "inFileName", "outFileName", "haystack", "needle" };
    for (int i = 0; i < 4 ;i++)
    {
        std::cout << text[i] << ": ["<< data[i] << "]" << std::endl;
    }
}

std::string Args:: get_data(int id)
{
    return (this->data[id]);
}
