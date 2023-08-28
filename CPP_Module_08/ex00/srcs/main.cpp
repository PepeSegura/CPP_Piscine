/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:01 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/27 22:32:59 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

int	main(void)
{
	std::vector<int> myVector;
	myVector.push_back(10);
	myVector.push_back(20);
	myVector.push_back(30);
	myVector.push_back(40);
	myVector.push_back(30);

	std::list<int> myList;
	myList.push_back(10);
	myList.push_back(20);
	myList.push_back(30);
	myList.push_back(40);
	myList.push_back(50);

    try
    {
        int pos = easyFind(myVector, 30);
        std::cout << "Value " << 30 << " found in pos [" << pos << "] in myVector." << std::endl;

        int pos2 = easyFind(myVector, 2147483647);
        std::cout << "Value " << 2147483647 << " found in pos [" << pos2 << "] in myVector." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        int pos = easyFind(myList, 30);
        std::cout << "Value " << 30 << " found in pos [" << pos << "] in myList." << std::endl;

        int pos2 = easyFind(myList, 2147483647);
        std::cout << "Value " << 2147483647 << " found in pos [" << pos2 << "] in myVector." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return (0);
}
