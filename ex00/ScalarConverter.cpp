/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 10:31:52 by ldesboui          #+#    #+#             */
/*   Updated: 2026/05/13 14:17:15 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <climits>
#include <cctype>
#include <iomanip>
#include <limits>

ScalarConverter::ScalarConverter(){}
static void	printForFloat(std::string literal, int precision)
{
	char *s;
	double val = std::strtod(literal.c_str(), &s);
	(void)s;
	std::cout << "char :";
	if (val < 0 || val > 127)
		std :: cout << "impossible" << std::endl;
	else if (std::isprint(static_cast<char>(val)))
		std::cout << static_cast<char>(val) << std::endl;
	else
		std :: cout << "Non displayable" << std::endl;
	std::cout << "int :";
	if (val > INT_MAX || val < INT_MIN)
		std::cout << "Overflow / Underflow" << std::endl;
	else
		std::cout << static_cast<int>(val) << std::endl;
	std::cout << "float :" ;
	if (static_cast<float>(val) > std::numeric_limits<float>::max() 
			|| static_cast<float>(val) < std::numeric_limits<float>::max() * -1)
		std::cout << "Overflow / Underflow" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(precision) << static_cast<float>(val) << std::endl;
	std::cout << "double :" << std::fixed << std::setprecision(precision) << static_cast<double>(val) << std::endl;
}
static void	printForInt(std::string literal)
{
	char *s;
	double val = std::strtod(literal.c_str(), &s);
	(void)s;
	std::cout << "char :";
	if (val < 0 || val > 127)
		std :: cout << "Impossible" << std::endl;
	else if (std::isprint(static_cast<char>(val)))
		std::cout << static_cast<char>(val) << std::endl;
	else
		std :: cout << "Non displayable" << std::endl;
	std::cout << "int :";
	if (val > INT_MAX || val < INT_MIN)
		std::cout << "Overflow / Underflow" << std::endl;
	else
		std::cout << static_cast<int>(val) << std::endl;

	std::cout << "float :" ;
	if (static_cast<float>(val) > std::numeric_limits<float>::max() 
			|| static_cast<float>(val) < std::numeric_limits<float>::max() * -1)
		std::cout << "Overflow / Underflow" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(val) << std::endl;
	std::cout << "double :" << std::fixed << std::setprecision(1) << static_cast<double>(val) << std::endl;

}
static void	printForDouble(std::string literal, int precision)
{
	char *s;
	double val = std::strtod(literal.c_str(), &s);
	(void)s;
	std::cout << "char :";
	if (val < 0 || val > 127)
		std :: cout << "Impossible" << std::endl;
	else if (std::isprint(static_cast<char>(val)))
		std::cout << static_cast<char>(val) << std::endl;
	else
		std :: cout << "Non displayable" << std::endl;
	std::cout << "int :";
	if (val > INT_MAX || val < INT_MIN)
		std::cout << "Overflow / Underflow" << std::endl;
	else
		std::cout << static_cast<int>(val) << std::endl;
	std::cout << "float :" ;
	if (static_cast<float>(val) > std::numeric_limits<float>::max() 
			|| static_cast<float>(val) < std::numeric_limits<float>::max() * -1)
		std::cout << "Overflow / Underflow" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(val) << std::endl;
	std::cout << "double :" << std::fixed << std::setprecision(precision) << static_cast<double>(val) << std::endl;
}
static void	printForChar(std::string literal)
{
	char *s;
	char val = literal[0];
	(void)s;
	std::cout << "char :";
	if (val < 0 || val > 127)
		std :: cout << "Impossible" << std::endl;
	else if (std::isprint(static_cast<char>(val)))
		std::cout << static_cast<char>(val) << std::endl;
	else
		std :: cout << "Non displayable" << std::endl;
	std::cout << "int :";
	std::cout << static_cast<int>(val) << std::endl;
	std::cout << "float :" ;
	if (static_cast<float>(val) > std::numeric_limits<float>::max() 
			|| static_cast<float>(val) < std::numeric_limits<float>::max() * -1)
		std::cout << "Overflow / Underflow" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(val) << std::endl;
	std::cout << "double :" << std::fixed << std::setprecision(1) << static_cast<double>(val) << std::endl;

}

void ScalarConverter::convert(std::string literal)
{
	int pos;
	if (literal == "nan" || literal == "nanf") {
        std::cout << "char : impossible\n";
        std::cout << "int : impossible\n";
        std::cout << "float : nanf\n";
        std::cout << "double : nan\n";
        return;
    }
	else if (literal == "+inf" || literal == "+inff") {
        std::cout << "char : impossible\n";
        std::cout << "int : impossible\n";
        std::cout << "float : +inff\n";
        std::cout << "double : +inf\n";
        return;
    }
	else if (literal == "-inf" || literal == "-inff") {
        std::cout << "char : impossible\n";
        std::cout << "int : impossible\n";
        std::cout << "float : -inff\n";
        std::cout << "double : -inf\n";
        return;
    }
	else if (isFloat(literal))
	{
		pos = literal.find('.');
		printForFloat(literal, literal.length() - pos - 2);
	}
	else if (isDouble(literal))
	{
		pos = literal.find('.');
		printForDouble(literal, literal.length() - pos - 1);
	}
	else if (isChar(literal))
		printForChar(literal);
	else if(isInt(literal))
		printForInt(literal);
	else
	{
		std::cout <<  "I dont know" << std::endl;
	}
}

