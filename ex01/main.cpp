/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:05:24 by snovakov          #+#    #+#             */
/*   Updated: 2024/02/21 14:05:25 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
    Zombie* horde = zombieHorde(5, "HordeZombie");

    for (int i = 0; i < 5; i++) 
	{
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}
