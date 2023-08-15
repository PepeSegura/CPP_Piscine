/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:59:29 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/15 16:23:22 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <stdlib.h>


void fleaks(void)
{
	system("leaks -q interfaces");
}

int main(void)
{
	// atexit(&fleaks);

	/*__SUBJECT_MAIN__*/
	std::cout << "Creating all the different types of materias for the game" << std::endl;
	IMateriaSource* game = new MateriaSource();
	game->learnMateria(new Ice());
	game->learnMateria(new Cure());
	game->learnMateria(new Ice());
	game->learnMateria(new Cure());
	game->learnMateria(new Ice());
	game->learnMateria(new Cure());

	std::cout << "Creating player: [pepe]" << std::endl;
	ICharacter* player = new Character("pepe");
	AMateria* materia;

	materia = game->createMateria("cure");
	player->equip(materia);
	materia = game->createMateria("invalid");
	player->equip(materia);
	materia = game->createMateria("");
	player->equip(materia);
	materia = game->createMateria("ice");
	player->equip(materia);
	materia = game->createMateria("ice");
	player->equip(materia);
	materia = game->createMateria("cure");
	player->equip(materia);
	materia = game->createMateria("cure");
	player->equip(materia);
	materia = game->createMateria("cure");
	player->equip(materia);

	
	std::cout << "Creating enemy: [bob]" << std::endl;
	ICharacter* bob = new Character("bob");

	std::cout << "Pepe will use 2 spells on Bob" << std::endl;
	player->unequip(1);
	player->use(1, *bob);
	player->use(1, *bob);
	player->use(0, *bob);
	player->use(0, *bob);

	delete bob;
	delete player;
	delete game;

	return (0);
}
