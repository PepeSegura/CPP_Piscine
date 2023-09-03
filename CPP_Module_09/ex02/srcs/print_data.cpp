/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_data.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:00:23 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/03 21:14:57 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

double  sort_vector(std::vector<int>& vector)
{
	if (isSorted(vector))
		return (0);

	clock_t start = clock();

	vector_mergeInsertionSort(vector, 0, vector.size() - 1);
	return (static_cast<double>(clock() - start) / CLOCKS_PER_SEC);
}

double  sort_list(std::list<int>& list)
{
	if (isSorted(list))
		return (0);

	clock_t start = clock();

	lst_mergeInsertionSort(list);
	return (static_cast<double>(clock() - start) / CLOCKS_PER_SEC);
}

void    print_numbers(std::vector<int>& vector)
{
	std::vector<int>    aux = vector;
	std::cout << "Unsorted numbers: \t";
	print(aux);
	std::cout << "Sorted numbers: \t";
	std::sort(aux.begin(), aux.end());
	print(aux);
}

void    print_time(std::vector<int>& vector, std::list<int>& list)
{
	std::cout   << "The [vector] took: "
				<< sort_vector(vector) * 1000.0
				<< "ms to be sorted."
				<< std::endl;
	std::cout   << "The [list] took: "
				<< sort_list(list) * 1000.0
				<< "ms to be sorted."
				<< std::endl;
}

void    print_data(std::vector<int>& vector, std::list<int>& list)
{
	print_numbers(vector);
	print_time(vector, list);
}
