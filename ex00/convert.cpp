/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puzzlesanalytik <puzzlesanalytik@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 13:00:11 by puzzlesanal       #+#    #+#             */
/*   Updated: 2026/06/13 14:33:54 by puzzlesanal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include <cstdlib>
#include <limits>
#include <iomanip>
#include <cctype>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter&)
{
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&)
{
    return *this;
}

ScalarConverter::~ScalarConverter()
{
}

static bool isPseudo(const std::string& s)
{
    return (
        s == "nan" || s == "nanf" ||
        s == "+inf" || s == "+inff" ||
        s == "-inf" || s == "-inff"
    );
}

static bool isCharLiteral(const std::string& s)
{
    if (s.length() == 1 && !std::isdigit(s[0]))
        return true;
    if (s.length() == 3 && s[0] == '\'' && s[2] == '\'')
        return true;
    return false;
}

static double parseValue(const std::string& literal, bool& valid)
{
    char* end;
    std::string s = literal;

    if (s.length() > 1 && s[s.length() - 1] == 'f'
        && s != "nanf" && s != "+inff" && s != "-inff")
        s = s.substr(0, s.length() - 1);

    double value = std::strtod(s.c_str(), &end);

    valid = (*end == '\0');
    return value;
}

static void printChar(double value, bool impossible)
{
    if (impossible || value < 0 || value > 127)
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(static_cast<int>(value)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
}

static void printInt(double value, bool impossible)
{
    if (impossible
        || value < std::numeric_limits<int>::min()
        || value > std::numeric_limits<int>::max())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
}

static void printFloatDouble(double value)
{
    if (value - static_cast<long>(value) == 0)
    {
        std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
        std::cout << "double: " << value << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
        std::cout << "double: " << value << std::endl;
    }
}

void ScalarConverter::convert(const std::string& literal)
{
    if (isPseudo(literal))
    {
        std::string base = literal;

        if (base == "nanf")
            base = "nan";
        if (base == "+inff")
            base = "+inf";
        if (base == "-inff")
            base = "-inf";

        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << base << "f" << std::endl;
        std::cout << "double: " << base << std::endl;
        return;
    }

    if (isCharLiteral(literal))
    {
        char c;

        if (literal.length() == 1)
            c = literal[0];
        else
            c = literal[1];

        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
        return;
    }

    bool valid = false;
    double value = parseValue(literal, valid);

    if (!valid)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }

    printChar(value, false);
    printInt(value, false);
    printFloatDouble(value);
}
