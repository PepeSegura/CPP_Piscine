/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:33:05 by pepe              #+#    #+#             */
/*   Updated: 2023/07/07 04:13:09 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>

# define NAME       0
# define LAST_NAME  1
# define NICK       2
# define SECRET     3
# define PHONE      4

class Contact
{
	public:
		std::string     data[5];
};
