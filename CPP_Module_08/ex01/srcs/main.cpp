/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:01 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/03 14:05:34 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>


int main(void)
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);


    Span s2 = sp;

    s2.print();

    std::cout << "ShortestSpan:\t "   << sp.shortestSpan() << std::endl;
    std::cout << "LongestSpan:\t "    << sp.longestSpan() << std::endl;

    std::cout << "-----------------------" << std::endl;
    sp.print();
    std::cout << "-----------------------" << std::endl;


    Span sp2 = Span(10000);
    int array[] = {5, 4, 3, 2, 0, 9, 8, 7, 6, 42};

    try
    {
        sp2.addArray(array, 10);
        sp2.addRange(-42, 9000);
        sp2.addArray(array, 10);
        std::cout << "ShortestSpan:\t "   << sp2.shortestSpan() << std::endl;
        std::cout << "LongestSpan:\t "    << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // sp2.print();

    return (0);
}

