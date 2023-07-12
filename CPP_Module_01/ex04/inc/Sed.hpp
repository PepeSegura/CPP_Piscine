/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:08:12 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/12 17:56:47 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <stdlib.h>

# define INFILENAME		0
# define OUTFILENAME	1
# define HAYSTACK 		2
# define NEEDLE			3

void	print_error(std::string error);

class Args
{
	public:
		Args(int argc, char **argv);
		~Args();
		std::string get_data(int id);

	private:
		std::string data[4];
};
