/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:52:55 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/07 18:55:54 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL__
# define __HARL__

# include "string"
# include <iostream>

class Harl
{
    public:
        Harl( void );
        ~Harl( void );
        void    complain( std::string level );
  
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );  
};

#endif /*   __HARL__    */
