/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 05:42:17 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/25 05:51:18 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template <typename T>
void    swap(T& a, T& b)
{
    T aux = a;
    a = b;
    b = aux;
}

template <typename T>
T min(T a, T b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
T max(T a, T b)
{
    if (a > b)
        return (a);
    return (b);
}
