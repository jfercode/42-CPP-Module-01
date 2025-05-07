/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:08:30 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/07 16:47:49 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

# include "string"
# include <iostream>

class Weapon
{
	public:
		Weapon( const std::string &type );
		~Weapon( void );
		
		const std::string	&getType( void );
		void				setType( std::string _newType );

	private:
		std::string	_type;
};

#endif __WEAPON_HPP__
