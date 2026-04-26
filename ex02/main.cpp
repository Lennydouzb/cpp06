/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 19:01:35 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/26 19:06:01 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"

int	main(void)
{
	Base *varA = new A();
	Base *varB = new B();
	Base *varC = new C();

	identify(varA);
	identify(*varA);
	identify(varB);
	identify(*varB);
	identify(varC);
	identify(*varC);
}
