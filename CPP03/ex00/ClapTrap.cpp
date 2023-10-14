/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:19:43 by sbhatta           #+#    #+#             */
/*   Updated: 2023/10/13 18:26:23 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitpoints(10), _energypoints(10), _attackdamage(0) 
{
    std::cout << "Default constructor is called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor is called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _hitpoints(10), _energypoints(10), _attackdamage(0), _name(name) 
{
    std::cout << "Constructor with name initiaization is called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "Copy constructor is called!" << std::endl;
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
    this->_name = rhs._name;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_energypoints > 0 || _hitpoints > 0)
    {
        std::cout << std::endl << "ClapTrap " << _name << " attacks " << target << ", causing " \
        << _attackdamage << " points of damage to!" << std::endl;
        _energypoints = _energypoints - 1;
        std::cout << _name << "'s Available Hitpoint: " << _hitpoints << std::endl;
        std::cout << _name << "'s Available Energy: " << _energypoints << std::endl;
    }
    else
        std::cout << std::endl << _name << " Can't attack! No energy points or hitpoint left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints > 0)
    {
        if (_hitpoints < amount)
            _hitpoints = 0;
        else
            _hitpoints = _hitpoints - amount;
        std::cout << std::endl << _name << " took " << amount << " damage!" << std::endl;
        std::cout << _name << "'s Available Hitpoint: " << _hitpoints << std::endl;
        std::cout << _name << "'s Available Energy: " << _energypoints << std::endl;
    }
    else
        std::cout << std::endl << _name << "'s Hitpoint is 0. Cannot take damage!" << std::endl; 
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energypoints > 0)
    {
        _hitpoints = _hitpoints + amount;
        _energypoints = _energypoints - 1;
        std::cout << std::endl << "ClapTrap " << _name << " repaired itself and got " << amount << " hit points!" << std::endl;
        std::cout << _name << "'s Available Hitpoint: " << _hitpoints << std::endl;
        std::cout << _name << "'s Available Energy: " << _energypoints << std::endl;
    }
    else
        std::cout << std::endl << _name << " Can't Repair! No energy points left!" << std::endl;
}
