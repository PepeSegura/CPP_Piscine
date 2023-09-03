/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_vector.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:57:07 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/03 19:27:12 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Function to perform insertion sort on a portion of the vector
void    insertionSort(std::vector<int>& vector, int left, int right)
{
	for (int i = left + 1; i <= right; ++i)
	{
		int key = vector[i];
		int j = i - 1;
		
		while (j >= left && vector[j] > key)
		{
			vector[j + 1] = vector[j];
			j--;
		}
		vector[j + 1] = key;
	}
}

// Function to merge two sorted subarrays into one sorted array
void    merge(std::vector<int>& vector, int left, int middle, int right)
{
	int n1 = middle - left + 1;
	int n2 = right - middle;
	
	std::vector<int> leftArray(n1);
	std::vector<int> rightArray(n2);
	
	for (int i = 0; i < n1; i++)
	{
		leftArray[i] = vector[left + i];
	}
	
	for (int i = 0; i < n2; i++)
	{
		rightArray[i] = vector[middle + 1 + i];
	}
	
	int i = 0, j = 0, k = left;
	
	while (i < n1 && j < n2)
	{
		if (leftArray[i] <= rightArray[j])
		{
			vector[k] = leftArray[i];
			i++;
		}
		else
		{
			vector[k] = rightArray[j];
			j++;
		}
		k++;
	}
	
	while (i < n1)
	{
		vector[k] = leftArray[i];
		i++;
		k++;
	}
	
	while (j < n2)
	{
		vector[k] = rightArray[j];
		j++;
		k++;
	}
}

// Merge-Insertion Sort
void    vector_mergeInsertionSort(std::vector<int>& vector, int left, int right)
{
	if (left < right)
	{
		// Use insertion sort for small subarrays
		if (right - left <= 15)
		{
			insertionSort(vector, left, right);
		}
		else
		{
			int middle = left + (right - left) / 2;
			
			vector_mergeInsertionSort(vector, left, middle);
			vector_mergeInsertionSort(vector, middle + 1, right);
			
			// Merge the two sorted halves
			merge(vector, left, middle, right);
		}
	}
}
