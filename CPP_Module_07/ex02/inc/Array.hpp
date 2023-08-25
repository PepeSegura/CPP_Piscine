/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 05:42:17 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/25 06:30:56 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template <typename T>
class Array {
public:
    Array(T value) : _data(value) {}
    T getData() { return _data; }

private:
    T _data;
};

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

template <typename T, typename Func>
void    iter(T array[], int length, Func func)
{
    for (int i = 0; i < length; i++)
    {
        func(array[i]);
    }
}

template <typename T>
struct PrintData
{
    void operator()(T input) const
    {
        std::cout << input << std::endl;
    }
};
