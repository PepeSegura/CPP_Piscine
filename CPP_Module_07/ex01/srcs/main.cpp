/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:40:48 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/25 06:24:44 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Debug.hpp"
#include "iter.hpp"

int main( void )
{
    {  
        int array[] = {1, 2, 3, 4, 5};
    
        PrintData<int> functor;
        std::cout << "Iter will print the array data." << std::endl;
        ::iter(array, 5, functor);
    
        
        std::cout << "Swap 1 & 2." << std::endl;
        ::swap(array[0], array[1]);
        
        std::cout << "Iter will print the array data." << std::endl;
        ::iter(array, 5, functor);
    }
    std::cout << "-----------------------------------------------" << std::endl;
    {
        std::string array[] = {"hola", "me", "llamo", "paco"};
    
        PrintData<std::string> functor;
        std::cout << "Iter will print the array data." << std::endl;
        ::iter(array, 4, functor);
    
        
        std::cout << "Swap me & llamo." << std::endl;
        ::swap(array[0], array[1]);
        
        std::cout << "Iter will print the array data." << std::endl;
        ::iter(array, 4, functor);
    }
    return (0);
}
