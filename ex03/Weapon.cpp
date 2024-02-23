/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:46:21 by snovakov          #+#    #+#             */
/*   Updated: 2024/02/21 17:46:23 by snovakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) : type(weaponType){};

Weapon::~Weapon(){};

const std::string&	Weapon::getType() const
{
	return type;
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}
