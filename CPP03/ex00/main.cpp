/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:43:27 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/13 11:40:10 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    const std::string enemy = "villian";
    ClapTrap instance("Sanjok");

    instance.attack(enemy);
    instance.takeDamage(10);
    instance.beRepaired(1);
    instance.takeDamage(1);
    instance.takeDamage(10);
    instance.beRepaired(1);
    instance.beRepaired(1);
    instance.beRepaired(1);
    instance.beRepaired(1);
    instance.beRepaired(1);
    instance.beRepaired(1);
    instance.beRepaired(1);
    instance.beRepaired(1);
    instance.beRepaired(1);
    instance.beRepaired(1);
    
    return (0);
}