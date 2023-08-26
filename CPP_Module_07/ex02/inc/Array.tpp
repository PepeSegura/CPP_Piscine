/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:36:19 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/26 21:02:34 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
Array<T>::Array(int size) : _size(size)
{
    _array = new T[_size];
    for (int i = 0; i < _size; i++)
        _array[i] = T();
}

template <typename T>
Array<T>:: Array(const Array& f) : _size(f._size)
{
	_array = new T[_size];
	for (int i = 0; i < _size; i++)
        _array[i] = f._array[i];
}

template <typename T>
Array<T>:: ~Array()
{
	delete[] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& f)
{
	delete[] _array;
	_size = f._size;
	_array = new T[_size];
	for (int i = 0; i < _size; ++i)
		_array[i] = f._array[i];
    return *this;
}

template <typename T>
int	Array<T>:: size(void)
{
	return (_size);
}

template <typename T>
void	Array<T>:: print(void)
{
	for (int i = 0; i < _size; i++)
		std::cout << "ID: [" << i << "] " << _array[i] << std::endl;
}

template <typename T>
T& Array<T>::operator[](int index)
{
    if (index >= _size || index < 0)
        throw (std::out_of_range("Index out of bounds"));
    return (_array[index]);
}

template <typename T>
const T& Array<T>::operator[](int index) const
{
    if (index >= _size || index < 0)
        throw (std::out_of_range("Index out of bounds"));
    return (_array[index]);
}
