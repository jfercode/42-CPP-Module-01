/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:27:40 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/07 17:13:17 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA( std::string  name, Weapon &weapon) 
    : _weapon(weapon), _name(name) {}

HumanA::~HumanA ( void ) {}

void    HumanA::attack( void )
{
    std::cout << _name << " attacks with their "
			  << _weapon.getType()
			  << std::endl;
}
