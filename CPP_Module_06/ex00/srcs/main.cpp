/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:40:48 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/24 18:02:55 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Debug.hpp"
#include "DataTypes.hpp"
#include "parser.h"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Introduce at least one parameter." << std::endl;
        return (1);
    }
    std::string str =  argv[1];
	int			type = 0;

	try
	{
		type = check_input(str);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    // DataTypes hola(str);
    // std::cout << hola << std::endl;
    return (0);
}
