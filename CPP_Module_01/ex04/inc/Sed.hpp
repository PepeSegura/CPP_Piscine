/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:08:12 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/11 21:25:36 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <string>

class Args
{
	public:
		std::string inFileName;
		std::string	outFileName;
		std::string	haystack;
		std::string	needle;
};
