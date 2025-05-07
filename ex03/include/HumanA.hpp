/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:25:53 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/07 17:13:20 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA__
# define __HUMANA__

# include "string"
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    public:
        HumanA( std::string name, Weapon &weapon );
        ~HumanA ( void );

        void    attack( void );
    private:
        Weapon              &_weapon;
        std::string         _name;
};

# endif /*  __HUMANA__  */
