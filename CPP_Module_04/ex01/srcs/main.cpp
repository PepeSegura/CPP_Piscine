/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:02:13 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/21 14:13:39 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

# define ZOO_SIZE 10

int	main(void)
{
	std::cout << "__MAIN_OBJECTS__" << std::endl;
	Animal:: printMessages = false;

	Animal* zoo[ZOO_SIZE];

	for (int i = 0; i < ZOO_SIZE; i++)
	{
		if (i < ZOO_SIZE / 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	for (int i = 0; i < ZOO_SIZE; i++)
		zoo[i]->makeSound();
	std::cout << std::endl;

	for (int i = 0; i < ZOO_SIZE; i++)
		delete zoo[i];

	std::cout << "\n__TEST_IDEAS_&_DEEP_COPY__" << std::endl;
	// Animal:: printMessages = true;
	Cat missy;

	missy.catSetIdea(0, "Maybe im a cat.");
	std::cout << "\tMissy idea: " << missy.catGetIdea(0) << std::endl;

	Cat copy(missy);
	Cat cpy2;
	
	cpy2 = missy;
	std::cout << "\tCopy idea: " << cpy2.catGetIdea(0) << std::endl;
	return (0);
}
