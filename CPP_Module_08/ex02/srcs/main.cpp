/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 00:24:48 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/29 02:51:24 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << "Top:\t "    << mstack.top() << std::endl;
    std::cout << "Size:\t "   << mstack.size() << std::endl;
    std::cout << "POP" << std::endl;
    mstack.pop();
    std::cout << "Size:\t "   << mstack.size() << std::endl;

    mstack.push(6);
    mstack.push(7);
    mstack.push(8);
    mstack.push(9);
    mstack.push(10);

    const MutantStack<int>& constMStack = mstack;
    MutantStack<int>::const_iterator cit = constMStack.begin();
    MutantStack<int>::const_iterator cite = constMStack.end();

    std::cout << "Const Forward iterator" << std::endl;
    while (cit != cite)
    {
        std::cout << *cit << std::endl;
        ++cit;
    }

    MutantStack<int>::const_reverse_iterator crit = constMStack.rbegin();
    MutantStack<int>::const_reverse_iterator crite = constMStack.rend();

    std::cout << "Const Reverse iterator" << std::endl;
    while (crit != crite)
    {
        std::cout << *crit << std::endl;
        ++crit;
    }    

    return 0;
}
