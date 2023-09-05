/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:00:23 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/05 16:23:23 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int>	fill_vector(std::vector<int>& vector)
{
	std::vector<int>	new_vector;

	new_vector.insert(new_vector.end(), vector.begin(), vector.end());
	return (new_vector);
}

std::list<int>	fill_list(std::vector<int>& vector)
{
	std::list<int>	new_list;

	for (size_t i = 0; i < vector.size(); i++)
		new_list.push_back(vector[i]);
	return (new_list);
}

double	insert_and_sort_vector(std::vector<int>& vector)
{
	clock_t start = clock();

	std::vector<int> new_vector = fill_vector(vector);

	if (!isSorted(new_vector))
		vector_mergeInsertionSort(new_vector);
	return (static_cast<double>(clock() - start) / CLOCKS_PER_SEC);
}

double  insert_and_sort_list(std::vector<int>& vector)
{
	clock_t start = clock();

	std::list<int> new_list = fill_list(vector);
	
	if (!isSorted(new_list))
		lst_mergeInsertionSort(new_list);
	return (static_cast<double>(clock() - start) / CLOCKS_PER_SEC);
}

void    print_numbers(std::vector<int>& vector)
{
	std::vector<int>    aux = vector;

	std::cout << "Unsorted numbers: \t";
	print(aux);
	std::cout << "Sorted numbers: \t";
	vector_mergeInsertionSort(aux);
	print(aux);
}

void    print_time(std::vector<int>& vector)
{
	std::cout   << "The [vector] took: \t["
				<< insert_and_sort_vector(vector) * 1000.0
				<< "ms] to insert & sort \t["
				<< vector.size()
				<< "] numbers."
				<< std::endl;
	std::cout   << "The [list]   took: \t["
				<< insert_and_sort_list(vector) * 1000.0
				<< "ms] to insert & sort \t["
				<< vector.size()
				<< "] numbers."
				<< std::endl;
}

void    pmergeme(std::vector<int>& vector)
{
	print_numbers(vector);
	print_time(vector);
}
