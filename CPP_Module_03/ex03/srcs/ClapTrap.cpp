/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/10/22 18:46:03 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap:: ClapTrap()
{
	PRINT_DEBUG("ClapTrap has spawned.");
    _name = "";
    _hp = 10;
    _ep = 10;
    _dmg = 0;
}

ClapTrap:: ClapTrap(std::string name) : _name(name)
{
	PRINT_DEBUG("ClapTrap "<< name << " has spawned.");
    _hp = 10;
    _ep = 10;
    _dmg = 0;
}

ClapTrap:: ClapTrap(std::string name, int hp, int ep, int dmg)
{
    PRINT_DEBUG("ClapTrap " << name << " has spawned.");
    _name = name;
    _hp = hp;
    _ep = ep;
    _dmg = dmg;
}

ClapTrap:: ClapTrap(const ClapTrap& f)
{
	PRINT_DEBUG("Copy constructor called.");
    *this = f;
}

ClapTrap:: ~ClapTrap()
{
	PRINT_DEBUG("ClapTrap: Destructor called.");
}

ClapTrap& ClapTrap:: operator=(const ClapTrap& f)
{
	PRINT_DEBUG("Asignation operand called.");
    if (this != &f)
    {
        _name = f._name;
        _hp = f._hp;
        _ep = f._ep;
        _dmg = f._dmg;
    }
    return (*this);
}

void	ClapTrap:: attack(const std::string& target)
{
    if (_hp > 0 && _ep > 0)
    {
        std::cout   << "ClapTrap: " << _name << " attacks " << target << " causing " << _dmg << " DMG!" << std::endl;
        _ep--;
    }
    if (_hp <= 0)
        std::cout   << "ClapTrap: " << _name << " is DEAD and can't attack anymore." << std::endl;
    if (_ep <= 0)
        std::cout   << "ClapTrap: " << _name << " is out of ENERGY and can't attack anymore." << std::endl;
}

void	ClapTrap:: takeDamage(unsigned int amount)
{
    if ((int)amount < 0)
    {
        std::cout << "Input error: please introduce a positive value." << std::endl;
        return ;
    }
    if (_hp > 0)
    {
        std::cout   << "ClapTrap: " << _name << " took an amount of " << amount << " DMG and ";
        _hp -= amount;
        if (_hp > 0)
            std::cout   << "now has " << _hp << " HP." << std::endl;
        else
        {
            std::cout   << "DIED." << std::endl;
            _hp = 0;
            return ;
        }
    }
    if (_hp <= 0)
        std::cout   << "ClapTrap: " << _name << " is already DEAD, he can't take more DMG." << std::endl;
}

void	ClapTrap:: beRepaired(unsigned int amount)
{
    if ((int)amount < 0)
    {
        std::cout << "Input error: please introduce a positive value." << std::endl;
        return ;
    }
    if (_ep <= 0)
    {
        std::cout   << "ClapTrap: " << _name << " is out of energy and can't be HEALED anymore." << std::endl;
        return ;   
    }
	if (_hp > 0)
		std::cout   << "ClapTrap: " << _name << " got HEALED by " << amount << " HP";
	else
		std::cout   << "ClapTrap: " << _name << " REVIVED with " << amount << " HP";
	_hp += amount;
    _ep--;
	std::cout << " and now has " << _hp << " HP left." << std::endl;
}
