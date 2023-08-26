/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:40:48 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/25 17:16:50 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include "Debug.hpp"

Base* generate(void)
{
    struct timeval currentTime;
    long long microseconds;

	usleep(500);
    gettimeofday(&currentTime, NULL);
    microseconds = currentTime.tv_sec * 1000000LL + currentTime.tv_usec;
	if (microseconds % 3 == 0)
		return (new A);
	else if (microseconds % 3 == 1)
		return (new B);
	return (new C);
}

void identify(Base* p)
{
	{
		A *ptr = dynamic_cast<A *>(p);

		if (ptr)
			std::cout << "Type_PTR: \"A\"";
	}
	{
		B *ptr = dynamic_cast<B *>(p);

		if (ptr)
			std::cout << "Type_PTR: \"B\"";
	}
	{
		C *ptr = dynamic_cast<C *>(p);

		if (ptr)
			std::cout << "Type_PTR: \"C\"";
	}
}

void identify(Base& p)
{
	try
	{
		A ptr;

		ptr = dynamic_cast<A &>(p);
		std::cout << "Type_REF: \"A\"" << std::endl;
	}
	catch(const std::exception& e)
	{
		PRINT_DEBUG(e.what());
	}
	try
	{
		B ptr;

		ptr = dynamic_cast<B &>(p);
		std::cout << "Type_REF: \"B\"" << std::endl;
	}
	catch(const std::exception& e)
	{
		PRINT_DEBUG(e.what());
	}
	try
	{
		C ptr;

		ptr = dynamic_cast<C &>(p);
		std::cout << "Type_REF: \"C\"" << std::endl;
	}
	catch(const std::exception& e)
	{
		PRINT_DEBUG(e.what());
	}
}

# define TEST_SIZE 10

int main(void)
{
	Base *test[TEST_SIZE];

	for (int i = 0; i < TEST_SIZE; i++)
		test[i] = generate();

	std::cout << "ID\t|  Identify(PTR)\t|  Identyfy(REF)" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	for (int i = 0; i < TEST_SIZE; i++)
	{
		std::cout << "[" << i << "]\t|  ";
		identify(test[i]);
		std::cout << "\t|  ";
		identify(*test[i]);
	}

	for (int i = 0; i < TEST_SIZE; i++)
		delete test[i];

	return (0);
}
