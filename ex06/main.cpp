/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <jaferna2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:57:24 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/10 12:29:32 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/Harl.hpp"

int main ( int argc, char **argv )
{
    if (argc != 2)
        return ( 0 );
    Harl harl;
    harl.complain(argv[1]);
    return ( 0 );
}
