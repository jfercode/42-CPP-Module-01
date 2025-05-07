/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:27:55 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/07 16:47:12 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(  std::string name  ) : _name(name) {}

HumanB::~HumanB( void ) {}

void	HumanB::attack ( void )
{
	std::cout << _name << " attacks with their "
			  << _weapon.getType()
			  << std::endl;
}

void	HumanB::setWeapon( Weapon newWeapon )
{
	_weapon = newWeapon;
}
	