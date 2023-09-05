/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_vector.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:57:07 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/05 16:23:02 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	insertionSort(std::vector<int>& vec)
{
    for (size_t i = 1; i < vec.size(); ++i)
    {
        int key = vec[i];
        int j = static_cast<int>(i) - 1;
        while (j >= 0 && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            --j;
        }
        vec[j + 1] = key;
    }
}

void	merge(std::vector<int>& left, std::vector<int>& right, std::vector<int>& result)
{
    size_t leftIdx = 0;
    size_t rightIdx = 0;

    while (leftIdx < left.size() && rightIdx < right.size())
    {
        if (left[leftIdx] < right[rightIdx])
            result.push_back(left[leftIdx++]);
        else
            result.push_back(right[rightIdx++]);
    }
    while (leftIdx < left.size())
        result.push_back(left[leftIdx++]);
    while (rightIdx < right.size())
        result.push_back(right[rightIdx++]);
}

void	vector_mergeInsertionSort(std::vector<int>& vector)
{
    if (vector.size() <= 16)
    {
        insertionSort(vector);
        return;
    }

    size_t middle = vector.size() / 2;
    std::vector<int> leftHalf(vector.begin(), vector.begin() + middle);
    std::vector<int> rightHalf(vector.begin() + middle, vector.end());

    vector_mergeInsertionSort(leftHalf);
    vector_mergeInsertionSort(rightHalf);

    vector.clear();
    merge(leftHalf, rightHalf, vector);
}

