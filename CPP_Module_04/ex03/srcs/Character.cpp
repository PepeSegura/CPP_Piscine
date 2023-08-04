/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/04 18:28:49 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character:: Character()
{
	PRINT_DEBUG("Character: Default constructor called.");
    _name = "Unnamed";
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character:: Character(std::string name) : _name(name)
{
	PRINT_DEBUG("Character: Contructor with name setter called.");
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character:: Character(const Character& f)
{
	PRINT_DEBUG("Character: Copy constructor called.");
    *this = f;
}

Character:: ~Character()
{
	PRINT_DEBUG("Character: Destructor called.");
}

Character& Character:: operator=(const Character& f)
{
	PRINT_DEBUG("Character: Asignation operand called.");
    _name = f.getName();
    for (int i = 0; i < 4; i++)
        _inventory[i] = f._inventory[i]->clone();
    return (*this);
}

std::string const & Character:: getName() const
{
    return (_name);
}

void Character:: equip(AMateria* m)
{
    if (m == NULL)
    {
        std::cout << "That materia cannot be equiped." << std::endl;
    }
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            std::cout << m->getType() << " equipped on " << _name << "'s slot " << i << std::endl;
            break ;
        }
        if (i == 4)
            std::cout << _name << "'s inventory is full!" << std::endl;
    }
}

void Character:: unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Index out of range, try between 0 and 3." << std::endl;
        return ;
    }
    if (_inventory[idx] == NULL)
    {
        std::cout << "Nothing to unequip in that index." << std::endl;
        return ;
    }
    std::cout << _inventory[idx]->getType() << " unequipped." << std::endl;
    _inventory[idx] = NULL;
}

void Character:: use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Index out of range, try between 0 and 3." << std::endl;
        return ;
    }
    if (_inventory[idx] == NULL)
    {
        std::cout << "Tried to use and empty materia to attack " << target.getName() << " !"<< std::endl;
        return ;
    }
    _inventory[idx]->use(target);
	delete _inventory[idx];
	_inventory[idx] = NULL;
}
