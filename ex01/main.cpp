/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:18:13 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/26 17:25:01 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Serializer.hpp"
#include <iostream>

int	main( void )
{
	Data data;

	data.id = 0;
	data.name = "Franck";
	Data *ptr = &data;
	std::cout << ptr->id << " " << ptr->name << std::endl;
	uintptr_t intptr = Serializer::serialize(&data);
	Data *test = Serializer::deserialize(intptr);
	if (test == ptr)
		std::cout << "It works" << std::endl;
	else
		std::cout << "Doesnt work (loser)" << std::endl;
	std::cout << test->id << " " << test->name << std::endl;
} 
