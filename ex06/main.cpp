/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:38:05 by snovakov          #+#    #+#             */
/*   Updated: 2024/02/29 12:38:07 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: <level>" << std::endl;
		return 1;
	}
	Harl harl;

	int index = -1;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == argv[1])
		{
			index = i;
			break;
		}
	}
	switch(index)
	{
	case 0:
		harl.complain("debug");
		harl.complain("info");
		harl.complain("warning");
		harl.complain("error");
		break;
	case 1:
		harl.complain("info");
		harl.complain("warning");
		harl.complain("error");
		break;
	case 2:
		harl.complain("warning");
		harl.complain("error");
		break;
	case 3:
		harl.complain("error");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return 0;
}
