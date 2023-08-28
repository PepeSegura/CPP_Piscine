/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/28 01:53:58 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::reverse_iterator reverse_iterator;
    
        using std::stack<T>::c;
    
        iterator begin();
        iterator end();
    
        reverse_iterator rbegin();
        reverse_iterator rend();
};

# include "MutantStack.tpp"