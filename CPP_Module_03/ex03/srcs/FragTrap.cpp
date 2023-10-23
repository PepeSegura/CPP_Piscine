/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:50:12 by psegura-          #+#    #+#             */
/*   Updated: 2023/10/23 17:43:12 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap:: FragTrap() : ClapTrap("", 100, 100, 30)
{
	PRINT_DEBUG("FragTrap has spawned.");
}

FragTrap:: FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	PRINT_DEBUG("FragTrap " << name << " has spawned.");
}

FragTrap:: FragTrap(const FragTrap& f) : ClapTrap(f)
{
	PRINT_DEBUG("FragTrap: Copy constructor called.");
    *this = f;
}

FragTrap:: ~FragTrap()
{
	PRINT_DEBUG("FragTrap: Destructor called.");
}

FragTrap& FragTrap:: operator=(const FragTrap& f)
{
	PRINT_DEBUG("FragTrap: Asignation operand called.");
    if (this != &f)
    {
        _name = f._name;
        _hp = f._hp;
        _ep = f._ep;
        _dmg = f._dmg;
    }
    return (*this);
}

void	FragTrap:: attack(const std::string& target)
{
    if (_hp > 0 && _ep > 0)
    {
        std::cout   << "FragTrap: " << _name << " attacks " << target << " causing " << _dmg << " DMG!" << std::endl;
        _ep--;
    }
    if (_hp <= 0)
        std::cout   << "FragTrap: " << _name << " is DEAD and can't attack anymore." << std::endl;
    if (_ep <= 0)
        std::cout   << "FragTrap: " << _name << " is out of ENERGY and can't attack anymore." << std::endl;
}

void    FragTrap:: highFivesGuys(void)
{
    if (_hp > 0)
        std::cout << "FragTrap: Any wants to high-five?" << std::endl;
}
