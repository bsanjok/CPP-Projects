/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:05:01 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/08 10:48:05 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
    std::string _name;
    Weapon &_weapon;
    
    public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack(void);
};

#endif