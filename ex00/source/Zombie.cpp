/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:21:47 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/05 18:05:44 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie( std::string name )
{
    _name = name;
}

Zombie::~Zombie( void )
{
    std::cout << _name
              << " eliminated."
              << std::endl;   
}

void    Zombie::announce ( void )
{
    std::cout << _name
              << ": BraiiiiiiinnnzzzZ..."
              << std::endl;
}
