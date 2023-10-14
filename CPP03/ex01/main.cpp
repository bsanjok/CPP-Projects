/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:43:27 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/13 17:44:18 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap init("Sanjok");
    
    init.attack("enemey");
    init.takeDamage(10);
    init.guardGate();
    init.beRepaired(5);
    init.attack("enemey");
    init.takeDamage(90);
    init.takeDamage(90);
    init.takeDamage(90);
    return (0);
}