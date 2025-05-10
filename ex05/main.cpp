/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <jaferna2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:57:24 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/10 12:19:42 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/Harl.hpp"

int main ( void )
{
    Harl harl;
    
    std::cout << "Calling harl to complain about debug"
              << std::endl;
    harl.complain("DEBUG");
    std::cout << "Calling harl to complain about info"
              << std::endl;
    harl.complain("INFO");
    std::cout << "Calling harl to complain about warning"
              << std::endl;
    harl.complain("WARNING");
    std::cout << "Calling harl to complain about error"
              << std::endl;
    harl.complain("ERROR");
    std::cout << "Calling harl to a unknowed parameter"
              << std::endl;
    harl.complain("PATATA");
    return ( 0 );
}

