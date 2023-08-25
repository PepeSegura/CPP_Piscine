/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Debug.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:26:09 by psegura-          #+#    #+#             */
/*   Updated: 2023/08/25 05:33:52 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# ifdef DEBUG
#	define PRINT_DEBUG(a) std::cout << a << "\n";
# else
#	define PRINT_DEBUG(a)
# endif

//system() and atexit()
#include <stdlib.h>
