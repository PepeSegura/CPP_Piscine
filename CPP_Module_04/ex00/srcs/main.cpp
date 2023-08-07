/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:02:13 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/07 17:14:57 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void leaks(void)
{
	system("leaks -q polymorphism");
}
int	main(void)
{
	// atexit(leaks);
	std::cout << "__MAIN_OBJECTS__" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout	<< "\nObject type ->\t["
				<< meta->getType() << "] -> his sound is: -> ";
				meta->makeSound();
				std::cout << std::endl;
	std::cout 	<< "Object type ->\t["
				<< j->getType() << "] -> his sound is: -> ";
				j->makeSound();
				std::cout << std::endl;
	std::cout 	<< "Object type ->\t["
				<< i->getType() << "] -> his sound is: -> ";
				i->makeSound();
				std::cout << std::endl;
	delete	meta;
	delete	j;
	delete	i;

	std::cout << "\n__WRONG_OBJECTS__" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout 	<< "\nObject type ->\t["
				<< wrongAnimal->getType() << "] -> his sound is: -> ";
				wrongAnimal->makeSound();
				std::cout << std::endl;
	std::cout 	<< "\nObject type ->\t["
				<< wrongCat->getType() << "] -> his sound is: -> ";
				wrongCat->makeSound();
				std::cout << std::endl;
	delete	wrongAnimal;
	delete	wrongCat;
	return (0);
}
