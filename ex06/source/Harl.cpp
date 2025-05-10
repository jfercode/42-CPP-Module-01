/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <jaferna2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:56:29 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/10 12:41:30 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl( void )  {}

Harl::~Harl( void ) {}

void    Harl::complain( std::string level )
{
    typedef void (Harl::*HarlFunc)();
    bool harlBool = false;
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
        if (levels[i] == level || harlBool)
        {
            if (harlBool != true)
                harlBool = true;
            (this->*funcs[i])();
        }   
    }
    if (!harlBool)
        std::cout << "[ Harl doesn ´t understand this order ]" 
                  << std::endl;
}

void    Harl::debug( void )
{
    std::cout << "[ DEBUG MESSAGE ]" 
              << std::endl 
              << "This is a debug message from my friend Harl"
              << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[ INFO MESSAGE ]" 
              << std::endl 
              << "This is an info message from my friend Harl"
              << std::endl;   
}

void    Harl::warning( void )
{
    std::cout << "[ WARNING MESSAGE ]"
              << std::endl
              << "This is a warning message from my friend Harl"
              << std::endl;    
}

void    Harl::error( void )
{
    std::cout << "[ ERROR MESSAGE ]"
              << std::endl 
              << "This is an error message from my friend Harl"
              << std::endl;
}
