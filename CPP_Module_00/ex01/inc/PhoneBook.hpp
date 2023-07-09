/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:32:28 by pepe              #+#    #+#             */
/*   Updated: 2023/07/09 02:22:01 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	search_and_print_contact();

	private:
		Contact agenda[8];

		int     id;
		void	add_phone();
		int		check_valid_id(std::string id);
		int		check_phone(std::string input);
		int		str_is_digit(const std::string& phone);
};
