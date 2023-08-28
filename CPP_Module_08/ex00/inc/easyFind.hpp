/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:12:16 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/27 22:36:50 by psegura-         ###   ########.fr       */
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

	std::stringstream strValue;
	strValue << value;

	throw (std::runtime_error("Value: [" + strValue.str() + "] not found in the container."));
}
