/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:09:36 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/12 14:36:33 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include "Files.hpp"

std::string	replaceSubstring(const std::string& input, const std::string& haystack, const std::string& needle)
{
    std::string result;
    int searchLength = haystack.length();
    int inputLength = input.length();

	for (int i = 0; i < inputLength;)
	{
        if (input.substr(i, searchLength) == haystack)
		{
            result += needle;
            i += searchLength;
        }
		else
            result += input[i++];
    }
    return (result);
}

int	main(int argc, char **argv)
{
	Args		args(argc, argv);
	Files		files(args.get_data(INFILENAME), args.get_data(OUTFILENAME));
	std::string	line;

	while (true)
	{
		std::getline(files.get_file_in(), line);
		files.get_file_out() << replaceSubstring(line, args.get_data(HAYSTACK), args.get_data(NEEDLE)) << std::endl;
		if (files.get_file_in().eof())
			break ;
	}
	return (0);
}
