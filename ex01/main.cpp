/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:39:52 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/05 18:29:36 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int	main( void )
{
	int		nZombies;
	Zombie	*newHorde;

	nZombies = 5;
	newHorde = zombieHorde(nZombies, "Manolito");
	if (newHorde)
	{
		for (int i = 0; i < nZombies; ++i)
			newHorde[i].announce();
		delete[] newHorde;
	}
	else
		std::cout << "Failed to invoke zombie Horde" << std::endl;
	return (0);
}
