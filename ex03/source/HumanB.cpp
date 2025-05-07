/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:27:55 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/07 17:12:32 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(  std::string name  ) : _weapon(NULL), _name(name) {}

HumanB::~HumanB( void ) {}

void	HumanB::attack ( void )
{
	if (_weapon)
	{
		std::cout << _name << " attacks with their "
				  << _weapon->getType()
				  << std::endl;
	}
	else
		std::cout << _name << " attacks with their firsts"
				  << std::endl;
}

void	HumanB::setWeapon( Weapon *newWeapon )
{
	_weapon = newWeapon;
}
