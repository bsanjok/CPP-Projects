/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:50:39 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/05 20:09:37 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon
{
    private:
    std::string _type;

    public:
    Weapon( void );
    Weapon( std::string type );
    ~Weapon();
    const std::string &getType( void );
    void    setType( std::string type );
};

#endif