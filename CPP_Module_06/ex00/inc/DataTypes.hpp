/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataTypes.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/21 03:38:16 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class DataTypes
{
    public:
        DataTypes();
        DataTypes(std::string input);
        DataTypes(const DataTypes &f);
        ~DataTypes();
        DataTypes& operator=(const DataTypes &f);
        
        std::string     getInput() const;
        char            getChar() const;
        int             getInt() const;
        float           getFloat() const;
        double          getDouble() const;

    private:
        std::string _input;
        char        _char;
        int         _int;
        float       _float;
        double      _double;
};

std::ostream& operator<<(std::ostream &out, DataTypes const &f);
