/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puzzlesanalytik <puzzlesanalytik@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 13:00:20 by puzzlesanal       #+#    #+#             */
/*   Updated: 2026/06/13 14:13:10 by puzzlesanal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"


int main (int ac, char* av[])
{
    if (ac != 2)
    {
        std::cout << RED << "ERROR: Wrong Arguments only use 1 argument" <<  RESET << std::endl;
        return(1);
    }
    ScalarConverter::convert(av[1]);
    
    return(0);
}