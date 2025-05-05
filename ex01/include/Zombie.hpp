/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:29:21 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/05 18:26:05 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string> 
# include "iostream"

class Zombie
{
    public:
        void    announce ( void );
        void    setName (std::string name);
        
        Zombie ( void );
        Zombie ( std::string name );
        ~Zombie( void );
    
    private:
        std::string _name;
};

Zombie  *zombieHorde( int N, std::string name );

#endif /*   ZOMBIE_HPP  */