/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:46:52 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/24 18:09:49 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

typedef enum e_types {
	SPECIAL,
	INT,
	DOUBLE,
	FLOAT,
	CHAR,
	ERROR
} t_types;

int	check_input(std::string str);
