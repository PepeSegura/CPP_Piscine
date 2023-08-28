/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 00:24:48 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/28 02:25:32 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
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

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << "Forward iterator" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    MutantStack<int> mstack2;

    mstack2.push(6);
    mstack2.push(7);
    mstack2.push(8);
    mstack2.push(9);
    mstack2.push(10);

    MutantStack<int>::reverse_iterator rit = mstack2.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack2.rend();

    std::cout << "Reverse iterator" << std::endl;
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }    
    return 0;
}
