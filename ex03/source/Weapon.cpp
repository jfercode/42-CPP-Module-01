/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:08:05 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/07 16:48:16 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon( const std::string &type ) : _type(type) {}

Weapon::~Weapon( void ) {}

const   std::string &Weapon::getType( void )
{
    return (_type);
}

void    Weapon::setType( std::string _newType )
{
    _type = _newType;
}
