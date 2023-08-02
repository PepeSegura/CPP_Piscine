/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/03 00:35:35 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource:: MateriaSource()
{
    std::cout << "MateriaSource: Default constructor called." << std::endl;
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource:: MateriaSource(const MateriaSource& f)
{
    std::cout << "MateriaSource: Copy constructor called." << std::endl;
    for (int i = 0; i < 4; i++)
        _materias[i] = f._materias[i];
}

MateriaSource:: ~MateriaSource()
{
    std::cout << "MateriaSource: Destructor called." << std::endl;
}

MateriaSource& MateriaSource:: operator=(const MateriaSource& f)
{
    std::cout << "MateriaSource: Asignation operand called." << std::endl;
    for (int i = 0; i < 4; i++)
        _materias[i] = f._materias[i];
    return (*this);
}

void MateriaSource:: learnMateria(AMateria* type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] == NULL)
        {
            _materias[i] = type;
            std::cout << "New materia [" << type->getType() << "] learned and equiped on slot " << i << std::endl;
            break ;
        }
        if (i == 4)
            std::cout <<"Materia inventory is full!" << std::endl;
    }
}

AMateria* MateriaSource:: createMateria(std::string const &type)
{
	AMateria *new_materia = NULL;

    for (int i = 0; i < 4; ++i)
    {
        if (_materias[i] && type == _materias[i]->getType())
        {
            new_materia = _materias[i]->clone();
            return (new_materia);
        }
    }
	std::cout << "Error: Materia [" << type << "] was not found." << std::endl;
	return (NULL);
}
