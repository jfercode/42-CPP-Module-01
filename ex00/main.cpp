/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:39:52 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/05 17:46:16 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/Zombie.hpp"

int main( void )
{
    Zombie *heapZ = newZombie("HeapZombie");
    
    heapZ->announce();
    delete (heapZ);
    
    randomChump("StackZombie");
    
    return (0);
}
