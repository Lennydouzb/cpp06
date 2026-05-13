/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 10:26:37 by ldesboui          #+#    #+#             */
/*   Updated: 2026/05/13 11:58:16 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>

class ScalarConverter
{
	private:
		ScalarConverter();
	public:
		static void convert(std::string literal);
};

bool	isFloat(std::string str);
bool	isDouble(std::string str);
bool	isInt(std::string str);
bool	isChar(std::string str);
