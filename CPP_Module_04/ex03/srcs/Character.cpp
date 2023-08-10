/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/10 20:02:28 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character:: Character() : _name("unnamed"), _equiped(0)
{
	PRINT_DEBUG("Character: Default constructor called.");
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character:: Character(std::string name)
{
	PRINT_DEBUG("Character: Contructor with name setter called.");
    *this = Character();
    _name = name;
}

Character:: Character(const Character& f)
{
	PRINT_DEBUG("Character: Copy constructor called.");
    *this = f;
}

Character:: ~Character()
{
	PRINT_DEBUG("Character: Destructor called.");
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character& Character:: operator=(const Character& f)
{
	PRINT_DEBUG("Character: Asignation operand called.");
    _equiped = 0;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
		{
            // delete _inventory[i];
		}
        _inventory[i] = f._inventory[i];
        if (_inventory[i])
            _equiped++;
    }
    _name = f.getName();
    return (*this);
}

std::string const & Character:: getName() const
{
    return (_name);
}

void Character:: equip(AMateria* m)
{
	if (!m)
	{
		return ;
	}
    if (_equiped < 4)
    {
        _inventory[_equiped] = m->clone();
        std::cout << m->getType() << " equipped on " << _name << "'s slot " << _equiped << std::endl;
        _equiped++;
    }
    else
	{
        std::cout << "Couldn't equip the new materia: " << _name << "'s inventory is full!" << std::endl;
	}
	delete m;
}

void Character:: unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Index out of range, try between 0 and 3." << std::endl;
        return ;
    }
    int i = idx + 1;
	std::cout << "I will unequip Materia: " << _inventory[idx]->getType() << " in pos: " << idx << std::endl;

    for (; i < 4 && _inventory[i]; i++)
    {
    	_inventory[i - 1] =_inventory[i];
    	_inventory[i] = NULL;
    }
	_equiped--;
}

void Character:: use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "There is no materia to use on slot: " << idx << ". Try with an id between 0 and 3."<< std::endl;
        return ;
    }
    if (!_inventory[idx])
    {
        std::cout << "The is no materia to use on slot: " << idx << std::endl;
        return ;
    }
    _inventory[idx]->use(target);
	delete _inventory[idx];
	_inventory[idx] = NULL;
}
