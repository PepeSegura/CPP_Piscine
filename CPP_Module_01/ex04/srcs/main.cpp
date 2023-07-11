/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:09:36 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 21:26:34 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

std::string	replaceSubstring(const std::string& input, const std::string& search, const std::string& replace)
{
    std::string result;
    int searchLength = search.length();
    int inputLength = input.length();

	for (int i = 0; i < inputLength;)
	{
        if (input.substr(i, searchLength) == search)
		{
            result += replace;
            i += searchLength;
        }
		else
            result += input[i++];
    }
    return (result);
}

void	print_error(std::string error)
{
	std::cout << "Error:\n\t" << error << std::endl;
	exit(0);
}

void	check_args(int argc, char **argv)
{
	(void)argv;
	if (argc != 4)
		print_error("Not enough arguments.");
		
}

int	main(int argc, char **argv)
{
	check_args(argc, argv);
	std::string		line;
	std::string		outFileName = argv[1];
	std::ifstream	inputFile(argv[1]);
	std::ofstream	outputFile(outFileName + ".replace");

	if (inputFile.is_open() == 0 || outputFile.is_open() == 0)
		print_error("Cannot open the file.");
	while (true)
	{
		std::getline(inputFile, line);
		std::cout << line << std::endl;
		if (outputFile.is_open())
			outputFile << replaceSubstring(line, "pepe", "PACO") << std::endl;
		if (inputFile.eof())
			break ;
	}
	inputFile.close();
	outputFile.close();
	return (0);
}
