/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:01 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/30 03:10:10 by psegura-         ###   ########.fr       */
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
	myVector.push_back(50);

	std::list<int> myList;
	myList.push_back(10);
	myList.push_back(20);
	myList.push_back(30);
	myList.push_back(40);
	myList.push_back(50);

	int	find = 10;
	int	pos = 0;

    try
    {
        pos = easyFind(myVector, find);
        std::cout << "Value " << find << " found in pos [" << pos << "] in myVector." << std::endl;

		find = 50;
	
        pos = easyFind(myVector, find);
        std::cout << "Value " << find << " found in pos [" << pos << "] in myVector." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout << "-----------------------------------------------" << std::endl;
	try
    {
		find = 30;

        pos = easyFind(myList, find);
        std::cout << "Value " << find << " found in pos [" << pos << "] in myList." << std::endl;

		find = 50;

        pos = easyFind(myList, find);
        std::cout << "Value " << find << " found in pos [" << pos << "] in myVector." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		find = -10;
		pos = easyFind(myVector, find);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		find = 8923432;
		pos = easyFind(myList, find);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
