/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puzzlesanalytik <puzzlesanalytik@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 15:07:59 by puzzlesanal       #+#    #+#             */
/*   Updated: 2026/06/13 16:27:00 by puzzlesanal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstring>

// -------------------------------------------------
// COLOR
// -------------------------------------------------
#define RESET "\033[0m"
#define BOLD  "\033[1m"
#define RED   "\033[31m"
#define GREEN "\033[32m"
#define BLUE  "\033[34m"
#define PINK  "\033[35m"

class Base
{
	public:
		virtual ~Base(){};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate();
void identify(Base *p);
void identify(Base &p);

#endif