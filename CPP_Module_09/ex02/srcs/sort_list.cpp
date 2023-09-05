/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:11:59 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/05 16:02:24 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	insertionSort(std::list<int>& lst)
{
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
	{
		int key = *it;
		std::list<int>::iterator prev = it;
		while (prev != lst.begin() && *(--prev) > key)
		{
			*it = *prev;
			--it;
		}
		*it = key;
	}
}

void	merge(std::list<int>& left, std::list<int>& right, std::list<int>& result)
{
	std::list<int>::iterator leftIt = left.begin();
	std::list<int>::iterator rightIt = right.begin();

	while (leftIt != left.end() && rightIt != right.end())
	{
		if (*leftIt < *rightIt)
			result.push_back(*leftIt++);
		else
			result.push_back(*rightIt++);
	}
	while (leftIt != left.end())
		result.push_back(*leftIt++);
	while (rightIt != right.end())
		result.push_back(*rightIt++);
}

void	lst_mergeInsertionSort(std::list<int>& lst)
{
	if (lst.size() <= 16)
	{
		insertionSort(lst);
		return;
	}

	std::list<int> leftHalf, rightHalf;
	std::list<int>::iterator middle = lst.begin();

	std::advance(middle, lst.size() / 2);
	leftHalf.splice(leftHalf.begin(), lst, lst.begin(), middle);
	rightHalf.splice(rightHalf.begin(), lst, middle, lst.end());

	lst_mergeInsertionSort(leftHalf);
	lst_mergeInsertionSort(rightHalf);

	merge(leftHalf, rightHalf, lst);
}
