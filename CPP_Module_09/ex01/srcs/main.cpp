/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:01 by psegura-          #+#    #+#             */
/*   Updated: 2023/09/03 02:15:54 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include <sstream>
#include <cstdlib>

int	count_letter(std::string str)
{
	int	letter_count = 0;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))
			letter_count++;
	}
	return (letter_count);
}

void	check_symbol(std::string str)
{
	int	i = 0;
	int	flag = 0;

	for (; str[i]; i++)
	{
		if (i != 0 && (str[i] == '-' || str[i] == '+'))
			flag = 1;
	}
	if (flag == 1)
		throw (std::runtime_error("Invalid input: symbol found in an invalid position."));
}

bool	check_int(std::string& str)
{
	if (count_letter(str) > 0)
		return (false);
	check_symbol(str);
	if (str.length() == 1 && (str[0] == '-' || str[0] == '+'))
		return (false);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (i == 0 && (!isdigit(str[i]) && str[i] != '-' && str[i] != '+'))
			return (false);
		if (i != 0 && !isdigit(str[i]))
			return (false);
	}
	return (true);
}

void	choose_operator(std::stack<int>& stack, std::string& token)
{
	if (stack.size() < 2)
		throw (std::runtime_error("Error: Not enough numbers."));

	double right = stack.top();
    stack.pop();
    double left = stack.top();
    stack.pop();
    if (token == "+") stack.push(left + right);
    else if (token == "-") stack.push(left - right);
    else if (token == "*") stack.push(left * right);
    else if (token == "/")
	{
		if (right == 0)
			throw (std::runtime_error("Error: You can't divide by 0."));
		stack.push(left / right);	
	} 
}

double	rpn(std::string& input)
{
	if (input.length() == 0)
		throw (std::runtime_error("Error: Empty argument."));
	std::stack<int>		stack;

	std::istringstream	iss(input);
	std::string			token;

	while (iss >> token)
	{
		if (check_int(token))
			stack.push(std::atof(token.c_str()));
		else if (token == "+" || token == "-" || token == "*" || token == "/")
			choose_operator(stack, token);
		else
			throw (std::runtime_error("Error: Invalid token: " + token));
	}
	if (stack.size() > 1)
		throw (std::runtime_error("Error: Invalid number of symbol."));
	return (stack.top());
}

int	main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw (std::runtime_error("Error: You must introduce just 1 argument."));

		std::string		input = argv[1];
		double			result;

		result = rpn(input);
		std::cout << "Result: [" << result << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
