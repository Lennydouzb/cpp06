/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 13:24:33 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/26 14:44:57 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"

static bool isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

bool	isFloat(std::string str)
{
	int	i = 0;
	if (str[0] == '+' || str[0] == '-')
		++i;
	while (str[i])
	{
		if (!isdigit(str[i]))
			break;
		++i;
	}
	if (!str[i] || str[i] != '.')
		return false;
	++i;
	while (str[i])
	{
		if (!isdigit(str[i]))
			break;
		++i;
	}
	if (str[i] && str[i] == 'f' && !str[i + 1])
		return true;
	else
		return false;
}

bool	isDouble(std::string str)
{
	int	i = 0;
	if (str[0] == '+' || str[0] == '-')
		++i;
	while (str[i])
	{
		if (!isdigit(str[i]))
			break;
		++i;
	}
	if (!str[i] || str[i] != '.')
		return false;
	++i;
	while (str[i])
	{
		if (!isdigit(str[i]))
			break;
		++i;
	}
	if (!str[i])
		return true;
	else
		return false;
}

bool	isInt(std::string str)
{
	if (str == "-inf" || str == "+inf" || str == "nan")
		return true;
	int	i = 0;
	if (str[0] == '+' || str[0] == '-')
		++i;
	while (str[i])
	{
		if (!isdigit(str[i]))
			break;
		++i;
	}
	if (!str[i])
		return true;
	return false;
}

bool	isChar(std::string str)
{
	if (str.length() == 1)
	{
		if (str[0] > '0' && str[0] < '9')
			return false;
		else
			return true;
	}
	return false;
}
