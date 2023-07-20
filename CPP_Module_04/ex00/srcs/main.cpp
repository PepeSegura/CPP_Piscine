/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:02:13 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/20 17:22:19 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int	main(void)
{
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
	const WrongAnimal* wrong = new WrongCat();

	std::cout 	<< "\nObject type ->\t["
				<< wrong->getType() << "] -> his sound is: -> ";
				wrong->makeSound();
				std::cout << std::endl;
	delete	wrong;
	return (0);
}
