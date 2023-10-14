/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:08:38 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/05 14:09:00 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    Zombie::zombieHorde( int N, std::string name )
{
    Zombie *arrayZombie = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        arrayZombie[i].setName(name);
    }
    return arrayZombie;
}
