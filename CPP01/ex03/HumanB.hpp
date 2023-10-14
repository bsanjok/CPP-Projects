/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:23:15 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/08 10:48:18 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
    std::string _name;
    Weapon *_weapon;
    
    public:
    HumanB(std::string name);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon &weapon);
};

#endif