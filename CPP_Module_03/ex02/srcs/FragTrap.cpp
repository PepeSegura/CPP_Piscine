/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:50:12 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/19 00:17:23 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap:: FragTrap() : ClapTrap("", 100, 100, 30)
{
    std::cout << "FragTrap has spawned." << std::endl;
}

FragTrap:: FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap "<< name << " has spawned." << std::endl;
}

FragTrap:: FragTrap(const FragTrap& f) : ClapTrap(f)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = f;
}

FragTrap:: ~FragTrap()
{
    std::cout << "FragTrap: Destructor called." << std::endl;
}

FragTrap& FragTrap:: operator=(const FragTrap& f)
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
