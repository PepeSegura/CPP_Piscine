/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Files.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:07:35 by pepe              #+#    #+#             */
/*   Updated: 2023/07/12 14:49:04 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Files.hpp"

Files:: Files(const std:: string& inFileName, const std:: string& outFileName)
    : inputFile(inFileName.c_str()), outputFile()
{
    if (!inputFile.is_open())
		print_error("Cannot open the input file.");

    outputFile.open(outFileName.c_str());
    if (!outputFile.is_open())
    {
        inputFile.close();
		print_error("Cannot open the output file.");
    }
}

std::ifstream& Files:: get_file_in()
{
    return (inputFile);
}

std::ofstream& Files:: get_file_out()
{
    return (outputFile);
}

Files:: ~Files()
{
    // std::cout << "Closing files." << std::endl;
    inputFile.close();
    outputFile.close();
}
