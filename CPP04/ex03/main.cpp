/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:31:26 by sbhatta           #+#    #+#             */
/*   Updated: 2023/12/07 14:20:24 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
    
    IMateriaSource* src = new MateriaSource(); 
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    ICharacter* me = new Character("me");
    AMateria* tmp1;
    tmp1 = src->createMateria("ice"); 
    std::cout << "Type of tmp1: " << tmp1->getType() << std::endl;
    me->equip(tmp1);
    AMateria* tmp2;
    tmp2 = src->createMateria("cure");
    std::cout << "Type of tmp2: " << tmp2->getType() << std::endl; 
    me->equip(tmp2);
    AMateria* tmp3;
    tmp3 = src->createMateria("ice"); 
    std::cout << "Type of tmp3: " << tmp3->getType() << std::endl;
    me->equip(tmp3);
    AMateria* tmp4;
    tmp4 = src->createMateria("cure"); 
    std::cout << "Type of tmp4: " << tmp4->getType() << std::endl;
    me->equip(tmp4);
    me->unequip(2);
    me->unequip(2);
    me->equip(tmp2);
    ICharacter* bob = new Character("bob"); 
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);
    me->use(-1, *bob);
    delete bob; 
    delete me; 
    delete src;
    delete tmp1;
    delete tmp2;
    delete tmp3;
    delete tmp4;
    return 0; 

}