/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puzzlesanalytik <puzzlesanalytik@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 14:45:45 by puzzlesanal       #+#    #+#             */
/*   Updated: 2026/06/13 14:57:45 by puzzlesanal      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main()
{
	Data *data = new Data;

	std::cout << GREEN << "adresse data   : " << data << RESET << std::endl;
	std::cout << RED   << "serialization  : " << serialize(data) << RESET << std::endl;
	std::cout << GREEN << "deserialization: " << deserialize(serialize(data)) << RESET << std::endl;

	// std::cout << sizeof(*data) << std::endl;

	delete data;

	return (0);
}
