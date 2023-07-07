/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 03:39:57 by pepe              #+#    #+#             */
/*   Updated: 2023/07/07 04:03:32 by pepe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "PhoneBook.hpp"

/*__AddContact.cpp__*/
int     str_is_digit(const std::string& phone);
int     check_phone(std::string input);
void    add_contact(PhoneBook *PB);

/*__SearchContact.cpp__*/
