/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:58:43 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/08 10:49:34 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club"); 
    bob.attack();
    std::cout << std::endl;
    
    Weapon club2 = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club2);
    jim.attack();
    club2.setType("some other type of club"); 
    jim.attack();
    return (0);
}