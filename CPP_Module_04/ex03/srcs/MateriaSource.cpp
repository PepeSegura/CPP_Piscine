/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/07 22:33:14 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource:: MateriaSource() : _learned(0)
{
	PRINT_DEBUG("MateriaSource: Default constructor called.");
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource:: MateriaSource(const MateriaSource& f)
{
	PRINT_DEBUG("MateriaSource: Copy constructor called.");
    for (int i = 0; i < 4; i++)
        _materias[i] = f._materias[i];
}

MateriaSource:: ~MateriaSource()
{
	PRINT_DEBUG("MateriaSource: Destructor called.");
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i])
            delete _materias[i];
    }
}

MateriaSource& MateriaSource:: operator=(const MateriaSource& f)
{
	PRINT_DEBUG("MateriaSource: Asignation operand called.");
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
		if (f._materias[i])
			_materias[i] = f._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
    return (*this);
}

void MateriaSource:: learnMateria(AMateria* type)
{
    if (_learned >= 4)
		std::cout << "Can't learn any more materias" << std::endl;
	else
	{
		_materias[_learned] = type;
		std::cout << "New materia [" << type->getType() << "] learned and equiped on slot " << _learned << std::endl;
		_learned++;
	}
}

AMateria* MateriaSource:: createMateria(std::string const &type)
{
	AMateria *new_materia = NULL;

    for (int i = 0; i < 4 && _materias[i]; i++)
	{
		if (type == _materias[i]->getType())
        {
            new_materia = _materias[i]->clone();
			return (new_materia);
        }
	}
	std::cerr << "Error: Materia [" << type << "] was not found." << std::endl;
	return (NULL);
}
