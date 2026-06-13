/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puzzlesanalytik <puzzlesanalytik@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 13:00:16 by puzzlesanal       #+#    #+#             */
/*   Updated: 2026/06/13 14:14:40 by puzzlesanal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cstring>
#include <math.h>
#include <string>

// -------------------------------------------------
// COLOR
// -------------------------------------------------
#define RESET "\033[0m"
#define BOLD  "\033[1m"
#define RED   "\033[31m"
#define GREEN "\033[32m"
#define BLUE  "\033[34m"
#define PINK  "\033[35m"


class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter&);
        ScalarConverter& operator=(const ScalarConverter&);
        ~ScalarConverter();

    public:
        static void convert(const std::string& literal);
};

#endif