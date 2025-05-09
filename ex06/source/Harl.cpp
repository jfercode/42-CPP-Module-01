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
    typedef void (Harl::*HarlFunc)();
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlFunc funcs[] = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for (int i = 0; i < 4; ++i)
    {
        if (levels[i] == level)
        {
            (this->*funcs[i])();
            return ;
        }
    }
    std::cout << "[ Harl doesn ´t understand this order ]" 
              << std::endl;
}

void    Harl::debug( void )
{
    std::cout << "[ DEBUG MESSAGE ] This is a debug message from my friend Harl"
              << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[ INFO MESSAGE ] This is an info message from my friend Harl"
              << std::endl;   
}

void    Harl::warning( void )
{
    std::cout << "[ WARNING MESSAGE ] This is a warning message from my friend Harl"
              << std::endl;    
}

void    Harl::error( void )
{
    std::cout << "[ ERROR MESSAGE ] this is an error message from my friend Harl"
              << std::endl;
}
