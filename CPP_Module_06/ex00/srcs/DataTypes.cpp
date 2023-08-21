/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataTypes.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/21 03:43:47 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataTypes.hpp"
#include "Debug.hpp"

DataTypes:: DataTypes() : _input("unsetted"), _char('\0'), _int(0), _float(0.0f), _double(0.0)
{
    PRINT_DEBUG("DataTypes: Default constructor called.");
}

DataTypes:: DataTypes(std::string input) : _input(input), _char('\0'), _int(0), _float(0.0f), _double(0.0)
{
    PRINT_DEBUG("DataTypes: Types setter constructor called.");
}

DataTypes:: DataTypes(const DataTypes& f)
{
    PRINT_DEBUG("DataTypes: Copy constructor called.");
    *this = f;
}

DataTypes:: ~DataTypes()
{
    PRINT_DEBUG("DataTypes: Destructor called.");
}

DataTypes& DataTypes:: operator=(const DataTypes& f)
{
    PRINT_DEBUG("DataTypes: Asignation operand called.");
    if (this != &f)
		*this = f;
    return (*this);
}

std::string DataTypes:: getInput() const
{
    return (_input);
}

char    DataTypes:: getChar() const
{
    return (_char);
}

int DataTypes:: getInt() const
{
    return (_int);
}

float   DataTypes:: getFloat() const
{
    return (_float);
}

double  DataTypes:: getDouble() const
{
    return (_double);
}

std::ostream& operator<<(std::ostream &out, DataTypes const &f)
{
    out << "Input:\t"   << f.getInput()     << "\n" 
        << "Char:\t'"   << f.getChar()      << "'\n"
        << "Int:\t"     << f.getInt()       << "\n"
        << "Float:\t"   << f.getFloat()     << "\n"
        << "Double:\t"  << f.getDouble()    << "\n"
        ;
    return (out);
}
