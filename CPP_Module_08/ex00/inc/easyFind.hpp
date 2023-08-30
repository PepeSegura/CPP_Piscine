/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:12:16 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/30 01:49:18 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <sstream>

template <typename T>
int	easyFind(const T &container, int value)
{
	typename T::const_iterator	it = std::find(container.begin(), container.end(), value);;

	if (it != container.end())
		return (std::distance(container.begin(), it));

	std::ostringstream oss;
	oss << "Value: [" << value << "] not found in the container.";
	throw (std::runtime_error(oss.str()));
}
