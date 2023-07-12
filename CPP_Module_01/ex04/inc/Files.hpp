/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Files.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:06:40 by pepe              #+#    #+#             */
/*   Updated: 2023/07/12 14:14:29 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Sed.hpp"

class Files
{
	public:
		Files(const std:: string& inFileName, const std:: string& outFileName);
		~Files();
        std::ifstream& get_file_in(void);
        std::ofstream& get_file_out(void);

	private:
		std::ifstream	inputFile;
		std::ofstream	outputFile;
};