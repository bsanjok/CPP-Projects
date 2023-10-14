/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:35:22 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/14 12:20:45 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor called!" << std::endl;    
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
    *this = obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
    this->_name = rhs._name;
    this->_hitpoints = rhs._hitpoints;
    this->_attackdamage = rhs._attackdamage;
    
}