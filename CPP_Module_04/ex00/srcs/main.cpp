/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:02:13 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/19 22:29:16 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout	<< "What type is the object [meta]?\t->\t["
				<< meta->getType()
				<< "] and his sound is: -> ";
				meta->makeSound();
				std::cout << std::endl;
	std::cout 	<< "What type is the object [j]?\t->\t["
				<< j->getType()
				<< "] and his sound is: -> ";
				j->makeSound();
				std::cout << std::endl;
	std::cout 	<< "What type is the object [i]?\t->\t["
				<< i->getType()
				<< "] and his sound is: -> ";
				i->makeSound();
				std::cout << std::endl;
	return (0);
}
