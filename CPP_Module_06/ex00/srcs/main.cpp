/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:40:48 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/16 23:46:02 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Debug.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Introduce at least one parameter." << std::endl;
        return (1);
    }
    std::string str =  argv[1];

    std::cout << str << std::endl;
    return (0);    
}
