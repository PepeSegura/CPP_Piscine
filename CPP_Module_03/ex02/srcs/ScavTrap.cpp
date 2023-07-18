/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:50:12 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/18 22:14:12 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap:: ScavTrap() : ClapTrap("", 100, 50, 20)
{
    std::cout << "ScavTrap has spawned." << std::endl;
}

ScavTrap:: ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap "<< name << " has spawned." << std::endl;
}

ScavTrap:: ScavTrap(const ScavTrap& f) : ClapTrap(f)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = f;
}

ScavTrap:: ~ScavTrap()
{
    std::cout << "ScavTrap: Destructor called." << std::endl;
}

ScavTrap& ScavTrap:: operator=(const ScavTrap& f)
{
    std::cout << "Asignation operand called." << std::endl;
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
        std::cout   << "ScavTrap: " << _name << " attacks " << target << " causing " << _dmg << " DMG!" << std::endl;
        _ep--;
    }
    if (_hp <= 0)
        std::cout   << "ScavTrap: " << _name << " is DEAD and can't attack anymore." << std::endl;
    if (_ep <= 0)
        std::cout   << "ScavTrap: " << _name << " is out of ENERGY and can't attack anymore." << std::endl;
}

void    ScavTrap:: guardGate()
{
    std::cout << "ScavTrap: " << _name << " is in Gate keeper mode." << std::endl;
    return ;
}
