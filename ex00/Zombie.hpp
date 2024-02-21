/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:05:44 by snovakov          #+#    #+#             */
/*   Updated: 2024/02/21 14:05:45 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		void	announce(void);
		~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif