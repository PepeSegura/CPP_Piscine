/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 05:42:17 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/26 21:27:47 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template <typename T>
class Array
{
	public:
		Array(int size);
		Array(const Array& f);
		~Array();
		Array& 		operator=(const Array& f);

		int			size(void);
		void		print(void);

		const T&	operator[](int index) const;
		T&			operator[](int index);

	private:
		T	*_array;
		int	_size;
};

# include "Array.tpp"
