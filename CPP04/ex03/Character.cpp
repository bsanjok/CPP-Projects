/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:50:24 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/07 14:09:57 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character(){}

Character::Character() : _name("no_name")
{
    for (int j = 0; j < 4; j++)
        _slotno[j] = 0;
}

Character::Character(const std::string name) : _name(name)
{
    for (int j = 0; j < 4; j++)
        _slotno[j] = 0;
}

Character::Character(const Character &obj)
{
    for(int i = 0; i < 4; i++)
    {
        delete _slots[i];
        _slots[i] = obj._slots[i]->clone();
        _slotno[i] = obj._slotno[i];
    }
}

Character& Character::operator=(const Character &rhs)
{
    if (this != &rhs)
    {
        for(int i = 0; i < 4; i++)
        {
            delete _slots[i];
            _slots[i] = rhs._slots[i]->clone();
            _slotno[i] = rhs._slotno[i];
        }
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (_name);
}

int Character::getFreeSlotIndex(int *slotnos)
{
    for (int j = 0; j < 4; j++)
    {
        if (slotnos[j] == 0)
            return(j);
    }
    return (-1);
}

void Character::equip(AMateria* m)
{
    int freeslot;

    freeslot = getFreeSlotIndex(_slotno);
    if (freeslot != -1)
    {
        _slots[freeslot] = m;
        _slotno[freeslot] = 1;
    }
}

void Character::unequip(int idx)
{
    if (idx >=0 && idx < 4 && _slotno[idx] == 1)
        _slotno[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >=0 && idx < 4 && _slotno[idx] == 1)
        _slots[idx]->use(target);
}