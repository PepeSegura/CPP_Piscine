/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:50:12 by psegura-          #+#    #+#             */
/*   Updated: 2023/10/23 17:00:33 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap:: ScavTrap()
{
	PRINT_DEBUG("ScavTrap has spawned.");
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 20;
}

ScavTrap:: ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	PRINT_DEBUG("ScavTrap "<< name << " has spawned.");
}

ScavTrap:: ScavTrap(const ScavTrap& f) : ClapTrap(f)
{
	PRINT_DEBUG("ScavTrap: Copy constructor called.");
    *this = f;
}

ScavTrap:: ~ScavTrap()
{
	PRINT_DEBUG("ScavTrap: Destructor called.");
}

ScavTrap& ScavTrap:: operator=(const ScavTrap& f)
{
	PRINT_DEBUG("ScavTrap: Asignation operand called.");
    if (this != &f)
    {
        _name = f._name;
        _hp = f._hp;
        _ep = f._ep;
        _dmg = f._dmg;
    }
    return (*this);
}

void	ScavTrap:: attack(const std::string& target)
{
    if (_hp > 0 && _ep > 0)
    {
        std::cout << "ScavTrap: " << _name << " attacks " << target << " causing " << _dmg << " DMG!" << std::endl;
        _ep--;
    }
    if (_hp <= 0)
        std::cout << "ScavTrap: " << _name << " is DEAD and can't attack anymore." << std::endl;
    if (_ep <= 0)
        std::cout << "ScavTrap: " << _name << " is out of ENERGY and can't attack anymore." << std::endl;
}

void    ScavTrap:: guardGate()
{
    std::cout << "ScavTrap: " << _name << " is in Gate keeper mode." << std::endl;
}
