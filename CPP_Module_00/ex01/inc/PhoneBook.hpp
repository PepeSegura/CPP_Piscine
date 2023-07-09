/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:32:28 by pepe              #+#    #+#             */
/*   Updated: 2023/07/09 10:53:42 by pepe             ###   ########.fr       */
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
		Contact _agenda[8];

		int     _id;
		void	_add_phone();
		void	_print_all_contacts();
		int		_check_phone(std::string input);
		int		_str_is_digit(const std::string& phone);
};
