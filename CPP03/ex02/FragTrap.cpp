/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:49:45 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/13 18:23:11 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
: ClapTrap("", 100, 100, 30)
{
    std::cout << "FragTrap default constructor is called!" << std::endl;
}

FragTrap::FragTrap(const std::string name)
: ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap initialization constructor is called!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor is called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    *this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
    this->_name = rhs._name;
    this->_attackdamage = rhs._attackdamage;
    this->_hitpoints = rhs._hitpoints;
    this->_energypoints = rhs._energypoints;
    return(*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << std::endl << _name << " is requesting for a positive highfive!" << std::endl;
}
