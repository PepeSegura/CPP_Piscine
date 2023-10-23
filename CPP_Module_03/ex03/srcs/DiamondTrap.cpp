/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/10/23 18:09:32 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap:: DiamondTrap()
{
	PRINT_DEBUG("DiamondTrap has spawned.");
	_name = "Diamond";
	ClapTrap::_name = _name + "_clap_name";
	_hp = 100;	//FragTrap::_hp;
	_ep = 50;	//ScavTrap::_ep;
	_dmg = 30;	//FragTrap::_dmg;
}

DiamondTrap:: DiamondTrap(std::string name): _name(name)
{
	PRINT_DEBUG("DiamondTrap "<< name << " has spawned.");
	ClapTrap::_name = _name + "_clap_name";
	_hp = 100;	//FragTrap::_hp;
	_ep = 50;	//ScavTrap::_ep;
	_dmg = 30;	//FragTrap::_dmg;
}

DiamondTrap:: DiamondTrap(const DiamondTrap& f) : ClapTrap(f)
{
	PRINT_DEBUG("DiamondTrap: Copy constructor called.");
    *this = f;
}

DiamondTrap:: ~DiamondTrap()
{
	PRINT_DEBUG("DiamondTrap: Destructor called.");
}

DiamondTrap& DiamondTrap:: operator=(const DiamondTrap& f)
{
	PRINT_DEBUG("DiamondTrap: Asignation operand called.");
    if (this != &f)
    {
        _name = f._name;
        _hp = f._hp;
        _ep = f._ep;
        _dmg = f._dmg;
    }
    return (*this);
}

void	DiamondTrap:: attack(const std::string& target)
{
    this->ScavTrap::attack(target);
}

void    DiamondTrap:: whoAmI(void)
{
	std::cout << "Mi name is: [" << _name << "]" <<std::endl;
	std::cout << "and my ClapTrap name is: [" << _name << "]" <<std::endl;
}

void	DiamondTrap:: printData(void)
{
	std::cout << "Name: \t\t"		<< _name 			<< std::endl;
	std::cout << "ClapName:\t" 		<< ClapTrap::_name	<< std::endl;
	std::cout << "HP: \t\t" 		<< _hp 				<< std::endl;
	std::cout << "EP: \t\t" 		<< _ep 				<< std::endl;
	std::cout << "Dmg: \t\t" 		<< _dmg				<< std::endl;
}