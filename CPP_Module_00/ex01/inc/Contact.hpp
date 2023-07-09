/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:33:05 by pepe              #+#    #+#             */
/*   Updated: 2023/07/09 01:42:45 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>

// NAME       0
// LAST_NAME  1
// NICK       2
// SECRET     3
// PHONE      4

class Contact
{
	private:
		std::string     data[5];
	
	public:
		void	print_data();
		void	set_data(int id, std::string input);
};
