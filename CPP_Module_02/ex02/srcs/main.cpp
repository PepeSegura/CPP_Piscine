/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:07:42 by psegura-          #+#    #+#             */
/*   Updated: 2023/07/18 18:42:51 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::string true_false(bool input)
{
	if (input == 0)
		return ("\t\033[0;31mFALSE\033[0m");
	return ("\t\033[0;32mTRUE\033[0m");
}

int	main(void)
{
	Fixed	a(10);
	Fixed	b(42.42f);
	Fixed	c(10);

	std::cout << "\033[0;36m__INPUT_NUMBERS__\n\nA: [" << a << "]\nB: [" << b << "]\nC: [" << c << "]\n\033[0m" << std::endl;

	std::cout << "\033[0;36m__COMPARISON_OPERATORS__\033[0m" << std::endl;
	std::cout << a << " > " << b << true_false(a > b) << std::endl;
	std::cout << a << " < " << b << true_false(a < b) << std::endl;
	std::cout << a << " >= " << b << true_false(a >= b) << std::endl;
	std::cout << a << " <= " << b << true_false(a <= b) << std::endl;
	std::cout << a << " == " << b << true_false(a == b) << std::endl;
	std::cout << a << " == " << c << true_false(a == c) << std::endl;
	std::cout << a << " != " << b << true_false(a != b) << std::endl;
	std::cout << a << " != " << c << true_false(a != c) << std::endl;

	a = 5;
	b = 2;
	std::cout << "\033[0;36m\n__ARITHMETIC_OPERATORS__\033[0m" << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;

	{	
		std::cout << "\033[0;36m\n__INCREMENT/DECREMENT__\033[0m" << std::endl;
		Fixed a;
		std::cout << "\nMy weird main." << std::endl;
		std::cout << "++a:\t" << "before: " << a << "\t\t--> " << " after: " << ++a << std::endl;
		std::cout << "a++:\t" << "before: " << a++ << "\t--> " << " after: " << a << std::endl;
		std::cout << "--a:\t" << "before: " << a << "\t--> " << " after: " << --a << std::endl;
		std::cout << "a--:\t" << "before: " << a-- << "\t--> " << " after: " << a << std::endl;

		std::cout << "\nThe subject main." << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << "\nB: " << b << std::endl;

		std::cout << "\033[0;36m\n__MIN/MAX__\033[0m" << std::endl;
		std::cout << "Max between: " << a << " & " << b << " --> "<< Fixed::max(a, b) << std::endl;
		std::cout << "Min between: " << a << " & " << b << " --> "<< Fixed::min(a, b) << std::endl;
	}
	return (0);	
}
