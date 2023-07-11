/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:49:26 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 17:38:51 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	/*PRINT_MEMORY_ADDRESSES*/
	std::cout << "PRINT_MEMORY_ADDRESSES" 	<< std::endl;
	std::cout << "brain address:     " 		<< &brain 		<< std::endl;
	std::cout << "stringPTR address: "		<< &stringPTR 	<< std::endl;
	std::cout << "stringREF address: "		<< &stringREF 	<< std::endl;
	std::cout << std::endl;

	/*PRINT_DATA*/
	std::cout << "PRINT_DATA" 				<< std::endl;
	std::cout << "brain     data: " 		<< brain 		<< std::endl;
	std::cout << "stringPTR data: "			<< *stringPTR 	<< std::endl;
	std::cout << "stringREF data: "			<< stringREF 	<< std::endl;
}
