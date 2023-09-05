/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:47:45 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/05 16:23:05 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <cstdlib>

template <typename T>
void	print(const T& container)
{
	typename T::const_iterator it;

	for (it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template <typename T>
bool isSorted(const T& container)
{
	if (container.empty())
		return (true);

	typename T::const_iterator prev = container.begin();
	typename T::const_iterator current = prev;
	current++;

	while (current != container.end())
	{
		if (*prev > *current)
			return (false);
		prev++;
		current++;
	}
	return (true);
}

bool	check_int(std::string& str);
void    pmergeme(std::vector<int>& vector);

void	vector_mergeInsertionSort(std::vector<int>& vector);

void	lst_mergeInsertionSort(std::list<int>& lst);
