/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:46:52 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/25 03:41:30 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <string>
# include <math.h>

typedef enum e_types {
	SPECIAL_F,
	SPECIAL_D,
	INT,
	DOUBLE,
	FLOAT,
	CHAR,
	ERROR
} t_types;

int	check_input(std::string str);
