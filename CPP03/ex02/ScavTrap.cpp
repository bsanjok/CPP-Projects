/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:34:40 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/13 17:41:37 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap("<no name>", 100, 50, 20)
{
    std::cout << "ScavTrap default constructor is called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap constructor to initialize attributes called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrav destructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    *this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
    this->_attackdamage = rhs._attackdamage;
    this->_energypoints = rhs._energypoints;
    this->_attackdamage = rhs._attackdamage;
    return(*this);
}

void ScavTrap::guardGate()
{
    std::cout << std::endl << "ScavTrap " << _name << " is in Gate keeper mode." << std::endl;
}