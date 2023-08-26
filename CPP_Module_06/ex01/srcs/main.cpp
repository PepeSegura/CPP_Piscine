/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:40:48 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/25 16:57:57 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main(void)
{
	Data		*start = new Data;
	uintptr_t	serialized;
	Data		*deserialized = NULL;

	start->string = "hola";
	
	serialized = serialize(start);
	deserialized = deserialize(serialized);

	std::cout << "Start value:\t\t " << start->string << std::endl;
	std::cout << "Serialized value:\t " << serialized << std::endl;
	std::cout << "Deserialized value:\t " << deserialized->string << std::endl;

	if (start->string != deserialized->string)
		std::cerr << "Something went wrong." << std::endl;
	delete deserialized;
	return (0);
}
