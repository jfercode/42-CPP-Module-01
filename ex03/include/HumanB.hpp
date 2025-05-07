/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:18:57 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/07 16:34:13 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB__
# define __HUMANB__

# include "string"
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
    public:
        HumanB( std::string _name );
        ~HumanB ( void );
        
        void    setWeapon( Weapon newWeapon );
        void    attack( void );
    private:
        Weapon              _weapon;
        std::string         _name;        
};

# endif __HUMANB__
