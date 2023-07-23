/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:02:13 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/23 15:51:10 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

# define ZOO_SIZE 10

int	main(void)
{
	{
		AAnimal::printMessages = true;
		std::cout << "__CREATE_DOGS__" << std::endl;
		Dog	d_heap;
		Dog	*d_stack = new Dog();

		std::cout << "__CREATE_CATS__" << std::endl;
		Cat	c_heap;
		Cat	*c_stack = new Cat();

		std::cout << std::endl;
		d_stack->makeSound();
		d_heap.makeSound();
		c_stack->makeSound();
		c_heap.makeSound();
		std::cout << "\n__DELETE_STACK__" << std::endl;
		delete d_stack;
		delete c_stack;
		std::cout << "\n__DELETE_HEAP__" << std::endl;
	}
	/*
		The next scope will not compile because the AAnimal class is abstract.
	*/

	// {
	// 	AAnimal::printMessages = true;
	// 	std::cout << "__CREATE_ANIMAL__" << std::endl;
	// 	AAnimal	heap;
	// 	AAnimal stack = new AAnimal();
	// }
	return (0);
}
