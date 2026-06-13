/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puzzlesanalytik <puzzlesanalytik@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 15:07:31 by puzzlesanal       #+#    #+#             */
/*   Updated: 2026/06/13 16:27:42 by puzzlesanal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(NULL));

    for (int i = 0; i < 10; i++)
    {
        Base* p = generate();

        std::cout << "Pointer identify: ";
        identify(p);

        std::cout << "Reference identify: ";
        identify(*p);

        delete p;
    }

    return 0;
}