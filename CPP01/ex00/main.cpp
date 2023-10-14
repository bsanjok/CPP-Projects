/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:02:35 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/05 13:19:30 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie newZombie("One");
    Zombie *pointerZombie;

    pointerZombie = Zombie::newZombie("Pointy");
    pointerZombie->announce();
    newZombie.announce();
    newZombie.randomChump("Two");
    newZombie.randomChump("Three");
    newZombie.announce();
    delete pointerZombie;
    return (0);
}
