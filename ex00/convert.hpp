/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puzzlesanalytik <puzzlesanalytik@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 13:00:16 by puzzlesanal       #+#    #+#             */
/*   Updated: 2026/06/13 13:11:17 by puzzlesanal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cstring>
#include <math.h>

// -------------------------------------------------
// COLOR
// -------------------------------------------------
#define RESET "\033[0m"
#define BOLD  "\033[1m"
#define RED   "\033[31m"
#define GREEN "\033[32m"
#define BLUE  "\033[34m"
#define PINK  "\033[35m"


class Convert
{
    private:
        std:: string _value;
    
    public:
        // -------------------------------------------------
        // OCF
        // -------------------------------------------------
        Convert(std::string value);             // Default Constructor
        Convert(const Convert &src);            // Copy Constructor
        Convert &operator=(const Convert &rhs); // Assignment Operator
        ~Convert();                             // Destructor

        // -------------------------------------------------
        // Methodes
        // -------------------------------------------------
        char   toChar();
        int    toInt();
        float  toFloat();
        double toDouble();
        void   convert();

};

#endif