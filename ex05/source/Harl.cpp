/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:56:29 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/07 19:00:40 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl( void )  {}

Harl::~Harl( void ) {}

void    Harl::complain( std::string level )
{
    
}

void    Harl::debug( void )
{
    std::cout << "DEBUG MESSAGE"
              << std::endl;
}

void    Harl::info( void )
{
    std::cout << "INFO MESSAGE"
              << std::endl;   
}

void    Harl::warning( void )
{
    std::cout << "WARNING MESSAGE"
              << std::endl;    
}

void    Harl::error( void )
{
    std::cout << "ERROR MESSAGE"
              << std::endl;
}
