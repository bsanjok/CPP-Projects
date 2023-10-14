/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:43:41 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/05 20:09:41 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon( std::string type ) : _type(type) { }

Weapon::~Weapon() {}

const std::string &Weapon::getType()
{
    return (_type);
}

void Weapon::setType(std::string type)
{
    _type = type;
}
