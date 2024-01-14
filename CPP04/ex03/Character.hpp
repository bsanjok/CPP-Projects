/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:50:28 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/07 13:54:19 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{

private:
    AMateria    *_slots[4];
    std::string _name;
    int         _slotno[4];
    
    int getFreeSlotIndex(int *slotnos);
    
public:
    ~Character();
    Character();
    Character(const Character &obj);
    Character(const std::string name);
    Character& operator=(const Character &rhs);
    
    std::string const & getName() const; 
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};