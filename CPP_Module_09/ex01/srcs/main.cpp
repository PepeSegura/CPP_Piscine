/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:01 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/10 17:21:00 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iomanip>

int	main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw (std::runtime_error("Error: You must introduce just 1 argument."));

		std::string		input = argv[1];
		double			result;

		result = rpn(input);
		std::cout << "Result: [" << result << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
