/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 04:04:23 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/25 04:22:21 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdint>

typedef struct Data
{
    int         integer;
    char        *str;
    std::string string;
} Data;

uintptr_t   serialize(Data *ptr);
Data        *deserialize(uintptr_t raw);
