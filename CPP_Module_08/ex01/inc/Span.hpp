/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:08:22 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/29 01:49:09 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <vector>

class Span
{
	public:
		Span();
		Span(unsigned int value);
		Span(const Span &f);
		~Span();
		Span& operator=(const Span &f);

		void    addNumber(int value);
		void    addArray(int array[], size_t size);
		void    addRange(int min, int max);
		int     shortestSpan(void);
		int     longestSpan(void);
		void    print(void);

	private:
		std::vector<int>    _myVector;
		unsigned int        _maxValues;
};
