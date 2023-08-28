/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/28 01:47:30 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (c.begin()); 
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (c.end()); 
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return (c.rbegin()); 
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return (c.rend()); 
}
