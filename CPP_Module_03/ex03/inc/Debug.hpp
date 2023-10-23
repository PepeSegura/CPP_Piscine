/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Debug.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:26:09 by psegura-          #+#    #+#             */
/*   Updated: 2023/10/23 18:26:24 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# ifdef DEBUG
#	define PRINT_DEBUG(a) std::cout << a << std::endl;
# else
#	define PRINT_DEBUG(a)
# endif

//system() and atexit()
#include <stdlib.h>
