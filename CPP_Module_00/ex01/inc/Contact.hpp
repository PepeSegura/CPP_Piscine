/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:33:05 by pepe              #+#    #+#             */
/*   Updated: 2023/07/10 17:27:41 by psegura-         ###   ########.fr       */
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
		void		print_data();
		void		set_data(int _id, std::string input);
		std::string	get_data(int _id);
};
