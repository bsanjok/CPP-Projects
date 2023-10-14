/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:02:35 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/05 14:05:48 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *pointerZombie;

    pointerZombie = Zombie::zombieHorde(3, "Pointy");
    pointerZombie[0].announce();
    pointerZombie[1].announce();
    pointerZombie[2].announce();
    delete[] pointerZombie;
}
