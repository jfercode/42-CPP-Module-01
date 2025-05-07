/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:48:31 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/07 16:51:58 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/HumanA.hpp"
#include "include/HumanB.hpp"
#include "include/Weapon.hpp"

int main ( void )
{
    {
        Weapon  club = Weapon("curede spiked club");
        
        HumanA bob("Bob", club);
        bob.Attack();
        club.setType("some other type of club");
        bob.Attack();
    }
    {
        Weapon  club = Weapon("curede spiked club");
        
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
        
    }
}
