/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:23:08 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/29 02:49:24 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "Debug.hpp"
#include <vector>
#include <algorithm>
#include <sstream>

Span:: Span() : _maxValues(0)
{
	PRINT_DEBUG("Span: Default constructor called.");
}

Span:: Span(unsigned int maxValues) : _maxValues(maxValues)
{
	PRINT_DEBUG("Span: Default constructor called.");
}

Span:: Span(const Span& f) : _myVector(f._myVector), _maxValues(f._maxValues)
{
	PRINT_DEBUG("Span: Copy constructor called.");
}

Span:: ~Span()
{
	PRINT_DEBUG("Span: Destructor called.");
}

Span& Span:: operator=(const Span& f)
{
	PRINT_DEBUG("Span: Asignation operand called.");
	if (this != &f)
	{
		_myVector = f._myVector;
		_maxValues = f._maxValues;
	}
	return (*this);
}


void    Span:: addNumber(int value)
{
	if (_myVector.size() == _maxValues)
		throw (std::runtime_error("Can't add more numbers."));

	_myVector.push_back(value);
}

void   Span:: addArray(int array[], size_t size)
{
	size_t remainingSpace = _maxValues - _myVector.size();

	if (size > remainingSpace)
	{
		std::ostringstream oss;
		oss << "Can't add more numbers. Only " << remainingSpace << " value(s) can be added.";
		throw (std::runtime_error(oss.str()));
	}

	_myVector.insert(_myVector.end(), array, array + size);
}

void   Span:: addRange(int min, int max)
{
	size_t remainingSpace = _maxValues - _myVector.size();
	size_t valuesToAdd = max - min + 1;

	if (valuesToAdd > remainingSpace)
	{
		std::ostringstream oss;
		oss << "Can't add more numbers. Only " << remainingSpace << " value(s) can be added.";
		throw (std::runtime_error(oss.str()));
	}

	for (int value = min; value <= max; value++)
	{
		_myVector.push_back(value);
	}
}

int     Span:: shortestSpan(void)
{
	if (_myVector.size() < 2)
		throw (std::runtime_error("Can't find the shortestSpan."));

	std::vector<int> sortedNumbers = _myVector;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	int minSpan = sortedNumbers[1] - sortedNumbers[0];
	for (size_t i = 0; i < sortedNumbers.size() - 1; i++)
	{
		int span = sortedNumbers[i + 1] - sortedNumbers[i];
		if (span < minSpan)
			minSpan = span;
	}
	return (minSpan);
}
int     Span:: longestSpan(void)
{
	if (_myVector.size() < 2)
		throw (std::runtime_error("Can't find the longestSpan."));

	return (*std::max_element(_myVector.begin(), _myVector.end()) - *std::min_element(_myVector.begin(), _myVector.end()));
}

void	Span:: print(void)
{
	if (_myVector.empty())
	{
		std::cerr << "The container is empty." << std::endl;
		return ;
	}
	size_t i;

	std::cout << "Values\n\t";
	for (i = 0; i < _myVector.size() - 1; i++)
	{
		std::cout << _myVector[i] << " ";
	}
	std::cout << _myVector[i] << std::endl;
}
